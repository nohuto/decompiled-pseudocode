/*
 * XREFs of ExpCancelTimer @ 0x140066750
 * Callers:
 *     ExTimerRundown @ 0x14000E370 (ExTimerRundown.c)
 *     ExpSetTimer @ 0x140065EC0 (ExpSetTimer.c)
 *     NtCancelTimer @ 0x140129E6C (NtCancelTimer.c)
 * Callees:
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     KiCancelTimer @ 0x140066B50 (KiCancelTimer.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KeRemoveQueueDpcEx @ 0x14010C9A0 (KeRemoveQueueDpcEx.c)
 *     KeRemoveQueueApc @ 0x140128588 (KeRemoveQueueApc.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ExpCancelTimer(PKTIMER a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned __int8 CurrentIrql; // di
  volatile signed __int32 *v6; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  if ( (BYTE4(a1[3].Dpc) & 1) != 0 )
  {
    v6 = (volatile signed __int32 *)&a1[1].Header.WaitListHead.Blink[97];
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(&a1[1].Header.WaitListHead.Blink[97]);
    }
    else if ( _interlockedbittestandset64(v6, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v6);
    }
    Flink = a1[3].TimerListEntry.Flink;
    Blink = a1[3].TimerListEntry.Blink;
    if ( Flink->Blink != &a1[3].TimerListEntry || Blink->Flink != &a1[3].TimerListEntry )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v6, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
    BYTE4(a1[3].Dpc) &= ~1u;
    if ( (BYTE4(a1[3].Dpc) & 2) != 0 && BYTE5(a1[3].Dpc)
      || KeCancelTimer(a1)
      || (unsigned __int8)KeRemoveQueueDpcEx(&a1[2].TimerListEntry, 0LL) )
    {
      v2 = 1;
    }
    if ( (unsigned __int8)KeRemoveQueueApc(&a1[1].Header.WaitListHead) )
      ++v2;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    LOBYTE(a2) = 1;
    KiCancelTimer(a1, a2);
    __writecr8(CurrentIrql);
  }
  BYTE5(a1[3].Dpc) = 0;
  return v2;
}
