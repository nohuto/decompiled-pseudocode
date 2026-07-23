/*
 * XREFs of RtlWriteAcquireTickLock @ 0x1400841A8
 * Callers:
 *     KiUpdateTimeAssist @ 0x140083FD0 (KiUpdateTimeAssist.c)
 *     KeSetSystemAllowedCpuSets @ 0x14011131C (KeSetSystemAllowedCpuSets.c)
 *     KeCpuSetReportParkedProcessors @ 0x140111400 (KeCpuSetReportParkedProcessors.c)
 *     KiUpdateSystemTime @ 0x140132D8C (KiUpdateSystemTime.c)
 *     KeSetTagCpuSets @ 0x1401D7774 (KeSetTagCpuSets.c)
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
