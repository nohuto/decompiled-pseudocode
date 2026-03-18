/*
 * XREFs of MiIsDecayPfn @ 0x1400A3DF8
 * Callers:
 *     MiReplaceTransitionPage @ 0x1401074C4 (MiReplaceTransitionPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1401209F0 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1401F3ACC (MiSwapNumaStandbyPage.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsDecayPfn(unsigned __int64 a1)
{
  return a1 >= qword_140327360 && a1 < qword_140327360 + 2048;
}
