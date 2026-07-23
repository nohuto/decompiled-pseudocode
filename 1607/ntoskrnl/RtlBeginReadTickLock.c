/*
 * XREFs of RtlBeginReadTickLock @ 0x1400F003C
 * Callers:
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x14009E1B8 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiComputeThreadAffinity @ 0x1400EFEB0 (KiComputeThreadAffinity.c)
 *     RtlGetSystemTimePrecise @ 0x1400EFF68 (RtlGetSystemTimePrecise.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x1401D73AC (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x1401D7848 (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x140578C68 (KeQueryCpuSetInformation.c)
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
