/*
 * XREFs of ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180010A14
 * Callers:
 *     ?RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800108F0 (-RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x180041C60 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180046380 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x180046E74 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x18010E108 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall CLinearInterpolationLayer::RenderLayer(CLinearInterpolationLayer *this, struct CDrawingContext *a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  int v6; // eax
  unsigned int v7; // edi
  float v8; // xmm1_4
  int v9; // xmm0_4
  int v10; // xmm1_4
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+48h] [rbp-39h] BYREF
  float v15[5]; // [rsp+58h] [rbp-29h] BYREF
  float v16; // [rsp+6Ch] [rbp-15h]
  int v17; // [rsp+70h] [rbp-11h]
  int v18; // [rsp+74h] [rbp-Dh]
  int v19; // [rsp+78h] [rbp-9h]
  int v20; // [rsp+7Ch] [rbp-5h]
  int v21; // [rsp+80h] [rbp-1h]
  int v22; // [rsp+84h] [rbp+3h]
  int v23; // [rsp+88h] [rbp+7h]
  int v24; // [rsp+8Ch] [rbp+Bh]
  int v25; // [rsp+90h] [rbp+Fh]
  int v26; // [rsp+94h] [rbp+13h]
  _DWORD v27[4]; // [rsp+98h] [rbp+17h] BYREF

  v2 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v14 = 0LL;
  v25 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v17 = 0;
  v15[4] = 0.0;
  v15[3] = 0.0;
  v15[2] = 0.0;
  v15[1] = 0.0;
  v27[0] = 0;
  v27[1] = 0;
  v26 = 1065353216;
  v21 = 1065353216;
  v16 = 1.0;
  v15[0] = 1.0;
  *(float *)&v27[2] = _mm_cvtepi32_ps(v2).m128_f32[0] + 0.0;
  *(float *)&v27[3] = _mm_cvtepi32_ps(v3).m128_f32[0] + 0.0;
  if ( g_LockAndReadLayer )
    CDrawingContext::ReadTexture(a2);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 1) + 112LL))(*((_QWORD *)this + 1), &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xA4u);
  }
  else
  {
    v8 = 1.0 / *((float *)this + 27);
    v15[0] = 1.0 / *((float *)this + 26);
    v9 = *((_DWORD *)this + 28);
    v16 = v8;
    v10 = *((_DWORD *)this + 29);
    v23 = v9;
    v24 = v10;
    v11 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v15, 1, 0);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xB3u);
    }
    else
    {
      v12 = CDrawingContext::DrawD2DBitmapWithPartialOcclusion(
              a2,
              v14,
              v27,
              v27,
              LODWORD(FLOAT_1_0),
              *((_DWORD *)a2 + 1446),
              *((_DWORD *)a2 + 63));
      v7 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB9u);
      CDrawingContext::PopTransformInternal(a2, 0);
    }
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v7;
}
