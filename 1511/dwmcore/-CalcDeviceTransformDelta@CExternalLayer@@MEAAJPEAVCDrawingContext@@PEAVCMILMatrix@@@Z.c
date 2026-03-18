/*
 * XREFs of ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180115610
 * Callers:
 *     <none>
 * Callees:
 *     ?InferAffineMatrix@CBaseMatrix@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180047700 (-InferAffineMatrix@CBaseMatrix@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18010B720 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 */

__int64 __fastcall CExternalLayer::CalcDeviceTransformDelta(
        CExternalLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  int v9; // xmm0_4
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  unsigned int v14; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-25h]
  int v16; // [rsp+38h] [rbp-21h]
  int v17; // [rsp+3Ch] [rbp-1Dh]
  float v18[4]; // [rsp+40h] [rbp-19h] BYREF
  _OWORD v19[4]; // [rsp+50h] [rbp-9h] BYREF

  v5 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(a2, (struct MilPointAndSizeL *)&v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = _mm_cvtsi32_si128(v14);
    v8 = _mm_cvtsi32_si128(v15);
    v14 = 0;
    v15 = 0;
    v18[0] = _mm_cvtepi32_ps(v7).m128_f32[0];
    *(float *)v8.m128i_i32 = _mm_cvtepi32_ps(v8).m128_f32[0];
    v18[2] = (float)v16 + v18[0];
    *(float *)&v9 = (float)*((int *)this + 7);
    v18[3] = (float)v17 + *(float *)v8.m128i_i32;
    *(float *)v7.m128i_i32 = (float)*((int *)this + 6);
    v18[1] = *(float *)v8.m128i_i32;
    v16 = v7.m128i_i32[0];
    v17 = v9;
    CBaseMatrix::InferAffineMatrix((__int64)v19, v18, (float *)&v14);
    v10 = v19[1];
    v11 = v19[2];
    *(_OWORD *)a3 = v19[0];
    *((_OWORD *)a3 + 1) = v10;
    v12 = v19[3];
    *((_OWORD *)a3 + 2) = v11;
    *((_OWORD *)a3 + 3) = v12;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x4Au);
  }
  return v6;
}
