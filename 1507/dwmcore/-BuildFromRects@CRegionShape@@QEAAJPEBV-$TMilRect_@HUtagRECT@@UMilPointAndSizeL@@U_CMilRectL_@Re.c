/*
 * XREFs of ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180078740
 * Callers:
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18005B580 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?GetShapeDataCoreNoRef@CRgnGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18006FA00 (-GetShapeDataCoreNoRef@CRgnGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?CopyRegion@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18014A7A0 (-CopyRegion@CRegionShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetEmpty@CRegionShape@@QEAAXXZ @ 0x180078598 (-SetEmpty@CRegionShape@@QEAAXXZ.c)
 *     ?Init@CRegionShape@@IEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180078790 (-Init@CRegionShape@@IEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 */

__int64 __fastcall CRegionShape::BuildFromRects(CRegionShape *a1, __int64 a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx

  CRegionShape::SetEmpty(a1);
  v6 = CRegionShape::Init(a1, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xE2u);
  return v7;
}
