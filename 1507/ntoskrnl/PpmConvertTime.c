/*
 * XREFs of PpmConvertTime @ 0x140014C30
 * Callers:
 *     PpmUpdateTimeAccumulation @ 0x140013B60 (PpmUpdateTimeAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x1400148E0 (PopGetIdleTimesCallback.c)
 *     PpmSnapPerformanceAccumulation @ 0x1400A7330 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x1400A7C10 (PpmIdleExecuteTransition.c)
 *     PpmApplyIdlePolicy @ 0x140168C50 (PpmApplyIdlePolicy.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x140234BE8 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140235A1C (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x140235CA8 (PpmTraceExitLatency.c)
 *     PopCalculateCsSummary @ 0x14023D18C (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x14023D4A8 (PopCalculateIdleInformation.c)
 *     PpmConvertTimeTo @ 0x14023FA4C (PpmConvertTimeTo.c)
 *     PpmTranslateIdleAccounting @ 0x14023FBDC (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x14023FE0C (PpmTranslatePlatformIdleAccounting.c)
 *     PpmInitIdlePolicy @ 0x1407E21B8 (PpmInitIdlePolicy.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmConvertTime(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  if ( !a1 || !a2 || a2 == a3 )
    return a1;
  if ( is_mul_ok(a1, a3) )
    return a1 * (unsigned __int128)a3 / a2;
  return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
}
