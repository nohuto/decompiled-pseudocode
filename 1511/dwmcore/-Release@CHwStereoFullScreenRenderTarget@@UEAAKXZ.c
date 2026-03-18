/*
 * XREFs of ?Release@CHwStereoFullScreenRenderTarget@@UEAAKXZ @ 0x18002C620
 * Callers:
 *     ?Release@CHwStereoFullScreenRenderTarget@@WBHA@EAAKXZ @ 0x1800BDEB0 (-Release@CHwStereoFullScreenRenderTarget@@WBHA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WHI@EAAKXZ @ 0x1800BDEC0 (-Release@CHwTextureRenderTarget@@WHI@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WLA@EAAKXZ @ 0x1800BDED0 (-Release@CHwTextureRenderTarget@@WLA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WLI@EAAKXZ @ 0x1800BE0B0 (-Release@CHwTextureRenderTarget@@WLI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwStereoFullScreenRenderTarget::Release(CHwStereoFullScreenRenderTarget *this)
{
  return CMILCOMBase::InternalRelease((CHwStereoFullScreenRenderTarget *)((char *)this + 120));
}
