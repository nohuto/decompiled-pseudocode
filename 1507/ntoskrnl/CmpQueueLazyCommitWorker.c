/*
 * XREFs of CmpQueueLazyCommitWorker @ 0x14065AC08
 * Callers:
 *     CmKtmNotification @ 0x1404EF414 (CmKtmNotification.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

void __fastcall CmpQueueLazyCommitWorker(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v6; // di
  struct _KTHREAD *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 **v10; // rcx
  bool v11; // zf
  signed __int32 v12; // eax
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = KeGetCurrentThread();
  v8 = KeAbPreAcquire((ULONG_PTR)&CmpTransactionListLock, 0LL, 0LL, a4);
  v9 = v8;
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&CmpTransactionListLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&CmpTransactionListLock, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  qword_14034D768 = (__int64)v7;
  *(_DWORD *)(a1 + 104) &= ~0x40u;
  v10 = (__int64 **)qword_14034D7C8;
  *(_QWORD *)(a1 + 32) = &CmpLazyCommitListHead;
  *(_QWORD *)(a1 + 40) = v10;
  if ( *v10 != &CmpLazyCommitListHead )
    __fastfail(3u);
  v11 = CmpLazyCommitWorkItemActive == 0;
  *v10 = (__int64 *)(a1 + 32);
  qword_14034D7C8 = a1 + 32;
  if ( v11 )
  {
    v6 = 1;
    CmpLazyCommitWorkItemActive = 1;
  }
  qword_14034D768 = 0LL;
  v12 = _InterlockedCompareExchange((volatile signed __int32 *)&CmpTransactionListLock, 1, 0);
  if ( v12 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&CmpTransactionListLock, v12);
  KeAbPostRelease((ULONG_PTR)&CmpTransactionListLock);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v6 )
    KiSetTimerEx((__int64)&CmpLazyCommitTimer, -300000000LL, 0, 0, (__int64)&CmpLazyCommitDpc);
}
