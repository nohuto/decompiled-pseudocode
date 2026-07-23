/*
 * XREFs of KeInsertQueueEx @ 0x14007E13C
 * Callers:
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 *     IoSetIoCompletionEx2 @ 0x14007DF40 (IoSetIoCompletionEx2.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400F68B0 (NtReleaseWorkerFactoryWorker.c)
 * Callees:
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeInsertQueueEx(__int64 a1, _QWORD *a2, unsigned int a3, char a4)
{
  bool v7; // r15
  _QWORD *v8; // rbp
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // r14
  int v13; // edx
  _QWORD *v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // [rsp+78h] [rbp+20h]

  v7 = a4 != 0;
  v8 = (_QWORD *)(a1 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v15) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, a2, v15);
  }
  if ( a3 && (*(_BYTE *)(a1 + 1) & 2) != 0 )
    a3 = 0;
  KiAcquireKobjectLockSafe(a1);
  v16 = *(_DWORD *)(a1 + 4);
  if ( (_QWORD *)*v8 == v8
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44)
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15
    || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, a1, a2) )
  {
    v13 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v13 + 1;
    v14 = *(_QWORD **)(a1 + 32);
    if ( *v14 != a1 + 24 )
      __fastfail(3u);
    *a2 = a1 + 24;
    a2[1] = v14;
    *v14 = a2;
    *(_QWORD *)(a1 + 32) = a2;
    if ( !v13 && (_QWORD *)*v8 != v8 )
      KiWakeOtherQueueWaiters(CurrentPrcb, a1);
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, v7 ? 3 : 0, 1LL, a3, CurrentIrql);
  return v16;
}
