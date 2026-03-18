/*
 * XREFs of ?AddRef@CHwCacheablePoolBrush@@WCA@EAAKXZ @ 0x1800BE480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwCacheablePoolBrush::AddRef(__int64 a1)
{
  return CWARPCallbackRenderer::AddRef((CWARPCallbackRenderer *)(a1 - 32));
}
