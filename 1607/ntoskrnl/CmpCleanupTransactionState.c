/*
 * XREFs of CmpCleanupTransactionState @ 0x1404DA1C8
 * Callers:
 *     CmpRunDownCmRM @ 0x1404D98D8 (CmpRunDownCmRM.c)
 *     CmKtmNotification @ 0x1404D9B64 (CmKtmNotification.c)
 *     CmObliterateRMTxArray @ 0x140603200 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x140603320 (CmpLazyCommitWorker.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObDereferenceObjectDeferDelete @ 0x14005DB70 (ObDereferenceObjectDeferDelete.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400F05A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400F0700 (ExReleaseFastMutexUnsafe.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FD614 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x1403FD9E8 (CmpLockRegistryExclusive.c)
 *     CmpTransDereferenceTransaction @ 0x1403FF128 (CmpTransDereferenceTransaction.c)
 *     CmpUnlockRegistry @ 0x14040476C (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1404047A0 (CmpLockRegistry.c)
 *     LockRMLog @ 0x1404A1D3C (LockRMLog.c)
 *     CmpLogCheckpoint @ 0x1404DA2D4 (CmpLogCheckpoint.c)
 */

void __fastcall CmpCleanupTransactionState(__int64 a1, _QWORD *a2, int a3, char a4)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v9; // rdx
  void **v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9

  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData((ULONG_PTR)a2, a3);
  CmpUnlockRegistry();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v9 = (_QWORD *)*a2;
  v10 = (void **)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || *v10 != a2 )
    __fastfail(3u);
  *v10 = v9;
  v9[1] = v10;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  *((_DWORD *)a2 + 12) |= 0x10u;
  if ( a2[7] )
    CmpTransDereferenceTransaction(a2[7]);
  v14 = (void *)a2[9];
  if ( v14 )
    ObDereferenceObjectDeferDelete(v14);
  ExFreePoolWithTag(a2, 0x72544D43u);
  if ( a4 )
  {
    CmpLockRegistry();
    LockRMLog(a1);
    LOBYTE(v15) = 1;
    CmpLogCheckpoint(a1, v16, v15);
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v17, v18, v19);
    CmpUnlockRegistry();
  }
}
