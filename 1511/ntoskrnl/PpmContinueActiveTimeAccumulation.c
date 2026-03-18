/*
 * XREFs of PpmContinueActiveTimeAccumulation @ 0x14009C174
 * Callers:
 *     PopGetIdleTimesCallback @ 0x14009D7C0 (PopGetIdleTimesCallback.c)
 *     PpmContinueTimeAccumulation @ 0x1401242B4 (PpmContinueTimeAccumulation.c)
 *     PpmInstallFeedbackCounters @ 0x140138C60 (PpmInstallFeedbackCounters.c)
 * Callees:
 *     PpmUpdatePerformanceFeedback @ 0x140049800 (PpmUpdatePerformanceFeedback.c)
 *     PpmUpdateTimeAccumulation @ 0x14009C1A4 (PpmUpdateTimeAccumulation.c)
 */

char __fastcall PpmContinueActiveTimeAccumulation(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  PpmUpdateTimeAccumulation(a1, a2, a3);
  return PpmUpdatePerformanceFeedback(a1, 0, 0LL, 0, 0LL);
}
