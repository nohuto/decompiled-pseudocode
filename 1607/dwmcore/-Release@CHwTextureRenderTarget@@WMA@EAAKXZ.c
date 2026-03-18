/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WMA@EAAKXZ @ 0x1800C1960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwDisplayRenderTarget::Release((CHwDisplayRenderTarget *)(a1 - 192));
}
