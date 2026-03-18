/*
 * XREFs of PsGetBaseTrapFrame @ 0x14020F0A8
 * Callers:
 *     PsPicoWalkUserStack @ 0x1406813AC (PsPicoWalkUserStack.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall PsGetBaseTrapFrame(__int64 a1)
{
  return PspGetBaseTrapFrame(a1);
}
