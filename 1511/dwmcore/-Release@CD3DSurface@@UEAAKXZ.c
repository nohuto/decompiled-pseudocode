/*
 * XREFs of ?Release@CD3DSurface@@UEAAKXZ @ 0x180027B50
 * Callers:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180010E18 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Release@CHwBitmapCache@@WIA@EAAKXZ @ 0x1800BE130 (-Release@CHwBitmapCache@@WIA@EAAKXZ.c)
 *     ?Release@CD3DResource@@WBI@EAAKXZ @ 0x1800BE150 (-Release@CD3DResource@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CD3DSurface::Release(CD3DSurface *this)
{
  return CMILPoolResource::Release(this);
}
