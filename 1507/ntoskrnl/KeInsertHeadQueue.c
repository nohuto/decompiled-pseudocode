/*
 * XREFs of KeInsertHeadQueue @ 0x140204A7C
 * Callers:
 *     VerifierKeInsertHeadQueue @ 0x14074219C (VerifierKeInsertHeadQueue.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeInsertHeadQueue(PRKQUEUE Queue, PLIST_ENTRY Entry)
{
  LIST_ENTRY *p_WaitListHead; // r14
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r15
  _KTHREAD *CurrentThread; // rbp
  bool v8; // al
  bool v9; // r8
  unsigned int v10; // esi
  struct _LIST_ENTRY *Flink; // rcx
  LONG SignalState; // [rsp+60h] [rbp+8h]

  p_WaitListHead = &Queue->Header.WaitListHead;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    v8 = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
    v9 = v8;
    EtwTraceEnqueueWork(CurrentPrcb->CurrentThread, Entry, v9);
  }
  v10 = 0;
  while ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
  {
    do
    {
      if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v10);
    }
    while ( (Queue->Header.LockNV & 0x80u) != 0 );
  }
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
  KiExitDispatcher((signed __int64)CurrentPrcb, 0, 1u, 0, CurrentIrql);
  return SignalState;
}
