/*
 * XREFs of ?AddRef@CBoundsBitmap@@UEAAKXZ @ 0x180015F10
 * Callers:
 *     ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x18001554C (-Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAP.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180048368 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@IPEAPEAV1@@Z @ 0x18005E264 (-CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@A.c)
 *     ?CreateEmptyResource@CResourceTable@@QEAAJPEAVCComposition@@PEAVCChannelContext@@PEBUMILCMD_CHANNEL_CREATERESOURCE@@PEAPEAVCResource@@@Z @ 0x18006CBA0 (-CreateEmptyResource@CResourceTable@@QEAAJPEAVCComposition@@PEAVCChannelContext@@PEBUMILCMD_CHAN.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180070C30 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180080174 (-HrLock@CBitmap@@IEAAJIIPEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?AddRef@CHwndRenderTarget@@WDA@EAAKXZ @ 0x180099DB0 (-AddRef@CHwndRenderTarget@@WDA@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WFA@EAAKXZ @ 0x180099DC0 (-AddRef@CBitmapLock@@WFA@EAAKXZ.c)
 *     ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x180099E30 (-AddRef@CBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ @ 0x18009B720 (-AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ.c)
 *     ?AddRef@CRenderTarget@@WCI@EAAKXZ @ 0x18009B730 (-AddRef@CRenderTarget@@WCI@EAAKXZ.c)
 *     ?AddRef@CSystemMemoryBitmap@@WBAA@EAAKXZ @ 0x18009B760 (-AddRef@CSystemMemoryBitmap@@WBAA@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ @ 0x18009B770 (-AddRef@CSecondaryD2DBitmap@@WBAI@EAAKXZ.c)
 *     ?AddRef@CBitmapLock@@WEI@EAAKXZ @ 0x18009B7F0 (-AddRef@CBitmapLock@@WEI@EAAKXZ.c)
 *     ?AddRef@CMILBrushSolid@@WDI@EAAKXZ @ 0x18009BE00 (-AddRef@CMILBrushSolid@@WDI@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ @ 0x18009BE10 (-AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ.c)
 *     ?AddRef@CMILBrushLinearGradient@@WOI@EAAKXZ @ 0x18009BE20 (-AddRef@CMILBrushLinearGradient@@WOI@EAAKXZ.c)
 *     ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBNI@EAAKXZ @ 0x18009BFB0 (-AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WBNI@EAAKXZ.c)
 *     ?AddRef@CDxHandleYUVBitmapRealization@@WCAI@EAAKXZ @ 0x18009C000 (-AddRef@CDxHandleYUVBitmapRealization@@WCAI@EAAKXZ.c)
 *     ?AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WHA@EAAKXZ @ 0x18009C010 (-AddRef@CDxHandleAdvancedDirectFlipBitmapRealization@@WHA@EAAKXZ.c)
 *     ?AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ @ 0x18009C070 (-AddRef@CSecondaryD2DBitmap@@WGI@EAAKXZ.c)
 *     ?AddRef@CSecondarySysmemBitmap@@WBA@EAAKXZ @ 0x18009C0E0 (-AddRef@CSecondarySysmemBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x18009C0F0 (-AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CBoundsBitmap::AddRef(CBoundsBitmap *this)
{
  return CBitmapOfDeviceBitmaps::AddRef(this);
}
