/*
 * XREFs of KiUpdateThreadPriority @ 0x14007D120
 * Callers:
 *     KeStartThread @ 0x140028824 (KeStartThread.c)
 *     NtYieldExecution @ 0x1400290C0 (NtYieldExecution.c)
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiSetPriorityThread @ 0x14007BEA0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14007D1E0 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     ExpApplyPriorityBoost @ 0x14007EC80 (ExpApplyPriorityBoost.c)
 *     KiDeferredReadyThread @ 0x140087D50 (KiDeferredReadyThread.c)
 *     KiApplyForegroundBoostThread @ 0x1400959C4 (KiApplyForegroundBoostThread.c)
 *     KiSetPriorityBoost @ 0x140102184 (KiSetPriorityBoost.c)
 *     KeTransitionProcessorParkState @ 0x1401CBFEC (KeTransitionProcessorParkState.c)
 *     KiCompleteKernelInit @ 0x1403A9A9C (KiCompleteKernelInit.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x140014D6C (KiQueryEffectivePriorityThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010287C (KiAbQueueAutoBoostDpc.c)
 */

void __fastcall KiUpdateThreadPriority(__int64 a1, __int64 a2, char a3, char a4)
{
  char EffectivePriorityThread; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _SINGLE_LIST_ENTRY *v9; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx

  EffectivePriorityThread = a3;
  if ( KiAbEnabled )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( a3 > *(char *)(a2 + 195) )
    {
      if ( *(_BYTE *)(a2 + 793) )
      {
        v9 = (struct _SINGLE_LIST_ENTRY *)(a2 + 1376);
        if ( *(_QWORD *)(a2 + 1376) == 1LL )
        {
          p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
          if ( CurrentPrcb != (struct _KPRCB *)-25656LL )
          {
            v9->Next = p_AbPropagateBoostsList->Next;
            p_AbPropagateBoostsList->Next = v9;
            _InterlockedIncrement16((volatile signed __int16 *)(a2 + 1416));
            KiAbQueueAutoBoostDpc(CurrentPrcb);
          }
        }
      }
    }
  }
  *(_BYTE *)(a2 + 195) = EffectivePriorityThread;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 2) & 4) != 0 )
      EffectivePriorityThread = KiQueryEffectivePriorityThread(a2, a1);
    **(_BYTE **)(a1 + 56) = EffectivePriorityThread;
  }
}
