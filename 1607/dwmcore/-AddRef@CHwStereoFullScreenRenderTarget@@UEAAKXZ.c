/*
 * XREFs of ?AddRef@CHwStereoFullScreenRenderTarget@@UEAAKXZ @ 0x18017A460
 * Callers:
 *     ?AddRef@CHwStereoFullScreenRenderTarget@@WBIA@EAAKXZ @ 0x1800C1590 (-AddRef@CHwStereoFullScreenRenderTarget@@WBIA@EAAKXZ.c)
 *     ?AddRef@CHwStereoFullScreenRenderTarget@@WIA@EAAKXZ @ 0x1800C15A0 (-AddRef@CHwStereoFullScreenRenderTarget@@WIA@EAAKXZ.c)
 *     ?AddRef@CHwStereoFullScreenRenderTarget@@WLA@EAAKXZ @ 0x1800C15B0 (-AddRef@CHwStereoFullScreenRenderTarget@@WLA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::AddRef(CHwStereoFullScreenRenderTarget *this)
{
  return CBitmapOfDeviceBitmaps::AddRef((CHwStereoFullScreenRenderTarget *)((char *)this + 128));
}
