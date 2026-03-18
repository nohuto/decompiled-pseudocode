/*
 * XREFs of PfSnCheckScenario @ 0x1404441E4
 * Callers:
 *     PfSnBeginAppLaunch @ 0x14044404C (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x1406AFE3C (PfSnOperationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *((_DWORD *)&qword_140353310 + a1);
  v3 = 0;
  if ( v2 )
  {
    if ( (dword_140353740 & 1) == 0 || (dword_1403534A0 & 1) != 0 )
    {
      if ( dword_140353694 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_1403535E8 )
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
