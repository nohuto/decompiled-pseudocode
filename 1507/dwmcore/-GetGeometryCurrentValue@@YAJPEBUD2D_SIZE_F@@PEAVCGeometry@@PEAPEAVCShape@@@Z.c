/*
 * XREFs of ?GetGeometryCurrentValue@@YAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z @ 0x18001779C
 * Callers:
 *     ?DrawGeometry@CDrawingContext@@UEAAJPEAVCBrush@@PEAVCGeometry@@@Z @ 0x18002DB20 (-DrawGeometry@CDrawingContext@@UEAAJPEAVCBrush@@PEAVCGeometry@@@Z.c)
 *     ?GetShapeDataCoreNoRef@CCombinedGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18011FD20 (-GetShapeDataCoreNoRef@CCombinedGeometry@@UEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 * Callees:
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18001793C (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall GetGeometryCurrentValue(const struct D2D_SIZE_F *a1, struct CGeometry *a2, struct CShape **a3)
{
  unsigned int v3; // ebx
  int ShapeDataNoRef; // eax

  v3 = 0;
  *a3 = 0LL;
  if ( a2 )
  {
    ShapeDataNoRef = CGeometry::GetShapeDataNoRef(a2, a1, a3);
    v3 = ShapeDataNoRef;
    if ( ShapeDataNoRef < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0x2Au);
  }
  return v3;
}
