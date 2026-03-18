/*
 * XREFs of ?GetGeometryCurrentValue@@YAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z @ 0x180064A74
 * Callers:
 *     ?DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x180042F10 (-DrawGeometry@CDrawingContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 *     ?GetShapeDataCoreNoRef@CCombinedGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x1800B3120 (-GetShapeDataCoreNoRef@CCombinedGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 * Callees:
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x1800644A8 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall GetGeometryCurrentValue(
        const struct D2D_SIZE_F *a1,
        const struct D2DMatrix **this,
        struct CShape **a3)
{
  unsigned int v3; // ebx
  int ShapeDataNoRef; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( this )
  {
    ShapeDataNoRef = CGeometry::GetShapeDataNoRef(this, a1, a3);
    v3 = ShapeDataNoRef;
    if ( ShapeDataNoRef < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0x2Au);
  }
  return v3;
}
