/*
 * XREFs of CmpLazyCommitWorker @ 0x14065A808
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     UNLOCK_HIVE_LOAD @ 0x140446020 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x14044626C (LOCK_HIVE_LOAD.c)
 *     UnlockShutdown @ 0x1404EA6C8 (UnlockShutdown.c)
 *     LockShutdownShared @ 0x1404EA8B0 (LockShutdownShared.c)
 *     CmpTransMgrCommit @ 0x1404F0B68 (CmpTransMgrCommit.c)
 *     CmpCleanupTransactionState @ 0x1404F28B8 (CmpCleanupTransactionState.c)
 */

void __fastcall CmpLazyCommitWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v5; // di
  __int64 v6; // rcx
  unsigned __int64 v7; // rtt
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r9
  struct _KTHREAD *v13; // rax
  struct _KTHREAD *v14; // rsi
  __int64 v15; // rax
  signed __int8 v16; // cf
  __int64 v17; // rbx
  __int64 *v18; // rbx
  __int64 v19; // rax
  signed __int32 v20; // eax
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  __int64 **v23; // rcx
  signed __int32 v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r9
  struct _KTHREAD *v27; // rcx
  __int16 v28; // ax
  struct _KTHREAD *v29; // rax
  struct _KTHREAD *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 **v35; // rcx
  signed __int32 v36; // eax
  struct _KTHREAD *v37; // rcx
  __int16 v38; // ax
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // rtt
  struct _KTHREAD *v42; // rcx
  __int16 v43; // ax
  __int64 v44; // [rsp+30h] [rbp-10h] BYREF
  __int64 *v45; // [rsp+38h] [rbp-8h]
  int v46; // [rsp+88h] [rbp+48h] BYREF

  v45 = &v44;
  v44 = (__int64)&v44;
  CurrentThread = KeGetCurrentThread();
  v46 = 0;
  v5 = 1;
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v6 = (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2;
  v7 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v7 == _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               v6,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    || ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    LockShutdownShared(v6, a2, a3, a4);
    LOCK_HIVE_LOAD(v9, v8, v10, v11);
    while ( 1 )
    {
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
      v14 = KeGetCurrentThread();
      v15 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v12);
      v16 = _interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0);
      v17 = v15;
      if ( !v16 )
        ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v15);
      if ( v17 )
        *(_BYTE *)(v17 + 26) |= 1u;
      v18 = (__int64 *)CmpLazyCommitListHead;
      qword_14034D768 = (__int64)v14;
      v19 = *(_QWORD *)CmpLazyCommitListHead;
      if ( *(__int64 **)(CmpLazyCommitListHead + 8) != &CmpLazyCommitListHead
        || *(_QWORD *)(v19 + 8) != CmpLazyCommitListHead )
      {
        __fastfail(3u);
      }
      CmpLazyCommitListHead = *(_QWORD *)CmpLazyCommitListHead;
      *(_QWORD *)(v19 + 8) = &CmpLazyCommitListHead;
      qword_14034D768 = 0LL;
      if ( v18 == &CmpLazyCommitListHead )
        break;
      v20 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
      if ( v20 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v20);
      KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
      v21 = KeGetCurrentThread();
      v22 = v21->KernelApcDisable + 1;
      v21->KernelApcDisable = v22;
      if ( !v22
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
        && !v21->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( (int)CmpTransMgrCommit(v18[3], (__int64)(v18 - 4), &v46) < 0 )
      {
        v23 = (__int64 **)v45;
        *v18 = (__int64)&v44;
        v18[1] = (__int64)v23;
        if ( *v23 != &v44 )
          __fastfail(3u);
        *v23 = v18;
        v5 = 0;
        v45 = v18;
      }
      else
      {
        CmpCleanupTransactionState(v18[3], v18 - 4, 4, 0);
      }
    }
    CmpLazyCommitWorkItemActive = v5 == 0;
    v24 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
    if ( v24 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v24);
    KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
    v27 = KeGetCurrentThread();
    v28 = v27->KernelApcDisable + 1;
    v27->KernelApcDisable = v28;
    if ( !v28
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
      && !v27->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( !v5 )
    {
      v29 = KeGetCurrentThread();
      --v29->KernelApcDisable;
      v30 = KeGetCurrentThread();
      v31 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, v26);
      v16 = _interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0);
      v32 = v31;
      if ( !v16 )
        ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v31);
      if ( v32 )
        *(_BYTE *)(v32 + 26) |= 1u;
      qword_14034D768 = (__int64)v30;
      while ( 1 )
      {
        v33 = (__int64 *)v44;
        v34 = *(_QWORD *)v44;
        if ( *(__int64 **)(v44 + 8) != &v44 || *(_QWORD *)(v34 + 8) != v44 )
          __fastfail(3u);
        v44 = *(_QWORD *)v44;
        *(_QWORD *)(v34 + 8) = &v44;
        if ( v33 == &v44 )
          break;
        v35 = (__int64 **)qword_14034D7C8;
        *v33 = (__int64)&CmpLazyCommitListHead;
        v33[1] = (__int64)v35;
        if ( *v35 != &CmpLazyCommitListHead )
          __fastfail(3u);
        *v35 = v33;
        qword_14034D7C8 = (__int64)v33;
      }
      qword_14034D768 = 0LL;
      v36 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
      if ( v36 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v36);
      KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
      v37 = KeGetCurrentThread();
      v38 = v37->KernelApcDisable + 1;
      v37->KernelApcDisable = v38;
      if ( !v38
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v37->ApcState.ApcListHead[0].Flink != &v37->152
        && !v37->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      KiSetTimerEx((__int64)&CmpLazyCommitTimer, -300000000LL, 0, 0, (__int64)&CmpLazyCommitDpc);
    }
    UNLOCK_HIVE_LOAD((__int64)v27, v25);
    UnlockShutdown(v40, v39);
    _m_prefetchw(&CmpShutdownRundown);
    v41 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v41 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
  }
  v42 = KeGetCurrentThread();
  v43 = v42->KernelApcDisable + 1;
  v42->KernelApcDisable = v43;
  if ( !v43
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v42->ApcState.ApcListHead[0].Flink != &v42->152
    && !v42->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
