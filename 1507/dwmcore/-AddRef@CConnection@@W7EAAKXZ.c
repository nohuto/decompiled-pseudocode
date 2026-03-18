/*
 * XREFs of ?AddRef@CConnection@@W7EAAKXZ @ 0x18009A440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CConnection::AddRef(__int64 a1)
{
  return CRectangleGeometry::AddRef((CRectangleGeometry *)(a1 - 8));
}
