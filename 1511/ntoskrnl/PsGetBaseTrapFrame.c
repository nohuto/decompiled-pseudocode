/*
 * XREFs of PsGetBaseTrapFrame @ 0x1401F53C4
 * Callers:
 *     PsPicoWalkUserStack @ 0x1406430F8 (PsPicoWalkUserStack.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall PsGetBaseTrapFrame(__int64 a1)
{
  return PspGetBaseTrapFrame(a1);
}
