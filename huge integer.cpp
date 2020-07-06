#include<iostream>
#include<cstring>
using namespace std;
class hugeinteger
{
	string no;
	int strl, sum[30], subt[30], nos[30], tempsum, tempsub;
	public:
	void input (void)
	{
		cout<<"ENTER A NUMBER"<<endl;
		cin>>no;
	}
	void strlength(void)
	{
		strl=no.length();
	}
	void covertintono(void)
	{
		for (int i=0;i<strl;i++)
		{
			nos[i]=no[i]-48;
		}
	}
	 void addition(hugeinteger obj)
	{
		
		for (int i=strl-1;i>=0;i--)
		{
			tempsum=nos[i]+obj.nos[i];
			if(tempsum>9&&i>0)
			{
				sum[i]=tempsum-10;
				nos[i-1]=nos[i-1]+1;
				
			}
			else
			{
				sum[i]=tempsum;
			}
			tempsum=0; 
		}
	}
	void display()
	{
		cout<<"SUM IS"<<endl;
		for (int i=0;i<strl;i++)
		{
			cout<<sum[i];
		}
	}
};
int main()
{
	hugeinteger obj1;
	hugeinteger obj2;
	obj1.input();
	obj2.input();
	obj1.strlength();
	obj2.strlength();
	obj1.covertintono();
	obj2.covertintono();
	obj2.addition(obj1);
	obj2.display();
	system("pause");
	return 0;
}
