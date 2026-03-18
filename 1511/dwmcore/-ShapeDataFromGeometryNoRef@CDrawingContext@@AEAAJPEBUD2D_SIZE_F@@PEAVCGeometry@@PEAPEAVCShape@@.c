/*
 * XREFs of ?ShapeDataFromGeometryNoRef@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z @ 0x18003FB88
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x18003CFD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036E98 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800643F8 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x1800644A8 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::ShapeDataFromGeometryNoRef(
        CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct CGeometry *a3,
        struct CShape **a4)
{
  int BoundsSafe; // eax
  unsigned int v8; // ebx
  int ShapeDataNoRef; // eax
  float v11[4]; // [rsp+30h] [rbp-38h] BYREF

  *a4 = 0LL;
  BoundsSafe = CGeometry::GetBoundsSafe(a3, a2, v11);
  v8 = BoundsSafe;
  if ( BoundsSafe < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BoundsSafe, 0xE71u);
  }
  else if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(v11) )
  {
    ShapeDataNoRef = CGeometry::GetShapeDataNoRef(a3, a2, a4);
    v8 = ShapeDataNoRef;
    if ( ShapeDataNoRef < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0xE78u);
  }
  return v8;
}
