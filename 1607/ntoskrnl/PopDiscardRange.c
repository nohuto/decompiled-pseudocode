/*
 * XREFs of PopDiscardRange @ 0x1403CB7B8
 * Callers:
 *     PoSetHiberRange @ 0x140112E60 (PoSetHiberRange.c)
 *     PopSetRange @ 0x140113088 (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x14052F5C4 (PopAllocateHiberContext.c)
 * Callees:
 *     <none>
 */

void __fastcall PopDiscardRange(struct _RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
