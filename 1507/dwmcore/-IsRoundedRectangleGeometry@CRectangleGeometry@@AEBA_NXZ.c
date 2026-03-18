/*
 * XREFs of ?IsRoundedRectangleGeometry@CRectangleGeometry@@AEBA_NXZ @ 0x1800176A0
 * Callers:
 *     ?GetShapeDataCoreNoRef@CRectangleGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x180017430 (-GetShapeDataCoreNoRef@CRectangleGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CRectangleGeometry::IsRoundedRectangleGeometry(CRectangleGeometry *this)
{
  return *((float *)this + 28) > 0.0
      || *((float *)this + 29) > 0.0
      || *((float *)this + 30) > 0.0
      || *((float *)this + 31) > 0.0
      || *((float *)this + 32) > 0.0
      || *((float *)this + 33) > 0.0
      || *((float *)this + 34) > 0.0
      || *((float *)this + 35) > 0.0;
}
