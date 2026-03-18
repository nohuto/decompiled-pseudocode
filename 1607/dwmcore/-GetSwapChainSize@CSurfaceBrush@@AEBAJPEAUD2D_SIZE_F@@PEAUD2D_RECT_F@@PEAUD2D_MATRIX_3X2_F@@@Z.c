/*
 * XREFs of ?GetSwapChainSize@CSurfaceBrush@@AEBAJPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18013A784
 * Callers:
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x1801399CC (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180005F0C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::GetSwapChainSize(
        CSurfaceBrush *this,
        struct D2D_SIZE_F *a2,
        struct D2D_RECT_F *a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  char v10; // al
  float bottom; // xmm5_4
  float right; // xmm4_4
  bool v13; // al
  __int128 v14; // xmm0
  unsigned __int64 v15; // xmm1_8
  FLOAT left; // xmm7_4
  FLOAT top; // xmm8_4
  __m128 v18; // xmm3
  __m128 v19; // xmm2
  __int128 v21; // [rsp+38h] [rbp-99h]
  float v22; // [rsp+58h] [rbp-79h] BYREF
  float v23; // [rsp+5Ch] [rbp-75h]
  float v24; // [rsp+68h] [rbp-69h]
  float v25; // [rsp+6Ch] [rbp-65h]
  float v26; // [rsp+88h] [rbp-49h]
  float v27; // [rsp+8Ch] [rbp-45h]
  int v28; // [rsp+98h] [rbp-39h]
  struct D2D_RECT_F v29; // [rsp+A8h] [rbp-29h] BYREF
  struct D2D_RECT_F v30; // [rsp+B8h] [rbp-19h] BYREF

  v4 = *((_QWORD *)this + 18);
  v5 = 0;
  v28 = 0;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*(CCompositionSurfaceInfo **)(v4 + 520));
  v10 = (*(__int64 (__fastcall **)(__int64, float *, struct D2D_RECT_F *))(*((_QWORD *)RenderingRealizationNoRef + 14)
                                                                         + 32LL))(
          (__int64)RenderingRealizationNoRef + 112,
          &v22,
          &v30);
  bottom = v30.bottom;
  right = v30.right;
  v13 = v10 == 0;
  if ( a3 )
  {
    v29 = v30;
    *a3 = v30;
  }
  if ( v13 )
  {
    *(_QWORD *)&v29.left = __PAIR64__(LODWORD(bottom), LODWORD(right));
    if ( a4 )
    {
      v14 = _xmm;
      v15 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
LABEL_8:
      *(_OWORD *)&a4->m11 = v14;
      *(_QWORD *)&a4->m[2][0] = v15;
    }
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v22, (__int64)&v30, &v29.left);
    left = v29.left;
    top = v29.top;
    right = v29.right - v29.left;
    bottom = v29.bottom - v29.top;
    v29.left = v29.right - v29.left;
    v29.top = v29.bottom - v29.top;
    if ( a4 )
    {
      v18 = (__m128)LODWORD(v27);
      v19 = (__m128)LODWORD(v26);
      *(float *)&v21 = (float)(v23 * 0.0) + v22;
      v18.m128_f32[0] = (float)((float)(v27 * 0.0) + v26) + COERCE_FLOAT(LODWORD(left) ^ _xmm);
      *((float *)&v21 + 1) = (float)(v22 * 0.0) + v23;
      v19.m128_f32[0] = (float)((float)(v26 * 0.0) + v27) + COERCE_FLOAT(LODWORD(top) ^ _xmm);
      *((float *)&v21 + 2) = (float)(v25 * 0.0) + v24;
      *((float *)&v21 + 3) = (float)(v24 * 0.0) + v25;
      v14 = v21;
      v15 = _mm_unpacklo_ps(v18, v19).m128_u64[0];
      goto LABEL_8;
    }
  }
  if ( right == 0.0 || bottom == 0.0 )
  {
    v5 = -2003304441;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x266u);
  }
  else
  {
    *a2 = *(struct D2D_SIZE_F *)&v29.left;
  }
  return v5;
}
