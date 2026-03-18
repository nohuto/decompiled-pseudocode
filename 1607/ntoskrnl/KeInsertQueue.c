/*
 * XREFs of KeInsertQueue @ 0x140085F70
 * Callers:
 *     PopFxQueueWorkOrder @ 0x1400C3074 (PopFxQueueWorkOrder.c)
 *     FsRtlpPostStackOverflow @ 0x1401BA7A0 (FsRtlpPostStackOverflow.c)
 *     IopPassiveInterruptDpc @ 0x1401CDB84 (IopPassiveInterruptDpc.c)
 *     KiSwapToUmsThreadContinue @ 0x1401DC690 (KiSwapToUmsThreadContinue.c)
 *     EtwpQueueReply @ 0x140494EB8 (EtwpQueueReply.c)
 *     KeSynchronizeUmsThread @ 0x14065068C (KeSynchronizeUmsThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x140056700 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EE7C0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EE800 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F9DBC (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1401D2C78 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x140225C20 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeInsertQueue(PRKQUEUE Queue, PLIST_ENTRY Entry)
{
  LIST_ENTRY *p_WaitListHead; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rbp
  LONG v9; // edx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  LONG SignalState; // [rsp+50h] [rbp+8h]

  p_WaitListHead = &Queue->Header.WaitListHead;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v11) = KeIsThreadRunning(CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v12, v11);
  }
  KiAcquireKobjectLockSafe(Queue);
  SignalState = Queue->Header.SignalState;
  if ( p_WaitListHead->Flink == p_WaitListHead
    || Queue->CurrentCount >= Queue->MaximumCount
    || (PRKQUEUE)CurrentThread->Queue == Queue && CurrentThread->WaitReason == 15
    || !(unsigned __int8)KiWakeQueueWaiter(CurrentPrcb, Queue, Entry) )
  {
    v9 = Queue->Header.SignalState;
    Queue->Header.SignalState = v9 + 1;
    Blink = Queue->EntryListHead.Blink;
    if ( Blink->Flink != &Queue->EntryListHead )
      __fastfail(3u);
    Entry->Flink = &Queue->EntryListHead;
    Entry->Blink = Blink;
    Blink->Flink = Entry;
    Queue->EntryListHead.Blink = Entry;
    if ( !v9 && p_WaitListHead->Flink != p_WaitListHead )
      KiWakeOtherQueueWaiters(CurrentPrcb, Queue);
  }
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  return SignalState;
}
