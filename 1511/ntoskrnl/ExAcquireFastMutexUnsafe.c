/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x140037A60
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140037050 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x140037950 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlCancelNotify @ 0x1400C94AC (FsRtlCancelNotify.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1400C9C44 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1400CA474 (FsRtlpRequestShareableOplock.c)
 *     FsRtlUninitializeOplock @ 0x1400E3B68 (FsRtlUninitializeOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14012DDB4 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1401ACDDC (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401ACF44 (FsRtlpAcknowledgeOplockBreak.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x1401C2EF8 (KeAcquireGuardedMutexUnsafe.c)
 *     CmpUndoDeleteKeyForTrans @ 0x1403B4238 (CmpUndoDeleteKeyForTrans.c)
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     CmpTrimHive @ 0x1403BAC40 (CmpTrimHive.c)
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x1403D0DDC (CmpReorganizeHive.c)
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmpIsCmRm @ 0x1403D5A78 (CmpIsCmRm.c)
 *     CmpTransMgrCommit @ 0x1403D6AEC (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x1403D6C54 (CmpTransMgrPrepare.c)
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmpRundownUnitOfWork @ 0x1403DE734 (CmpRundownUnitOfWork.c)
 *     CmpDoCreateChild @ 0x1403DF308 (CmpDoCreateChild.c)
 *     CmNotifyRunDown @ 0x1403F1B90 (CmNotifyRunDown.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     HvpDoAllocateCell @ 0x1403F4630 (HvpDoAllocateCell.c)
 *     CmpReportNotifyHelper @ 0x1403F5130 (CmpReportNotifyHelper.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1403F54E0 (CmpDoQueueLateUnloadWorker.c)
 *     HvpMarkCellDirty @ 0x1403F76E0 (HvpMarkCellDirty.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     FsRtlNotifyFilterReportChange @ 0x14048CA00 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x14048D310 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlOplockBreakH @ 0x14048D6B8 (FsRtlOplockBreakH.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x14048D904 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyCleanup @ 0x14048DD9C (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x14048E028 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14048EA24 (FsRtlpOplockFsctrlInternal.c)
 *     CmpFlushNotify @ 0x140499B90 (CmpFlushNotify.c)
 *     NtNotifyChangeMultipleKeys @ 0x140499CD0 (NtNotifyChangeMultipleKeys.c)
 *     CmpCloseKeyObject @ 0x14049A970 (CmpCloseKeyObject.c)
 *     CmpPostNotify @ 0x14049AAF4 (CmpPostNotify.c)
 *     CmpRunDownCmRM @ 0x14049B138 (CmpRunDownCmRM.c)
 *     CmSnapshotRMTxArray @ 0x14049B3B0 (CmSnapshotRMTxArray.c)
 *     CmpNotifyTriggerCheck @ 0x1404AFC04 (CmpNotifyTriggerCheck.c)
 *     CmKtmNotification @ 0x1404BA500 (CmKtmNotification.c)
 *     CmpCleanupTransactionState @ 0x1404BA850 (CmpCleanupTransactionState.c)
 *     CmpTransMgrRollback @ 0x1404BA9E8 (CmpTransMgrRollback.c)
 *     CmpLogCheckpoint @ 0x1404BAB0C (CmpLogCheckpoint.c)
 *     CmRmFinalizeRecovery @ 0x1404C2C8C (CmRmFinalizeRecovery.c)
 *     CmpTransMgrSyncHive @ 0x1404C4668 (CmpTransMgrSyncHive.c)
 *     SepNotifyFileSystems @ 0x1404C5448 (SepNotifyFileSystems.c)
 *     FsRtlCheckUpperOplock @ 0x1404C6440 (FsRtlCheckUpperOplock.c)
 *     CmFreezeRegistry @ 0x1405188CC (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140519210 (CmThawRegistry.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x140549818 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405E0250 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405E0744 (CmSetLastWriteTimeKey.c)
 *     CmObliterateRMTxArray @ 0x1405E3848 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x1405E3968 (CmpLazyCommitWorker.c)
 *     CmpQueueLazyCommitWorker @ 0x1405E3B98 (CmpQueueLazyCommitWorker.c)
 *     HvFoldBackDirtyData @ 0x1405E68E8 (HvFoldBackDirtyData.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x1405F4348 (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x1405F447C (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x1405F5940 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x14061A814 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x140654094 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x14065412C (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1406541F4 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14066E12C (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x14066E9A4 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14066F160 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x14066F738 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x14067079C (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x14067091C (NtDeleteDriverEntry.c)
 *     NtEnumerateBootEntries @ 0x140670A9C (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140671040 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1406714EC (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x1406716D0 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x1406717BC (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x140671A24 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x140671D18 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x140671F80 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x140672028 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x140672358 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x14067254C (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x140672740 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x140672934 (NtSetSystemEnvironmentValue.c)
 *     VerifierExAcquireFastMutexUnsafeNoReboot @ 0x1406CE10C (VerifierExAcquireFastMutexUnsafeNoReboot.c)
 *     KeInitSystem @ 0x14074E20C (KeInitSystem.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400209FC (ExpAcquireFastMutexContended.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __stdcall ExAcquireFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v2; // rsi
  struct _KTHREAD *v3; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v5; // rcx
  char *v6; // rdi
  int SessionId; // eax
  __int16 v8; // ax
  unsigned __int8 AbOrphanedEntrySummary; // di

  CurrentThread = KeGetCurrentThread();
  v2 = (ULONG_PTR)FastMutex;
  if ( !KiAbEnabled )
  {
    v6 = 0LL;
    goto LABEL_11;
  }
  v3 = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)v3, (ULONG_PTR)FastMutex, KeGetCurrentIrql(), 0LL);
  --v3->SpecialApcDisable;
  if ( !v3->AbEntrySummary )
  {
    v6 = 0LL;
    if ( !v3->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(v3, FastMutex);
      goto LABEL_21;
    }
    AbOrphanedEntrySummary = v3->AbOrphanedEntrySummary;
    v3->AbOrphanedEntrySummary = 0;
    v3->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = v3->AbEntrySummary;
  _BitScanForward((unsigned int *)&v5, AbEntrySummary);
  v3->AbEntrySummary = AbEntrySummary & ~(1 << v5);
  FastMutex = (PFAST_MUTEX)(96 * v5);
  v6 = (char *)v3->LockEntries + (_QWORD)FastMutex;
  if ( !v6 )
  {
LABEL_21:
    _interlockedbittestandset((volatile signed __int32 *)&v3->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( v2 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    SessionId = MmGetSessionIdEx(v3->ApcState.Process);
  else
    SessionId = -1;
  *((_DWORD *)v6 + 10) = SessionId;
  FastMutex = (PFAST_MUTEX)0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v6 + 4) = v2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v8 = v3->SpecialApcDisable + 1;
  v3->SpecialApcDisable = v8;
  if ( !v8 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v3->ApcState.ApcListHead[0].Flink != &v3->152 )
    KiCheckForKernelApcDelivery((__int64)FastMutex);
LABEL_11:
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v2, 0) )
    ExpAcquireFastMutexContended(v2, (__int64)v6);
  if ( v6 )
    v6[26] |= 1u;
  *(_QWORD *)(v2 + 8) = CurrentThread;
}
