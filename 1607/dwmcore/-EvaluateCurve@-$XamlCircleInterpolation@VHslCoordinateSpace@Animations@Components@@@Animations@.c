/*
 * XREFs of ?EvaluateCurve@?$XamlCircleInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@MEAANN@Z @ 0x1800C2960
 * Callers:
 *     <none>
 * Callees:
 *     sqrt_0 @ 0x1800BF6AA (sqrt_0.c)
 */

__m128 __fastcall Components::Animations::XamlCircleInterpolation<Components::Animations::HslCoordinateSpace>::EvaluateCurve(
        __int64 a1,
        double a2)
{
  __int128 v2; // xmm6

  v2 = *(unsigned __int64 *)&DOUBLE_1_0;
  *(double *)&v2 = 1.0 - sqrt_0(1.0 - a2 * a2);
  return (__m128)v2;
}
