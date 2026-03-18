/*
 * XREFs of RtlBeginReadTickLock @ 0x140017F48
 * Callers:
 *     RtlGetSystemTimePrecise @ 0x140017E74 (RtlGetSystemTimePrecise.c)
 *     KiSetAffinityThread @ 0x1400434D0 (KiSetAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x1400D54A4 (KiComputeThreadAffinity.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x140205704 (KeCpuSetQueryUnparkRecommendation.c)
 *     KiComputeCpuSetAffinityMask @ 0x140205DBC (KiComputeCpuSetAffinityMask.c)
 *     KeQueryCpuSetInformation @ 0x140699500 (KeQueryCpuSetInformation.c)
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
