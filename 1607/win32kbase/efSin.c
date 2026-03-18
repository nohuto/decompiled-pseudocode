/*
 * XREFs of efSin @ 0x1C007E180
 * Callers:
 *     efCos @ 0x1C007E160 (efCos.c)
 *     ?bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1C00BD970 (-bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z.c)
 * Callees:
 *     bFToL @ 0x1C0076E08 (bFToL.c)
 *     eFraction @ 0x1C007F7FC (eFraction.c)
 */

__int64 __fastcall efSin(int a1)
{
  float v1; // xmm2_4
  BOOL v2; // r11d
  double v3; // xmm0_8
  int v4; // edx
  int v5; // eax
  __int64 v6; // rdx
  __m128 v7; // xmm2
  __m128 v8; // xmm2
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(float *)&a1;
  if ( *(float *)&a1 < 0.0 )
    LODWORD(v1) = a1 ^ _xmm;
  bFToL(*(float *)&FP_SINE_FACTOR * v1, &v10, 5);
  v3 = eFraction();
  if ( ((v10 >> 5) & 2) != 0 )
    v2 = !v2;
  v4 = v10 & 0x1F;
  if ( ((v10 >> 5) & 1) != 0 )
  {
    v5 = 32 - v4;
    v6 = 32 - v4;
    v7 = (__m128)LODWORD(gaefSin[v6]);
    v7.m128_f32[0] = (float)(v7.m128_f32[0] - gaefSin[v5 - 1]) * *(float *)&v3;
    v8 = _mm_xor_ps(v7, (__m128)(unsigned int)_xmm);
    v8.m128_f32[0] = v8.m128_f32[0] + gaefSin[v6];
  }
  else
  {
    v8 = (__m128)LODWORD(gaefSin[v4 + 1]);
    v8.m128_f32[0] = (float)((float)(v8.m128_f32[0] - gaefSin[v10 & 0x1F]) * *(float *)&v3) + gaefSin[v10 & 0x1F];
  }
  if ( v2 )
    v8 = _mm_xor_ps(v8, (__m128)(unsigned int)_xmm);
  return (unsigned int)_mm_cvtsi128_si32((__m128i)v8);
}
