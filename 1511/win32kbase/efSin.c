/*
 * XREFs of efSin @ 0x1C007ACC0
 * Callers:
 *     efCos @ 0x1C007ACA0 (efCos.c)
 *     ?bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1C00B34C0 (-bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z.c)
 * Callees:
 *     bFToL @ 0x1C0071CFC (bFToL.c)
 *     eFraction @ 0x1C007BF80 (eFraction.c)
 */

__int64 __fastcall efSin(int a1)
{
  float v1; // xmm2_4
  BOOL v2; // r11d
  double v3; // xmm0_8
  int v4; // edx
  __m128 v5; // xmm2
  __m128 v6; // xmm2
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(float *)&a1;
  if ( *(float *)&a1 < 0.0 )
    LODWORD(v1) = a1 ^ _xmm;
  bFToL(*(float *)&FP_SINE_FACTOR * v1, &v8, 5);
  v3 = eFraction();
  if ( ((v8 >> 5) & 2) != 0 )
    v2 = !v2;
  v4 = v8 & 0x1F;
  if ( ((v8 >> 5) & 1) != 0 )
  {
    v5 = (__m128)LODWORD(gaefSin[32 - v4]);
    v5.m128_f32[0] = (float)(v5.m128_f32[0] - gaefSin[32 - v4 - 1]) * *(float *)&v3;
    v6 = _mm_xor_ps(v5, (__m128)(unsigned int)_xmm);
    v6.m128_f32[0] = v6.m128_f32[0] + gaefSin[32 - v4];
  }
  else
  {
    v6 = (__m128)LODWORD(gaefSin[(v8 & 0x1F) + 1]);
    v6.m128_f32[0] = (float)((float)(v6.m128_f32[0] - gaefSin[v8 & 0x1F]) * *(float *)&v3) + gaefSin[v8 & 0x1F];
  }
  if ( v2 )
    v6 = _mm_xor_ps(v6, (__m128)(unsigned int)_xmm);
  return (unsigned int)_mm_cvtsi128_si32((__m128i)v6);
}
