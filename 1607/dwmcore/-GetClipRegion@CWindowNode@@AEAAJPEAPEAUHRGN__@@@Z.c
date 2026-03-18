/*
 * XREFs of ?GetClipRegion@CWindowNode@@AEAAJPEAPEAUHRGN__@@@Z @ 0x180140024
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180027F90 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18002CBC0 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeRegion@CShape@@QEAAJPEAPEAUHRGN__@@@Z @ 0x180189CD0 (-GetShapeRegion@CShape@@QEAAJPEAPEAUHRGN__@@@Z.c)
 */

__int64 __fastcall CWindowNode::GetClipRegion(CWindowNode *this, HRGN *a2)
{
  CGeometry *v2; // rax
  unsigned int v3; // ebx
  int ShapeRegion; // eax
  __int64 result; // rax
  CShape *v7; // [rsp+40h] [rbp+8h] BYREF
  HRGN v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = (CGeometry *)*((_QWORD *)this + 105);
  v3 = 0;
  v7 = 0LL;
  v8 = 0LL;
  if ( v2 )
  {
    CGeometry::GetShapeDataNoRef(v2, (const struct D2D_SIZE_F *)this + 24, &v7);
    if ( v7 )
    {
      ShapeRegion = CShape::GetShapeRegion(v7, &v8);
      v3 = ShapeRegion;
      if ( ShapeRegion < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeRegion, 0x1405u);
    }
  }
  result = v3;
  *a2 = v8;
  return result;
}
