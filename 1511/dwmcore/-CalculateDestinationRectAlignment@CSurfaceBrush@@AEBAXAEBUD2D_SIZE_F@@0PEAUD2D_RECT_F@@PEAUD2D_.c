/*
 * XREFs of ?CalculateDestinationRectAlignment@CSurfaceBrush@@AEBAXAEBUD2D_SIZE_F@@0PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180121AE8
 * Callers:
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180121360 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?CalculateDestinationRect@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F@@PEAU3@@Z @ 0x1801216B0 (-CalculateDestinationRect@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT.c)
 * Callees:
 *     ?Arrange@StretchAlign@@QEBA?AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z @ 0x18013ABD0 (-Arrange@StretchAlign@@QEBA-AUD2D_RECT_F@@AEBUD2D_SIZE_F@@0PEAU2@@Z.c)
 */

void __fastcall CSurfaceBrush::CalculateDestinationRectAlignment(
        CSurfaceBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_SIZE_F *a3,
        struct D2D_RECT_F *a4,
        struct D2D_MATRIX_3X2_F *a5)
{
  float *v6; // r8
  __m128 v7; // xmm1
  __m128 v8; // xmm2
  float m22; // xmm4_4
  float v10; // xmm7_4
  float v11; // xmm9_4
  FLOAT v12; // xmm3_4
  float m21; // xmm2_4
  FLOAT v14; // xmm1_4
  __m128 dy_low; // xmm3
  FLOAT v16; // xmm4_4
  float v17; // xmm0_4
  __m128 dx_low; // xmm2
  float v19; // xmm1_4
  struct D2D_RECT_F v20; // [rsp+38h] [rbp-31h] BYREF
  struct D2D_RECT_F v21; // [rsp+48h] [rbp-21h] BYREF

  *a4 = *StretchAlign::Arrange((CSurfaceBrush *)((char *)this + 88), &v21, a2, a3, &v20);
  if ( a5 )
  {
    v7 = _mm_xor_ps((__m128)LODWORD(v20.left), (__m128)_xmm);
    v8 = _mm_xor_ps((__m128)LODWORD(v20.top), (__m128)_xmm);
    *(_OWORD *)&a5->m11 = _xmm;
    *(_QWORD *)&a5->m[2][0] = _mm_unpacklo_ps(v7, v8).m128_u64[0];
    if ( *((_DWORD *)this + 24) )
    {
      m22 = a5->m22;
      v10 = *v6 / (float)(v20.right - v20.left);
      v11 = v6[1] / (float)(v20.bottom - v20.top);
      v12 = (float)(a5->m12 * v11) + (float)(a5->m11 * 0.0);
      m21 = a5->m21;
      v21.left = (float)(a5->m11 * v10) + (float)(a5->m12 * 0.0);
      v14 = (float)(m21 * v10) + (float)(m22 * 0.0);
      v21.top = v12;
      dy_low = (__m128)LODWORD(a5->dy);
      v16 = (float)(m22 * v11) + (float)(m21 * 0.0);
      v17 = a5->dy * 0.0;
      v21.right = v14;
      dx_low = (__m128)LODWORD(a5->dx);
      v19 = a5->dx * 0.0;
      v21.bottom = v16;
      *(struct D2D_RECT_F *)&a5->m11 = v21;
      dx_low.m128_f32[0] = (float)((float)(dx_low.m128_f32[0] * v10) + v17) + (float)(0.0 - (float)(v10 * 0.0));
      dy_low.m128_f32[0] = (float)((float)(dy_low.m128_f32[0] * v11) + v19) + (float)(0.0 - (float)(v11 * 0.0));
      *(_QWORD *)&a5->m[2][0] = _mm_unpacklo_ps(dx_low, dy_low).m128_u64[0];
    }
  }
}
