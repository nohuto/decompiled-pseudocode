/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x14000D000
 * Callers:
 *     PopGetIdleTimesCallback @ 0x14000D8B0 (PopGetIdleTimesCallback.c)
 *     PpmPerfApplyProcessorState @ 0x14012F920 (PpmPerfApplyProcessorState.c)
 *     PpmInstallFeedbackCounters @ 0x140143BEC (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdateTimeAccumulation @ 0x14000D030 (PpmUpdateTimeAccumulation.c)
 *     PpmUpdatePerformanceFeedback @ 0x1400D9860 (PpmUpdatePerformanceFeedback.c)
 */

__int64 __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx

  LOBYTE(a3) = 1;
  v3 = a1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(v3, 0, 0, 0, 0LL);
}
