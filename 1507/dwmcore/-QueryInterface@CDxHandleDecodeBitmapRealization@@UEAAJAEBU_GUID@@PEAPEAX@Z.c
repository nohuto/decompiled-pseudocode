/*
 * XREFs of ?QueryInterface@CDxHandleDecodeBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001B860
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180038480 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180099CE0 (-QueryInterface@CSystemMemoryBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondaryD2DBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180099E80 (-QueryInterface@CSecondaryD2DBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180099E90 (-QueryInterface@CCompressedSourceBitmap@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMILBrushLinearGradient@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009A310 (-QueryInterface@CMILBrushLinearGradient@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMILBrushLinearGradient@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009A640 (-QueryInterface@CMILBrushLinearGradient@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD2DBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009AAA0 (-QueryInterface@CD2DBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@COffScreenRenderTarget@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009AAD0 (-QueryInterface@COffScreenRenderTarget@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMILBrushLinearGradient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009B740 (-QueryInterface@CMILBrushLinearGradient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009B7A0 (-QueryInterface@CCompressedSourceBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapLock@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009B830 (-QueryInterface@CBitmapLock@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@COffScreenRenderTarget@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009B840 (-QueryInterface@COffScreenRenderTarget@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009BFD0 (-QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBNI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDxHandleYUVBitmapRealization@@WCAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009C040 (-QueryInterface@CDxHandleYUVBitmapRealization@@WCAI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009C0B0 (-QueryInterface@CCompressedSourceBitmap@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondaryD2DBitmap@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009C0C0 (-QueryInterface@CSecondaryD2DBitmap@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMILBrushLinearGradient@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009C0D0 (-QueryInterface@CMILBrushLinearGradient@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondarySysmemBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009C140 (-QueryInterface@CSecondarySysmemBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CDxHandleDecodeBitmapRealization::QueryInterface(
        CDxHandleDecodeBitmapRealization *this,
        const struct _GUID *a2,
        void **a3)
{
  return CMILCOMBase::InternalQueryInterface(this, a2, a3);
}
