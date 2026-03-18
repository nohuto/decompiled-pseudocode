/*
 * XREFs of ?AddRef@CBoundsBitmap@@UEAAKXZ @ 0x180027050
 * Callers:
 *     ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x180027A08 (-Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAP.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180085ED8 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180089310 (-HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@IPEAPEAV1@@Z @ 0x1800ADD4C (-CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@A.c)
 *     ?AddRef@CRenderTarget@@WCI@EAAKXZ @ 0x1800BC9E0 (-AddRef@CRenderTarget@@WCI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WFA@EAAKXZ @ 0x1800BCA10 (-AddRef@CBitmapLock@@WFA@EAAKXZ.c)
 *     ?AddRef@CHwndRenderTarget@@WDA@EAAKXZ @ 0x1800BCB00 (-AddRef@CHwndRenderTarget@@WDA@EAAKXZ.c)
 *     ?AddRef@CSecondarySysmemBitmap@@WBA@EAAKXZ @ 0x1800BD0C0 (-AddRef@CSecondarySysmemBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ @ 0x1800BE1E0 (-AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ.c)
 *     ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WHA@EAAKXZ @ 0x1800BE1F0 (-AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WHA@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x1800BE4D0 (-AddRef@CBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WBAA@EAAKXZ @ 0x1800BE530 (-AddRef@CSystemMemoryBitmap@@WBAA@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x1800BE540 (-AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WEI@EAAKXZ @ 0x1800BE630 (-AddRef@CBitmapLock@@WEI@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ @ 0x1800BF210 (-AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ.c)
 *     ?AddRef@CMILBrushSolid@@WDI@EAAKXZ @ 0x1800BF270 (-AddRef@CMILBrushSolid@@WDI@EAAKXZ.c)
 *     ?AddRef@CMILBrushLinearGradient@@WOI@EAAKXZ @ 0x1800BF280 (-AddRef@CMILBrushLinearGradient@@WOI@EAAKXZ.c)
 *     ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBNI@EAAKXZ @ 0x1800BF3E0 (-AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBNI@EAAKXZ.c)
 *     ?AddRef@CDxHandleYUVBitmapRealization@@WCAI@EAAKXZ @ 0x1800BF430 (-AddRef@CDxHandleYUVBitmapRealization@@WCAI@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ @ 0x1800BF440 (-AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ.c)
 *     ?AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800BF4E0 (-AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CBoundsBitmap::AddRef(CBitmapOfDeviceBitmaps *this)
{
  return CBitmapOfDeviceBitmaps::AddRef(this);
}
