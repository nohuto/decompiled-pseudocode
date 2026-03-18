/*
 * XREFs of ExpTimerResume @ 0x14012D1AC
 * Callers:
 *     ExTimerResume @ 0x14012D148 (ExTimerResume.c)
 *     ExWakeTimersResume @ 0x140148924 (ExWakeTimersResume.c)
 *     ExRemoveVirtualizedTimer @ 0x1402648D4 (ExRemoveVirtualizedTimer.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 */

char __fastcall ExpTimerResume(PKTIMER Timer, __int64 a2)
{
  int v2; // edi
  struct _LIST_ENTRY *Blink; // rdx
  struct _KDPC *Dpc; // rcx
  ULONG v7; // r8d

  v2 = BYTE5(Timer[3].Dpc);
  if ( BYTE5(Timer[3].Dpc) )
  {
    Blink = Timer[4].TimerListEntry.Blink;
    if ( v2 == 3 )
    {
      Blink = (struct _LIST_ENTRY *)(a2 - (_QWORD)Blink);
      if ( SHIDWORD(Blink) >= 0 )
        Blink = 0LL;
    }
    Dpc = 0LL;
    v7 = (ULONG)Timer[3].Dpc;
    if ( (BYTE4(Timer[3].Dpc) & 1) != 0 )
    {
      Dpc = (struct _KDPC *)&Timer[2].TimerListEntry;
      v7 = 0;
    }
    LOBYTE(a2) = KeSetCoalescableTimer(Timer, (LARGE_INTEGER)Blink, v7, (ULONG)Timer[4].Dpc, Dpc);
    if ( v2 == 3 )
      _interlockedbittestandset(&Timer->Header.Lock, 9u);
  }
  BYTE4(Timer[3].Dpc) &= ~2u;
  return a2;
}
