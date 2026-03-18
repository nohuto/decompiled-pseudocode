/*
 * XREFs of MI_IS_DECAY_PFN @ 0x1400E55E4
 * Callers:
 *     MiReplaceTransitionPage @ 0x1400714A0 (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140112420 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401E4470 (MiSwapNumaStandbyPage.c)
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_DECAY_PFN(unsigned __int64 a1)
{
  return a1 >= qword_1402FEF60 && a1 < qword_1402FEF60 + 2048;
}
