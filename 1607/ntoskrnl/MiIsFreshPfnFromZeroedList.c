/*
 * XREFs of MiIsFreshPfnFromZeroedList @ 0x1401F2C78
 * Callers:
 *     MiCoalesceFreePages @ 0x140067870 (MiCoalesceFreePages.c)
 *     MiPfnZeroingNeeded @ 0x1401071D8 (MiPfnZeroingNeeded.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsFreshPfnFromZeroedList(__int64 a1)
{
  return (*(_DWORD *)(a1 + 16) & 0x3E0LL) == 0;
}
