/*
 * XREFs of RtlMarkHiberPhase @ 0x14014D2A8
 * Callers:
 *     PopMarkComponentsBootPhase @ 0x1403F1A14 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     PoSetHiberRange @ 0x14014D3AC (PoSetHiberRange.c)
 */

void RtlMarkHiberPhase()
{
  PoSetHiberRange(0LL, 0x10000u, &XpressHashFunction, 0x600uLL, 0x73727058u);
  PoSetHiberRange(0LL, 0x10000u, &XpressHighBitIndexTable, 0x100uLL, 0x73727058u);
}
