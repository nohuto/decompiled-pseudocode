/*
 * XREFs of CmpLockRegistry @ 0x140423C10
 * Callers:
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     CmpTrimHive @ 0x1403BAC40 (CmpTrimHive.c)
 *     CmpLinkHiveToMaster @ 0x1403BAC9C (CmpLinkHiveToMaster.c)
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x1403D0DDC (CmpReorganizeHive.c)
 *     CmpDoReconcileNextHive @ 0x1403D3EDC (CmpDoReconcileNextHive.c)
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmpTransMgrCommit @ 0x1403D6AEC (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x1403D6C54 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommitUoW @ 0x1403D7344 (CmpTransMgrCommitUoW.c)
 *     NtDeleteKey @ 0x1403DA844 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmReleaseLoadKeyContext @ 0x1403DDA68 (CmReleaseLoadKeyContext.c)
 *     CmpLockRegistryFreezeAware @ 0x1403DE460 (CmpLockRegistryFreezeAware.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403DE534 (CmpTransMgrFreeVolatileData.c)
 *     CmNotifyRunDown @ 0x1403F1B90 (CmNotifyRunDown.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpDelayCloseWorker @ 0x1403F9EB0 (CmpDelayCloseWorker.c)
 *     CmpDelayDerefKCBWorker @ 0x1403FB530 (CmpDelayDerefKCBWorker.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1403FD380 (CmKeyBodyRemapToVirtualForEnum.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     CmpBuildHashStackAndLookupCache @ 0x140408290 (CmpBuildHashStackAndLookupCache.c)
 *     CmpQueryKeyName @ 0x140420760 (CmpQueryKeyName.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     CmEnumerateValueKey @ 0x140423940 (CmEnumerateValueKey.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x140498D48 (CmpLateUnloadHiveWorker.c)
 *     NtNotifyChangeMultipleKeys @ 0x140499CD0 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x14049A970 (CmpCloseKeyObject.c)
 *     CmpStopRMLog @ 0x14049B328 (CmpStopRMLog.c)
 *     CmQueryMultipleValueKey @ 0x1404A8708 (CmQueryMultipleValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1404A9258 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpCleanupTransactionState @ 0x1404BA850 (CmpCleanupTransactionState.c)
 *     HvpFinishPrimaryWrite @ 0x1404C16EC (HvpFinishPrimaryWrite.c)
 *     CmpTransMgrSyncHive @ 0x1404C4668 (CmpTransMgrSyncHive.c)
 *     CmpLoadHiveThread @ 0x140520FE4 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1405216F4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpWaitForHiveMount @ 0x14053FF80 (CmpWaitForHiveMount.c)
 *     NtLockRegistryKey @ 0x14054167C (NtLockRegistryKey.c)
 *     CmCallbackGetKeyObjectID @ 0x1405DD018 (CmCallbackGetKeyObjectID.c)
 *     CmReplaceKey @ 0x1405DFF68 (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x1405E0250 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405E0744 (CmSetLastWriteTimeKey.c)
 *     CmpTerminateServerSiloCallback @ 0x1405E0D28 (CmpTerminateServerSiloCallback.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405E1414 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405E17EC (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405E1850 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405E19C4 (CmKeyBodyReplicateToVirtual.c)
 *     CmpFlushBackupHive @ 0x1405E4F58 (CmpFlushBackupHive.c)
 *     HvFoldBackDirtyData @ 0x1405E68E8 (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x1405E69A4 (HvFoldBackUnreconciledData.c)
 *     CmDumpKey @ 0x1405E943C (CmDumpKey.c)
 *     CmSaveKey @ 0x1405E9ED0 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1405EA0F8 (CmSaveMergedKeys.c)
 * Callees:
 *     PsBoostThreadIo @ 0x140040CF0 (PsBoostThreadIo.c)
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
