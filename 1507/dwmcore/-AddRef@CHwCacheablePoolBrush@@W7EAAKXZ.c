/*
 * XREFs of ?AddRef@CHwCacheablePoolBrush@@W7EAAKXZ @ 0x18009B6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwCacheablePoolBrush::AddRef(__int64 a1)
{
  return CWARPCallbackRenderer::AddRef((CWARPCallbackRenderer *)(a1 - 8));
}
