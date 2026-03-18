/*
 * XREFs of ?AddRef@CBoundsBitmap@@UEAAKXZ @ 0x180002DA0
 * Callers:
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D290 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180085658 (-HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x18009ED68 (-Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAP.c)
 *     ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@I_NPEAPEAV1@@Z @ 0x1800A19C0 (-CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@A.c)
 *     ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WHA@EAAKXZ @ 0x1800BF820 (-AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WHA@EAAKXZ.c)
 *     ?AddRef@CDesktopRenderTarget@@WJI@EAAKXZ @ 0x1800BF830 (-AddRef@CDesktopRenderTarget@@WJI@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WBAA@EAAKXZ @ 0x1800BF9B0 (-AddRef@CSystemMemoryBitmap@@WBAA@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x1800BF9C0 (-AddRef@CBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800C0030 (-AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ @ 0x1800C0090 (-AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ.c)
 *     ?AddRef@CTransformingGeometrySink@@WBA@EAAKXZ @ 0x1800C1B40 (-AddRef@CTransformingGeometrySink@@WBA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ @ 0x1800C1B50 (-AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ @ 0x1800C1C30 (-AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WEI@EAAKXZ @ 0x1800C1C80 (-AddRef@CBitmapLock@@WEI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WFA@EAAKXZ @ 0x1800C1C90 (-AddRef@CBitmapLock@@WFA@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x1800C1D20 (-AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x1800C1D30 (-AddRef@CBitmap@@WDA@EAAKXZ.c)
 *     ?AddRef@CMILBrushSolid@@WDI@EAAKXZ @ 0x1800C2700 (-AddRef@CMILBrushSolid@@WDI@EAAKXZ.c)
 *     ?AddRef@CMILBrushLinearGradient@@WOI@EAAKXZ @ 0x1800C2710 (-AddRef@CMILBrushLinearGradient@@WOI@EAAKXZ.c)
 *     ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAKXZ @ 0x1800C2880 (-AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ @ 0x1800C2890 (-AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ.c)
 *     ?AddRef@CDxHandleYUVBitmapRealization@@WBKA@EAAKXZ @ 0x1800C2900 (-AddRef@CDxHandleYUVBitmapRealization@@WBKA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CBoundsBitmap::AddRef(CBoundsBitmap *this)
{
  return CBitmapOfDeviceBitmaps::AddRef(this);
}
