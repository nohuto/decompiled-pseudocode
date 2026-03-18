/*
 * XREFs of MmIsSessionAddress @ 0x140013C40
 * Callers:
 *     KiAbFindWakeupLockEntry @ 0x14000C900 (KiAbFindWakeupLockEntry.c)
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 *     ViAvlNodeInitializeSessionId @ 0x14008435C (ViAvlNodeInitializeSessionId.c)
 *     KiLockExtendedServiceTable @ 0x140156918 (KiLockExtendedServiceTable.c)
 *     KeBugCheck2 @ 0x1401D40EC (KeBugCheck2.c)
 *     KseDriverLoadImage @ 0x1404859F4 (KseDriverLoadImage.c)
 *     EtwpAddKmRegEntry @ 0x140492360 (EtwpAddKmRegEntry.c)
 *     MmEnumerateSystemImages @ 0x140498F00 (MmEnumerateSystemImages.c)
 *     PnpInitializeNotifyEntry @ 0x14052BF78 (PnpInitializeNotifyEntry.c)
 *     PnpNotifyDriverCallback @ 0x14052C110 (PnpNotifyDriverCallback.c)
 *     KseDriverUnloadImage @ 0x140546854 (KseDriverUnloadImage.c)
 *     KdpSendWaitContinue @ 0x1406F2AAC (KdpSendWaitContinue.c)
 *     ExpDebuggerWorker @ 0x1406F3E60 (ExpDebuggerWorker.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140703048 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfDriverEnableVerifierForAll @ 0x140704C44 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoInitializeWorkItem @ 0x14070566C (VerifierIoInitializeWorkItem.c)
 *     VfThunkApplyMandatoryThunks @ 0x14070F47C (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x14070F54C (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MmIsSessionAddress(unsigned __int64 a1)
{
  return a1 >= qword_140326910 && a1 < qword_140326910 + 0x8000000000LL;
}
