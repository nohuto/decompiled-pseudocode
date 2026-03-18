/*
 * XREFs of PspUnlockJob @ 0x1403EB8D0
 * Callers:
 *     PspJobDelete @ 0x1400C49F4 (PspJobDelete.c)
 *     PspGetNextJobProcess @ 0x1403E8CB8 (PspGetNextJobProcess.c)
 *     PspSendProcessNotificationToJobChain @ 0x1403E8DC0 (PspSendProcessNotificationToJobChain.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1403E9410 (PspEvaluateAndNotifyEmptyJob.c)
 *     PspLockRootJobFromProcess @ 0x1403E95DC (PspLockRootJobFromProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x1403E96D0 (PspRemoveProcessFromJobChain.c)
 *     NtQueryInformationJobObject @ 0x1403E9B88 (NtQueryInformationJobObject.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1403EAFE0 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1403EB244 (PspEnforceLimitsJobPostCallback.c)
 *     PspChargeJobWakeCounter @ 0x1403EB4DC (PspChargeJobWakeCounter.c)
 *     PspGetNextChildJob @ 0x1403EB804 (PspGetNextChildJob.c)
 *     PspCallJobHierarchyCallbacks @ 0x1403EB8F8 (PspCallJobHierarchyCallbacks.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1403ECA98 (PspAllocateAndQueryNotificationChannel.c)
 *     PspJobClose @ 0x140485508 (PspJobClose.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PspAssignProcessToJob @ 0x140486CD0 (PspAssignProcessToJob.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1404B6734 (PspQueryJobHierarchyProcessIdList.c)
 *     PspJobNotificationWorker @ 0x1404BC1D8 (PspJobNotificationWorker.c)
 *     PspNotificationPacketCallback @ 0x1404C2BD8 (PspNotificationPacketCallback.c)
 *     PspCreateSilo @ 0x140640174 (PspCreateSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x140642204 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspSendSiloTerminationNotification @ 0x140642548 (PspSendSiloTerminationNotification.c)
 *     PspSetNetRateControl @ 0x140642924 (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 */

void __fastcall PspUnlockJob(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( a2 )
    KiLeaveGuardedRegionUnsafe(a2);
}
