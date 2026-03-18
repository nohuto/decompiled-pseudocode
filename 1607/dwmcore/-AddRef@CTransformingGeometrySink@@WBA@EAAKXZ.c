/*
 * XREFs of ?AddRef@CTransformingGeometrySink@@WBA@EAAKXZ @ 0x1800C1B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CTransformingGeometrySink::AddRef(__int64 a1)
{
  return CBoundsBitmap::AddRef((CBoundsBitmap *)(a1 - 16));
}
