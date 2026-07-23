/*
 * XREFs of PpmConvertTime @ 0x14000DBE4
 * Callers:
 *     PpmUpdateTimeAccumulation @ 0x14000D030 (PpmUpdateTimeAccumulation.c)
 *     PopGetIdleTimesCallback @ 0x14000D8B0 (PopGetIdleTimesCallback.c)
 *     PpmPerfSnapUtility @ 0x1400D7020 (PpmPerfSnapUtility.c)
 *     PpmSnapPerformanceAccumulation @ 0x1400D7430 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x1400D83E0 (PpmIdleExecuteTransition.c)
 *     PpmApplyIdlePolicy @ 0x1401462C8 (PpmApplyIdlePolicy.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x1402001F8 (PpmIdleCompleteExitLatencyTrace.c)
 *     PpmSnapDripsAccountingSnapshot @ 0x140200F94 (PpmSnapDripsAccountingSnapshot.c)
 *     PpmTraceExitLatency @ 0x140201210 (PpmTraceExitLatency.c)
 *     PopCalculateCsSummary @ 0x14020740C (PopCalculateCsSummary.c)
 *     PopCalculateIdleInformation @ 0x140207780 (PopCalculateIdleInformation.c)
 *     PpmConvertTimeTo @ 0x14020A560 (PpmConvertTimeTo.c)
 *     PpmTranslateIdleAccounting @ 0x14020A6F0 (PpmTranslateIdleAccounting.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x14020A91C (PpmTranslatePlatformIdleAccounting.c)
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
