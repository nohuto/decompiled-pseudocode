/*
 * XREFs of RtlBeginReadTickLock @ 0x14002D5BC
 * Callers:
 *     KiComputeThreadAffinity @ 0x14002D430 (KiComputeThreadAffinity.c)
 *     RtlGetSystemTimePrecise @ 0x14002D4E8 (RtlGetSystemTimePrecise.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x1401C84C0 (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x1401C895C (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x14061ACFC (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBeginReadTickLock(__int64 *a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = *a1;
    if ( (*a1 & 1) == 0 )
      break;
    _mm_pause();
  }
  return result;
}
