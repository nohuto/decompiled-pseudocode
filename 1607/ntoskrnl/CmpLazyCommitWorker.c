/*
 * XREFs of CmpLazyCommitWorker @ 0x140603320
 * Callers:
 *     <none>
 * Callees:
 *     KiSetTimerEx @ 0x140006E00 (KiSetTimerEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400F05A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400F0700 (ExReleaseFastMutexUnsafe.c)
 *     UNLOCK_HIVE_LOAD @ 0x1403FB7E4 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1403FB8B4 (LOCK_HIVE_LOAD.c)
 *     UnlockShutdown @ 0x1404A0FFC (UnlockShutdown.c)
 *     LockShutdownShared @ 0x1404A1EFC (LockShutdownShared.c)
 *     CmpCleanupTransactionState @ 0x1404DA1C8 (CmpCleanupTransactionState.c)
 *     CmpTransMgrCommit @ 0x1404DA7A0 (CmpTransMgrCommit.c)
 */

__int64 CmpLazyCommitWorker()
{
  char v0; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct _KTHREAD *v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 **v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct _KTHREAD *v16; // rax
  __int64 *v17; // rax
  __int64 *v18; // rcx
  __int64 **v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v24; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v25; // [rsp+38h] [rbp-8h]
  int v26; // [rsp+68h] [rbp+28h] BYREF

  v26 = 0;
  v25 = (__int64 *)&v24;
  v0 = 1;
  v24 = (__int64 *)&v24;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    LockShutdownShared();
    LOCK_HIVE_LOAD();
    while ( 1 )
    {
      v5 = KeGetCurrentThread();
      --v5->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v6 = (__int64 *)CmpLazyCommitListHead;
      v7 = *(_QWORD *)CmpLazyCommitListHead;
      if ( *(__int64 **)(CmpLazyCommitListHead + 8) != &CmpLazyCommitListHead
        || *(_QWORD *)(v7 + 8) != CmpLazyCommitListHead )
      {
        __fastfail(3u);
      }
      CmpLazyCommitListHead = *(_QWORD *)CmpLazyCommitListHead;
      *(_QWORD *)(v7 + 8) = &CmpLazyCommitListHead;
      if ( v6 == &CmpLazyCommitListHead )
        break;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
      if ( (int)CmpTransMgrCommit(v11, (__int64)(v6 - 4), &v26) < 0 )
      {
        v12 = (__int64 **)v25;
        if ( (__int64 **)*v25 != &v24 )
          __fastfail(3u);
        v6[1] = (__int64)v25;
        *v6 = (__int64)&v24;
        v0 = 0;
        *v12 = v6;
        v25 = v6;
      }
      else
      {
        CmpCleanupTransactionState(v6[4], v6 - 4, 4, 0);
      }
    }
    CmpLazyCommitWorkItemActive = v0 == 0;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
    if ( !v0 )
    {
      v16 = KeGetCurrentThread();
      --v16->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      while ( 1 )
      {
        v17 = v24;
        v18 = (__int64 *)*v24;
        if ( (__int64 **)v24[1] != &v24 || (__int64 *)v18[1] != v24 )
          __fastfail(3u);
        v24 = (__int64 *)*v24;
        v18[1] = (__int64)&v24;
        if ( v17 == (__int64 *)&v24 )
          break;
        v19 = (__int64 **)qword_140322948;
        if ( *(__int64 **)qword_140322948 != &CmpLazyCommitListHead )
          __fastfail(3u);
        *v17 = (__int64)&CmpLazyCommitListHead;
        v17[1] = (__int64)v19;
        *v19 = v17;
        qword_140322948 = (__int64)v17;
      }
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v20, v21, v22);
      KiSetTimerEx((__int64)&CmpLazyCommitTimer, -300000000LL, 0, 0, (__int64)&CmpLazyCommitDpc);
    }
    UNLOCK_HIVE_LOAD();
    UnlockShutdown();
    ExReleaseRundownProtection(&CmpShutdownRundown);
  }
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v2, v3, v4);
}
