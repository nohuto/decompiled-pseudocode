/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WLI@EAAKXZ @ 0x1800C1950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwDisplayRenderTarget::Release((CHwDisplayRenderTarget *)(a1 - 184));
}
