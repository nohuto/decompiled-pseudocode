/*
 * XREFs of ?Release@CD3DSurface@@UEAAKXZ @ 0x180079680
 * Callers:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180013898 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Release@CHwBitmapCache@@WIA@EAAKXZ @ 0x1800C19D0 (-Release@CHwBitmapCache@@WIA@EAAKXZ.c)
 *     ?Release@CD3DResource@@WBI@EAAKXZ @ 0x1800C1AF0 (-Release@CD3DResource@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CD3DSurface::Release(CD3DSurface *this)
{
  return CMILPoolResource::Release(this);
}
