/*
 * XREFs of ?QueryInterface@CMILFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002F100
 * Callers:
 *     ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800A15D0 (-Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z.c)
 *     ?QueryInterface@CDesktopRenderTarget@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BF970 (-QueryInterface@CDesktopRenderTarget@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFA00 (-QueryInterface@CCompressedSourceBitmap@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMILBrushLinearGradient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFA10 (-QueryInterface@CMILBrushLinearGradient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFA20 (-QueryInterface@CBitmap@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMILBrushLinearGradient@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFE00 (-QueryInterface@CMILBrushLinearGradient@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMILBrushLinearGradient@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFFC0 (-QueryInterface@CMILBrushLinearGradient@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondarySysmemBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0060 (-QueryInterface@CSecondarySysmemBitmap@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CD2DBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0070 (-QueryInterface@CD2DBitmap@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondaryD2DBitmap@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0140 (-QueryInterface@CSecondaryD2DBitmap@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSecondaryD2DBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0150 (-QueryInterface@CSecondaryD2DBitmap@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0160 (-QueryInterface@CCompressedSourceBitmap@@WBAI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CMILBrushLinearGradient@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0320 (-QueryInterface@CMILBrushLinearGradient@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompressedSourceBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C1C40 (-QueryInterface@CCompressedSourceBitmap@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemMemoryBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C1C50 (-QueryInterface@CSystemMemoryBitmap@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapLock@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C1CD0 (-QueryInterface@CBitmapLock@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapLock@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C1D90 (-QueryInterface@CBitmapLock@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C28D0 (-QueryInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@WBLA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CDxHandleYUVBitmapRealization@@WBKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C2930 (-QueryInterface@CDxHandleYUVBitmapRealization@@WBKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CMILFactory::QueryInterface(CMILCOMBase *this, const struct _GUID *a2, void **a3)
{
  return CMILCOMBase::InternalQueryInterface(this, a2, a3);
}
