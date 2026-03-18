/*
 * XREFs of ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180010918
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180028440 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1800F2618 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18001793C (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?Is2DAffine@CBaseMatrix@@QEBAHH@Z @ 0x180022410 (-Is2DAffine@CBaseMatrix@@QEBAHH@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180077FF0 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqu.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800785F0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDrawingContext::D2DGeometryFromGeometry(
        CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct CGeometry *a3,
        const struct CMILMatrix *a4,
        struct ID2D1Geometry **a5,
        bool *a6)
{
  int ShapeDataNoRef; // eax
  int v10; // ebx
  __int64 (__fastcall *v11)(CComplexShape *); // rdi
  int TightBounds; // eax
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm3_4
  int v17; // eax
  bool v18; // si
  __int64 (__fastcall *v19)(CRegionShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // r15
  int D2DGeometry; // eax
  unsigned int v22; // [rsp+20h] [rbp-50h]
  struct CShape *v23; // [rsp+30h] [rbp-40h] BYREF
  struct CShape *v24; // [rsp+38h] [rbp-38h] BYREF
  __int128 v25; // [rsp+40h] [rbp-30h] BYREF

  v23 = 0LL;
  *a5 = 0LL;
  v24 = 0LL;
  ShapeDataNoRef = CGeometry::GetShapeDataNoRef(a3, a2, &v24);
  v10 = ShapeDataNoRef;
  if ( ShapeDataNoRef < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0x24u);
  }
  else
  {
    v11 = *(__int64 (__fastcall **)(CComplexShape *))(*(_QWORD *)v24 + 24LL);
    if ( v11 == CShape::GetTightBounds )
      TightBounds = CShape::GetTightBounds(v24);
    else
      TightBounds = ((__int64 (__fastcall *)(struct CShape *, __int128 *, _QWORD))v11)(v24, &v25, 0LL);
    v10 = TightBounds;
    if ( TightBounds < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, TightBounds, 0x26u);
  }
  if ( v10 == -2003304438 )
  {
    v14 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v16 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v15 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v25 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v13 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v10 = 0;
  }
  else
  {
    v13 = *((float *)&v25 + 3);
    v14 = *((float *)&v25 + 2);
    v15 = *((float *)&v25 + 1);
    v16 = *(float *)&v25;
  }
  if ( v10 < 0 )
  {
    v22 = 3682;
LABEL_33:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v22);
    return (unsigned int)v10;
  }
  if ( *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite >= v16
    && v14 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2)
    || *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) >= v15
    && v13 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3) )
  {
    v10 = -2003292412;
    v22 = 3700;
    goto LABEL_33;
  }
  v17 = CGeometry::GetShapeDataNoRef(a3, a2, &v23);
  v10 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xE65u);
  }
  else
  {
    v18 = 1;
    if ( a4 && (unsigned int)CBaseMatrix::Is2DAffine(a4, 1) )
    {
      v18 = 0;
      a4 = 0LL;
    }
    v19 = *(__int64 (__fastcall **)(CRegionShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v23 + 16LL);
    if ( v19 == CRegionShape::GetD2DGeometry )
      D2DGeometry = CRegionShape::GetD2DGeometry(v23, a4, a5);
    else
      D2DGeometry = v19(v23, a4, a5);
    v10 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      v22 = 3691;
      goto LABEL_33;
    }
    if ( a6 )
      *a6 = v18;
  }
  return (unsigned int)v10;
}
