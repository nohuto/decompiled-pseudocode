/*
 * XREFs of PpmConvertTime @ 0x14009DB08
 * Callers:
 *     PpmPerfSnapUtility @ 0x140046280 (PpmPerfSnapUtility.c)
 *     PpmSnapPerformanceAccumulation @ 0x1400466A0 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x1400474D0 (PpmIdleExecuteTransition.c)
 *     PpmUpdateTimeAccumulation @ 0x14009C1A4 (PpmUpdateTimeAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x14009D7C0 (PopGetIdleTimesCallback.c)
 *     PpmApplyIdlePolicy @ 0x140139E90 (PpmApplyIdlePolicy.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x1401E7814 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x1401E8758 (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x1401E89C4 (PpmTraceExitLatency.c)
 *     PopCalculateCsSummary @ 0x1401EEAD4 (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x1401EEE24 (PopCalculateIdleInformation.c)
 *     PpmConvertTimeTo @ 0x1401F1620 (PpmConvertTimeTo.c)
 *     PpmTranslateIdleAccounting @ 0x1401F17B0 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x1401F19DC (PpmTranslatePlatformIdleAccounting.c)
 *     PpmInitIdlePolicy @ 0x14076CF38 (PpmInitIdlePolicy.c)
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
