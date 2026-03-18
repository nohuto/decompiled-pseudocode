/*
 * XREFs of ?GetSwapChainSize@CSurfaceBrush@@AEBAJPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@PEA_N@Z @ 0x180122008
 * Callers:
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180121360 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?CalculateDestinationRect@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F@@PEAU3@@Z @ 0x1801216B0 (-CalculateDestinationRect@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18002F37C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180047C60 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CSurfaceBrush::GetSwapChainSize(
        CSurfaceBrush *this,
        struct D2D_SIZE_F *a2,
        struct D2D_RECT_F *a3,
        struct D2D_MATRIX_3X2_F *a4,
        bool *a5)
{
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  char v9; // al
  float bottom; // xmm5_4
  unsigned int v11; // ebx
  float right; // xmm4_4
  bool v13; // al
  FLOAT left; // xmm7_4
  FLOAT top; // xmm8_4
  __m128 v16; // xmm3
  __m128 v17; // xmm2
  __int128 v19; // [rsp+38h] [rbp-A1h]
  struct D2D_RECT_F v20; // [rsp+50h] [rbp-89h] BYREF
  struct D2D_RECT_F v21; // [rsp+60h] [rbp-79h] BYREF
  float v22; // [rsp+78h] [rbp-61h] BYREF
  float v23; // [rsp+7Ch] [rbp-5Dh]
  float v24; // [rsp+88h] [rbp-51h]
  float v25; // [rsp+8Ch] [rbp-4Dh]
  float v26; // [rsp+A8h] [rbp-31h]
  float v27; // [rsp+ACh] [rbp-2Dh]

  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*(CCompositionSurfaceInfo **)(*((_QWORD *)this + 8) + 440LL));
  v9 = (*(__int64 (__fastcall **)(__int64, float *, struct D2D_RECT_F *))(*((_QWORD *)RenderingRealizationNoRef + 14)
                                                                        + 32LL))(
         (__int64)RenderingRealizationNoRef + 112,
         &v22,
         &v21);
  bottom = v21.bottom;
  v11 = 0;
  right = v21.right;
  v13 = v9 == 0;
  if ( a3 )
  {
    v20 = v21;
    *a3 = v21;
  }
  if ( a5 )
    *a5 = v13;
  if ( v13 )
  {
    *(_QWORD *)&v20.left = __PAIR64__(LODWORD(bottom), LODWORD(right));
  }
  else
  {
    CBaseMatrix::Transform2DBounds((CBaseMatrix *)&v22, (const struct MilRectF *)&v21, (struct MilRectF *)&v20);
    left = v20.left;
    top = v20.top;
    right = v20.right - v20.left;
    bottom = v20.bottom - v20.top;
    v20.left = v20.right - v20.left;
    v20.top = v20.bottom - v20.top;
    if ( a4 )
    {
      v16 = (__m128)LODWORD(v27);
      v17 = (__m128)LODWORD(v26);
      *(float *)&v19 = (float)(v23 * 0.0) + v22;
      v16.m128_f32[0] = (float)((float)(v27 * 0.0) + v26) + COERCE_FLOAT(LODWORD(left) ^ _xmm);
      *((float *)&v19 + 1) = (float)(v22 * 0.0) + v23;
      v17.m128_f32[0] = (float)((float)(v26 * 0.0) + v27) + COERCE_FLOAT(LODWORD(top) ^ _xmm);
      *((float *)&v19 + 2) = (float)(v25 * 0.0) + v24;
      *((float *)&v19 + 3) = (float)(v24 * 0.0) + v25;
      *(_OWORD *)&a4->m11 = v19;
      *(_QWORD *)&a4->m[2][0] = _mm_unpacklo_ps(v16, v17).m128_u64[0];
    }
  }
  if ( right == 0.0 || bottom == 0.0 )
  {
    v11 = -2003304441;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x183u);
  }
  else
  {
    *a2 = *(struct D2D_SIZE_F *)&v20.left;
  }
  return v11;
}
