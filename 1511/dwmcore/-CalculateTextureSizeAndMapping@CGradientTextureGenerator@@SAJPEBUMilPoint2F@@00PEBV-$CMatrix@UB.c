/*
 * XREFs of ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x180013314
 * Callers:
 *     ?SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCBaseMatrix@@PEBUCContextState@@@Z @ 0x180013024 (-SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCBaseMatrix@@P.c)
 * Callees:
 *     ?CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x1800131C0 (-CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVC.c)
 *     ?IsNaNOrIsEqualTo@@YA_NMM@Z @ 0x180013510 (-IsNaNOrIsEqualTo@@YA_NMM@Z.c)
 *     ?CalculateTextureSize@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NW4Enum@MilGradientWrapMode@@PEAVCGradientSpanInfo@@@Z @ 0x180013540 (-CalculateTextureSize@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NW4Enum@MilGradientWrapMod.c)
 *     ?Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18001401C (-Transform@CBaseMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     MatrixAppendScale2D @ 0x180068D90 (MatrixAppendScale2D.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     sqrt_0 @ 0x1800BC902 (sqrt_0.c)
 */

__int64 __fastcall CGradientTextureGenerator::CalculateTextureSizeAndMapping(
        float *a1,
        unsigned int *a2,
        float *a3,
        CBaseMatrix *a4,
        unsigned int a5,
        __int64 a6,
        struct CGradientSpanInfo *a7,
        struct CMILMatrix *a8)
{
  float v8; // xmm1_4
  char v9; // bl
  unsigned int v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm11_4
  float v13; // xmm7_4
  float v14; // xmm12_4
  __int64 v15; // rdx
  __m128 v16; // xmm2
  float v17; // xmm1_4
  __m128 v18; // xmm6
  __m128 v19; // xmm7
  float v20; // xmm0_4
  float v22; // [rsp+28h] [rbp-59h] BYREF
  float v23; // [rsp+2Ch] [rbp-55h]
  unsigned __int64 v24; // [rsp+30h] [rbp-51h]
  float v25; // [rsp+38h] [rbp-49h]
  float v26; // [rsp+3Ch] [rbp-45h]

  v8 = a1[1];
  v9 = 0;
  v22 = *a1;
  v10 = *a2;
  v23 = v8;
  v24 = __PAIR64__(a2[1], v10);
  v11 = a3[1];
  v25 = *a3;
  v26 = v11;
  CBaseMatrix::Transform(a4, (const struct MilPoint2F *)&v22, (struct MilPoint2F *)&v22, 3u);
  v12 = v25 - v22;
  LODWORD(v13) = COERCE_UNSIGNED_INT(v26 - v23) ^ _xmm;
  v14 = sqrt_0((float)((float)(v12 * v12) + (float)(v13 * v13)));
  if ( IsNaNOrIsEqualTo(v14, 0.0) )
    goto LABEL_5;
  v16 = (__m128)HIDWORD(v24);
  v18 = (__m128)LODWORD(FLOAT_1_0);
  v18.m128_f32[0] = (float)(1.0 / v14) * v12;
  v17 = (float)(1.0 / v14) * v13;
  v16.m128_f32[0] = (float)((float)(*((float *)&v24 + 1) - v23) * v18.m128_f32[0])
                  + (float)((float)(*(float *)&v24 - v22) * v17);
  v19 = v16;
  v18.m128_f32[0] = v18.m128_f32[0] * v16.m128_f32[0];
  v19.m128_f32[0] = v16.m128_f32[0] * v17;
  v20 = sqrt_0((float)((float)(v18.m128_f32[0] * v18.m128_f32[0]) + (float)(v19.m128_f32[0] * v19.m128_f32[0])));
  if ( IsNaNOrIsEqualTo(v20, 0.0) )
  {
LABEL_5:
    v9 = 1;
  }
  else
  {
    v19.m128_f32[0] = v19.m128_f32[0] + v22;
    v18.m128_f32[0] = v18.m128_f32[0] + v23;
    v24 = _mm_unpacklo_ps(v19, v18).m128_u64[0];
  }
  LOBYTE(v15) = v9;
  CGradientTextureGenerator::CalculateTextureSize(&v22, v15, a5, a7);
  CGradientTextureGenerator::CalculateTextureMappingForLinearGradient((const struct CMilPoint2F *)&v22, v9, a7, a8);
  MatrixAppendScale2D(a8);
  return 0LL;
}
