/*
 * XREFs of ?CalculateDestinationRect@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F@@PEAU3@@Z @ 0x1801216B0
 * Callers:
 *     ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180121CF0 (-Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?GetCommonBrushParameters@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonBrushParameters@@@Z @ 0x180121ED0 (-GetCommonBrushParameters@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonB.c)
 *     ?HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180122250 (-HitTest@CSurfaceBrush@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18000CA24 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18002F37C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?CalculateDestinationRectAlignment@CSurfaceBrush@@AEBAXAEBUD2D_SIZE_F@@0PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180121AE8 (-CalculateDestinationRectAlignment@CSurfaceBrush@@AEBAXAEBUD2D_SIZE_F@@0PEAUD2D_RECT_F@@PEAUD2D_.c)
 *     ?GetSwapChainSize@CSurfaceBrush@@AEBAJPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@PEA_N@Z @ 0x180122008 (-GetSwapChainSize@CSurfaceBrush@@AEBAJPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@PEA_.c)
 */

__int64 __fastcall CSurfaceBrush::CalculateDestinationRect(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct D2D_RECT_F *a4,
        struct D2D_MATRIX_3X2_F *a5)
{
  CCompositionSurfaceBitmap *v7; // rcx
  bool v8; // r12
  D2D1_MATRIX_3X2_F *v9; // rdi
  struct D2D_RECT_F *v11; // r8
  int SwapChainSize; // eax
  unsigned int v13; // r14d
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __int64 v16; // xmm1_8
  float m22; // xmm2_4
  float m21; // xmm3_4
  __m128 dx_low; // xmm4
  float v20; // xmm0_4
  FLOAT v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  FLOAT v26; // xmm3_4
  __m128 v27; // xmm2
  float dy; // xmm0_4
  __m128 m11_low; // xmm6
  float v30; // xmm4_4
  float v31; // xmm3_4
  __m128 v32; // xmm5
  float v33; // xmm2_4
  float v34; // xmm0_4
  float v35; // xmm1_4
  FLOAT v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm4_4
  FLOAT v39; // xmm1_4
  float v40; // xmm0_4
  float v41; // xmm3_4
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  __m128 dy_low; // xmm4
  float v44; // xmm7_4
  float v45; // xmm9_4
  float v46; // xmm6_4
  float v47; // xmm8_4
  float v48; // xmm3_4
  float v49; // xmm2_4
  float v50; // xmm0_4
  float v51; // xmm3_4
  float dx; // xmm1_4
  __m128 v53; // xmm2
  bool v55[8]; // [rsp+38h] [rbp-91h] BYREF
  struct D2D_SIZE_F v56; // [rsp+40h] [rbp-89h] BYREF
  struct D2D_RECT_F *v57; // [rsp+48h] [rbp-81h] BYREF
  __int128 v58; // [rsp+50h] [rbp-79h]
  struct D2D_RECT_F v59; // [rsp+68h] [rbp-61h] BYREF
  _BYTE v60[24]; // [rsp+80h] [rbp-49h] BYREF

  v57 = a4;
  v7 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 8);
  v8 = 1;
  v9 = (D2D1_MATRIX_3X2_F *)((unsigned __int64)v60 & -(__int64)(a5 != 0LL));
  v55[0] = 1;
  v58 = 0uLL;
  if ( (unsigned __int8)CCompositionSurfaceBitmap::IsSwapChain(v7) )
  {
    SwapChainSize = CSurfaceBrush::GetSwapChainSize(this, &v56, v11, v9, v55);
    v13 = SwapChainSize;
    if ( SwapChainSize < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, SwapChainSize, 0x1AAu);
      return v13;
    }
    v8 = v55[0];
  }
  else
  {
    v14 = (__m128)*((unsigned int *)this + 20);
    v15 = (__m128)*((unsigned int *)this + 21);
    v14.m128_f32[0] = v14.m128_f32[0] - *((float *)this + 18);
    v15.m128_f32[0] = v15.m128_f32[0] - *((float *)this + 19);
    v56 = (struct D2D_SIZE_F)_mm_unpacklo_ps(v14, v15).m128_u64[0];
    if ( v11 )
    {
      v59 = *(struct D2D_RECT_F *)((char *)this + 72);
      *v11 = v59;
    }
  }
  CSurfaceBrush::CalculateDestinationRectAlignment(
    this,
    &v56,
    a2,
    v57,
    (struct D2D_MATRIX_3X2_F *)((unsigned __int64)&v59 & -(__int64)(a5 != 0LL)));
  if ( a5 )
  {
    v16 = *(_QWORD *)(((unsigned __int64)&v59 & -(__int64)(a5 != 0LL)) + 0x10);
    *(_OWORD *)&a5->m11 = *(_OWORD *)((unsigned __int64)&v59 & -(__int64)(a5 != 0LL));
    *(_QWORD *)&a5->m[2][0] = v16;
    if ( a3 )
    {
      m22 = a5->m22;
      m21 = a5->m21;
      dx_low = (__m128)LODWORD(a5->dx);
      v20 = a3->m22 * a5->m12;
      v59.left = (float)(a5->m11 * a3->m11) + (float)(a3->m21 * a5->m12);
      v21 = (float)(a3->m12 * a5->m11) + v20;
      v22 = m22;
      v23 = m22 * a3->m22;
      v24 = v22 * a3->m21;
      v59.top = v21;
      v25 = m21 * a3->m11;
      v26 = (float)(m21 * a3->m12) + v23;
      v27 = dx_low;
      v27.m128_f32[0] = dx_low.m128_f32[0] * a3->m11;
      dx_low.m128_f32[0] = dx_low.m128_f32[0] * a3->m12;
      v59.right = v25 + v24;
      dy = a5->dy;
      v59.bottom = v26;
      dx_low.m128_f32[0] = (float)(dx_low.m128_f32[0] + (float)(dy * a3->m22)) + a3->dy;
      v27.m128_f32[0] = (float)(v27.m128_f32[0] + (float)(dy * a3->m21)) + a3->dx;
      *(struct D2D_RECT_F *)&a5->m11 = v59;
      *(_QWORD *)&a5->m[2][0] = _mm_unpacklo_ps(v27, dx_low).m128_u64[0];
    }
    if ( !v8 )
    {
      D2D1InvertMatrix(v9);
      m11_low = (__m128)LODWORD(v9->m11);
      v30 = *(float *)(((unsigned __int64)v60 & -(__int64)(a5 != 0LL)) + 8);
      v31 = *(float *)(((unsigned __int64)v60 & -(__int64)(a5 != 0LL)) + 0xC);
      v32 = (__m128)*(unsigned int *)(((unsigned __int64)v60 & -(__int64)(a5 != 0LL)) + 4);
      v33 = *(float *)(((unsigned __int64)v60 & -(__int64)(a5 != 0LL)) + 4) * a5->m21;
      v34 = v31 * a5->m12;
      v59.left = (float)(*(float *)((unsigned __int64)v60 & -(__int64)(a5 != 0LL)) * a5->m11) + (float)(v30 * a5->m12);
      v35 = v32.m128_f32[0] * a5->m11;
      v32.m128_f32[0] = v32.m128_f32[0] * a5->dx;
      v36 = v35 + v34;
      v37 = v30 * a5->m22;
      v38 = v30 * a5->dy;
      v59.top = v36;
      v39 = (float)(m11_low.m128_f32[0] * a5->m21) + v37;
      v40 = v31 * a5->m22;
      v41 = v31 * a5->dy;
      m11_low.m128_f32[0] = (float)(m11_low.m128_f32[0] * a5->dx) + v38;
      v59.right = v39;
      m11_low.m128_f32[0] = m11_low.m128_f32[0] + *(float *)(((unsigned __int64)v60 & -(__int64)(a5 != 0LL)) + 0x10);
      v59.bottom = v33 + v40;
      v32.m128_f32[0] = (float)(v32.m128_f32[0] + v41)
                      + *(float *)(((unsigned __int64)v60 & -(__int64)(a5 != 0LL)) + 0x14);
      *(struct D2D_RECT_F *)&a5->m11 = v59;
      *(_QWORD *)&a5->m[2][0] = _mm_unpacklo_ps(m11_low, v32).m128_u64[0];
    }
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*(CCompositionSurfaceInfo **)(*((_QWORD *)this + 8) + 440LL));
    (*(void (__fastcall **)(__int64, struct D2D_RECT_F **, struct D2D_SIZE_F *))(*((_QWORD *)RenderingRealizationNoRef
                                                                                 + 14)
                                                                               + 24LL))(
      (__int64)RenderingRealizationNoRef + 112,
      &v57,
      &v56);
    dy_low = (__m128)LODWORD(a5->dy);
    v44 = 1.0 / (float)(int)v57;
    v45 = 1.0 / (float)SLODWORD(v56.width);
    v46 = *(float *)&v58 * v44;
    v47 = *((float *)&v58 + 1) * v45;
    v48 = (float)(a5->m12 * v45) + (float)(a5->m11 * 0.0);
    v49 = a5->m21;
    *(float *)&v58 = (float)(a5->m11 * v44) + (float)(a5->m12 * 0.0);
    *((float *)&v58 + 1) = v48;
    v50 = a5->m22;
    v51 = (float)(v50 * v45) + (float)(v49 * 0.0);
    *((float *)&v58 + 2) = (float)(v49 * v44) + (float)(v50 * 0.0);
    dx = a5->dx;
    v53 = (__m128)LODWORD(dx);
    *((float *)&v58 + 3) = v51;
    *(_OWORD *)&a5->m11 = v58;
    v53.m128_f32[0] = (float)((float)(dx * v44) + (float)(dy_low.m128_f32[0] * 0.0)) + v46;
    dy_low.m128_f32[0] = (float)((float)(dy_low.m128_f32[0] * v45) + (float)(dx * 0.0)) + v47;
    *(_QWORD *)&a5->m[2][0] = _mm_unpacklo_ps(v53, dy_low).m128_u64[0];
  }
  return 0;
}
