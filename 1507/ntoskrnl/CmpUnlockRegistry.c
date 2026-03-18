/*
 * XREFs of CmpUnlockRegistry @ 0x1404C6A10
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     CmpTryToRundownHive @ 0x1400D2794 (CmpTryToRundownHive.c)
 *     CmNotifyRunDown @ 0x140420ED0 (CmNotifyRunDown.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1404255E0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeyName @ 0x140427100 (CmpQueryKeyName.c)
 *     CmEnumerateValueKey @ 0x1404277E0 (CmEnumerateValueKey.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x140429678 (CmQueryMultipleValueKey.c)
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 *     NtNotifyChangeMultipleKeys @ 0x14042B804 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x14042C8B0 (CmpCloseKeyObject.c)
 *     CmpDoFlushNextHive @ 0x140445D84 (CmpDoFlushNextHive.c)
 *     CmpLockRegistryFreezeAware @ 0x14044620C (CmpLockRegistryFreezeAware.c)
 *     NtDeleteKey @ 0x1404462E0 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmLoadAppKey @ 0x1404471C4 (CmLoadAppKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404480CC (CmpTransMgrFreeVolatileData.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     CmpBuildHashStackAndLookupCache @ 0x14049A140 (CmpBuildHashStackAndLookupCache.c)
 *     CmpInitializeHive @ 0x1404ACE6C (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x1404AD5C4 (CmpReorganizeHive.c)
 *     HvpFinishPrimaryWrite @ 0x1404AFDC0 (HvpFinishPrimaryWrite.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     CmQueryKey @ 0x1404C3F30 (CmQueryKey.c)
 *     CmEnumerateKey @ 0x1404C66B0 (CmEnumerateKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404C7070 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmpDelayDerefKCBWorker @ 0x1404C8B40 (CmpDelayDerefKCBWorker.c)
 *     CmpDelayCloseWorker @ 0x1404CA510 (CmpDelayCloseWorker.c)
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 *     CmpTrimHive @ 0x1404EA73C (CmpTrimHive.c)
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     CmpDoReconcileNextHive @ 0x1404EB558 (CmpDoReconcileNextHive.c)
 *     CmLoadKey @ 0x1404EC054 (CmLoadKey.c)
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     CmpLateUnloadHiveWorker @ 0x1404EE17C (CmpLateUnloadHiveWorker.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 *     CmpStopRMLog @ 0x1404EF168 (CmpStopRMLog.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmpTransMgrCommit @ 0x1404F0B68 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x1404F0D4C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommitUoW @ 0x1404F16A0 (CmpTransMgrCommitUoW.c)
 *     CmpStartRMLogs @ 0x1404F2804 (CmpStartRMLogs.c)
 *     CmpCleanupTransactionState @ 0x1404F28B8 (CmpCleanupTransactionState.c)
 *     CmpTransMgrSyncHive @ 0x1404F3070 (CmpTransMgrSyncHive.c)
 *     NtFlushKey @ 0x1404F3BA8 (NtFlushKey.c)
 *     sub_1404F4090 @ 0x1404F4090 (sub_1404F4090.c)
 *     CmReleaseLoadKeyContext @ 0x1405562AC (CmReleaseLoadKeyContext.c)
 *     CmpDelayFreeRMWorker @ 0x140559334 (CmpDelayFreeRMWorker.c)
 *     NtUnloadKey2 @ 0x140580A7C (NtUnloadKey2.c)
 *     NtInitializeRegistry @ 0x140583714 (NtInitializeRegistry.c)
 *     CmpSaveBootControlSet @ 0x140584D98 (CmpSaveBootControlSet.c)
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14059876C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140598A84 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpMarkCurrentProfileDirty @ 0x1405A3950 (CmpMarkCurrentProfileDirty.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3A54 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1405A4DC4 (CmpMountPreloadedHives.c)
 *     CmpWaitForHiveMount @ 0x1405B5F44 (CmpWaitForHiveMount.c)
 *     NtLockRegistryKey @ 0x1405B76B4 (NtLockRegistryKey.c)
 *     NtCompactKeys @ 0x14064FE10 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14065002C (NtCompressKey.c)
 *     NtQueryOpenSubKeys @ 0x1406503A4 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1406505EC (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140650A88 (NtRenameKey.c)
 *     CmCallbackGetKeyObjectID @ 0x140652544 (CmCallbackGetKeyObjectID.c)
 *     CmEtwRunDown @ 0x140652CF0 (CmEtwRunDown.c)
 *     CmShutdownSystem @ 0x140653CD0 (CmShutdownSystem.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmReplaceKey @ 0x1406558CC (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x140655BB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140656248 (CmSetLastWriteTimeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140657138 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140657510 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140657574 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140657718 (CmKeyBodyReplicateToVirtual.c)
 *     CmFreezeRegistry @ 0x140659CF0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x14065A074 (CmThawRegistry.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14065A514 (CmpWaitOnHiveWriteQueue.c)
 *     CmpFlushBackupHive @ 0x14065BE6C (CmpFlushBackupHive.c)
 *     HvFoldBackDirtyData @ 0x14065DD48 (HvFoldBackDirtyData.c)
 *     CmpCloneHwProfile @ 0x14065EFB8 (CmpCloneHwProfile.c)
 *     CmDumpKey @ 0x140660AB4 (CmDumpKey.c)
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 *     CmSaveKey @ 0x140661710 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x140661980 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140661E7C (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140662520 (CmpRefreshHive.c)
 *     CmpDoReOpenTransKey @ 0x140665888 (CmpDoReOpenTransKey.c)
 *     CmGetSystemDriverList @ 0x1407BA76C (CmGetSystemDriverList.c)
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

void CmpUnlockRegistry()
{
  __int64 v0; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int16 v2; // cx

  if ( !CmpPuntBoot )
  {
    ExReleaseResourceLite(&CmpRegistryLock);
    CurrentThread = KeGetCurrentThread();
    v2 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v2;
    if ( !v2
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    LOBYTE(v0) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v0);
  }
}
