/*
 * XREFs of MmIsSessionAddress @ 0x1400431C0
 * Callers:
 *     KiAbFindWakeupLockEntry @ 0x1400322C8 (KiAbFindWakeupLockEntry.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140042F70 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     KiLockExtendedServiceTable @ 0x14014D5A8 (KiLockExtendedServiceTable.c)
 *     KeBugCheck2 @ 0x1401C4F98 (KeBugCheck2.c)
 *     KseDriverLoadImage @ 0x1403B8968 (KseDriverLoadImage.c)
 *     KseDriverUnloadImage @ 0x1404C57BC (KseDriverUnloadImage.c)
 *     EtwpAddKmRegEntry @ 0x1404CCAA4 (EtwpAddKmRegEntry.c)
 *     PnpNotifyDriverCallback @ 0x1404E2024 (PnpNotifyDriverCallback.c)
 *     PnpInitializeNotifyEntry @ 0x1404E9528 (PnpInitializeNotifyEntry.c)
 *     MmEnumerateSystemImages @ 0x140500E94 (MmEnumerateSystemImages.c)
 *     ExpDebuggerWorker @ 0x1406AA01C (ExpDebuggerWorker.c)
 *     KdpSendWaitContinue @ 0x1406ABDDC (KdpSendWaitContinue.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1406B7850 (VfUtilSynchronizationObjectSanityChecks.c)
 *     VfDriverEnableVerifierForAll @ 0x1406B8BB8 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoInitializeWorkItem @ 0x1406B95E0 (VerifierIoInitializeWorkItem.c)
 *     VfThunkApplyMandatoryThunks @ 0x1406C33EC (VfThunkApplyMandatoryThunks.c)
 *     VfThunkApplyThunks @ 0x1406C34BC (VfThunkApplyThunks.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MmIsSessionAddress(__int64 a1)
{
  return (unsigned __int64)(a1 + 0x70000000000LL) <= 0x7FFFFFFFFFLL;
}
