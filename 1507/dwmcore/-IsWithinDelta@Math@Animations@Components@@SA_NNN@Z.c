/*
 * XREFs of ?IsWithinDelta@Math@Animations@Components@@SA_NNN@Z @ 0x180157AEC
 * Callers:
 *     ?Compute@CubicBezierInterpolation@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180157720 (-Compute@CubicBezierInterpolation@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Components::Animations::Math::IsWithinDelta(double a1, double a2)
{
  return a1 >= COERCE_DOUBLE(*(_QWORD *)&a2 ^ _xmm) && a2 >= a1;
}
