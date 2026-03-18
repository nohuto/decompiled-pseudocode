/*
 * XREFs of ?IsRoundedRectangleGeometry@CRectangleGeometry@@AEBA_NXZ @ 0x18006593C
 * Callers:
 *     ?GetShapeDataCoreNoRef@CRectangleGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x180065260 (-GetShapeDataCoreNoRef@CRectangleGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CRectangleGeometry::IsRoundedRectangleGeometry(CRectangleGeometry *this)
{
  return *((float *)this + 30) > 0.0
      || *((float *)this + 31) > 0.0
      || *((float *)this + 32) > 0.0
      || *((float *)this + 33) > 0.0
      || *((float *)this + 34) > 0.0
      || *((float *)this + 35) > 0.0
      || *((float *)this + 36) > 0.0
      || *((float *)this + 37) > 0.0;
}
