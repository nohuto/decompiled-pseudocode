/*
 * XREFs of ?AddRef@CHwCacheablePoolBrush@@W7EAAKXZ @ 0x1800C0DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwCacheablePoolBrush::AddRef(__int64 a1)
{
  return CSpringForce::AddRef((CSpringForce *)(a1 - 8));
}
