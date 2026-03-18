/*
 * XREFs of KiUpdateThreadPriority @ 0x140091DA8
 * Callers:
 *     KiDeferredReadyThread @ 0x140056AC0 (KiDeferredReadyThread.c)
 *     ExpApplyPriorityBoost @ 0x14005D2D0 (ExpApplyPriorityBoost.c)
 *     KiSetPriorityBoost @ 0x140091A7C (KiSetPriorityBoost.c)
 *     NtYieldExecution @ 0x140091AF0 (NtYieldExecution.c)
 *     KiApplyForegroundBoostThread @ 0x1400CAD5C (KiApplyForegroundBoostThread.c)
 *     KiQueueReadyThread @ 0x1400D0C70 (KiQueueReadyThread.c)
 *     KiSetPriorityThread @ 0x1400D2BA0 (KiSetPriorityThread.c)
 *     KeSetPriorityThread @ 0x1400D2F20 (KeSetPriorityThread.c)
 *     KeStartThread @ 0x1400F2A6C (KeStartThread.c)
 *     KeTransitionProcessorParkState @ 0x1401DBC78 (KeTransitionProcessorParkState.c)
 *     KiCompleteKernelInit @ 0x1403D46A0 (KiCompleteKernelInit.c)
 * Callees:
 *     KiAbQueueAutoBoostDpc @ 0x14006C668 (KiAbQueueAutoBoostDpc.c)
 *     KiQueryEffectivePriorityThread @ 0x1400D016C (KiQueryEffectivePriorityThread.c)
 */

void __fastcall KiUpdateThreadPriority(__int64 a1, __int64 a2, char a3, char a4)
{
  struct _KPRCB *CurrentPrcb; // rcx
  char EffectivePriorityThread; // di
  struct _SINGLE_LIST_ENTRY *v9; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8

  CurrentPrcb = KeGetCurrentPrcb();
  EffectivePriorityThread = a3;
  if ( a3 > *(char *)(a2 + 195) )
  {
    if ( *(_BYTE *)(a2 + 793) )
    {
      v9 = (struct _SINGLE_LIST_ENTRY *)(a2 + 1376);
      if ( v9->Next == (struct _SINGLE_LIST_ENTRY *)1 )
      {
        p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
        if ( CurrentPrcb != (struct _KPRCB *)-25784LL )
        {
          v9->Next = p_AbPropagateBoostsList->Next;
          p_AbPropagateBoostsList->Next = v9;
          _InterlockedAdd16((volatile signed __int16 *)(a2 + 1420), 1u);
          KiAbQueueAutoBoostDpc((__int64)CurrentPrcb);
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
