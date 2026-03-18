/*
 * XREFs of ?EvaluateCurve@?$XamlBounceInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@MEAANN@Z @ 0x180193C80
 * Callers:
 *     <none>
 * Callees:
 *     floor_0 @ 0x1800BF602 (floor_0.c)
 *     log_0 @ 0x1800BF632 (log_0.c)
 *     pow_0 @ 0x1800BF67A (pow_0.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall Components::Animations::XamlBounceInterpolation<Components::Animations::CartesianCoordinateSpace>::EvaluateCurve(
        __int64 a1,
        double a2)
{
  double v2; // xmm12_8
  double v3; // xmm11_8
  double v4; // xmm0_8
  double v5; // xmm7_8
  double v6; // xmm6_8
  double v7; // xmm0_8
  double v8; // xmm8_8
  double v9; // xmm10_8
  double v10; // xmm6_8
  double v11; // xmm7_8
  __m128 v12; // xmm0

  v2 = *(float *)(a1 + 28);
  v3 = (double)*(int *)(a1 + 24);
  v4 = pow_0(v2, v3);
  v5 = (1.0 - v4) / (1.0 - v2) + v4 * 0.5;
  v6 = log_0(1.0 - v5 * a2 * (1.0 - v2));
  v7 = log_0(v2);
  v8 = floor_0(v6 / v7);
  v9 = (1.0 - v2) * v5;
  v10 = (1.0 - pow_0(v2, v8)) / v9;
  v11 = ((1.0 - pow_0(v2, v8 + 1.0)) / v9 - v10) * 0.5;
  v12.m128_u64[1] = *(unsigned __int64 *)(&a2 + 1);
  *(double *)v12.m128_u64 = (a2 - (v11 + v10) - v11)
                          * (1.0
                           / pow_0(v2, v3 - v8)
                           / (v11
                            * v11))
                          * (a2 - (v11 + v10) + v11);
  return _mm_xor_ps(v12, (__m128)_xmm);
}
