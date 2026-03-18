/*
 * XREFs of ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18012E640
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005B2EC (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x180121A4C (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
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
  __int128 v10; // xmm1
  int v11; // eax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  _OWORD v15[4]; // [rsp+30h] [rbp-39h] BYREF
  int v16; // [rsp+70h] [rbp+7h]
  unsigned int v17; // [rsp+80h] [rbp+17h] BYREF
  unsigned int v18; // [rsp+84h] [rbp+1Bh]
  int v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+8Ch] [rbp+23h]
  float v21[4]; // [rsp+90h] [rbp+27h] BYREF

  v16 = 0;
  v5 = CDrawingContext::ComputeExternalLayerOffsetAndBounds(a2, (struct MilPointAndSizeL *)&v17);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x5Fu);
  }
  else
  {
    v7 = _mm_cvtsi32_si128(v17);
    v8 = _mm_cvtsi32_si128(v18);
    v17 = 0;
    v18 = 0;
    v21[0] = _mm_cvtepi32_ps(v7).m128_f32[0];
    *(float *)v8.m128i_i32 = _mm_cvtepi32_ps(v8).m128_f32[0];
    v21[2] = (float)v19 + v21[0];
    *(float *)&v9 = (float)*((int *)this + 7);
    v21[3] = (float)v20 + *(float *)v8.m128i_i32;
    *(float *)v7.m128i_i32 = (float)*((int *)this + 6);
    v21[1] = *(float *)v8.m128i_i32;
    v19 = v7.m128i_i32[0];
    v20 = v9;
    CMILMatrix::InferAffineMatrix((__int64)v15, v21, (float *)&v17);
    v10 = v15[1];
    v11 = v16;
    *(_OWORD *)a3 = v15[0];
    v12 = v15[2];
    *((_OWORD *)a3 + 1) = v10;
    v13 = v15[3];
    *((_OWORD *)a3 + 2) = v12;
    *((_OWORD *)a3 + 3) = v13;
    *((_DWORD *)a3 + 16) = v11;
  }
  return v6;
}
