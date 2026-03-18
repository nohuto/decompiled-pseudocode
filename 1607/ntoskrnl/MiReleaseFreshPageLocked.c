/*
 * XREFs of MiReleaseFreshPageLocked @ 0x1400221A4
 * Callers:
 *     MiRemoveAnyPage @ 0x140064740 (MiRemoveAnyPage.c)
 *     MiZeroSinglePage @ 0x140066B90 (MiZeroSinglePage.c)
 *     MiCoalesceFreePages @ 0x140067870 (MiCoalesceFreePages.c)
 *     MiReleaseFreshPage @ 0x1400AC5F4 (MiReleaseFreshPage.c)
 *     MiAllocateMostlyContiguous @ 0x140105140 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x1401063DC (MiClaimPhysicalRun.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1401209F0 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReleaseFreshPageLocked(__int64 a1)
{
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= 0xCFu;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(a1 + 32) = 0;
  return MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48);
}
