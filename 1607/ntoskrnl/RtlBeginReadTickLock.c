/*
 * XREFs of RtlBeginReadTickLock @ 0x1400F21EC
 * Callers:
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x14009F890 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiComputeThreadAffinity @ 0x1400F2060 (KiComputeThreadAffinity.c)
 *     RtlGetSystemTimePrecise @ 0x1400F2118 (RtlGetSystemTimePrecise.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x1401D7580 (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x1401D7A1C (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x140578728 (KeQueryCpuSetInformation.c)
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
