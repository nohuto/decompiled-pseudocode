/*
 * XREFs of ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x18002F680
 * Callers:
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18004C6FC (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x180054FD0 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     ?Unlock@CBitmapLock@@IEAAXXZ @ 0x18009E610 (-Unlock@CBitmapLock@@IEAAXXZ.c)
 *     ?Release@CDesktopRenderTarget@@WHA@EAAKXZ @ 0x1800BF800 (-Release@CDesktopRenderTarget@@WHA@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WHI@EAAKXZ @ 0x1800BF810 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WHI@EAAKXZ.c)
 *     ?Release@CDesktopRenderTarget@@WJI@EAAKXZ @ 0x1800BF8F0 (-Release@CDesktopRenderTarget@@WJI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x1800BFA30 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCI@EAAKXZ @ 0x1800BFA40 (-Release@CWICBitmapWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800C0080 (-Release@CSecondarySysmemBitmap@@WGA@EAAKXZ.c)
 *     ?Release@GeometrySink@CDrawListPrimitiveBuilder@@WBA@EAAKXZ @ 0x1800C0170 (-Release@GeometrySink@CDrawListPrimitiveBuilder@@WBA@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x1800C0180 (-Release@CSecondaryD2DBitmap@@WBAI@EAAKXZ.c)
 *     ?Release@CD2DBitmap@@WGI@EAAKXZ @ 0x1800C0190 (-Release@CD2DBitmap@@WGI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x1800C1C60 (-Release@CWICBitmapWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CBitmapLock@@WFA@EAAKXZ @ 0x1800C1CE0 (-Release@CBitmapLock@@WFA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WBAA@EAAKXZ @ 0x1800C1D60 (-Release@CCompressedSourceBitmap@@WBAA@EAAKXZ.c)
 *     ?Release@CSystemMemoryBitmap@@WDA@EAAKXZ @ 0x1800C1D70 (-Release@CSystemMemoryBitmap@@WDA@EAAKXZ.c)
 *     ?Release@CFormatConverter@@WEI@EAAKXZ @ 0x1800C1DA0 (-Release@CFormatConverter@@WEI@EAAKXZ.c)
 *     ?Release@CMILBrushLinearGradient@@WDI@EAAKXZ @ 0x1800C2720 (-Release@CMILBrushLinearGradient@@WDI@EAAKXZ.c)
 *     ?Release@CMILBrushLinearGradient@@WOI@EAAKXZ @ 0x1800C2730 (-Release@CMILBrushLinearGradient@@WOI@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAKXZ @ 0x1800C28E0 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAKXZ.c)
 *     ?Release@CDxHandleYUVBitmapRealization@@WBKA@EAAKXZ @ 0x1800C2940 (-Release@CDxHandleYUVBitmapRealization@@WBKA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CDxHandleYUVBitmapRealization::Release(CMILCOMBase *this)
{
  return CMILCOMBase::InternalRelease(this);
}
