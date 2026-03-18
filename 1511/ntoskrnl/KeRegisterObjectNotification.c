/*
 * XREFs of KeRegisterObjectNotification @ 0x14002E790
 * Callers:
 *     NtAssociateWaitCompletionPacket @ 0x14002E570 (NtAssociateWaitCompletionPacket.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1400C67C0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     ExpWorkerFactoryManagerThread @ 0x14013631C (ExpWorkerFactoryManagerThread.c)
 *     NtCreateWorkerFactory @ 0x14044E4E8 (NtCreateWorkerFactory.c)
 *     ExpWorkerFactoryInitialization @ 0x140770774 (ExpWorkerFactoryInitialization.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiWaitSatisfyOther @ 0x1400DF0A8 (KiWaitSatisfyOther.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

char __fastcall KeRegisterObjectNotification(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // si
  _QWORD *v7; // rcx
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // r14
  _QWORD *v11; // rcx
  unsigned __int8 IsThreadRunning; // al

  *(_WORD *)(a3 + 16) = 1026;
  *(_QWORD *)(a3 + 24) = a2;
  *(_QWORD *)(a3 + 32) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KiAcquireKobjectLockSafe(a1);
  if ( *(int *)(a1 + 4) > 0 )
  {
    KiWaitSatisfyOther(a1);
    *(_BYTE *)(a3 + 17) = 5;
    *(_QWORD *)a3 = 0LL;
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread = CurrentPrcb->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(CurrentPrcb->CurrentThread);
      EtwTraceEnqueueWork(CurrentThread, a3, IsThreadRunning);
    }
    KiAcquireKobjectLockSafe(a2);
    if ( *(_QWORD *)(a2 + 16) == a2 + 8
      || *(_DWORD *)(a2 + 40) >= *(_DWORD *)(a2 + 44)
      || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a2 && CurrentThread->WaitReason == 15
      || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, a2, a3) )
    {
      ++*(_DWORD *)(a2 + 4);
      v11 = *(_QWORD **)(a2 + 32);
      *(_QWORD *)a3 = a2 + 24;
      *(_QWORD *)(a3 + 8) = v11;
      if ( *v11 != a2 + 24 )
        __fastfail(3u);
      *v11 = a3;
      *(_QWORD *)(a2 + 32) = a3;
    }
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    KiExitDispatcher((unsigned int)KeGetCurrentPrcb(), 0, 1, 0, CurrentIrql);
    return 1;
  }
  else
  {
    v7 = *(_QWORD **)(a1 + 16);
    *(_QWORD *)a3 = a1 + 8;
    *(_QWORD *)(a3 + 8) = v7;
    if ( *v7 != a1 + 8 )
      __fastfail(3u);
    *v7 = a3;
    *(_QWORD *)(a1 + 16) = a3;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    __writecr8(CurrentIrql);
    return 0;
  }
}
