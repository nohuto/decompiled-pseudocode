/*
 * XREFs of MmIsSessionAddress @ 0x14004ED20
 * Callers:
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x14004EAF0 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     KiAbFindWakeupLockEntry @ 0x1400F40C4 (KiAbFindWakeupLockEntry.c)
 *     KiLockExtendedServiceTable @ 0x14017B604 (KiLockExtendedServiceTable.c)
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 *     KseDriverUnloadImage @ 0x1404531F0 (KseDriverUnloadImage.c)
 *     PnpNotifyDriverCallback @ 0x14045E160 (PnpNotifyDriverCallback.c)
 *     MmEnumerateSystemImages @ 0x14051C530 (MmEnumerateSystemImages.c)
 *     EtwpAddKmRegEntry @ 0x14054C94C (EtwpAddKmRegEntry.c)
 *     PnpInitializeNotifyEntry @ 0x1405619FC (PnpInitializeNotifyEntry.c)
 *     KseDriverLoadImage @ 0x1405786C4 (KseDriverLoadImage.c)
 *     ExpDebuggerWorker @ 0x14072A01C (ExpDebuggerWorker.c)
 *     KdpSendWaitContinue @ 0x14072BE24 (KdpSendWaitContinue.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140737B44 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfDriverEnableVerifierForAll @ 0x1407390F8 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoInitializeWorkItem @ 0x140739BF4 (VerifierIoInitializeWorkItem.c)
 *     VfThunkApplyMandatoryThunks @ 0x140744C8C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x140744D5C (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MmIsSessionAddress(__int64 a1)
{
  return (unsigned __int64)(a1 + 0x70000000000LL) <= 0x7FFFFFFFFFLL;
}
