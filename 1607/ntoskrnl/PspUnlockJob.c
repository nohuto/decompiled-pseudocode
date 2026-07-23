/*
 * XREFs of PspUnlockJob @ 0x140467D80
 * Callers:
 *     PspJobDelete @ 0x14010CAAC (PspJobDelete.c)
 *     PspGetNextJobProcess @ 0x14045703C (PspGetNextJobProcess.c)
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PspLockRootJobFromProcess @ 0x140465E00 (PspLockRootJobFromProcess.c)
 *     NtQueryInformationJobObject @ 0x140465EA0 (NtQueryInformationJobObject.c)
 *     PspGetNextChildJob @ 0x1404676C4 (PspGetNextChildJob.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140467790 (PspEnforceLimitsJobPostCallback.c)
 *     PspChargeJobWakeCounter @ 0x140467B60 (PspChargeJobWakeCounter.c)
 *     PspCallJobHierarchyCallbacks @ 0x140467E28 (PspCallJobHierarchyCallbacks.c)
 *     PspRemoveProcessFromJobChain @ 0x140468524 (PspRemoveProcessFromJobChain.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140468AE0 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140468E34 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1404BED88 (PspQueryJobHierarchyProcessIdList.c)
 *     PspSendProcessNotificationToJobChain @ 0x1404BF458 (PspSendProcessNotificationToJobChain.c)
 *     PspJobClose @ 0x1404C5D4C (PspJobClose.c)
 *     PspJobNotificationWorker @ 0x1404C6744 (PspJobNotificationWorker.c)
 *     PspSetJobIoRateControl @ 0x1404D4610 (PspSetJobIoRateControl.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404D4B6C (PspAllocateAndQueryNotificationChannel.c)
 *     PspAssignProcessToJob @ 0x1404D5BEC (PspAssignProcessToJob.c)
 *     PspNotificationPacketCallback @ 0x1404FF07C (PspNotificationPacketCallback.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x14067E48C (PspCompleteServerSiloShutdownDeferred.c)
 *     PspCreateSilo @ 0x14067E740 (PspCreateSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1406806F8 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspSetNetRateControl @ 0x140680CC4 (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall PspUnlockJob(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int16 v4; // ax

  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( a2 )
  {
    v4 = *(_WORD *)(a2 + 486) + 1;
    *(_WORD *)(a2 + 486) = v4;
    if ( !v4 && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery(v3);
  }
}
