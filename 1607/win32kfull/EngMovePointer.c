/*
 * XREFs of EngMovePointer @ 0x1C025E300
 * Callers:
 *     <none>
 * Callees:
 *     EngpMovePointer @ 0x1C025E314 (EngpMovePointer.c)
 */

void __stdcall EngMovePointer(SURFOBJ *pso, LONG x, LONG y, RECTL *prcl)
{
  EngpMovePointer(pso, x, y, 0);
}
