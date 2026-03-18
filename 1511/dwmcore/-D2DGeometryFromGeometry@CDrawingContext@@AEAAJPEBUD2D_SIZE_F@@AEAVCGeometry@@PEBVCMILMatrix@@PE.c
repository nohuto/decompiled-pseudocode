/*
 * XREFs of ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18000E278
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x18003CFD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18010D0B8 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036E98 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Is2DAffine@CBaseMatrix@@QEBAHH@Z @ 0x180047400 (-Is2DAffine@CBaseMatrix@@QEBAHH@Z.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18004E2D0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180058470 (-GetD2DGeometry@CRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800643F8 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x1800644A8 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::D2DGeometryFromGeometry(
        CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct CGeometry *a3,
        const struct CMILMatrix *a4,
        struct ID2D1Geometry **a5,
        bool *a6)
{
  int BoundsSafe; // eax
  unsigned int v10; // ebx
  bool v11; // si
  int (*v12)(CRectangleShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rbp
  int D2DGeometry; // eax
  int v15; // r9d
  unsigned int v16; // [rsp+20h] [rbp-58h]
  CRectangleShape *v17; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v18[16]; // [rsp+38h] [rbp-40h] BYREF

  v17 = 0LL;
  *a5 = 0LL;
  BoundsSafe = CGeometry::GetBoundsSafe(a3, a2, v18);
  v10 = BoundsSafe;
  if ( BoundsSafe < 0 )
  {
    v16 = 3738;
LABEL_17:
    v15 = BoundsSafe;
LABEL_22:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v16);
    return v10;
  }
  if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(v18) )
  {
    v10 = -2003292412;
    v16 = 3756;
    goto LABEL_21;
  }
  BoundsSafe = CGeometry::GetShapeDataNoRef(a3, a2, &v17);
  v10 = BoundsSafe;
  if ( BoundsSafe < 0 )
  {
    v16 = 3741;
    goto LABEL_17;
  }
  v11 = 1;
  if ( a4 && (unsigned int)CBaseMatrix::Is2DAffine(a4, 1) )
  {
    v11 = 0;
    a4 = 0LL;
  }
  v12 = *(int (**)(CRectangleShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v17 + 16LL);
  if ( (char *)v12 == (char *)CRegionShape::GetD2DGeometry )
  {
    D2DGeometry = CRegionShape::GetD2DGeometry(v17, a4, a5);
  }
  else if ( v12 == CRectangleShape::GetD2DGeometry )
  {
    D2DGeometry = CRectangleShape::GetD2DGeometry(v17, a4, a5);
  }
  else
  {
    D2DGeometry = ((__int64 (__fastcall *)(CRectangleShape *, const struct CMILMatrix *, struct ID2D1Geometry **))v12)(
                    v17,
                    a4,
                    a5);
  }
  v10 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    v16 = 3747;
LABEL_21:
    v15 = v10;
    goto LABEL_22;
  }
  if ( a6 )
    *a6 = v11;
  return v10;
}
