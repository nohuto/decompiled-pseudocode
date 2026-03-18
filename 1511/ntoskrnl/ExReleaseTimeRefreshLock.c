/*
 * XREFs of ExReleaseTimeRefreshLock @ 0x1404C48E4
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1400F33B4 (ExCleanTimerResolutionRequest.c)
 *     PoBroadcastSystemState @ 0x1403A49B4 (PoBroadcastSystemState.c)
 *     ExpTimeRefreshWork @ 0x1403A6F68 (ExpTimeRefreshWork.c)
 *     KdpTimeSlipWork @ 0x1406AC880 (KdpTimeSlipWork.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 */

void ExReleaseTimeRefreshLock()
{
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
