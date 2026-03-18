/*
 * XREFs of KeInsertHeadQueue @ 0x1401C7B68
 * Callers:
 *     VerifierKeInsertHeadQueue @ 0x1406C09A4 (VerifierKeInsertHeadQueue.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeInsertHeadQueue(PRKQUEUE Queue, PLIST_ENTRY Entry)
{
  __int64 v2; // r8
  LIST_ENTRY *p_WaitListHead; // rbp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  _KTHREAD *CurrentThread; // rsi
  __int64 v9; // r8
  __int64 v10; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  LONG SignalState; // [rsp+50h] [rbp+8h]

  p_WaitListHead = &Queue->Header.WaitListHead;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    LOBYTE(v9) = KeIsThreadRunning((__int64)CurrentPrcb->CurrentThread);
    EtwTraceEnqueueWork(CurrentThread, v10, v9);
  }
  KiAcquireKobjectLockSafe(&Queue->Header.Lock, (__int64)Entry, v2);
  SignalState = Queue->Header.SignalState;
  if ( p_WaitListHead->Blink == p_WaitListHead
    || Queue->CurrentCount >= Queue->MaximumCount
    || (PRKQUEUE)CurrentThread->Queue == Queue && CurrentThread->WaitReason == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, (__int64)Queue, (__int64)Entry) )
  {
    ++Queue->Header.SignalState;
    Flink = Queue->EntryListHead.Flink;
    Entry->Flink = Flink;
    Entry->Blink = &Queue->EntryListHead;
    if ( Flink->Blink != &Queue->EntryListHead )
      __fastfail(3u);
    Flink->Blink = Entry;
    Queue->EntryListHead.Flink = Entry;
  }
  _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  return SignalState;
}
