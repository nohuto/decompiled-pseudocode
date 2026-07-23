/*
 * XREFs of PopDiscardRange @ 0x14039FAB8
 * Callers:
 *     PoSetHiberRange @ 0x1401188B0 (PoSetHiberRange.c)
 *     PopSetRange @ 0x140118AC4 (PopSetRange.c)
 *     PopAllocateHiberContext @ 0x1404F64C8 (PopAllocateHiberContext.c)
 * Callees:
 *     <none>
 */

void __fastcall PopDiscardRange(_RTL_BITMAP *a1, ULONG a2, ULONG a3)
{
  RtlSetBits(a1 + 2, a2, a3);
}
