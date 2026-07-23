/*
 * XREFs of CmpLockRegistry @ 0x140403660
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x14000AEB8 (CmpQueryKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x14014AF38 (CmpAssignKeySecurity.c)
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     CmpCloseKeyObject @ 0x1403E3690 (CmpCloseKeyObject.c)
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FA714 (CmpLockRegistryFreezeAware.c)
 *     NtDeleteKey @ 0x1403FA918 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1403FF884 (NtNotifyChangeMultipleKeys.c)
 *     CmpDelayDerefKCBWorker @ 0x1404003D0 (CmpDelayDerefKCBWorker.c)
 *     CmQueryMultipleValueKey @ 0x140401114 (CmQueryMultipleValueKey.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140402E14 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeyName @ 0x140403390 (CmpQueryKeyName.c)
 *     CmOpenKey @ 0x140417B50 (CmOpenKey.c)
 *     CmpDelayCloseWorker @ 0x1404245C0 (CmpDelayCloseWorker.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140437630 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     CmpCleanupParseContext @ 0x14046353C (CmpCleanupParseContext.c)
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x14047E780 (CmpReorganizeHive.c)
 *     CmpDoReconcileNextHive @ 0x14047F42C (CmpDoReconcileNextHive.c)
 *     HvpFinishPrimaryWrite @ 0x14048299C (HvpFinishPrimaryWrite.c)
 *     CmReleaseLoadKeyContext @ 0x1404A4818 (CmReleaseLoadKeyContext.c)
 *     CmpStopRMLog @ 0x1404BD0D8 (CmpStopRMLog.c)
 *     CmpCleanupTransactionState @ 0x1404BD7CC (CmpCleanupTransactionState.c)
 *     CmpTransMgrPrepare @ 0x1404BDEEC (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1404BE040 (CmpTransMgrSyncHive.c)
 *     CmNotifyRunDown @ 0x1404F86A8 (CmNotifyRunDown.c)
 *     CmpInitCmRM @ 0x140516F64 (CmpInitCmRM.c)
 *     CmpLateUnloadHiveWorker @ 0x140517B00 (CmpLateUnloadHiveWorker.c)
 *     CmpTrimHive @ 0x140519464 (CmpTrimHive.c)
 *     CmpLinkHiveToMaster @ 0x1405194C0 (CmpLinkHiveToMaster.c)
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14054E064 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     NtLockRegistryKey @ 0x140575050 (NtLockRegistryKey.c)
 *     CmCallbackGetKeyObjectID @ 0x1405FAF6C (CmCallbackGetKeyObjectID.c)
 *     CmReplaceKey @ 0x1405FE1B0 (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x1405FE410 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE8A8 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405FEDD8 (CmpEnumerateLayeredKey.c)
 *     CmpTerminateServerSiloCallback @ 0x1405FF4A4 (CmpTerminateServerSiloCallback.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405FFAA8 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405FFE80 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405FFEFC (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406000D4 (CmKeyBodyReplicateToVirtual.c)
 *     CmpFlushBackupHive @ 0x140604564 (CmpFlushBackupHive.c)
 *     HvFoldBackDirtyData @ 0x140605EF4 (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x140605FB0 (HvFoldBackUnreconciledData.c)
 *     CmDumpKey @ 0x14060C16C (CmDumpKey.c)
 *     CmSaveKey @ 0x14060CCD0 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14060CF28 (CmSaveMergedKeys.c)
 *     CmpDoReOpenTransKey @ 0x140611CD0 (CmpDoReOpenTransKey.c)
 * Callees:
 *     PsBoostThreadIo @ 0x14002CFB0 (PsBoostThreadIo.c)
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
