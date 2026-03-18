/*
 * XREFs of ?AddRef@CHwStereoFullScreenRenderTarget@@UEAAKXZ @ 0x18002CDA0
 * Callers:
 *     ?AddRef@CHwStereoFullScreenRenderTarget@@WBHA@EAAKXZ @ 0x1800BDE20 (-AddRef@CHwStereoFullScreenRenderTarget@@WBHA@EAAKXZ.c)
 *     ?AddRef@CHwStereoFullScreenRenderTarget@@WHI@EAAKXZ @ 0x1800BDE30 (-AddRef@CHwStereoFullScreenRenderTarget@@WHI@EAAKXZ.c)
 *     ?AddRef@CHwTextureRenderTarget@@WLA@EAAKXZ @ 0x1800BDF30 (-AddRef@CHwTextureRenderTarget@@WLA@EAAKXZ.c)
 *     ?AddRef@CHwTextureRenderTarget@@WLI@EAAKXZ @ 0x1800BDF40 (-AddRef@CHwTextureRenderTarget@@WLI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::AddRef(CHwStereoFullScreenRenderTarget *this)
{
  return CBitmapOfDeviceBitmaps::AddRef((CHwStereoFullScreenRenderTarget *)((char *)this + 120));
}
