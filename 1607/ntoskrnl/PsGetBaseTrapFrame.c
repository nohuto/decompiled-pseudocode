/*
 * XREFs of PsGetBaseTrapFrame @ 0x14020EED4
 * Callers:
 *     PsPicoWalkUserStack @ 0x140681490 (PsPicoWalkUserStack.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall PsGetBaseTrapFrame(__int64 a1)
{
  return PspGetBaseTrapFrame(a1);
}
