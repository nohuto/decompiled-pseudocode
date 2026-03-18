/*
 * XREFs of ?GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180020928
 * Callers:
 *     ?GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18002C9C0 (-GetShapeDataWorker@CGeometry@@AEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180067DF0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x1801399CC (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 *     ?GetCommonBrushParameters@CLinearGradientBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonBrushParameters@@PEAPEAVCShape@@@Z @ 0x18013F0E0 (-GetCommonBrushParameters@CLinearGradientBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUC.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

void __fastcall CComponentTransform2D::GetRealization(
        CComponentTransform2D *this,
        const struct D2D_SIZE_F *a2,
        struct D2D_MATRIX_3X2_F *a3)
{
  __m128 v3; // xmm1
  __m128 v6; // xmm2
  float v7; // xmm6_4
  float v8; // xmm7_4
  float v9; // xmm0_4
  FLOAT v10; // xmm8_4
  FLOAT v11; // xmm6_4
  __m128 v12; // xmm7
  float v13; // xmm4_4
  float v14; // xmm3_4
  __m128 v15; // xmm5
  __m128 v16; // xmm4
  float v17; // xmm8_4
  float v18; // xmm1_4
  float m21; // xmm3_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  FLOAT v22; // xmm1_4
  float m22; // xmm0_4
  FLOAT v24; // xmm1_4
  float v25; // xmm0_4
  __m128 dx_low; // xmm1
  __m128 v27; // xmm2
  __m128 m21_low; // xmm6
  __m128 m12_low; // xmm5
  __int128 v30; // [rsp+28h] [rbp-19h]
  float v31[6]; // [rsp+28h] [rbp-19h]
  D2D1_POINT_2F center; // [rsp+40h] [rbp-1h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+48h] [rbp+7h] BYREF

  v3 = (__m128)*((unsigned int *)this + 34);
  v3.m128_f32[0] = v3.m128_f32[0] * a2->width;
  v6 = (__m128)*((unsigned int *)this + 35);
  v6.m128_f32[0] = v6.m128_f32[0] * a2->height;
  *(_OWORD *)&a3->m11 = _xmm;
  *(_QWORD *)&a3->m[2][0] = _mm_unpacklo_ps(_mm_xor_ps(v3, (__m128)_xmm), _mm_xor_ps(v6, (__m128)_xmm)).m128_u64[0];
  v7 = *((float *)this + 40);
  v8 = *((float *)this + 36);
  center.x = v8;
  center.y = *((FLOAT *)this + 37);
  if ( v7 != 1.0 || *((float *)this + 41) != 1.0 )
  {
    v16 = (__m128)*((unsigned int *)this + 41);
    v17 = *((float *)this + 37) - (float)(*((float *)this + 41) * *((float *)this + 37));
    v18 = a3->m11 * v7;
    m21 = a3->m21;
    v20 = a3->m12 * 0.0;
    matrix.m12 = (float)(*((float *)this + 41) * a3->m12) + (float)(a3->m11 * 0.0);
    v21 = v16.m128_f32[0] * a3->m22;
    v22 = v18 + v20;
    m22 = a3->m22;
    v16.m128_f32[0] = v16.m128_f32[0] * a3->dy;
    matrix.m11 = v22;
    v24 = (float)(m21 * v7) + (float)(m22 * 0.0);
    v25 = a3->dy * 0.0;
    matrix.m21 = v24;
    dx_low = (__m128)LODWORD(a3->dx);
    matrix.m22 = v21 + (float)(m21 * 0.0);
    v27 = dx_low;
    *(_OWORD *)&a3->m11 = *(_OWORD *)&matrix.m11;
    v27.m128_f32[0] = (float)((float)(dx_low.m128_f32[0] * v7) + v25) + (float)(v8 - (float)(v7 * v8));
    v16.m128_f32[0] = (float)(v16.m128_f32[0] + (float)(dx_low.m128_f32[0] * 0.0)) + v17;
    *(_QWORD *)&a3->m[2][0] = _mm_unpacklo_ps(v27, v16).m128_u64[0];
  }
  v9 = *((float *)this + 42);
  if ( v9 != 0.0 )
  {
    D2D1MakeRotateMatrix(v9 * 57.295776, center, &matrix);
    m21_low = (__m128)LODWORD(matrix.m21);
    m12_low = (__m128)LODWORD(matrix.m12);
    v31[0] = (float)(matrix.m21 * a3->m12) + (float)(matrix.m11 * a3->m11);
    v31[1] = (float)(matrix.m12 * a3->m11) + (float)(matrix.m22 * a3->m12);
    m21_low.m128_f32[0] = (float)((float)(matrix.m21 * a3->dy) + (float)(matrix.m11 * a3->dx)) + matrix.dx;
    v31[2] = (float)(matrix.m21 * a3->m22) + (float)(matrix.m11 * a3->m21);
    m12_low.m128_f32[0] = (float)((float)(matrix.m12 * a3->dx) + (float)(matrix.m22 * a3->dy)) + matrix.dy;
    v31[3] = (float)(matrix.m12 * a3->m21) + (float)(matrix.m22 * a3->m22);
    *(_OWORD *)&a3->m11 = *(_OWORD *)v31;
    *(_QWORD *)&a3->m[2][0] = _mm_unpacklo_ps(m21_low, m12_low).m128_u64[0];
  }
  v10 = *((float *)this + 38) + a3->dx;
  a3->dx = v10;
  v11 = *((float *)this + 39) + a3->dy;
  a3->dy = v11;
  v12 = (__m128)*((unsigned int *)this + 43);
  v13 = *((float *)this + 45);
  v14 = *((float *)this + 46);
  v15 = (__m128)*((unsigned int *)this + 44);
  *(float *)&v30 = (float)(*((float *)this + 43) * a3->m11) + (float)(v13 * a3->m12);
  *((float *)&v30 + 1) = (float)(v15.m128_f32[0] * a3->m11) + (float)(v14 * a3->m12);
  *((float *)&v30 + 2) = (float)(v12.m128_f32[0] * a3->m21) + (float)(v13 * a3->m22);
  v12.m128_f32[0] = (float)((float)(v12.m128_f32[0] * v10) + (float)(v13 * v11)) + *((float *)this + 47);
  *((float *)&v30 + 3) = (float)(*((float *)this + 44) * a3->m21) + (float)(v14 * a3->m22);
  v15.m128_f32[0] = (float)((float)(v15.m128_f32[0] * v10) + (float)(v14 * v11)) + *((float *)this + 48);
  *(_OWORD *)&a3->m11 = v30;
  *(_QWORD *)&a3->m[2][0] = _mm_unpacklo_ps(v12, v15).m128_u64[0];
}
