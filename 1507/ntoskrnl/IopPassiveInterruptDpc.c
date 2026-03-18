/*
 * XREFs of IopPassiveInterruptDpc @ 0x1401FAFCC
 * Callers:
 *     <none>
 * Callees:
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

void __fastcall IopPassiveInterruptDpc(
        struct _KDPC *Dpc,
        struct _LIST_ENTRY *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _LIST_ENTRY *v4; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // rsi
  bool v8; // al
  unsigned int v9; // edi
  struct _LIST_ENTRY *Blink; // rax

  v4 = DeferredContext + 4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    v8 = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
    LOBYTE(SystemArgument1) = v8;
    EtwTraceEnqueueWork(CurrentPrcb->CurrentThread, &DeferredContext[4], SystemArgument1);
  }
  v9 = 0;
  while ( _interlockedbittestandset(&PassiveInterruptRealtimeWorkQueue.Header.Lock, 7u) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
    while ( (PassiveInterruptRealtimeWorkQueue.Header.Type & 0x80u) != 0 );
  }
  if ( PassiveInterruptRealtimeWorkQueue.Header.WaitListHead.Blink == &PassiveInterruptRealtimeWorkQueue.Header.WaitListHead
    || PassiveInterruptRealtimeWorkQueue.CurrentCount >= PassiveInterruptRealtimeWorkQueue.MaximumCount
    || (struct _KQUEUE *)CurrentThread->Queue == &PassiveInterruptRealtimeWorkQueue && CurrentThread->WaitReason == 15
    || !KiWakeQueueWaiter((__int64)CurrentPrcb, (__int64)&PassiveInterruptRealtimeWorkQueue, (__int64)v4) )
  {
    Blink = PassiveInterruptRealtimeWorkQueue.EntryListHead.Blink;
    ++PassiveInterruptRealtimeWorkQueue.Header.SignalState;
    v4->Flink = &PassiveInterruptRealtimeWorkQueue.EntryListHead;
    v4->Blink = Blink;
    if ( Blink->Flink != &PassiveInterruptRealtimeWorkQueue.EntryListHead )
      __fastfail(3u);
    Blink->Flink = v4;
    PassiveInterruptRealtimeWorkQueue.EntryListHead.Blink = v4;
  }
  _InterlockedAnd((volatile signed __int32 *)&PassiveInterruptRealtimeWorkQueue, 0xFFFFFF7F);
  KiExitDispatcher((signed __int64)CurrentPrcb, 0, 1u, 0, CurrentIrql);
}
