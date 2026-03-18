/*
 * XREFs of ?EvaluateCurve@?$XamlElasticInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@MEAANN@Z @ 0x180193E10
 * Callers:
 *     <none>
 * Callees:
 *     exp_0 @ 0x1800BF5F6 (exp_0.c)
 *     sin_0 @ 0x1800BF692 (sin_0.c)
 *     ?IsWithinEpsilon@Math@Animations@Components@@SA_NN@Z @ 0x1801940B0 (-IsWithinEpsilon@Math@Animations@Components@@SA_NN@Z.c)
 */

double __fastcall Components::Animations::XamlElasticInterpolation<Components::Animations::HslCoordinateSpace>::EvaluateCurve(
        __int64 a1,
        double a2)
{
  double v2; // xmm10_8
  double v3; // xmm7_8
  double v4; // xmm8_8
  double v5; // xmm8_8

  v2 = *(float *)(a1 + 28);
  v3 = (double)*(int *)(a1 + 24);
  if ( Components::Animations::Math::IsWithinEpsilon(v2) )
  {
    v4 = a2;
  }
  else
  {
    v5 = exp_0(v2 * a2) - 1.0;
    v4 = v5 / (exp_0(v2) - 1.0);
  }
  return sin_0((v3 * 6.283185482025146 + 1.570796370506287) * a2) * v4;
}
