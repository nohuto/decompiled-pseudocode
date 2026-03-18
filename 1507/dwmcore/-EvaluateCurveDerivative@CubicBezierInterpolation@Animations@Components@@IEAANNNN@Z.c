/*
 * XREFs of ?EvaluateCurveDerivative@CubicBezierInterpolation@Animations@Components@@IEAANNNN@Z @ 0x180157A40
 * Callers:
 *     ?Compute@CubicBezierInterpolation@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180157720 (-Compute@CubicBezierInterpolation@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue.c)
 * Callees:
 *     <none>
 */

double __fastcall Components::Animations::CubicBezierInterpolation::EvaluateCurveDerivative(
        Components::Animations::CubicBezierInterpolation *this,
        double a2,
        double a3,
        double a4)
{
  unsigned int v4; // eax
  unsigned int v6; // ecx
  double v7; // xmm6_8
  double i; // xmm0_8
  double v9; // xmm0_8
  double v10; // xmm2_8

  v4 = 2;
  v6 = 2;
  v7 = DOUBLE_1_0;
  for ( i = 1.0 - a2; ; i = i * i )
  {
    if ( (v6 & 1) != 0 )
      v7 = v7 * i;
    v6 >>= 1;
    if ( !v6 )
      break;
  }
  v9 = a2;
  v10 = DOUBLE_1_0;
  while ( 1 )
  {
    if ( (v4 & 1) != 0 )
      v10 = v10 * v9;
    v4 >>= 1;
    if ( !v4 )
      break;
    v9 = v9 * v9;
  }
  return (1.0 - a2) * 6.0 * a2 * (a4 - a3) + v7 * 3.0 * a3 + (1.0 - a4) * (v10 * 3.0);
}
