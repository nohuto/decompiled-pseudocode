/*
 * XREFs of ExAcquireTimeRefreshLock @ 0x14042DB58
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x140130474 (ExCleanTimerResolutionRequest.c)
 *     PoBroadcastSystemState @ 0x1403EE2D4 (PoBroadcastSystemState.c)
 *     ExpTimeRefreshWork @ 0x1403F7188 (ExpTimeRefreshWork.c)
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     NtSetTimerResolution @ 0x1404F4E2C (NtSetTimerResolution.c)
 *     ExpRefreshSystemTime @ 0x1405A4BB8 (ExpRefreshSystemTime.c)
 *     ExTraceTimerResolution @ 0x1406EDBEC (ExTraceTimerResolution.c)
 *     NtSetSystemTime @ 0x1406EDD3C (NtSetSystemTime.c)
 *     ExpSetTimeZoneInformation @ 0x1406EF0A4 (ExpSetTimeZoneInformation.c)
 *     KdpTimeSlipWork @ 0x14072C8E0 (KdpTimeSlipWork.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

char __fastcall ExAcquireTimeRefreshLock(BOOLEAN a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v3; // rcx
  __int16 v4; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireResourceExclusiveLite(&ExpTimeRefreshLock, a1) )
    return 1;
  v3 = KeGetCurrentThread();
  v4 = v3->KernelApcDisable + 1;
  v3->KernelApcDisable = v4;
  if ( !v4
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v3->ApcState.ApcListHead[0].Flink != &v3->152
    && !v3->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 0;
}
