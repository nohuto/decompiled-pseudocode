/*
 * XREFs of PopDiscardRange @ 0x1403CB7B8
 * Callers:
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 *     PopSetRange @ 0x1401135F8 (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x14052FB04 (PopAllocateHiberContext.c)
 * Callees:
 *     <none>
 */

void __fastcall PopDiscardRange(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
