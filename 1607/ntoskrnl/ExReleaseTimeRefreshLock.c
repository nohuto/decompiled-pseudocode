/*
 * XREFs of ExReleaseTimeRefreshLock @ 0x1404D08F4
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1400A4C58 (ExCleanTimerResolutionRequest.c)
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 *     KdpTimeSlipWork @ 0x1406F3064 (KdpTimeSlipWork.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 */

void ExReleaseTimeRefreshLock()
{
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
