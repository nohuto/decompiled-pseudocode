/*
 * XREFs of ExAcquireFastMutexUnsafe @ 0x1400F05A0
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x140076FCC (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x140077994 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx @ 0x14007A080 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x14007A960 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlUninitializeOplock @ 0x1400A101C (FsRtlUninitializeOplock.c)
 *     FsRtlCancelNotify @ 0x1400A20F4 (FsRtlCancelNotify.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1401343CC (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlOplockBreakToNoneEx @ 0x1401B9338 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1401B9498 (FsRtlpAcknowledgeOplockBreak.c)
 *     KeAcquireGuardedMutexUnsafe @ 0x1401D1D88 (KeAcquireGuardedMutexUnsafe.c)
 *     CmpFlushHive @ 0x1403FA0CC (CmpFlushHive.c)
 *     LOCK_TRANSACTION_LIST @ 0x1403FDA44 (LOCK_TRANSACTION_LIST.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1403FDAD8 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpNotifyTriggerCheck @ 0x1403FDC9C (CmpNotifyTriggerCheck.c)
 *     CmpTransSearchAddTrans @ 0x1403FF144 (CmpTransSearchAddTrans.c)
 *     NtNotifyChangeMultipleKeys @ 0x1404009C4 (NtNotifyChangeMultipleKeys.c)
 *     HvFreeCell @ 0x1404016EC (HvFreeCell.c)
 *     HvpDoAllocateCell @ 0x140401D70 (HvpDoAllocateCell.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14046A818 (FsRtlpOplockFsctrlInternal.c)
 *     CmpInitializeHive @ 0x14047F184 (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x14047FA2C (CmpReorganizeHive.c)
 *     CmpFlushNotify @ 0x14049A0FC (CmpFlushNotify.c)
 *     CmpCloseKeyObject @ 0x14049A770 (CmpCloseKeyObject.c)
 *     CmpPostNotify @ 0x14049A9D4 (CmpPostNotify.c)
 *     CmpInitCmRM @ 0x14049EB58 (CmpInitCmRM.c)
 *     CmpTrimHive @ 0x1404A1058 (CmpTrimHive.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1404BEA58 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x1404BEDB8 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1404BEE44 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404BF290 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404BFD2C (FsRtlNotifyFilterReportChangeLite.c)
 *     CmpRunDownCmRM @ 0x1404D98D8 (CmpRunDownCmRM.c)
 *     CmKtmNotification @ 0x1404D9B64 (CmKtmNotification.c)
 *     CmpIsCmRm @ 0x1404DA06C (CmpIsCmRm.c)
 *     CmpCleanupTransactionState @ 0x1404DA1C8 (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x1404DA2D4 (CmpLogCheckpoint.c)
 *     CmpTransInitializeTransaction @ 0x1404DA4B8 (CmpTransInitializeTransaction.c)
 *     CmpTransMgrPrepare @ 0x1404DA8E8 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x1404DAA3C (CmpTransMgrSyncHive.c)
 *     FsRtlOplockBreakH @ 0x1404E11DC (FsRtlOplockBreakH.c)
 *     CmpCleanupLightWeightTransaction @ 0x1404E9890 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x1404E9924 (CmpTransMgrRollback.c)
 *     CmSnapshotRMTxArray @ 0x1404EB0B4 (CmSnapshotRMTxArray.c)
 *     CmRmFinalizeRecovery @ 0x1404EC2F0 (CmRmFinalizeRecovery.c)
 *     HvpMarkCellDirty @ 0x1405136F0 (HvpMarkCellDirty.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140514594 (CmpDoQueueLateUnloadWorker.c)
 *     CmpReportNotifyHelper @ 0x140514960 (CmpReportNotifyHelper.c)
 *     CmNotifyRunDown @ 0x1405152B8 (CmNotifyRunDown.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x14053AAFC (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14053AC0C (CmpPrepareLightWeightTransaction.c)
 *     SepNotifyFileSystems @ 0x14054A550 (SepNotifyFileSystems.c)
 *     FsRtlCheckUpperOplock @ 0x14054A668 (FsRtlCheckUpperOplock.c)
 *     CmpLockHiveWriter @ 0x1405646A8 (CmpLockHiveWriter.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x14057E6EC (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     CmFreezeRegistry @ 0x140602BC0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140602DE0 (CmThawRegistry.c)
 *     CmObliterateRMTxArray @ 0x140603200 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x140603320 (CmpLazyCommitWorker.c)
 *     HvFoldBackDirtyData @ 0x140605E40 (HvFoldBackDirtyData.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14061E6A4 (FsRtlpOpBatchBreakClosePending.c)
 *     FsRtlpOplockBreakNotify @ 0x14061E7D8 (FsRtlpOplockBreakNotify.c)
 *     FsRtlNotifyCleanupAll @ 0x14061FCE8 (FsRtlNotifyCleanupAll.c)
 *     KeStartDynamicProcessor @ 0x14064FA48 (KeStartDynamicProcessor.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x140693418 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1406934AC (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x140693574 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x1406B0E44 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExpSetBootEntry @ 0x1406B16BC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1406B1E74 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1406B2440 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1406B348C (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1406B360C (NtDeleteDriverEntry.c)
 *     NtEnumerateBootEntries @ 0x1406B378C (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1406B3D2C (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1406B41DC (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtGetEnvironmentVariableEx @ 0x1406B43C4 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x1406B44B0 (NtQueryBootEntryOrder.c)
 *     NtQueryBootOptions @ 0x1406B471C (NtQueryBootOptions.c)
 *     NtQueryDriverEntryOrder @ 0x1406B4A14 (NtQueryDriverEntryOrder.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1406B4C80 (NtQueryEnvironmentVariableInfoEx.c)
 *     NtQuerySystemEnvironmentValue @ 0x1406B4D28 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1406B5050 (NtSetBootEntryOrder.c)
 *     NtSetBootOptions @ 0x1406B5250 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1406B5444 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1406B5644 (NtSetSystemEnvironmentValue.c)
 *     KeInitSystem @ 0x140791AC4 (KeInitSystem.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C7DE0 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400C7E28 (ExpAcquireFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14015964C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
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
  if ( v2 >= qword_140326910 && v2 < qword_140326910 + 0x8000000000LL )
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
