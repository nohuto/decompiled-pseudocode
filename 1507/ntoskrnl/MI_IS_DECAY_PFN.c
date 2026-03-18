/*
 * XREFs of MI_IS_DECAY_PFN @ 0x14011B378
 * Callers:
 *     MiReplaceTransitionPage @ 0x140059C70 (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140145090 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x14022E2D8 (MiSwapNumaStandbyPage.c)
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_DECAY_PFN(unsigned __int64 a1)
{
  return a1 >= qword_14034F420 && a1 < qword_14034F420 + 2048;
}
