/*
 * XREFs of PfSnCheckScenario @ 0x1404D664C
 * Callers:
 *     PfSnOperationProcess @ 0x1404C470C (PfSnOperationProcess.c)
 *     PfSnBeginAppLaunch @ 0x1404D64B4 (PfSnBeginAppLaunch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *((_DWORD *)&qword_1403055A0 + a1);
  v3 = 0;
  if ( v2 )
  {
    if ( (dword_1403059D0 & 1) == 0 || (dword_140305730 & 1) != 0 )
    {
      if ( dword_140305924 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_140305878 )
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
