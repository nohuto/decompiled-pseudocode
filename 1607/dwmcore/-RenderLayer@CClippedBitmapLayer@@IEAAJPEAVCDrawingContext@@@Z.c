/*
 * XREFs of ?RenderLayer@CClippedBitmapLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18012EEB0
 * Callers:
 *     ?RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18012F070 (-RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x18005B478 (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006A680 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x1801076EC (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall CClippedBitmapLayer::RenderLayer(CClippedBitmapLayer *this, struct CDrawingContext *a2)
{
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  struct ID2D1Bitmap1 *v11; // [rsp+40h] [rbp-39h] BYREF
  _OWORD v12[4]; // [rsp+50h] [rbp-29h] BYREF
  int v13; // [rsp+90h] [rbp+17h]
  int v14[4]; // [rsp+A0h] [rbp+27h] BYREF

  v11 = 0LL;
  v14[0] = 0;
  v14[1] = 0;
  v12[0] = CMILMatrix::Identity;
  v12[1] = xmmword_1801EAD20;
  v12[2] = xmmword_1801EAD30;
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v12[3] = xmmword_1801EAD40;
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v13 = dword_1801EAD50;
  *(float *)&v14[2] = _mm_cvtepi32_ps(v4).m128_f32[0] + 0.0;
  *(float *)&v14[3] = _mm_cvtepi32_ps(v5).m128_f32[0] + 0.0;
  if ( g_LockAndReadLayer )
    CDrawingContext::ReadTexture(a2);
  v6 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Bitmap1 **))(**((_QWORD **)this + 1) + 112LL))(
         *((_QWORD *)this + 1),
         &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB7u);
  }
  else
  {
    CMILMatrix::SetTranslation((CMILMatrix *)v12, *((float *)this + 28), *((float *)this + 29), 0.0);
    v8 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v12, 1, 0);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xBEu);
    }
    else
    {
      v9 = CDrawingContext::DrawD2DBitmapWithPartialOcclusion(
             (__int64)a2,
             v11,
             v14,
             v14,
             1.0,
             *((_DWORD *)a2 + 1620),
             *((_DWORD *)a2 + 83));
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC4u);
      CDrawingContext::PopTransformInternal(a2, 0);
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(struct ID2D1Bitmap1 *))(*(_QWORD *)v11 + 16LL))(v11);
  return v7;
}
