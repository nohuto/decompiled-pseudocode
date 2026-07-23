/*
 * XREFs of MiReleaseFreshPageLocked @ 0x140021D24
 * Callers:
 *     MiRemoveAnyPage @ 0x1400642C0 (MiRemoveAnyPage.c)
 *     MiZeroSinglePage @ 0x140066710 (MiZeroSinglePage.c)
 *     MiCoalesceFreePages @ 0x1400673F0 (MiCoalesceFreePages.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     MiAllocateMostlyContiguous @ 0x140102EC0 (MiAllocateMostlyContiguous.c)
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140120F60 (MiRemoveLowestPriorityStandbyPage.c)
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
