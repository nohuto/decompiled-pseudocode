/*
 * XREFs of ExpCancelTimer @ 0x1400EE1E4
 * Callers:
 *     NtCancelTimer @ 0x1400EDFA0 (NtCancelTimer.c)
 *     ExpSetTimer @ 0x1400EF85C (ExpSetTimer.c)
 *     ExTimerRundown @ 0x1400F0A4C (ExTimerRundown.c)
 * Callees:
 *     KiCancelTimer @ 0x140058050 (KiCancelTimer.c)
 *     KeRemoveQueueDpcEx @ 0x140085D28 (KeRemoveQueueDpcEx.c)
 *     KxAcquireSpinLock @ 0x140092A60 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140095BA0 (KxReleaseSpinLock.c)
 *     KeRemoveQueueApc @ 0x1400AF37C (KeRemoveQueueApc.c)
 *     KeCancelTimer @ 0x1400C3480 (KeCancelTimer.c)
 */

__int64 __fastcall ExpCancelTimer(PKTIMER a1)
{
  unsigned int v1; // esi
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  struct _LIST_ENTRY *Blink; // rbx
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *v7; // rdx

  v1 = 0;
  if ( (BYTE4(a1[3].Dpc) & 1) != 0 )
  {
    Blink = a1[1].Header.WaitListHead.Blink;
    KxAcquireSpinLock((PKSPIN_LOCK)&Blink[97].Blink);
    Flink = a1[3].TimerListEntry.Flink;
    v7 = a1[3].TimerListEntry.Blink;
    if ( Flink->Blink != &a1[3].TimerListEntry || v7->Flink != &a1[3].TimerListEntry )
      __fastfail(3u);
    v7->Flink = Flink;
    Flink->Blink = v7;
    KxReleaseSpinLock((PKSPIN_LOCK)&Blink[97].Blink);
    BYTE4(a1[3].Dpc) &= ~1u;
    if ( (BYTE4(a1[3].Dpc) & 2) != 0 && BYTE5(a1[3].Dpc)
      || KeCancelTimer(a1)
      || KeRemoveQueueDpcEx((int *)&a1[2].TimerListEntry, 0) )
    {
      v1 = 1;
    }
    if ( (unsigned __int8)KeRemoveQueueApc((__int64)&a1[1].Header.WaitListHead) )
      ++v1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    KiCancelTimer((__int64)a1, 1);
    __writecr8(CurrentIrql);
  }
  result = v1;
  BYTE5(a1[3].Dpc) = 0;
  return result;
}
