/*
 * XREFs of ?CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180012C50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ @ 0x1800253C8 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005B2EC (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006BD60 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CLinearInterpolationLayer::CalcDeviceTransformDelta(
        CLinearInterpolationLayer *this,
        struct CDrawingContext *a2,
        struct CMILMatrix *a3)
{
  __int128 v6; // xmm0
  const struct CMILMatrix *TopByReference; // rax
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  __int128 v10; // xmm1
  int v11; // eax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  _OWORD v15[4]; // [rsp+20h] [rbp-39h] BYREF
  int v16; // [rsp+60h] [rbp+7h]
  __int128 v17; // [rsp+70h] [rbp+17h] BYREF
  _BYTE v18[16]; // [rsp+80h] [rbp+27h] BYREF

  v16 = 0;
  v6 = *(_OWORD *)((char *)CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 128)) + 200);
  *(_OWORD *)((char *)this + 120) = v6;
  v17 = v6;
  TopByReference = CBaseMatrixStack::GetTopByReference((struct CDrawingContext *)((char *)a2 + 536));
  CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, &v17, v18);
  v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v9 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  *(_QWORD *)&v17 = 0LL;
  DWORD2(v17) = _mm_cvtepi32_ps(v8).m128_u32[0];
  HIDWORD(v17) = _mm_cvtepi32_ps(v9).m128_u32[0];
  CMILMatrix::InferAffineMatrix(v15, v18, &v17);
  v10 = v15[1];
  v11 = v16;
  *(_OWORD *)a3 = v15[0];
  v12 = v15[2];
  *((_OWORD *)a3 + 1) = v10;
  v13 = v15[3];
  *((_OWORD *)a3 + 2) = v12;
  *((_OWORD *)a3 + 3) = v13;
  *((_DWORD *)a3 + 16) = v11;
  return 0LL;
}
