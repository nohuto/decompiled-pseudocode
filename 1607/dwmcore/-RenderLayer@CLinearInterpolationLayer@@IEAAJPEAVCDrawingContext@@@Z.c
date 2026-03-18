/*
 * XREFs of ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180012A44
 * Callers:
 *     ?RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180012BE0 (-RestoreState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z @ 0x180016068 (-Set2DScaleAndOffset@CMILMatrix@@QEAAXMMMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006A680 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18006E5B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006F114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CDrawingContext@@QEAAJXZ @ 0x1801076EC (-ReadTexture@CDrawingContext@@QEAAJXZ.c)
 */

__int64 __fastcall CLinearInterpolationLayer::RenderLayer(CLinearInterpolationLayer *this, struct CDrawingContext *a2)
{
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v11; // [rsp+48h] [rbp-49h] BYREF
  _OWORD v12[4]; // [rsp+58h] [rbp-39h] BYREF
  int v13; // [rsp+98h] [rbp+7h]
  _DWORD v14[4]; // [rsp+A8h] [rbp+17h] BYREF

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
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 1) + 112LL))(*((_QWORD *)this + 1), &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xA5u);
  }
  else
  {
    CMILMatrix::Set2DScaleAndOffset(
      (CMILMatrix *)v12,
      1.0 / *((float *)this + 28),
      1.0 / *((float *)this + 29),
      *((float *)this + 30),
      *((float *)this + 31));
    v8 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v12, 1, 0);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB1u);
    }
    else
    {
      v9 = CDrawingContext::DrawD2DBitmapWithPartialOcclusion(
             a2,
             v11,
             v14,
             v14,
             LODWORD(FLOAT_1_0),
             *((_DWORD *)a2 + 1620),
             *((_DWORD *)a2 + 83));
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB7u);
      CDrawingContext::PopTransformInternal(a2, 0);
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return v7;
}
