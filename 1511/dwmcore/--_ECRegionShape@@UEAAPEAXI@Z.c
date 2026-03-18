/*
 * XREFs of ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18004E3D0
 * Callers:
 *     ?CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z @ 0x180009B08 (-CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180016944 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x180018704 (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x180041C60 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180042FC0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004DF0C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1800659B0 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x1800B6C28 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180130978 (-AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV-$CMatrix@ULocalRenderi.c)
 *     ?CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z @ 0x180137328 (-CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z.c)
 *     ?CopyRegion@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x180158C20 (-CopyRegion@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z @ 0x180158F50 (-Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18004E154 (--1CRegionShape@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

CRegionShape *__fastcall CRegionShape::`vector deleting destructor'(CRegionShape *this, char a2)
{
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  CRegionShape::~CRegionShape(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CRegionShape *))v4)(WPF::g_pProcessHeap, this);
  }
  return this;
}
