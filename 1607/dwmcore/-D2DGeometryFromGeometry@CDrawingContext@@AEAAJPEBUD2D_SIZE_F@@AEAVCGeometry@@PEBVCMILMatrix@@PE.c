/*
 * XREFs of ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@PEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180004874
 * Callers:
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180067DF0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180122CAC (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18002C100 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18002CBC0 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002CC68 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B91C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A580 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // rdx
  bool v12; // si
  __int64 (__fastcall *v13)(CRegionShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  int v16; // r9d
  unsigned int v17; // [rsp+20h] [rbp-58h]
  struct CShape *v18; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v19[16]; // [rsp+38h] [rbp-40h] BYREF

  v18 = 0LL;
  *a5 = 0LL;
  BoundsSafe = CGeometry::GetBoundsSafe(a3, a2, v19);
  v10 = BoundsSafe;
  if ( BoundsSafe < 0 )
  {
    v17 = 3728;
    goto LABEL_19;
  }
  if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(v19) )
  {
    v10 = -2003292412;
    v17 = 3746;
    goto LABEL_16;
  }
  BoundsSafe = CGeometry::GetShapeDataNoRef(a3, a2, &v18);
  v10 = BoundsSafe;
  if ( BoundsSafe < 0 )
  {
    v17 = 3731;
LABEL_19:
    v16 = BoundsSafe;
    goto LABEL_20;
  }
  v12 = 1;
  if ( a4 )
  {
    LOBYTE(v11) = 1;
    if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(a4, v11) )
    {
      v12 = 0;
      a4 = 0LL;
    }
  }
  v13 = *(__int64 (__fastcall **)(CRegionShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v18 + 16LL);
  if ( v13 == CRegionShape::GetD2DGeometry )
    D2DGeometry = CRegionShape::GetD2DGeometry(v18, a4, a5);
  else
    D2DGeometry = v13(v18, a4, a5);
  v10 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    v17 = 3737;
LABEL_16:
    v16 = v10;
LABEL_20:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v17);
    return v10;
  }
  if ( a6 )
    *a6 = v12;
  return v10;
}
