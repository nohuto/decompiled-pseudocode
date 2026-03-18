/*
 * XREFs of ?CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800FC0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ @ 0x180019C00 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCBaseMatrix@@XZ.c)
 *     ?InferAffineMatrix@CBaseMatrix@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180022A50 (-InferAffineMatrix@CBaseMatrix@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18002E1C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CLinearInterpolationLayer::CalcDeviceTransformDelta(
        CLinearInterpolationLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  __int128 v6; // xmm1
  CBaseMatrix *TopByReference; // rax
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  __int64 result; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // [rsp+20h] [rbp-29h] BYREF
  float v15[4]; // [rsp+30h] [rbp-19h] BYREF
  _OWORD v16[4]; // [rsp+40h] [rbp-9h] BYREF

  v6 = *(_OWORD *)((char *)CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 56)) + 156);
  *((_OWORD *)this + 7) = v6;
  v14 = v6;
  TopByReference = CBaseMatrixStack::GetTopByReference((struct CDrawingContext *)((char *)a2 + 456));
  CBaseMatrix::Transform2DBounds(TopByReference, (const struct MilRectF *)&v14, (struct MilRectF *)v15);
  v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v9 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  *(_QWORD *)&v14 = 0LL;
  DWORD2(v14) = _mm_cvtepi32_ps(v8).m128_u32[0];
  HIDWORD(v14) = _mm_cvtepi32_ps(v9).m128_u32[0];
  CBaseMatrix::InferAffineMatrix((__int64)v16, v15, (float *)&v14);
  result = 0LL;
  v11 = v16[1];
  *(_OWORD *)a3 = v16[0];
  v12 = v16[2];
  *((_OWORD *)a3 + 1) = v11;
  v13 = v16[3];
  *((_OWORD *)a3 + 2) = v12;
  *((_OWORD *)a3 + 3) = v13;
  return result;
}
