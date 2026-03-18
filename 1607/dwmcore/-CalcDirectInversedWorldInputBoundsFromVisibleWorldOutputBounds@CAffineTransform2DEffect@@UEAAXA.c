/*
 * XREFs of ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@1PEAV3@2@Z @ 0x180156EB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059930 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x18010F624 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@IEAA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x18014CB44 (-InvertTransformToCalc2DBounds@CFilterEffect@@IEAA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV4@@Z @ 0x180157764 (-TransformBounds@CAffineTransform2DEffect@@IEAAXAEAVMatrix3x2F@D2D1@@AEBV-$TMilRect_@MUMilRectF@.c)
 */

char __fastcall CAffineTransform2DEffect::CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 a1,
        __int64 a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6)
{
  __m128 v6; // xmm7
  float v9; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm6_4
  unsigned int v14; // xmm0_4
  unsigned int v15; // xmm2_4
  __m128 v16; // xmm1
  float v17; // xmm5_4
  char result; // al
  __int64 v19; // rcx
  __int64 v20; // rcx
  float v21; // xmm2_4
  int v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm1_4
  __int128 v26; // [rsp+28h] [rbp-59h] BYREF
  float v27[6]; // [rsp+38h] [rbp-49h] BYREF
  D2D1_MATRIX_3X2_F v28; // [rsp+50h] [rbp-31h] BYREF

  v6 = (__m128)*(unsigned int *)(a2 + 48);
  v9 = *(float *)(a2 + 16);
  LODWORD(v12) = *(_DWORD *)(a2 + 48) ^ _xmm;
  LODWORD(v13) = *(_DWORD *)(a2 + 52) ^ _xmm;
  *(float *)&v14 = (float)(*(float *)(a2 + 20) * 0.0) + v9;
  *(float *)&v15 = (float)(*(float *)a2 * 0.0) + *(float *)(a2 + 4);
  v27[0] = (float)(*(float *)(a2 + 4) * 0.0) + *(float *)a2;
  v16 = (__m128)*(unsigned int *)(a2 + 52);
  v17 = (float)(v9 * 0.0) + *(float *)(a2 + 20);
  *(_QWORD *)&v27[1] = __PAIR64__(v14, v15);
  v27[3] = v17;
  v16.m128_f32[0] = (float)((float)(v16.m128_f32[0] * 0.0) + v6.m128_f32[0]) + v12;
  v6.m128_f32[0] = (float)(v6.m128_f32[0] * 0.0) + *(float *)(a2 + 52);
  *(_OWORD *)(a1 + 316) = *(_OWORD *)v27;
  v6.m128_f32[0] = v6.m128_f32[0] + v13;
  *(_OWORD *)&v28.m11 = *(_OWORD *)(a1 + 280);
  *(_QWORD *)(a1 + 332) = _mm_unpacklo_ps(v16, v6).m128_u64[0];
  *(_QWORD *)&v28.m[2][0] = *(_QWORD *)(a1 + 296);
  result = D2D1::Matrix3x2F::Invert(&v28);
  if ( result
    && (*a6 = *a3,
        v26 = *a3,
        (result = CFilterEffect::InvertTransformToCalc2DBounds(
                    v19,
                    a2,
                    (struct Windows::Foundation::Numerics::float4x4 *)&v26)) != 0) )
  {
    CAffineTransform2DEffect::TransformBounds(v20, &v28, v27, v27);
    result = CMILMatrix::Transform2DBoundsHelper<1>(a2, (__int64)v27, (float *)&v26);
    v21 = *(float *)&v26;
    v22 = DWORD2(v26);
    *(_DWORD *)(a5 + 4) = DWORD1(v26);
    *(_DWORD *)(a5 + 12) = HIDWORD(v26);
    *(float *)a5 = v21;
    *(_DWORD *)(a5 + 8) = v22;
    if ( *(float *)a4 > v21 )
      *(_DWORD *)a5 = *(_DWORD *)a4;
    v23 = *(float *)(a4 + 4);
    if ( v23 > *(float *)(a5 + 4) )
      *(float *)(a5 + 4) = v23;
    v24 = *(float *)(a4 + 8);
    if ( *(float *)(a5 + 8) > v24 )
      *(float *)(a5 + 8) = v24;
    v25 = *(float *)(a4 + 12);
    if ( *(float *)(a5 + 12) > v25 )
      *(float *)(a5 + 12) = v25;
    if ( *(float *)(a5 + 8) <= *(float *)a5 || *(float *)(a5 + 12) <= *(float *)(a5 + 4) )
    {
      *(_DWORD *)(a5 + 12) = 0;
      *(_DWORD *)(a5 + 8) = 0;
      *(_DWORD *)(a5 + 4) = 0;
      *(_DWORD *)a5 = 0;
    }
  }
  else
  {
    *(_OWORD *)a5 = *a3;
    *a6 = *a3;
  }
  *(float *)(a1 + 308) = *(float *)a5 - *(float *)(a2 + 48);
  *(float *)(a1 + 312) = *(float *)(a5 + 4) - *(float *)(a2 + 52);
  return result;
}
