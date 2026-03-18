/*
 * XREFs of sin_0 @ 0x1800BF692
 * Callers:
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x180189A7C (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     ?EvaluateCurve@?$XamlBackInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@MEAANN@Z @ 0x180193C00 (-EvaluateCurve@-$XamlBackInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animati.c)
 *     ?EvaluateCurve@?$XamlElasticInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@MEAANN@Z @ 0x180193E10 (-EvaluateCurve@-$XamlElasticInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations.c)
 *     ?EvaluateCurve@?$XamlSineInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@MEAANN@Z @ 0x180193F40 (-EvaluateCurve@-$XamlSineInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animati.c)
 *     ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180194CD0 (-Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl sin_0(double X)
{
  return sin(X);
}
