/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x1400EE420
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x14007704C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x140077A14 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx @ 0x14007A100 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x14007A9E0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlUninitializeOplock @ 0x14009F944 (FsRtlUninitializeOplock.c)
 *     FsRtlCancelNotify @ 0x1400A0A1C (FsRtlCancelNotify.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14013493C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1401B908C (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401B91EC (FsRtlpAcknowledgeOplockBreak.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x1401D1BB4 (KeAcquireGuardedMutexUnsafe.c)
 *     CmpCloseKeyObject @ 0x1403E3690 (CmpCloseKeyObject.c)
 *     CmpPostNotify @ 0x1403E38F4 (CmpPostNotify.c)
 *     CmpFlushNotify @ 0x1403E435C (CmpFlushNotify.c)
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     LOCK_TRANSACTION_LIST @ 0x1403FC904 (LOCK_TRANSACTION_LIST.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1403FC998 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpNotifyTriggerCheck @ 0x1403FCB5C (CmpNotifyTriggerCheck.c)
 *     CmpTransSearchAddTrans @ 0x1403FE004 (CmpTransSearchAddTrans.c)
 *     NtNotifyChangeMultipleKeys @ 0x1403FF884 (NtNotifyChangeMultipleKeys.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     HvpDoAllocateCell @ 0x140400C30 (HvpDoAllocateCell.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404696E8 (FsRtlpOplockFsctrlInternal.c)
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x14047E780 (CmpReorganizeHive.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1404AA788 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x1404AAAE8 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1404AAB74 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404AAFC0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404ABA5C (FsRtlNotifyFilterReportChangeLite.c)
 *     CmpRunDownCmRM @ 0x1404BCEDC (CmpRunDownCmRM.c)
 *     CmKtmNotification @ 0x1404BD168 (CmKtmNotification.c)
 *     CmpIsCmRm @ 0x1404BD670 (CmpIsCmRm.c)
 *     CmpCleanupTransactionState @ 0x1404BD7CC (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x1404BD8D8 (CmpLogCheckpoint.c)
 *     CmpTransInitializeTransaction @ 0x1404BDABC (CmpTransInitializeTransaction.c)
 *     CmpTransMgrPrepare @ 0x1404BDEEC (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1404BE040 (CmpTransMgrSyncHive.c)
 *     FsRtlOplockBreakH @ 0x1404C47E0 (FsRtlOplockBreakH.c)
 *     CmpCleanupLightWeightTransaction @ 0x1404CB980 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x1404CBA14 (CmpTransMgrRollback.c)
 *     CmSnapshotRMTxArray @ 0x1404CD238 (CmSnapshotRMTxArray.c)
 *     CmRmFinalizeRecovery @ 0x1404CE378 (CmRmFinalizeRecovery.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1404F7984 (CmpDoQueueLateUnloadWorker.c)
 *     CmpReportNotifyHelper @ 0x1404F7D50 (CmpReportNotifyHelper.c)
 *     CmNotifyRunDown @ 0x1404F86A8 (CmNotifyRunDown.c)
 *     CmpInitCmRM @ 0x140516F64 (CmpInitCmRM.c)
 *     CmpTrimHive @ 0x140519464 (CmpTrimHive.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x14053B03C (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14053B14C (CmpPrepareLightWeightTransaction.c)
 *     SepNotifyFileSystems @ 0x14054AA90 (SepNotifyFileSystems.c)
 *     FsRtlCheckUpperOplock @ 0x14054ABA8 (FsRtlCheckUpperOplock.c)
 *     CmpLockHiveWriter @ 0x140564BE8 (CmpLockHiveWriter.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x14057EB98 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     CmFreezeRegistry @ 0x140602C74 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140602E94 (CmThawRegistry.c)
 *     CmObliterateRMTxArray @ 0x1406032B4 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x1406033D4 (CmpLazyCommitWorker.c)
 *     HvFoldBackDirtyData @ 0x140605EF4 (HvFoldBackDirtyData.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14061E758 (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14061E88C (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x14061FD9C (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x14064FB2C (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x1406934FC (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x140693590 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x140693658 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1406B0F7C (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x1406B17F4 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1406B1FAC (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1406B2578 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1406B35C4 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1406B3744 (NtDeleteDriverEntry.c)
 *     NtEnumerateBootEntries @ 0x1406B38C4 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1406B3E64 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1406B4314 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x1406B44FC (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x1406B45E8 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x1406B4854 (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x1406B4B4C (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1406B4DB8 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x1406B4E60 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1406B5188 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1406B5388 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1406B557C (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1406B577C (NtSetSystemEnvironmentValue.c)
 *     KeInitSystem @ 0x140791AC4 (KeInitSystem.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400C5CC8 (ExpAcquireFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __stdcall ExAcquireFastMutexUnsafe(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v2; // rsi
  unsigned int AbEntrySummary; // edx
  __int64 v4; // rcx
  char *v5; // rdi
  int SessionId; // eax
  __int16 v7; // ax
  unsigned __int8 AbOrphanedEntrySummary; // di

  CurrentThread = KeGetCurrentThread();
  v2 = (ULONG_PTR)FastMutex;
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)FastMutex, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    v5 = 0LL;
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, FastMutex);
      goto LABEL_19;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v4, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v4);
  FastMutex = (PFAST_MUTEX)(96 * v4);
  v5 = (char *)CurrentThread->LockEntries + (_QWORD)FastMutex;
  if ( !v5 )
  {
LABEL_19:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( v2 >= qword_140326950 && v2 < qword_140326950 + 0x8000000000LL )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *((_DWORD *)v5 + 10) = SessionId;
  FastMutex = (PFAST_MUTEX)0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v5 + 4) = v2 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v7 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v7;
  if ( !v7 && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery((__int64)FastMutex);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v2, 0) )
    ExpAcquireFastMutexContended(v2, (__int64)v5);
  if ( v5 )
    v5[26] |= 1u;
  *(_QWORD *)(v2 + 8) = CurrentThread;
}
