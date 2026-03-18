/*
 * XREFs of CmpLockRegistry @ 0x1404047A0
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A660 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x14000B338 (CmpQueryKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x14014A9C8 (CmpAssignKeySecurity.c)
 *     CmpFlushHive @ 0x1403FA0CC (CmpFlushHive.c)
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FB854 (CmpLockRegistryFreezeAware.c)
 *     NtDeleteKey @ 0x1403FBA58 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1404009C4 (NtNotifyChangeMultipleKeys.c)
 *     CmpDelayDerefKCBWorker @ 0x140401510 (CmpDelayDerefKCBWorker.c)
 *     CmQueryMultipleValueKey @ 0x140402254 (CmQueryMultipleValueKey.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140403F54 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeyName @ 0x1404044D0 (CmpQueryKeyName.c)
 *     CmOpenKey @ 0x140418C90 (CmOpenKey.c)
 *     CmpDelayCloseWorker @ 0x1404256F0 (CmpDelayCloseWorker.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140438760 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     CmpCleanupParseContext @ 0x14046466C (CmpCleanupParseContext.c)
 *     CmpInitializeHive @ 0x14047F184 (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x14047FA2C (CmpReorganizeHive.c)
 *     CmpDoReconcileNextHive @ 0x1404806D8 (CmpDoReconcileNextHive.c)
 *     HvpFinishPrimaryWrite @ 0x140483C48 (HvpFinishPrimaryWrite.c)
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 *     CmpCloseKeyObject @ 0x14049A770 (CmpCloseKeyObject.c)
 *     CmReleaseLoadKeyContext @ 0x14049C680 (CmReleaseLoadKeyContext.c)
 *     CmpInitCmRM @ 0x14049EB58 (CmpInitCmRM.c)
 *     CmpLateUnloadHiveWorker @ 0x14049F6F4 (CmpLateUnloadHiveWorker.c)
 *     CmpTrimHive @ 0x1404A1058 (CmpTrimHive.c)
 *     CmpLinkHiveToMaster @ 0x1404A10B4 (CmpLinkHiveToMaster.c)
 *     CmpStopRMLog @ 0x1404D9AD4 (CmpStopRMLog.c)
 *     CmpCleanupTransactionState @ 0x1404DA1C8 (CmpCleanupTransactionState.c)
 *     CmpTransMgrPrepare @ 0x1404DA8E8 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1404DAA3C (CmpTransMgrSyncHive.c)
 *     CmNotifyRunDown @ 0x1405152B8 (CmNotifyRunDown.c)
 *     CmpLoadHiveThread @ 0x14054D5A8 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14054DCC4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     NtLockRegistryKey @ 0x140574B10 (NtLockRegistryKey.c)
 *     CmCallbackGetKeyObjectID @ 0x1405FAEB8 (CmCallbackGetKeyObjectID.c)
 *     CmReplaceKey @ 0x1405FE0FC (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x1405FE35C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE7F4 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405FED24 (CmpEnumerateLayeredKey.c)
 *     CmpTerminateServerSiloCallback @ 0x1405FF3F0 (CmpTerminateServerSiloCallback.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405FF9F4 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405FFDCC (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405FFE48 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140600020 (CmKeyBodyReplicateToVirtual.c)
 *     CmpFlushBackupHive @ 0x1406044B0 (CmpFlushBackupHive.c)
 *     HvFoldBackDirtyData @ 0x140605E40 (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x140605EFC (HvFoldBackUnreconciledData.c)
 *     CmDumpKey @ 0x14060C0B8 (CmDumpKey.c)
 *     CmSaveKey @ 0x14060CC1C (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14060CE74 (CmSaveMergedKeys.c)
 *     CmpDoReOpenTransKey @ 0x140611C1C (CmpDoReOpenTransKey.c)
 * Callees:
 *     PsBoostThreadIo @ 0x14002D430 (PsBoostThreadIo.c)
 */

BOOLEAN CmpLockRegistry()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN result; // al

  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    return ExAcquireResourceSharedLite(&CmpRegistryLock, 1u);
  }
  return result;
}
