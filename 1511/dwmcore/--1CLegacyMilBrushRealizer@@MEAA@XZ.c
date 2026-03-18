/*
 * XREFs of ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18008A57C
 * Callers:
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x18000EB90 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x18003F628 (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV-$CMatrix@UBaseSampling@.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180042FC0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ??_ECBrushResourceRealizer@@UEAAPEAXI@Z @ 0x18005D390 (--_ECBrushResourceRealizer@@UEAAPEAXI@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1800776B0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ??_ECImmediateBrushRealizer@@UEAAPEAXI@Z @ 0x1800AC440 (--_ECImmediateBrushRealizer@@UEAAPEAXI@Z.c)
 *     ??_G?$LocalMILObject@VCImmediateBrushRealizer@@@@UEAAPEAXI@Z @ 0x18010AF50 (--_G-$LocalMILObject@VCImmediateBrushRealizer@@@@UEAAPEAXI@Z.c)
 *     ??_GCLegacyMilBrushRealizer@@MEAAPEAXI@Z @ 0x180130ED0 (--_GCLegacyMilBrushRealizer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer(CLegacyMilBrushRealizer *this)
{
  __int64 v1; // rsi

  v1 = *((_QWORD *)this + 12);
  *(_QWORD *)this = &CLegacyMilBrushRealizer::`vftable';
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  *((_QWORD *)this + 5) = &CMILBrushSolid::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 9) = &CMILBrushSolid::`vftable'{for `IMILBrushSolid'};
  *((_QWORD *)this + 2) = &CMILCOMBase::`vftable';
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
