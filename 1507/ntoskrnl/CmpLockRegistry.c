/*
 * XREFs of CmpLockRegistry @ 0x1404C7410
 * Callers:
 *     CmNotifyRunDown @ 0x140420ED0 (CmNotifyRunDown.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1404255E0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeyName @ 0x140427100 (CmpQueryKeyName.c)
 *     CmEnumerateValueKey @ 0x1404277E0 (CmEnumerateValueKey.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x140429678 (CmQueryMultipleValueKey.c)
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 *     NtNotifyChangeMultipleKeys @ 0x14042B804 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x14042C8B0 (CmpCloseKeyObject.c)
 *     CmpLockRegistryFreezeAware @ 0x14044620C (CmpLockRegistryFreezeAware.c)
 *     NtDeleteKey @ 0x1404462E0 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404480CC (CmpTransMgrFreeVolatileData.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     CmpBuildHashStackAndLookupCache @ 0x14049A140 (CmpBuildHashStackAndLookupCache.c)
 *     CmpInitializeHive @ 0x1404ACE6C (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x1404AD5C4 (CmpReorganizeHive.c)
 *     HvpFinishPrimaryWrite @ 0x1404AFDC0 (HvpFinishPrimaryWrite.c)
 *     CmQueryKey @ 0x1404C3F30 (CmQueryKey.c)
 *     CmEnumerateKey @ 0x1404C66B0 (CmEnumerateKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404C7070 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDelayDerefKCBWorker @ 0x1404C8B40 (CmpDelayDerefKCBWorker.c)
 *     CmpDelayCloseWorker @ 0x1404CA510 (CmpDelayCloseWorker.c)
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 *     CmpTrimHive @ 0x1404EA73C (CmpTrimHive.c)
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     CmpDoReconcileNextHive @ 0x1404EB558 (CmpDoReconcileNextHive.c)
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x1404EE17C (CmpLateUnloadHiveWorker.c)
 *     CmpStopRMLog @ 0x1404EF168 (CmpStopRMLog.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmpTransMgrCommit @ 0x1404F0B68 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x1404F0D4C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommitUoW @ 0x1404F16A0 (CmpTransMgrCommitUoW.c)
 *     CmpCleanupTransactionState @ 0x1404F28B8 (CmpCleanupTransactionState.c)
 *     CmpTransMgrSyncHive @ 0x1404F3070 (CmpTransMgrSyncHive.c)
 *     CmReleaseLoadKeyContext @ 0x1405562AC (CmReleaseLoadKeyContext.c)
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14059876C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpWaitForHiveMount @ 0x1405B5F44 (CmpWaitForHiveMount.c)
 *     NtLockRegistryKey @ 0x1405B76B4 (NtLockRegistryKey.c)
 *     CmCallbackGetKeyObjectID @ 0x140652544 (CmCallbackGetKeyObjectID.c)
 *     CmReplaceKey @ 0x1406558CC (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x140655BB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140656248 (CmSetLastWriteTimeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140657138 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140657510 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140657574 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140657718 (CmKeyBodyReplicateToVirtual.c)
 *     CmpFlushBackupHive @ 0x14065BE6C (CmpFlushBackupHive.c)
 *     HvFoldBackDirtyData @ 0x14065DD48 (HvFoldBackDirtyData.c)
 *     CmDumpKey @ 0x140660AB4 (CmDumpKey.c)
 *     CmSaveKey @ 0x140661710 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x140661980 (CmSaveMergedKeys.c)
 *     CmpDoReOpenTransKey @ 0x140665888 (CmpDoReOpenTransKey.c)
 * Callees:
 *     PsBoostThreadIo @ 0x1400CA880 (PsBoostThreadIo.c)
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
