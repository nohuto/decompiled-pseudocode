/*
 * XREFs of ?AddRef@CHwStereoFullScreenRenderTarget@@UEAAKXZ @ 0x180082AE0
 * Callers:
 *     ?AddRef@CHwStereoFullScreenRenderTarget@@WBHA@EAAKXZ @ 0x18009B160 (-AddRef@CHwStereoFullScreenRenderTarget@@WBHA@EAAKXZ.c)
 *     ?AddRef@CHwStereoFullScreenRenderTarget@@WHI@EAAKXZ @ 0x18009B170 (-AddRef@CHwStereoFullScreenRenderTarget@@WHI@EAAKXZ.c)
 *     ?AddRef@CHwTextureRenderTarget@@WLA@EAAKXZ @ 0x18009B260 (-AddRef@CHwTextureRenderTarget@@WLA@EAAKXZ.c)
 *     ?AddRef@CHwTextureRenderTarget@@WLI@EAAKXZ @ 0x18009B270 (-AddRef@CHwTextureRenderTarget@@WLI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::AddRef(CHwStereoFullScreenRenderTarget *this)
{
  return CBitmapOfDeviceBitmaps::AddRef((CHwStereoFullScreenRenderTarget *)((char *)this + 120));
}
