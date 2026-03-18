/*
 * XREFs of CmpCleanupTransactionState @ 0x1404BA850
 * Callers:
 *     CmpRunDownCmRM @ 0x14049B138 (CmpRunDownCmRM.c)
 *     CmKtmNotification @ 0x1404BA500 (CmKtmNotification.c)
 *     CmObliterateRMTxArray @ 0x1405E3848 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x1405E3968 (CmpLazyCommitWorker.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14001B460 (ObDereferenceObjectDeferDelete.c)
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     LockRMLog @ 0x1403D6618 (LockRMLog.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403DE534 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140423C10 (CmpLockRegistry.c)
 *     CmpLogCheckpoint @ 0x1404BAB0C (CmpLogCheckpoint.c)
 */

void __fastcall CmpCleanupTransactionState(__int64 a1, _QWORD *a2, unsigned int a3, char a4)
{
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // rdx
  void **v12; // rax
  void *v13; // rcx
  void *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx

  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData((__int64)a2, a3, v8, v9);
  CmpUnlockRegistry();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v11 = (_QWORD *)*a2;
  v12 = (void **)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || *v12 != a2 )
    __fastfail(3u);
  *v12 = v11;
  v11[1] = v12;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v13 = (void *)a2[6];
  *((_DWORD *)a2 + 26) |= 0x10u;
  if ( v13 )
    ObfDereferenceObject(v13);
  v14 = (void *)a2[8];
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    CmpUnlockRegistry();
  }
}
