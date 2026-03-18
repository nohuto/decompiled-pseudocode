/*
 * XREFs of ?SetRealizedBrush@CBrushRealizer@@IEAAXPEAVCMILBrush@@PEBUPixelFormatInfo@@@Z @ 0x18008138C
 * Callers:
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x18002AA08 (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV-$CMatrix@UBaseSampling@.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x18003F7D0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?EnsureRealization@CBrushResourceRealizer@@UEAAJPEAUBrushContext@@PEBUCContextState@@PEBUPixelFormatInfo@@@Z @ 0x180083520 (-EnsureRealization@CBrushResourceRealizer@@UEAAJPEAUBrushContext@@PEBUCContextState@@PEBUPixelFo.c)
 *     ?SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z @ 0x180084240 (-SetSolidColorBrush@CImmediateBrushRealizer@@QEAAXPEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ?SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ @ 0x180081100 (-SetDefaultRealizationPixelFormat@CMILBrushBitmap@@UEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CBrushRealizer::SetRealizedBrush(
        CBrushRealizer *this,
        struct CMILBrush *a2,
        const struct PixelFormatInfo *a3)
{
  __int64 v3; // r14
  __int64 v7; // rbx
  void (__fastcall *v8)(CMILBrushBitmap *); // rdi

  v3 = *((_QWORD *)this + 12);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 12));
  *((_QWORD *)this + 12) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct CMILBrush *))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = *((_QWORD *)this + 12);
  if ( v7 )
  {
    if ( a3 )
    {
      *(_OWORD *)(v7 + 8) = *(_OWORD *)a3;
      *(_QWORD *)(v7 + 24) = *((_QWORD *)a3 + 2);
    }
    else
    {
      v8 = *(void (__fastcall **)(CMILBrushBitmap *))(*(_QWORD *)v7 + 48LL);
      if ( v8 == CMILBrushBitmap::SetDefaultRealizationPixelFormat )
        CMILBrushBitmap::SetDefaultRealizationPixelFormat(*((CMILBrushBitmap **)this + 12));
      else
        v8(*((CMILBrushBitmap **)this + 12));
    }
  }
}
