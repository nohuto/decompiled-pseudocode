/*
 * XREFs of KeInsertQueueEx @ 0x140093534
 * Callers:
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     IoSetIoCompletionEx2 @ 0x140093370 (IoSetIoCompletionEx2.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400C54A0 (NtReleaseWorkerFactoryWorker.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeInsertQueueEx(__int64 a1, _QWORD *a2, __int64 a3, char a4)
{
  unsigned int v5; // esi
  bool v7; // bp
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // r14
  _QWORD *v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // [rsp+78h] [rbp+20h]

  v5 = a3;
  v7 = a4 != 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v13) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, a2, v13);
  }
  if ( v5 && (*(_BYTE *)(a1 + 1) & 2) != 0 )
    v5 = 0;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, 2LL, a3);
  v14 = *(_DWORD *)(a1 + 4);
  if ( *(_QWORD *)(a1 + 16) == a1 + 8
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44)
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, a1, (__int64)a2) )
  {
    ++*(_DWORD *)(a1 + 4);
    v12 = *(_QWORD **)(a1 + 32);
    *a2 = a1 + 24;
    a2[1] = v12;
    if ( *v12 != a1 + 24 )
      __fastfail(3u);
    *v12 = a2;
    *(_QWORD *)(a1 + 32) = a2;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, v7 ? 3 : 0, 1LL, v5, CurrentIrql);
  return v14;
}
