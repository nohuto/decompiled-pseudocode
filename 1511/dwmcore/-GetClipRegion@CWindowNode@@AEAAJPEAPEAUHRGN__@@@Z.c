/*
 * XREFs of ?GetClipRegion@CWindowNode@@AEAAJPEAPEAUHRGN__@@@Z @ 0x1801236BC
 * Callers:
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180061320 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x1800644A8 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetShapeRegion@CShape@@QEAAJPEAPEAUHRGN__@@@Z @ 0x1801588EC (-GetShapeRegion@CShape@@QEAAJPEAPEAUHRGN__@@@Z.c)
 */

__int64 __fastcall CWindowNode::GetClipRegion(CWindowNode *this, HRGN *a2)
{
  const struct D2DMatrix **v2; // rax
  HRGN v3; // rbx
  unsigned int v5; // edi
  int ShapeRegion; // eax
  CShape *v8; // [rsp+40h] [rbp+8h] BYREF
  HRGN v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = (const struct D2DMatrix **)*((_QWORD *)this + 129);
  v3 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v5 = 0;
  if ( v2 )
  {
    CGeometry::GetShapeDataNoRef(v2, (const struct D2D_SIZE_F *)((char *)this + 132), &v8);
    if ( v8 )
    {
      ShapeRegion = CShape::GetShapeRegion(v8, &v9);
      v5 = ShapeRegion;
      if ( ShapeRegion < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeRegion, 0x140Eu);
      v3 = v9;
    }
  }
  *a2 = v3;
  return v5;
}
