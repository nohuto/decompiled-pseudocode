/*
 * XREFs of RtlMarkHiberPhase @ 0x1401132CC
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x1403CAFB4 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 */

void RtlMarkHiberPhase()
{
  PoSetHiberRange(0LL, 0x10000u, &XpressHashFunction, 0x600uLL, 0x73727058u);
  PoSetHiberRange(0LL, 0x10000u, &XpressHighBitIndexTable, 0x100uLL, 0x73727058u);
}
