/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x1403EA8B0
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1400A4C58 (ExCleanTimerResolutionRequest.c)
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 *     NtSetTimerResolution @ 0x1403E9CD4 (NtSetTimerResolution.c)
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 *     ExTraceTimerResolution @ 0x14052BA28 (ExTraceTimerResolution.c)
 *     ExpRefreshSystemTime @ 0x14055E2B0 (ExpRefreshSystemTime.c)
 *     ExpSetTimeZoneInformation @ 0x1406AC2D0 (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x1406AD104 (NtSetSystemTime.c)
 *     KdpTimeSlipWork @ 0x1406F3064 (KdpTimeSlipWork.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 */

char __fastcall ExAcquireTimeRefreshLock(BOOLEAN a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireResourceExclusiveLite(&ExpTimeRefreshLock, a1) )
    return 1;
  KeLeaveCriticalRegion();
  return 0;
}
