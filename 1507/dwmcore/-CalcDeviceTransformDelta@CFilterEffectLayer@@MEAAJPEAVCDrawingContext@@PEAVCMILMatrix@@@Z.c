/*
 * XREFs of ?CalcDeviceTransformDelta@CFilterEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180001860
 * Callers:
 *     <none>
 * Callees:
 *     ?InferAffineMatrix@CBaseMatrix@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180022A50 (-InferAffineMatrix@CBaseMatrix@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CFilterEffectLayer::CalcDeviceTransformDelta(
        CFilterEffectLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  __m128i v3; // xmm1
  __m128i v4; // xmm3
  __m128i v5; // xmm2
  __m128i v6; // xmm4
  __int128 v7; // xmm0
  __int64 result; // rax
  __int128 v9; // xmm1
  _OWORD *v10; // r9
  __int128 v11; // xmm0
  float v12; // [rsp+20h] [rbp-19h] BYREF
  float v13; // [rsp+24h] [rbp-15h]
  float v14; // [rsp+28h] [rbp-11h]
  float v15; // [rsp+2Ch] [rbp-Dh]
  _DWORD v16[2]; // [rsp+30h] [rbp-9h] BYREF
  float v17; // [rsp+38h] [rbp-1h]
  float v18; // [rsp+3Ch] [rbp+3h]
  _OWORD v19[4]; // [rsp+40h] [rbp+7h] BYREF

  v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
  v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v5 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
  v6 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v16[0] = 0;
  v16[1] = 0;
  v12 = _mm_cvtepi32_ps(v3).m128_f32[0];
  v13 = _mm_cvtepi32_ps(v5).m128_f32[0];
  v17 = _mm_cvtepi32_ps(v6).m128_f32[0];
  v18 = _mm_cvtepi32_ps(v4).m128_f32[0];
  v14 = v17 + v12;
  v15 = v18 + v13;
  ((void (__fastcall *)(_OWORD *, float *, _DWORD *, struct CMILMatrix *))CBaseMatrix::InferAffineMatrix)(
    v19,
    &v12,
    v16,
    a3);
  v7 = v19[1];
  result = 0LL;
  v9 = v19[2];
  *v10 = v19[0];
  v10[1] = v7;
  v11 = v19[3];
  v10[2] = v9;
  v10[3] = v11;
  return result;
}
