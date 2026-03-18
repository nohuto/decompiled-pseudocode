/*
 * XREFs of EngMovePointer @ 0x140344C20
 * Callers:
 *     <none>
 * Callees:
 *     EngpMovePointer @ 0x14001AD74 (EngpMovePointer.c)
 */

void __stdcall EngMovePointer(SURFOBJ *pso, LONG x, LONG y, RECTL *prcl)
{
  EngpMovePointer(pso, x, y, (__int64)prcl, 0);
}
