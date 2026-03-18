/*
 * XREFs of ?AddRef@CHwCacheablePoolBrush@@W7EAAKXZ @ 0x1800BF600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwCacheablePoolBrush::AddRef(__int64 a1)
{
  return CWARPCallbackRenderer::AddRef((CWARPCallbackRenderer *)(a1 - 8));
}
