/*
 * XREFs of ?GetShapeDataCoreNoRef@CRgnGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x180064BB0
 * Callers:
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x1800644A8 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?SubmitComposeTopContent@CWindowNode@@AEAA_NPEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x180124460 (-SubmitComposeTopContent@CWindowNode@@AEAA_NPEBV-$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UP.c)
 * Callees:
 *     ?SetEmpty@CRegionShape@@QEAAXXZ @ 0x18004E1B0 (-SetEmpty@CRegionShape@@QEAAXXZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18004E440 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 */

__int64 __fastcall CRgnGeometry::GetShapeDataCoreNoRef(
        CRgnGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShape **a3)
{
  const struct tagRECT *v3; // rdx
  struct CShape *v4; // rbx

  v3 = (const struct tagRECT *)*((_QWORD *)this + 15);
  v4 = (CRgnGeometry *)((char *)this + 96);
  if ( v3 )
    CRegionShape::BuildFromRects((CRgnGeometry *)((char *)this + 96), v3, *((_DWORD *)this + 28) >> 4);
  else
    CRegionShape::SetEmpty((CRgnGeometry *)((char *)this + 96));
  *a3 = v4;
  return 0LL;
}
