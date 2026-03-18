/*
 * XREFs of ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x1801399CC
 * Callers:
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1801396E0 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013A0F0 (-Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?GetCommonBrushParameters@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonBrushParameters@@PEAPEAVCShape@@@Z @ 0x18013A3E0 (-GetCommonBrushParameters@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonB.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18013A9C0 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x1800101C0 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180016204 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180020928 (-GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18002C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z @ 0x180097968 (--0CRectanglesShape@@QEAA@AEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180097F28 (--1CRectanglesShape@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18013528C (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetSwapChainSize@CSurfaceBrush@@AEBAJPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18013A784 (-GetSwapChainSize@CSurfaceBrush@@AEBAJPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1801646A8 (-TransformRectConservative@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1801647E0 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?Arrange@StretchAlign@@QEBA?AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z @ 0x180164B10 (-Arrange@StretchAlign@@QEBA-AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z.c)
 */

__int64 __fastcall CSurfaceBrush::ComputeLayout(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct CSurfaceBrush::LayoutData *a4,
        struct CShape **a5)
{
  struct CShape *v5; // rsi
  unsigned int v6; // ebx
  int SwapChainSize; // eax
  __m128 dy_low; // xmm8
  __m128 dx_low; // xmm6
  FLOAT bottom; // xmm11_4
  FLOAT right; // xmm12_4
  __m128 v16; // xmm13
  __m128 v17; // xmm14
  float top; // xmm9_4
  float left; // xmm10_4
  const struct D2D_MATRIX_3X2_F *v20; // rdx
  CComponentTransform2D *v21; // rcx
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm10_4
  float v25; // xmm15_4
  __m128 v26; // xmm9
  __m128 m22_low; // xmm5
  __m128 v28; // xmm1
  float v29; // xmm0_4
  float v30; // xmm1_4
  float v31; // xmm3_4
  float v32; // xmm1_4
  __m128 v33; // xmm2
  __m128 v34; // xmm3
  float width; // xmm6_4
  float height; // xmm8_4
  struct D2D_RECT_F *v37; // r9
  int v38; // eax
  __int64 v39; // xmm1_8
  struct D2D_RECT_F v40; // xmm1
  struct D2D_RECT_F v41; // xmm0
  struct D2D_RECT_F v43; // [rsp+38h] [rbp-D0h] BYREF
  FLOAT m11; // [rsp+48h] [rbp-C0h]
  struct D2D_RECT_F v45; // [rsp+50h] [rbp-B8h] BYREF
  struct CShape *v46; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_RECT_F v47; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v48; // [rsp+78h] [rbp-90h]
  __int64 v49; // [rsp+98h] [rbp-70h] BYREF
  int v50; // [rsp+A0h] [rbp-68h]
  int v51; // [rsp+A4h] [rbp-64h]
  __int64 v52; // [rsp+A8h] [rbp-60h]
  __int64 v53; // [rsp+B0h] [rbp-58h]
  __int64 v54; // [rsp+B8h] [rbp-50h]
  int v55; // [rsp+C0h] [rbp-48h]
  int v56; // [rsp+C4h] [rbp-44h]
  __int64 v57; // [rsp+C8h] [rbp-40h]
  int v58; // [rsp+D0h] [rbp-38h]
  int v59; // [rsp+D4h] [rbp-34h]
  int v60; // [rsp+D8h] [rbp-30h]
  struct D2D_MATRIX_3X2_F v61; // [rsp+E8h] [rbp-20h] BYREF
  struct D2D_MATRIX_3X2_F v62; // [rsp+100h] [rbp-8h] BYREF
  struct ID2D1RegionGeometry *v63[8]; // [rsp+118h] [rbp+10h] BYREF

  v5 = 0LL;
  v6 = 0;
  v46 = 0LL;
  if ( a2->width <= 0.0 || a2->height <= 0.0 )
  {
    v6 = -2003304441;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x281u);
  }
  else
  {
    if ( (unsigned __int8)CCompositionSurfaceBitmap::IsSwapChain(*((CCompositionSurfaceBitmap **)this + 18)) )
    {
      SwapChainSize = CSurfaceBrush::GetSwapChainSize(this, (struct D2D_SIZE_F *)&v43, &v45, &v61);
      v6 = SwapChainSize;
      if ( SwapChainSize < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, SwapChainSize, 0x28Bu);
        return v6;
      }
      dy_low = (__m128)LODWORD(v61.dy);
      dx_low = (__m128)LODWORD(v61.dx);
      bottom = v45.bottom;
      right = v45.right;
      v16.m128_i32[0] = LODWORD(v45.top);
      v17.m128_i32[0] = LODWORD(v45.left);
      top = v43.top;
      left = v43.left;
    }
    else
    {
      v17 = (__m128)*((unsigned int *)this + 38);
      v16 = (__m128)*((unsigned int *)this + 39);
      left = *((float *)this + 40) - v17.m128_f32[0];
      right = *((FLOAT *)this + 40);
      top = *((float *)this + 41) - v16.m128_f32[0];
      bottom = *((FLOAT *)this + 41);
      v45.left = *((FLOAT *)this + 38);
      dx_low = _mm_xor_ps(v17, (__m128)_xmm);
      LODWORD(v45.top) = v16.m128_i32[0];
      dy_low = _mm_xor_ps(v16, (__m128)_xmm);
      v43.left = left;
      v43.top = top;
      v45.right = right;
      v45.bottom = bottom;
      *(_OWORD *)&v61.m11 = _xmm;
    }
    StretchAlign::Arrange(
      (CSurfaceBrush *)((char *)this + 128),
      (struct D2D_RECT_F *)&v62,
      (const struct D2D_SIZE_F *)&v43,
      a2,
      &v47);
    v21 = (CComponentTransform2D *)*((_QWORD *)this + 21);
    v22 = (float)(v47.right - v47.left) / left;
    v23 = (float)(v47.bottom - v47.top) / top;
    v26 = dx_low;
    v62.m11 = (float)(v61.m11 * v22) + (float)(v61.m12 * 0.0);
    m11 = v62.m11;
    v24 = (float)(v61.m12 * v23) + (float)(v61.m11 * 0.0);
    v62.m12 = v24;
    v25 = (float)(v61.m22 * v23) + (float)(v61.m21 * 0.0);
    v62.m22 = v25;
    v62.m21 = (float)(v61.m21 * v22) + (float)(v61.m22 * 0.0);
    v43.left = v62.m21;
    v26.m128_f32[0] = (float)((float)(dx_low.m128_f32[0] * v22) + (float)(dy_low.m128_f32[0] * 0.0)) + v47.left;
    *(_OWORD *)&v61.m11 = *(_OWORD *)&v62.m11;
    dy_low.m128_f32[0] = (float)((float)(dy_low.m128_f32[0] * v23) + (float)(dx_low.m128_f32[0] * 0.0)) + v47.top;
    *(_QWORD *)&v61.m[2][0] = _mm_unpacklo_ps(v26, dy_low).m128_u64[0];
    if ( v21 )
    {
      CComponentTransform2D::GetRealization(v21, a2, &v62);
      m22_low = (__m128)LODWORD(v62.m22);
      *(float *)&v48 = (float)(v62.m21 * v24) + (float)(m11 * v62.m11);
      *((float *)&v48 + 1) = (float)(v62.m22 * v24) + (float)(v62.m12 * m11);
      *((float *)&v48 + 2) = (float)(v62.m21 * v25) + (float)(v43.left * v62.m11);
      v28 = v26;
      m22_low.m128_f32[0] = (float)((float)(v62.m22 * dy_low.m128_f32[0]) + (float)(v62.m12 * v26.m128_f32[0])) + v62.dy;
      *((float *)&v48 + 3) = (float)(v62.m22 * v25) + (float)(v62.m12 * v43.left);
      v28.m128_f32[0] = (float)((float)(v26.m128_f32[0] * v62.m11) + (float)(v62.m21 * dy_low.m128_f32[0])) + v62.dx;
      *(_OWORD *)&v61.m11 = v48;
      *(_QWORD *)&v61.m[2][0] = _mm_unpacklo_ps(v28, m22_low).m128_u64[0];
    }
    if ( a3 )
    {
      v29 = (float)(a3->m12 * v61.m11) + (float)(v61.m12 * a3->m22);
      *(float *)&v48 = (float)(a3->m11 * v61.m11) + (float)(v61.m12 * a3->m21);
      v30 = v61.m21 * a3->m11;
      v31 = v61.m21 * a3->m12;
      *((float *)&v48 + 1) = v29;
      v32 = v30 + (float)(v61.m22 * a3->m21);
      *((float *)&v48 + 3) = (float)(v61.m22 * a3->m22) + v31;
      v33 = (__m128)LODWORD(v61.dy);
      *((float *)&v48 + 2) = v32;
      v34 = (__m128)LODWORD(v61.dx);
      v33.m128_f32[0] = (float)(v61.dy * a3->m22) + (float)(v61.dx * a3->m12);
      v34.m128_f32[0] = (float)((float)(v61.dx * a3->m11) + (float)(v61.dy * a3->m21)) + a3->dx;
      *(_OWORD *)&v61.m11 = v48;
      v33.m128_f32[0] = v33.m128_f32[0] + a3->dy;
      *(_QWORD *)&v61.m[2][0] = _mm_unpacklo_ps(v34, v33).m128_u64[0];
    }
    width = a2->width;
    height = a2->height;
    if ( D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)&v61, v20) )
    {
      D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
        (D2DMatrixHelper *)&v45,
        (const struct D2D_RECT_F *)&v61,
        (const struct D2D_MATRIX_3X2_F *)&v43,
        v37);
      if ( v43.left < 0.0 )
        v43.left = 0.0;
      if ( v43.top < 0.0 )
        v43.top = 0.0;
      if ( width < v43.right )
        v43.right = width;
      if ( height < v43.bottom )
        v43.bottom = height;
      if ( IsEmpty(&v43) )
      {
        v6 = -2003304441;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x2C0u);
        return v6;
      }
      goto LABEL_36;
    }
    D2DMatrixHelper::TransformRectConservative(
      (D2DMatrixHelper *)&v45,
      (const struct D2D_RECT_F *)&v61,
      (const struct D2D_MATRIX_3X2_F *)&v43,
      v37);
    if ( v43.left < 0.0 )
      v43.left = 0.0;
    if ( v43.top < 0.0 )
      v43.top = 0.0;
    if ( width < v43.right )
      v43.right = width;
    if ( height < v43.bottom )
      v43.bottom = height;
    if ( IsEmpty(&v43) )
    {
      v6 = -2003304441;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x2D4u);
      return v6;
    }
    if ( !a5 )
    {
LABEL_36:
      v39 = *(_QWORD *)&v61.m[2][0];
      *(_OWORD *)a4 = *(_OWORD *)&v61.m11;
      *((_QWORD *)a4 + 2) = v39;
      v40 = v43;
      *(struct D2D_RECT_F *)((char *)a4 + 24) = v45;
      v41 = v47;
      *(struct D2D_RECT_F *)((char *)a4 + 40) = v40;
      *(struct D2D_RECT_F *)((char *)a4 + 56) = v41;
      if ( a5 )
      {
        *a5 = v5;
        return v6;
      }
      goto LABEL_41;
    }
    *(_QWORD *)&v62.m11 = __PAIR64__(v16.m128_u32[0], v17.m128_u32[0]);
    *(_QWORD *)&v62.m[1][0] = __PAIR64__(LODWORD(bottom), LODWORD(right));
    CRectanglesShape::CRectanglesShape((CRectanglesShape *)v63, (const struct MilRectF *)&v62);
    v60 = 0;
    v50 = 0;
    v51 = 0;
    v53 = 0LL;
    v54 = 0LL;
    v56 = 0;
    v58 = 0;
    v52 = *(_QWORD *)&v61.m[1][0];
    v49 = *(_QWORD *)&v61.m11;
    v57 = *(_QWORD *)&v61.m[2][0];
    v55 = 1065353216;
    v59 = 1065353216;
    v38 = CShape::CopyShape(v63, (const struct CMILMatrix *)&v49, &v46);
    v6 = v38;
    if ( v38 >= 0 )
    {
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v63);
      v5 = v46;
      goto LABEL_36;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x2CEu);
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v63);
    v5 = v46;
  }
LABEL_41:
  if ( v5 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v5)(v5, 1LL);
  return v6;
}
