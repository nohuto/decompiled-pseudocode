/*
 * XREFs of PspUnlockJob @ 0x140468EB0
 * Callers:
 *     PspJobDelete @ 0x1400888BC (PspJobDelete.c)
 *     PspGetNextJobProcess @ 0x14045816C (PspGetNextJobProcess.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     PspLockRootJobFromProcess @ 0x140466F30 (PspLockRootJobFromProcess.c)
 *     NtQueryInformationJobObject @ 0x140466FD0 (NtQueryInformationJobObject.c)
 *     PspGetNextChildJob @ 0x1404687F4 (PspGetNextChildJob.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1404688C0 (PspEnforceLimitsJobPostCallback.c)
 *     PspChargeJobWakeCounter @ 0x140468C90 (PspChargeJobWakeCounter.c)
 *     PspCallJobHierarchyCallbacks @ 0x140468F58 (PspCallJobHierarchyCallbacks.c)
 *     PspRemoveProcessFromJobChain @ 0x140469654 (PspRemoveProcessFromJobChain.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140469C10 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140469F64 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14048A7F4 (PspAllocateAndQueryNotificationChannel.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1404DB784 (PspQueryJobHierarchyProcessIdList.c)
 *     PspSendProcessNotificationToJobChain @ 0x1404DBE54 (PspSendProcessNotificationToJobChain.c)
 *     PspJobClose @ 0x1404E2DE8 (PspJobClose.c)
 *     PspJobNotificationWorker @ 0x1404E3A8C (PspJobNotificationWorker.c)
 *     PspSetJobIoRateControl @ 0x1404F1E7C (PspSetJobIoRateControl.c)
 *     PspAssignProcessToJob @ 0x1404F2C60 (PspAssignProcessToJob.c)
 *     PspNotificationPacketCallback @ 0x14051BC8C (PspNotificationPacketCallback.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x14067E3A8 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspCreateSilo @ 0x14067E65C (PspCreateSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140680614 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspSetNetRateControl @ 0x140680BE0 (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C7DE0 (KiCheckForKernelApcDelivery.c)
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
