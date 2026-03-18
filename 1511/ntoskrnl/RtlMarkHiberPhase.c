/*
 * XREFs of RtlMarkHiberPhase @ 0x1401187AC
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x14039F020 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x1401188B0 (PoSetHiberRange.c)
 */

void RtlMarkHiberPhase()
{
  PoSetHiberRange(0LL, 0x10000u, &XpressHashFunction, 0x600uLL, 0x73727058u);
  PoSetHiberRange(0LL, 0x10000u, &XpressHighBitIndexTable, 0x100uLL, 0x73727058u);
}
