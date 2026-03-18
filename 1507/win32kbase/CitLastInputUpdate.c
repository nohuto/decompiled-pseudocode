/*
 * XREFs of CitLastInputUpdate @ 0x1C0052950
 * Callers:
 *     UserPowerInfoCallout @ 0x1C000517C (UserPowerInfoCallout.c)
 * Callees:
 *     <none>
 */

void __fastcall CitLastInputUpdate(int a1, __int16 a2, unsigned int a3)
{
  unsigned __int8 v3; // al
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  v3 = 0;
  if ( a1 )
  {
    v4 = a1 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 6;
          if ( v7 )
          {
            if ( v7 == 2 )
              v3 = 8;
          }
          else
          {
            v3 = 4;
          }
        }
        else
        {
          v3 = 32;
        }
      }
      else
      {
        v3 = 16;
      }
    }
    else
    {
      v3 = 2;
    }
  }
  else
  {
    v3 = 1;
  }
  CitpLastInputUpdate(v3, a2, a3);
}
