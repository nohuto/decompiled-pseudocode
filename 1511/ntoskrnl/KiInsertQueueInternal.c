/*
 * XREFs of KiInsertQueueInternal @ 0x1400C6988
 * Callers:
 *     AlpcpSignal @ 0x14007A0C0 (AlpcpSignal.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400C54A0 (NtReleaseWorkerFactoryWorker.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

char __fastcall KiInsertQueueInternal(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rsi
  char result; // al
  _QWORD *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx

  *a2 = 0LL;
  v3 = a1 + 8;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v10) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v11, v10);
  }
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, (__int64)a2, a3);
  if ( *(_QWORD *)(v3 + 8) == v3
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44)
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15
    || (result = KiWakeQueueWaiter((__int64)CurrentPrcb, a1, (__int64)a2)) == 0 )
  {
    ++*(_DWORD *)(a1 + 4);
    result = a1 + 24;
    v9 = *(_QWORD **)(a1 + 32);
    *a2 = a1 + 24;
    a2[1] = v9;
    if ( *v9 != a1 + 24 )
      __fastfail(3u);
    *v9 = a2;
    *(_QWORD *)(a1 + 32) = a2;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return result;
}
