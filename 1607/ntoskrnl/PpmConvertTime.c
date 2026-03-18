/*
 * XREFs of PpmConvertTime @ 0x14000E064
 * Callers:
 *     PpmUpdateTimeAccumulation @ 0x14000D4B0 (PpmUpdateTimeAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x14000DD30 (PopGetIdleTimesCallback.c)
 *     PpmPerfSnapUtility @ 0x1400D9180 (PpmPerfSnapUtility.c)
 *     PpmSnapPerformanceAccumulation @ 0x1400D9590 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x1400DA540 (PpmIdleExecuteTransition.c)
 *     PpmApplyIdlePolicy @ 0x140145D58 (PpmApplyIdlePolicy.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x1402003CC (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140201168 (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x1402013E4 (PpmTraceExitLatency.c)
 *     PopCalculateCsSummary @ 0x1402075E0 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x140207954 (PopCalculateIdleInformation.c)
 *     PpmConvertTimeTo @ 0x14020A734 (PpmConvertTimeTo.c)
 *     PpmTranslateIdleAccounting @ 0x14020A8C4 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x14020AAF0 (PpmTranslatePlatformIdleAccounting.c)
 *     PpmInitIdlePolicy @ 0x1407B7B48 (PpmInitIdlePolicy.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmConvertTime(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9

  v3 = a1;
  if ( a1 && a2 && a2 != a3 )
  {
    if ( is_mul_ok(a1, a3) )
      return a1 * (unsigned __int128)a3 / a2;
    else
      return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
  }
  return v3;
}
