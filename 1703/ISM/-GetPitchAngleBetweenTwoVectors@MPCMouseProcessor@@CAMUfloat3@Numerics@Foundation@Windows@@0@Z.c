/*
 * XREFs of ?GetPitchAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x18004284C
 * Callers:
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180041CE0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     asinf_0 @ 0x18009EAC8 (asinf_0.c)
 */

__m128 __fastcall MPCMouseProcessor::GetPitchAngleBetweenTwoVectors(float *a1, unsigned int *a2)
{
  __m128 v3; // xmm3
  __m128 v4; // xmm2
  __m128 v5; // xmm1
  __m128 v6; // xmm3
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  __m128 v10; // xmm3
  __int128 v11; // xmm0
  __int128 v12; // xmm6

  v3 = _mm_movelh_ps(
         _mm_unpacklo_ps((__m128)*(unsigned int *)a1, (__m128)*((unsigned int *)a1 + 1)),
         (__m128)*((unsigned int *)a1 + 2));
  v4 = _mm_mul_ps(v3, v3);
  v5 = _mm_shuffle_ps(v4, v4, 102);
  v4.m128_f32[0] = (float)(v4.m128_f32[0] + v5.m128_f32[0]) + _mm_shuffle_ps(v5, v5, 85).m128_f32[0];
  v6 = _mm_div_ps(v3, _mm_sqrt_ps(_mm_shuffle_ps(v4, v4, 0)));
  *(_QWORD *)a1 = _mm_unpacklo_ps(v6, _mm_shuffle_ps(v6, v6, 85)).m128_u64[0];
  *((_DWORD *)a1 + 2) = _mm_shuffle_ps(v6, v6, 170).m128_u32[0];
  v7 = _mm_movelh_ps(_mm_unpacklo_ps((__m128)*a2, (__m128)a2[1]), (__m128)a2[2]);
  v8 = _mm_mul_ps(v7, v7);
  v9 = _mm_shuffle_ps(v8, v8, 102);
  v8.m128_f32[0] = (float)(v8.m128_f32[0] + v9.m128_f32[0]) + _mm_shuffle_ps(v9, v9, 85).m128_f32[0];
  v10 = _mm_div_ps(v7, _mm_sqrt_ps(_mm_shuffle_ps(v8, v8, 0)));
  *(_QWORD *)a2 = _mm_unpacklo_ps(v10, _mm_shuffle_ps(v10, v10, 85)).m128_u64[0];
  a2[2] = _mm_shuffle_ps(v10, v10, 170).m128_u32[0];
  v11 = a2[1];
  *(float *)&v11 = asinf_0(*(float *)&v11);
  v12 = v11;
  *(float *)&v12 = *(float *)&v11 - asinf_0(a1[1]);
  return (__m128)v12;
}
