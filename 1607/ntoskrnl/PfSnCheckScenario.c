/*
 * XREFs of PfSnCheckScenario @ 0x1403E6638
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1403E64A0 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x1404F014C (PfSnOperationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *((_DWORD *)&qword_1403283A0 + a1);
  v3 = 0;
  if ( v2 )
  {
    if ( (dword_1403287D0 & 1) == 0 || (dword_140328530 & 1) != 0 )
    {
      if ( dword_140328724 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_140328678 )
      {
        *a2 = v2;
      }
      else
      {
        return (unsigned int)-1073741127;
      }
    }
    else
    {
      return (unsigned int)-1073741725;
    }
  }
  else
  {
    return (unsigned int)-1073741399;
  }
  return v3;
}
