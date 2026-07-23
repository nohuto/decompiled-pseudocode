/*
 * XREFs of PfSnCheckScenario @ 0x1403E7C68
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1403E7AD0 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x1404D2240 (PfSnOperationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *((_DWORD *)&qword_1403283E0 + a1);
  v3 = 0;
  if ( v2 )
  {
    if ( (dword_140328810 & 1) == 0 || (dword_140328570 & 1) != 0 )
    {
      if ( dword_140328764 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_1403286B8 )
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
