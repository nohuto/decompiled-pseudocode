/*
 * XREFs of KiIntSteerAssignCpuSet @ 0x14020960C
 * Callers:
 *     KeIntSteerAssignCpuSet @ 0x14020944C (KeIntSteerAssignCpuSet.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x14020951C (KeIntSteerAssignCpuSetForGsiv.c)
 * Callees:
 *     KiIntSteerClearCpuSetAssignment @ 0x140209660 (KiIntSteerClearCpuSetAssignment.c)
 *     KiIntSteerComputeCpuSet @ 0x140209684 (KiIntSteerComputeCpuSet.c)
 */

__int64 __fastcall KiIntSteerAssignCpuSet(__int64 a1, __int16 a2, __int64 a3)
{
  int v4; // edx

  if ( *(_BYTE *)(a1 + 124) )
  {
    if ( *(_WORD *)(a1 + 72) == a2 )
    {
      if ( *(_QWORD *)(a1 + 128) == a3 )
      {
        return 0;
      }
      else
      {
        *(_QWORD *)(a1 + 128) = a3;
        v4 = KiIntSteerComputeCpuSet(a1);
        if ( v4 < 0 )
          KiIntSteerClearCpuSetAssignment(a1);
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v4;
}
