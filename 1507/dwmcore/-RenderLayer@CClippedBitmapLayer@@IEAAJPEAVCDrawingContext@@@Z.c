/*
 * XREFs of ?RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800FB5A8
 * Callers:
 *     ?RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FB7A0 (-RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x18002C9D0 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180030500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800310B0 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x1800F4424 (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall CClippedBitmapLayer::RenderLayer(CClippedBitmapLayer *this, struct CDrawingContext *a2)
{
  __m128i v2; // xmm0
  __m128i v3; // xmm1
  int v6; // eax
  unsigned int v7; // edi
  int v8; // xmm1_4
  int v9; // eax
  int v10; // eax
  struct ID2D1Bitmap1 *v12; // [rsp+48h] [rbp-39h] BYREF
  _DWORD v13[12]; // [rsp+58h] [rbp-29h] BYREF
  int v14; // [rsp+88h] [rbp+7h]
  int v15; // [rsp+8Ch] [rbp+Bh]
  int v16; // [rsp+90h] [rbp+Fh]
  int v17; // [rsp+94h] [rbp+13h]
  unsigned int v18[4]; // [rsp+98h] [rbp+17h] BYREF

  v2 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v12 = 0LL;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  v13[11] = 0;
  v13[9] = 0;
  v13[8] = 0;
  v13[7] = 0;
  v13[6] = 0;
  v13[4] = 0;
  v13[3] = 0;
  v13[2] = 0;
  v13[1] = 0;
  v18[0] = 0;
  v18[1] = 0;
  v17 = 1065353216;
  v13[10] = 1065353216;
  v13[5] = 1065353216;
  v13[0] = 1065353216;
  *(float *)&v18[2] = _mm_cvtepi32_ps(v2).m128_f32[0] + 0.0;
  *(float *)&v18[3] = _mm_cvtepi32_ps(v3).m128_f32[0] + 0.0;
  if ( g_LockAndReadLayer )
    CDrawingContext::ReadTexture(a2);
  v6 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Bitmap1 **))(**((_QWORD **)this + 1) + 112LL))(
         *((_QWORD *)this + 1),
         &v12);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = *((_DWORD *)this + 27);
    v14 = *((_DWORD *)this + 26);
    v15 = v8;
    v9 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v13, 1, 0);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v10 = CDrawingContext::DrawD2DBitmapWithPartialOcclusion(
              (__int64)a2,
              v12,
              v18,
              (float *)v18,
              1.0,
              *((_DWORD *)a2 + 1438),
              *((_DWORD *)a2 + 63));
      v7 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC3u);
      CDrawingContext::PopTransformInternal(a2, 0);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xBDu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB6u);
  }
  if ( v12 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v12 + 16LL))(v12);
  return v7;
}
