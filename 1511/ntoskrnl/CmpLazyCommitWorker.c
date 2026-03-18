/*
 * XREFs of CmpLazyCommitWorker @ 0x1405E3968
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     UnlockShutdown @ 0x1403BABE4 (UnlockShutdown.c)
 *     LockShutdownShared @ 0x1403BDB38 (LockShutdownShared.c)
 *     CmpTransMgrCommit @ 0x1403D6AEC (CmpTransMgrCommit.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403DE3F0 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1403DE4C0 (LOCK_HIVE_LOAD.c)
 *     CmpCleanupTransactionState @ 0x1404BA850 (CmpCleanupTransactionState.c)
 */

__int64 CmpLazyCommitWorker()
{
  char v0; // di
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v2; // rax
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 **v5; // rcx
  struct _KTHREAD *v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 **v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 *v12; // [rsp+28h] [rbp-8h]
  int v13; // [rsp+58h] [rbp+28h] BYREF

  v13 = 0;
  v12 = &v11;
  v0 = 1;
  v11 = (__int64)&v11;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    LockShutdownShared();
    LOCK_HIVE_LOAD();
    while ( 1 )
    {
      v2 = KeGetCurrentThread();
      --v2->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v3 = (__int64 *)CmpLazyCommitListHead;
      v4 = *(_QWORD *)CmpLazyCommitListHead;
      if ( *(__int64 **)(CmpLazyCommitListHead + 8) != &CmpLazyCommitListHead
        || *(_QWORD *)(v4 + 8) != CmpLazyCommitListHead )
      {
        __fastfail(3u);
      }
      CmpLazyCommitListHead = *(_QWORD *)CmpLazyCommitListHead;
      *(_QWORD *)(v4 + 8) = &CmpLazyCommitListHead;
      if ( v3 == &CmpLazyCommitListHead )
        break;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( (int)CmpTransMgrCommit(v3[3], (__int64)(v3 - 4), &v13) < 0 )
      {
        v5 = (__int64 **)v12;
        *v3 = (__int64)&v11;
        v3[1] = (__int64)v5;
        if ( *v5 != &v11 )
          __fastfail(3u);
        *v5 = v3;
        v0 = 0;
        v12 = v3;
      }
      else
      {
        CmpCleanupTransactionState(v3[3], v3 - 4, 4u, 0);
      }
    }
    CmpLazyCommitWorkItemActive = v0 == 0;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !v0 )
    {
      v6 = KeGetCurrentThread();
      --v6->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      while ( 1 )
      {
        v7 = (__int64 *)v11;
        v8 = *(_QWORD *)v11;
        if ( *(__int64 **)(v11 + 8) != &v11 || *(_QWORD *)(v8 + 8) != v11 )
          __fastfail(3u);
        v11 = *(_QWORD *)v11;
        *(_QWORD *)(v8 + 8) = &v11;
        if ( v7 == &v11 )
          break;
        v9 = (__int64 **)qword_1402FD368;
        *v7 = (__int64)&CmpLazyCommitListHead;
        v7[1] = (__int64)v9;
        if ( *v9 != &CmpLazyCommitListHead )
          __fastfail(3u);
        *v9 = v7;
        qword_1402FD368 = (__int64)v7;
      }
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      KeSetTimer(&CmpLazyCommitTimer, (LARGE_INTEGER)-300000000LL, &CmpLazyCommitDpc);
    }
    UNLOCK_HIVE_LOAD();
    UnlockShutdown();
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
  }
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
