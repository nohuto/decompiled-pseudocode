/*
 * XREFs of RtlMarkHiberPhase @ 0x140112D5C
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x1403CAFB4 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x140112E60 (PoSetHiberRange.c)
 */

void RtlMarkHiberPhase()
{
  PoSetHiberRange(0LL, 0x10000u, &XpressHashFunction, 0x600uLL, 0x73727058u);
  PoSetHiberRange(0LL, 0x10000u, &XpressHighBitIndexTable, 0x100uLL, 0x73727058u);
}
