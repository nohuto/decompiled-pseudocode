/*
 * XREFs of EngMovePointer @ 0x1C0262060
 * Callers:
 *     <none>
 * Callees:
 *     EngpMovePointer @ 0x1C02621C4 (EngpMovePointer.c)
 */

void __stdcall EngMovePointer(SURFOBJ *pso, LONG x, LONG y, RECTL *prcl)
{
  EngpMovePointer(pso, x, y);
}
