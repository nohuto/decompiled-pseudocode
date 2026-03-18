/*
 * XREFs of ViGenericIsValidIrpStatus @ 0x1406B7AF4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ViGenericIsValidIrpStatus(__int64 a1, unsigned int a2)
{
  return IoIsValidIrpStatus(a2);
}
