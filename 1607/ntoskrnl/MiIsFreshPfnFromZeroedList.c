/*
 * XREFs of MiIsFreshPfnFromZeroedList @ 0x1401F2AA4
 * Callers:
 *     MiCoalesceFreePages @ 0x1400673F0 (MiCoalesceFreePages.c)
 *     MiPfnZeroingNeeded @ 0x140104F58 (MiPfnZeroingNeeded.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsFreshPfnFromZeroedList(__int64 a1)
{
  return (*(_DWORD *)(a1 + 16) & 0x3E0LL) == 0;
}
