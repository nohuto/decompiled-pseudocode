/*
 * XREFs of ?Release@CHwStereoFullScreenRenderTarget@@UEAAKXZ @ 0x1800BCF90
 * Callers:
 *     ?Release@CHwStereoFullScreenRenderTarget@@WBIA@EAAKXZ @ 0x1800C1630 (-Release@CHwStereoFullScreenRenderTarget@@WBIA@EAAKXZ.c)
 *     ?Release@CHwStereoFullScreenRenderTarget@@WIA@EAAKXZ @ 0x1800C1640 (-Release@CHwStereoFullScreenRenderTarget@@WIA@EAAKXZ.c)
 *     ?Release@CHwStereoFullScreenRenderTarget@@WLA@EAAKXZ @ 0x1800C1650 (-Release@CHwStereoFullScreenRenderTarget@@WLA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::Release(CHwStereoFullScreenRenderTarget *this)
{
  return CMILCOMBase::InternalRelease((CHwStereoFullScreenRenderTarget *)((char *)this + 128));
}
