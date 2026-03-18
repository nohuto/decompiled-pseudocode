/*
 * XREFs of ?IsWithinEpsilon@Math@Animations@Components@@SA_NN@Z @ 0x1801940B0
 * Callers:
 *     ?EvaluateCurve@?$XamlElasticInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@MEAANN@Z @ 0x180193E10 (-EvaluateCurve@-$XamlElasticInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations.c)
 *     ?EvaluateCurve@?$XamlExponentialInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@MEAANN@Z @ 0x180193ED0 (-EvaluateCurve@-$XamlExponentialInterpolation@VSphericalCoordinateSpace@Animations@Components@@@.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Components::Animations::Math::IsWithinEpsilon(double a1)
{
  return a1 >= -0.000009999999747378752 && a1 <= 0.000009999999747378752;
}
