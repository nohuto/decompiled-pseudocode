/*
 * XREFs of ExpCancelTimer @ 0x140091194
 * Callers:
 *     ExTimerRundown @ 0x14002D6A8 (ExTimerRundown.c)
 *     ExpSetTimer @ 0x140090DFC (ExpSetTimer.c)
 *     NtCancelTimer @ 0x1400EC6FC (NtCancelTimer.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140076D00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     KeRemoveQueueDpcEx @ 0x1400D948C (KeRemoveQueueDpcEx.c)
 *     KeRemoveQueueApc @ 0x1400ED8E4 (KeRemoveQueueApc.c)
 */

__int64 __fastcall ExpCancelTimer(PKTIMER a1)
{
  unsigned int v1; // edi
  __int64 result; // rax
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v6; // rdx

  v1 = 0;
  if ( (BYTE4(a1[3].Dpc) & 1) != 0 )
  {
    Blink = a1[1].Header.WaitListHead.Blink;
    KxAcquireSpinLock((PKSPIN_LOCK)&Blink[97]);
    Flink = a1[3].TimerListEntry.Flink;
    v6 = a1[3].TimerListEntry.Blink;
    if ( Flink->Blink != &a1[3].TimerListEntry || v6->Flink != &a1[3].TimerListEntry )
      __fastfail(3u);
    v6->Flink = Flink;
    Flink->Blink = v6;
    KxReleaseSpinLock((PKSPIN_LOCK)&Blink[97]);
    BYTE4(a1[3].Dpc) &= ~1u;
    if ( (BYTE4(a1[3].Dpc) & 2) != 0 && BYTE5(a1[3].Dpc)
      || KeCancelTimer(a1)
      || (unsigned __int8)KeRemoveQueueDpcEx(&a1[2].TimerListEntry, 0LL) )
    {
      v1 = 1;
    }
    if ( (unsigned __int8)KeRemoveQueueApc(&a1[1].Header.WaitListHead) )
      ++v1;
  }
  else
  {
    KeCancelTimer(a1);
  }
  result = v1;
  BYTE5(a1[3].Dpc) = 0;
  return result;
}
