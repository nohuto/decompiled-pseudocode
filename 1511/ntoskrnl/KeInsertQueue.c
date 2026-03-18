/*
 * XREFs of KeInsertQueue @ 0x1400F4C4C
 * Callers:
 *     PopFxQueueWorkOrder @ 0x1400DC96C (PopFxQueueWorkOrder.c)
 *     FsRtlpPostStackOverflow @ 0x1401ADF50 (FsRtlpPostStackOverflow.c)
 *     IopPassiveInterruptDpc @ 0x1401BF5FC (IopPassiveInterruptDpc.c)
 *     KiSwapToUmsThreadContinue @ 0x1401CCA04 (KiSwapToUmsThreadContinue.c)
 *     EtwpQueueReply @ 0x1404CFE80 (EtwpQueueReply.c)
 *     KeSynchronizeUmsThread @ 0x14061B37C (KeSynchronizeUmsThread.c)
 *     VerifierKeInsertQueue @ 0x1406C09AC (VerifierKeInsertQueue.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeInsertQueue(PRKQUEUE Queue, PLIST_ENTRY Entry)
{
  __int64 v2; // r8
  LIST_ENTRY *p_WaitListHead; // rbp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rsi
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
  KiAcquireKobjectLockSafe(&Queue->Header.Lock, (__int64)Entry, v2);
  SignalState = Queue->Header.SignalState;
  if ( p_WaitListHead->Blink == p_WaitListHead
    || Queue->CurrentCount >= Queue->MaximumCount
    || (PRKQUEUE)CurrentThread->Queue == Queue && CurrentThread->WaitReason == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, (__int64)Queue, (__int64)Entry) )
  {
    ++Queue->Header.SignalState;
    Blink = Queue->EntryListHead.Blink;
    Entry->Flink = &Queue->EntryListHead;
    Entry->Blink = Blink;
    if ( Blink->Flink != &Queue->EntryListHead )
      __fastfail(3u);
    Blink->Flink = Entry;
    Queue->EntryListHead.Blink = Entry;
  }
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  return SignalState;
}
