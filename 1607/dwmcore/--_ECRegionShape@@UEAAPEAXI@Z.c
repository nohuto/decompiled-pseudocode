/*
 * XREFs of ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18002C1F0
 * Callers:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800017D4 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000E2BC (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x180020CD8 (-Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18002C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18005FC60 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006A680 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x1800A2C98 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800B1980 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x1800BAACC (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 *     ?AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180152E40 (-AddNewContent@CComposeTop@@QEAAJPEAVIImageSource@@PEAVCRegionShape@@PEBV-$CMatrix@ULocalRenderi.c)
 *     ?CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z @ 0x18015D360 (-CopyDxClipShape@CDxAccumulationContext@@QEAAJPEAV1@@Z.c)
 *     ?Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z @ 0x18018A3A0 (-Create@CRegionShape@@SAJAEAU_RGNDATA@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1CRegionShape@@UEAA@XZ @ 0x18002C298 (--1CRegionShape@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CRegionShape *__fastcall CRegionShape::`vector deleting destructor'(CRegionShape *this, char a2)
{
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

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
