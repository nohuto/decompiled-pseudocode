/*
 * XREFs of ?GetShapeDataCoreNoRef@CRgnGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18006FA00
 * Callers:
 *     ?SubmitComposeTopContent@CWindowNode@@AEAA_NPEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@@Z @ 0x18010695C (-SubmitComposeTopContent@CWindowNode@@AEAA_NPEBV-$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UP.c)
 * Callees:
 *     ?SetEmpty@CRegionShape@@QEAAXXZ @ 0x180078598 (-SetEmpty@CRegionShape@@QEAAXXZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180078740 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 */

__int64 __fastcall CRgnGeometry::GetShapeDataCoreNoRef(
        CRgnGeometry *this,
        const struct D2D_SIZE_F *a2,
        struct CShape **a3)
{
  __int64 v3; // rdx
  struct CShape *v4; // rbx

  v3 = *((_QWORD *)this + 13);
  v4 = (CRgnGeometry *)((char *)this + 80);
  if ( v3 )
    CRegionShape::BuildFromRects((char *)this + 80, v3, *((_DWORD *)this + 24) >> 4);
  else
    CRegionShape::SetEmpty((CRgnGeometry *)((char *)this + 80));
  *a3 = v4;
  return 0LL;
}
