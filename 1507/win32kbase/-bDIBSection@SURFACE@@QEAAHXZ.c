/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1C006A0C0
 * Callers:
 *     GreMakeBitmapNonStock @ 0x1C006A000 (GreMakeBitmapNonStock.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00B72F0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SURFACE::bDIBSection(SURFACE *this)
{
  return !*((_WORD *)this + 50) && *((_QWORD *)this + 23);
}
