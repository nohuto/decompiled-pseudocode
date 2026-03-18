/*
 * XREFs of RtlWriteAcquireTickLock @ 0x140139E40
 * Callers:
 *     KeSetSystemAllowedCpuSets @ 0x140132B54 (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x140132C60 (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateSystemTime @ 0x140155160 (KiUpdateSystemTime.c)
 *     KeSetTagCpuSets @ 0x140205CAC (KeSetTagCpuSets.c)
 *     KiCalibrateTimeAdjustment @ 0x1403F283C (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x1403F9A50 (KiCreateCpuSetForProcessor.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403FA4A8 (KiConfigureCpuSetSchedulingInformation.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlWriteAcquireTickLock(signed __int64 *a1)
{
  signed __int64 result; // rax
  signed __int64 v2; // rtt

  _m_prefetchw(a1);
  result = *a1;
  while ( (result & 1) != 0 )
  {
    result = *a1;
LABEL_6:
    _mm_pause();
  }
  v2 = result;
  result = _InterlockedCompareExchange64(a1, result + 1, result);
  if ( v2 != result )
    goto LABEL_6;
  return result;
}
