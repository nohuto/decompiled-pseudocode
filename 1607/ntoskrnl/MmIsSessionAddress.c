/*
 * XREFs of MmIsSessionAddress @ 0x1400137C0
 * Callers:
 *     KiAbFindWakeupLockEntry @ 0x14000C480 (KiAbFindWakeupLockEntry.c)
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     ViAvlNodeInitializeSessionId @ 0x1400824BC (ViAvlNodeInitializeSessionId.c)
 *     KiLockExtendedServiceTable @ 0x140156E88 (KiLockExtendedServiceTable.c)
 *     KeBugCheck2 @ 0x1401D3F18 (KeBugCheck2.c)
 *     EtwpAddKmRegEntry @ 0x140492DF0 (EtwpAddKmRegEntry.c)
 *     MmEnumerateSystemImages @ 0x140499990 (MmEnumerateSystemImages.c)
 *     KseDriverLoadImage @ 0x140514D7C (KseDriverLoadImage.c)
 *     PnpInitializeNotifyEntry @ 0x14052AE60 (PnpInitializeNotifyEntry.c)
 *     PnpNotifyDriverCallback @ 0x14052AFF8 (PnpNotifyDriverCallback.c)
 *     KseDriverUnloadImage @ 0x140546D94 (KseDriverUnloadImage.c)
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 *     ExpDebuggerWorker @ 0x1406F3E60 (ExpDebuggerWorker.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x140703078 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfDriverEnableVerifierForAll @ 0x140704C74 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoInitializeWorkItem @ 0x14070569C (VerifierIoInitializeWorkItem.c)
 *     VfThunkApplyMandatoryThunks @ 0x14070F4AC (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x14070F57C (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MmIsSessionAddress(unsigned __int64 a1)
{
  return a1 >= qword_140326950 && a1 < qword_140326950 + 0x8000000000LL;
}
