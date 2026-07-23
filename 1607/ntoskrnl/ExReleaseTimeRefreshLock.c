/*
 * XREFs of ExReleaseTimeRefreshLock @ 0x1404B4394
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1400A31D0 (ExCleanTimerResolutionRequest.c)
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 *     KdpTimeSlipWork @ 0x1406F3064 (KdpTimeSlipWork.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 */

void ExReleaseTimeRefreshLock()
{
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
