/*
 * XREFs of ?Release@CD3DSurface@@UEAAKXZ @ 0x180014600
 * Callers:
 *     ?Release@CD3DResource@@WBI@EAAKXZ @ 0x18009AD90 (-Release@CD3DResource@@WBI@EAAKXZ.c)
 *     ?Release@CHwBitmapCache@@WIA@EAAKXZ @ 0x18009B410 (-Release@CHwBitmapCache@@WIA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CD3DSurface::Release(CD3DSurface *this)
{
  return CMILPoolResource::Release(this);
}
