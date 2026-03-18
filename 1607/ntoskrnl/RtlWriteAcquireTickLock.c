/*
 * XREFs of RtlWriteAcquireTickLock @ 0x140083528
 * Callers:
 *     KiUpdateTimeAssist @ 0x140083350 (KiUpdateTimeAssist.c)
 *     KeSetSystemAllowedCpuSets @ 0x140110DB8 (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x140110E9C (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateSystemTime @ 0x14013281C (KiUpdateSystemTime.c)
 *     KeSetTagCpuSets @ 0x1401D7948 (KeSetTagCpuSets.c)
 *     KiCalibrateTimeAdjustment @ 0x1403CB9E8 (KiCalibrateTimeAdjustment.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x1403D39E4 (KiConfigureCpuSetSchedulingInformation.c)
 *     KiCreateCpuSetForProcessor @ 0x1403D47F0 (KiCreateCpuSetForProcessor.c)
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
