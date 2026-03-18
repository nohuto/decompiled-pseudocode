/*
 * XREFs of ?GetCommonBrushParameters@CLinearGradientBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonBrushParameters@@PEAPEAVCShape@@@Z @ 0x18013F0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180005F0C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180020928 (-GetRealization@CComponentTransform2D@@QEAAXAEBUD2D_SIZE_F@@PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?InferVisualToTextureTransform@CLinearGradientBrush@@AEBAJAEAY02$$CBUD2D_POINT_2F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18013F4C4 (-InferVisualToTextureTransform@CLinearGradientBrush@@AEBAJAEAY02$$CBUD2D_POINT_2F@@PEAUD2D_MATRI.c)
 */

__int64 __fastcall CLinearGradientBrush::GetCommonBrushParameters(
        CLinearGradientBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct CCommonBrushParameters *a4,
        struct CShape **a5)
{
  FLOAT height; // xmm0_4
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int64 v11; // rax
  FLOAT v12; // xmm4_4
  FLOAT v13; // xmm3_4
  FLOAT v14; // xmm2_4
  FLOAT v15; // xmm1_4
  CComponentTransform2D *v16; // rcx
  __m128 v17; // xmm0
  __m128 v18; // xmm1
  __m128 m11_low; // xmm6
  float m21; // xmm4_4
  float m11; // xmm2_4
  float m22; // xmm3_4
  __m128 m12_low; // xmm5
  float v24; // xmm0_4
  __int128 v25; // xmm0
  unsigned __int64 v26; // xmm1_8
  int v27; // edx
  struct D2D_POINT_2F *v28; // rcx
  __m128 m21_low; // xmm2
  __m128 m22_low; // xmm1
  int v31; // eax
  unsigned int v32; // esi
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  float v34; // xmm1_4
  int v35; // eax
  int v37; // [rsp+38h] [rbp-41h] BYREF
  struct D2D_SIZE_F v38[2]; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v39[8]; // [rsp+58h] [rbp-21h] BYREF
  struct D2D_MATRIX_3X2_F v40; // [rsp+60h] [rbp-19h] BYREF
  struct D2D_POINT_2F v41[3]; // [rsp+78h] [rbp-1h] BYREF

  if ( a5 )
    *a5 = 0LL;
  v38[0].width = 0.0;
  v38[0].height = 0.0;
  *((_OWORD *)a4 + 2) = _xmm;
  *((_QWORD *)a4 + 8) = 0LL;
  *((_DWORD *)a4 + 29) = 0;
  *((_QWORD *)a4 + 22) = 0LL;
  *((_DWORD *)a4 + 57) = 0;
  *((_DWORD *)a4 + 72) = 0;
  height = a2->height;
  v38[1].width = a2->width;
  v38[1].height = height;
  v9 = *(_OWORD *)&v38[0].width;
  *(_OWORD *)a4 = *(_OWORD *)&v38[0].width;
  *((_OWORD *)a4 + 1) = v9;
  v10 = *((_QWORD *)this + 18);
  if ( v10 )
    v11 = v10 + 120;
  else
    v11 = 0LL;
  *((_QWORD *)a4 + 8) = v11;
  *(_OWORD *)((char *)a4 + 72) = 0LL;
  BYTE1(v37) = *((_BYTE *)this + 192);
  LOBYTE(v37) = 1;
  *((_WORD *)a4 + 56) = v37;
  *((_BYTE *)a4 + 114) = 0;
  v12 = a2->width * *((float *)this + 46);
  v13 = a2->width * *((float *)this + 44);
  v14 = a2->height * *((float *)this + 45);
  v15 = a2->height * *((float *)this + 47);
  v16 = (CComponentTransform2D *)*((_QWORD *)this + 21);
  v41[1].x = v12;
  v41[0].x = v13;
  v41[1].y = v15;
  v41[0].y = v14;
  v41[2].y = (float)(v12 - v13) + v14;
  v41[2].x = v13 - (float)(v15 - v14);
  if ( v16 )
  {
    v17 = (__m128)*((unsigned int *)this + 40);
    v18 = (__m128)*((unsigned int *)this + 41);
    v17.m128_f32[0] = v17.m128_f32[0] - *((float *)this + 38);
    v18.m128_f32[0] = v18.m128_f32[0] - *((float *)this + 39);
    v38[0] = (struct D2D_SIZE_F)_mm_unpacklo_ps(v17, v18).m128_u64[0];
    CComponentTransform2D::GetRealization(v16, v38, &v40);
    if ( !a3 )
      goto LABEL_13;
    m11_low = (__m128)LODWORD(a3->m11);
    m21 = a3->m21;
    m11 = a3->m11;
    m22 = a3->m22;
    m12_low = (__m128)LODWORD(a3->m12);
    v24 = a3->m12 * v40.m11;
    v38[0].width = (float)(m21 * v40.m12) + (float)(a3->m11 * v40.m11);
    v38[0].height = (float)(m22 * v40.m12) + v24;
    m11_low.m128_f32[0] = (float)((float)(m11_low.m128_f32[0] * v40.dx) + (float)(m21 * v40.dy)) + a3->dx;
    v38[1].width = (float)(m11 * v40.m21) + (float)(m21 * v40.m22);
    v38[1].height = (float)(m12_low.m128_f32[0] * v40.m21) + (float)(m22 * v40.m22);
    m12_low.m128_f32[0] = (float)((float)(m12_low.m128_f32[0] * v40.dx) + (float)(m22 * v40.dy)) + a3->dy;
    v25 = *(_OWORD *)&v38[0].width;
    v26 = _mm_unpacklo_ps(m11_low, m12_low).m128_u64[0];
LABEL_12:
    *(_QWORD *)&v40.m[2][0] = v26;
    *(_OWORD *)&v40.m11 = v25;
LABEL_13:
    v27 = 0;
    v28 = v41;
    do
    {
      ++v27;
      m21_low = (__m128)LODWORD(v40.m21);
      m22_low = (__m128)LODWORD(v40.m22);
      v38[0] = (struct D2D_SIZE_F)*v28;
      m21_low.m128_f32[0] = (float)((float)(v40.m21 * v38[0].height) + (float)(v40.m11 * v38[0].width)) + v40.dx;
      m22_low.m128_f32[0] = (float)((float)(v40.m22 * v38[0].height) + (float)(v40.m12 * v38[0].width)) + v40.dy;
      *v28++ = (struct D2D_POINT_2F)_mm_unpacklo_ps(m21_low, m22_low).m128_u64[0];
    }
    while ( (unsigned __int64)v27 < 3 );
    goto LABEL_15;
  }
  if ( a3 )
  {
    v25 = *(_OWORD *)&a3->m11;
    v26 = *(_QWORD *)&a3->m[2][0];
    goto LABEL_12;
  }
LABEL_15:
  v31 = CLinearGradientBrush::InferVisualToTextureTransform(
          this,
          (const struct D2D_POINT_2F (*)[3])v41,
          (struct D2D_MATRIX_3X2_F *)((char *)a4 + 88));
  v32 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x10Du);
  }
  else
  {
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*(CCompositionSurfaceInfo **)(*((_QWORD *)this + 18) + 520LL));
    (*(void (__fastcall **)(__int64, _BYTE *, int *))(*((_QWORD *)RenderingRealizationNoRef + 14) + 24LL))(
      (__int64)RenderingRealizationNoRef + 112,
      v39,
      &v37);
    v34 = *((float *)this + 39);
    v35 = v37;
    v32 = 0;
    *((_DWORD *)a4 + 23) = 0;
    *((_DWORD *)a4 + 25) = 0;
    *((float *)a4 + 27) = (float)(v34 + 0.5) / (float)v35;
  }
  return v32;
}
