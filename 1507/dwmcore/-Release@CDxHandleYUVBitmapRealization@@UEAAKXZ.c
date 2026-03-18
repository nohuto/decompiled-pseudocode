/*
 * XREFs of ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x180015F00
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18006E6A8 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?Release@CCompressedSourceBitmap@@WBAA@EAAKXZ @ 0x180099EA0 (-Release@CCompressedSourceBitmap@@WBAA@EAAKXZ.c)
 *     ?Release@CPropertyBagBase@@WCI@EAAKXZ @ 0x180099EB0 (-Release@CPropertyBagBase@@WCI@EAAKXZ.c)
 *     ?Release@CTranslateTransform3D@@OGI@EAAKXZ @ 0x18009A380 (-Release@CTranslateTransform3D@@OGI@EAAKXZ.c)
 *     ?Release@GeometrySink@CDrawListPrimitiveBuilder@@WBA@EAAKXZ @ 0x18009A500 (-Release@GeometrySink@CDrawListPrimitiveBuilder@@WBA@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WHI@EAAKXZ @ 0x18009B560 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WHI@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x18009B7B0 (-Release@CSecondaryD2DBitmap@@WBAI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WCA@EAAKXZ @ 0x18009B7C0 (-Release@CWICBitmapWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CDesktopRenderTarget@@WDA@EAAKXZ @ 0x18009B7D0 (-Release@CDesktopRenderTarget@@WDA@EAAKXZ.c)
 *     ?Release@CDesktopRenderTarget@@WFA@EAAKXZ @ 0x18009B850 (-Release@CDesktopRenderTarget@@WFA@EAAKXZ.c)
 *     ?Release@CFormatConverter@@WEI@EAAKXZ @ 0x18009B880 (-Release@CFormatConverter@@WEI@EAAKXZ.c)
 *     ?Release@CWICBitmapWrapper@@WBI@EAAKXZ @ 0x18009BE30 (-Release@CWICBitmapWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CMILBrushLinearGradient@@WDI@EAAKXZ @ 0x18009BE40 (-Release@CMILBrushLinearGradient@@WDI@EAAKXZ.c)
 *     ?Release@CMILBrushLinearGradient@@WOI@EAAKXZ @ 0x18009BE50 (-Release@CMILBrushLinearGradient@@WOI@EAAKXZ.c)
 *     ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBNI@EAAKXZ @ 0x18009BFE0 (-Release@CDxHandleAdvancedDirectFlipBitmapRealization@@WBNI@EAAKXZ.c)
 *     ?Release@CDxHandleYUVBitmapRealization@@WCAI@EAAKXZ @ 0x18009C050 (-Release@CDxHandleYUVBitmapRealization@@WCAI@EAAKXZ.c)
 *     ?Release@CSecondaryD2DBitmap@@WHA@EAAKXZ @ 0x18009C060 (-Release@CSecondaryD2DBitmap@@WHA@EAAKXZ.c)
 *     ?Release@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x18009C150 (-Release@CSecondarySysmemBitmap@@WGA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CDxHandleYUVBitmapRealization::Release(CDxHandleYUVBitmapRealization *this)
{
  return CMILCOMBase::InternalRelease(this);
}
