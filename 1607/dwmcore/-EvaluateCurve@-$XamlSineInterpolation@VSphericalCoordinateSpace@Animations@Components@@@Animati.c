/*
 * XREFs of ?EvaluateCurve@?$XamlSineInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@MEAANN@Z @ 0x180193F40
 * Callers:
 *     <none>
 * Callees:
 *     sin_0 @ 0x1800BF692 (sin_0.c)
 */

__m128 __fastcall Components::Animations::XamlSineInterpolation<Components::Animations::SphericalCoordinateSpace>::EvaluateCurve(
        __int64 a1,
        double a2)
{
  __int128 v2; // xmm6

  v2 = *(unsigned __int64 *)&DOUBLE_1_0;
  *(double *)&v2 = 1.0 - sin_0((1.0 - a2) * 3.141592741012573 * 0.5);
  return (__m128)v2;
}
