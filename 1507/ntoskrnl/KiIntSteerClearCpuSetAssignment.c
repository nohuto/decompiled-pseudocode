/*
 * XREFs of KiIntSteerClearCpuSetAssignment @ 0x140209660
 * Callers:
 *     KeIntSteerAssignCpuSet @ 0x14020944C (KeIntSteerAssignCpuSet.c)
 *     KeIntSteerAssignCpuSetForGsiv @ 0x14020951C (KeIntSteerAssignCpuSetForGsiv.c)
 *     KiIntSteerAssignCpuSet @ 0x14020960C (KiIntSteerAssignCpuSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIntSteerClearCpuSetAssignment(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_QWORD *)(a1 + 128) )
  {
    *(_WORD *)(a1 + 136) = 0;
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 168) = 0LL;
  }
  return result;
}
