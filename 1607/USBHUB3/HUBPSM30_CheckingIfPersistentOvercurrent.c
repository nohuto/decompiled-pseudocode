/*
 * XREFs of HUBPSM30_CheckingIfPersistentOvercurrent @ 0x1C000DA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_CheckingIfPersistentOvercurrent(__int64 a1)
{
  return HUBHTX_IncrementAndCheckIfOverCurrentCountExceededMax(*(_QWORD *)(a1 + 960));
}
