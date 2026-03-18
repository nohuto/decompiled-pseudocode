/*
 * XREFs of ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x180004140
 * Callers:
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x180032D90 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800924F4 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?Unlock@CBitmapLock@@IEAAXXZ @ 0x1800A1EB0 (-Unlock@CBitmapLock@@IEAAXXZ.c)
 *     ?Release@CDesktopRenderTarget@@WFA@EAAKXZ @ 0x1800BCAE0 (-Release@CDesktopRenderTarget@@WFA@EAAKXZ.c)
 *     ?Release@CCompressedSourceBitmap@@WBAA@EAAKXZ @ 0x1800BCBC0 (-Release@CCompressedSourceBitmap@@WBAA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x1800BCBD0 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CCoRenderContent@@WCI@EAAKXZ @ 0x1800BD050 (-Release@CCoRenderContent@@WCI@EAAKXZ.c)
 *     ?Release@CDesktopRenderTarget@@WDA@EAAKXZ @ 0x1800BD060 (-Release@CDesktopRenderTarget@@WDA@EAAKXZ.c)
 *     ?Release@GeometrySink@CDrawListPrimitiveBuilder@@WBA@EAAKXZ @ 0x1800BDBA0 (-Release@GeometrySink@CDrawListPrimitiveBuilder@@WBA@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WHA@EAAKXZ @ 0x1800BE2A0 (-Release@CSecondaryD2DBitmap@@WHA@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x1800BE4F0 (-Release@CWICBitmapWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x1800BE5A0 (-Release@CSecondaryD2DBitmap@@WBAI@EAAKXZ.c)
 *     ?Release@CFormatConverter@@WEI@EAAKXZ @ 0x1800BE600 (-Release@CFormatConverter@@WEI@EAAKXZ.c)
 *     ?Release@CMILBrushLinearGradient@@WDI@EAAKXZ @ 0x1800BF220 (-Release@CMILBrushLinearGradient@@WDI@EAAKXZ.c)
 *     ?Release@CMILBrushLinearGradient@@WOI@EAAKXZ @ 0x1800BF290 (-Release@CMILBrushLinearGradient@@WOI@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBNI@EAAKXZ @ 0x1800BF410 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBNI@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WHI@EAAKXZ @ 0x1800BF480 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WHI@EAAKXZ.c)
 *     ?Release@CDxHandleYUVBitmapRealization@@WCAI@EAAKXZ @ 0x1800BF490 (-Release@CDxHandleYUVBitmapRealization@@WCAI@EAAKXZ.c)
 *     ?Release@CD2DBitmap@@WGI@EAAKXZ @ 0x1800BF4D0 (-Release@CD2DBitmap@@WGI@EAAKXZ.c)
 *     ?Release@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800BF530 (-Release@CSecondarySysmemBitmap@@WGA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CDxHandleYUVBitmapRealization::Release(CDxHandleYUVBitmapRealization *this)
{
  return CMILCOMBase::InternalRelease(this);
}
