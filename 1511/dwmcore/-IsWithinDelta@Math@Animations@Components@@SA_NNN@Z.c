/*
 * XREFs of ?IsWithinDelta@Math@Animations@Components@@SA_NNN@Z @ 0x180162C84
 * Callers:
 *     ?Compute@?$CubicBezierInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180162160 (-Compute@-$CubicBezierInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations.c)
 *     ?Compute@?$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180162280 (-Compute@-$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Compo.c)
 *     ?Compute@?$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801623A0 (-Compute@-$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Components::Animations::Math::IsWithinDelta(double a1, double a2)
{
  return a1 >= COERCE_DOUBLE(*(_QWORD *)&a2 ^ _xmm) && a2 >= a1;
}
