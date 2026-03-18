/*
 * XREFs of ?ShapeDataFromGeometryNoRef@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@PEAVCGeometry@@PEAPEAVCShape@@@Z @ 0x18002AF38
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180028440 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180017898 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18001793C (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E148 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
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
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF

  *a4 = 0LL;
  BoundsSafe = CGeometry::GetBoundsSafe(a3, a2, &v11);
  v8 = BoundsSafe;
  if ( BoundsSafe < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BoundsSafe, 0xE39u);
  }
  else if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(&v11) )
  {
    ShapeDataNoRef = CGeometry::GetShapeDataNoRef(a3, a2, a4);
    v8 = ShapeDataNoRef;
    if ( ShapeDataNoRef < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0xE40u);
  }
  return v8;
}
