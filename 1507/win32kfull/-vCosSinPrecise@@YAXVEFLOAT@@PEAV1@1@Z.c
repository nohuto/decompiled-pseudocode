/*
 * XREFs of ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02A9194
 * Callers:
 *     GreAngleArc @ 0x1C0292BF8 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C02A9320 (NtGdiArcInternal.c)
 * Callees:
 *     eFraction @ 0x1C024933C (eFraction.c)
 */

__int64 __fastcall vCosSinPrecise(unsigned int a1, float *a2, float *a3)
{
  double v3; // xmm0_8
  float *v6; // r8
  int v7; // r9d
  int v8; // r10d
  int v9; // r11d
  double v10; // xmm0_8
  int v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm3_4
  float v14; // xmm6_4
  float v15; // xmm3_4
  __int64 result; // rax
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm5_4
  float v20; // xmm2_4
  float v21; // xmm7_4
  float v22; // xmm0_4

  *(_QWORD *)&v3 = _mm_cvtsi32_si128(a1).m128i_u64[0];
  if ( *(float *)&v3 < 0.0 )
    *(_QWORD *)&v3 ^= (unsigned int)_xmm;
  *(float *)&v3 = *(float *)&v3 / FP_360_0;
  v10 = eFraction(v3);
  v13 = *(float *)&v10 * *v6;
  if ( v12 > (float)(FP_180_0 - v13) )
  {
    v7 = 1;
    v13 = *v6 - v13;
  }
  if ( v12 > (float)(FP_90_0 - v13) )
  {
    v9 = 1;
    v13 = FP_180_0 - v13;
  }
  v14 = FP_PI * v13;
  v15 = FP_2_0;
  LODWORD(result) = 2;
  v17 = v14 / FP_180_0;
  v18 = FP_1_0;
  v19 = FP_2_0;
  v20 = v17;
  v21 = v17;
  do
  {
    v21 = v21 * v17;
    v22 = v21 / v19;
    if ( (result & 2) != 0 )
      LODWORD(v22) ^= v11;
    if ( (result & 1) != 0 )
      v20 = v20 + v22;
    else
      v18 = v18 + v22;
    v15 = v15 + FP_1_0;
    result = (unsigned int)(result + 1);
    v19 = v19 * v15;
  }
  while ( (unsigned int)result < 0xD );
  if ( !v8 )
  {
    if ( !v7 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( !v7 )
LABEL_18:
    LODWORD(v20) ^= v11;
LABEL_19:
  if ( v9 )
    LODWORD(v18) ^= v11;
  *a2 = v18;
  *a3 = v20;
  return result;
}
