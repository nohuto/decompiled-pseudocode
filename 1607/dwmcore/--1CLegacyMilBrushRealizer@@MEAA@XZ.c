/*
 * XREFs of ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18002EA8C
 * Callers:
 *     ?TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@M@Z @ 0x180005140 (-TileImage@CDrawingContext@@UEAAJPEAVCResource@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ??_ECBrushResourceRealizer@@UEAAPEAXI@Z @ 0x18002EBF0 (--_ECBrushResourceRealizer@@UEAAPEAXI@Z.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x18006948C (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@PEBV-$CMatrix@UBaseSampling@.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180072730 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ??_ECImmediateBrushRealizer@@UEAAPEAXI@Z @ 0x1800AF930 (--_ECImmediateBrushRealizer@@UEAAPEAXI@Z.c)
 *     ??_G?$LocalMILObject@VCImmediateBrushRealizer@@@@UEAAPEAXI@Z @ 0x1801213F0 (--_G-$LocalMILObject@VCImmediateBrushRealizer@@@@UEAAPEAXI@Z.c)
 *     ??_GCLegacyMilBrushRealizer@@MEAAPEAXI@Z @ 0x180153310 (--_GCLegacyMilBrushRealizer@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer(CLegacyMilBrushRealizer *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CLegacyMilBrushRealizer::`vftable';
  v2 = *((_QWORD *)this + 12);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *((_QWORD *)this + 5) = &CMILBrushSolid::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 9) = &CMILBrushSolid::`vftable'{for `IMILBrushSolid'};
  *((_QWORD *)this + 2) = &CMILCOMBase::`vftable';
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
