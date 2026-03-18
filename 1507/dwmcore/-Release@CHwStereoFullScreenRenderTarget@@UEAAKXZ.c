/*
 * XREFs of ?Release@CHwStereoFullScreenRenderTarget@@UEAAKXZ @ 0x180082AA0
 * Callers:
 *     ?Release@CHwStereoFullScreenRenderTarget@@WBHA@EAAKXZ @ 0x18009B200 (-Release@CHwStereoFullScreenRenderTarget@@WBHA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WHI@EAAKXZ @ 0x18009B3B0 (-Release@CHwTextureRenderTarget@@WHI@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WLA@EAAKXZ @ 0x18009B3C0 (-Release@CHwTextureRenderTarget@@WLA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WLI@EAAKXZ @ 0x18009B3D0 (-Release@CHwTextureRenderTarget@@WLI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::Release(CHwStereoFullScreenRenderTarget *this)
{
  return CMILCOMBase::InternalRelease((CHwStereoFullScreenRenderTarget *)((char *)this + 120));
}
