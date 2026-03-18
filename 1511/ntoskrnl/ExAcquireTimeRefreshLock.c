/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x1404713F0
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x1400F33B4 (ExCleanTimerResolutionRequest.c)
 *     PoBroadcastSystemState @ 0x1403A49B4 (PoBroadcastSystemState.c)
 *     ExpTimeRefreshWork @ 0x1403A6F68 (ExpTimeRefreshWork.c)
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     NtSetTimerResolution @ 0x1404B4EBC (NtSetTimerResolution.c)
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     ExpRefreshSystemTime @ 0x14051ECD8 (ExpRefreshSystemTime.c)
 *     ExTraceTimerResolution @ 0x14066A648 (ExTraceTimerResolution.c)
 *     NtSetSystemTime @ 0x14066A764 (NtSetSystemTime.c)
 *     ExpSetTimeZoneInformation @ 0x14066BA58 (ExpSetTimeZoneInformation.c)
 *     KdpTimeSlipWork @ 0x1406AC880 (KdpTimeSlipWork.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
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
