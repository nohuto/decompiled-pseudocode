/*
 * XREFs of RtlWriteAcquireTickLock @ 0x1400DE444
 * Callers:
 *     KiUpdateTimeAssist @ 0x1400DE214 (KiUpdateTimeAssist.c)
 *     KeSetSystemAllowedCpuSets @ 0x1401068D0 (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x1401069B4 (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateSystemTime @ 0x140120A30 (KiUpdateSystemTime.c)
 *     KeSetTagCpuSets @ 0x1401C8888 (KeSetTagCpuSets.c)
 *     KiCalibrateTimeAdjustment @ 0x14039FC48 (KiCalibrateTimeAdjustment.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403A8E4C (KiConfigureCpuSetSchedulingInformation.c)
 *     KiCreateCpuSetForProcessor @ 0x1403A9BF0 (KiCreateCpuSetForProcessor.c)
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
