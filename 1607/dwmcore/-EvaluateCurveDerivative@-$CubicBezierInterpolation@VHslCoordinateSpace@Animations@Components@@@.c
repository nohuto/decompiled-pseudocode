/*
 * XREFs of ?EvaluateCurveDerivative@?$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@IEAANNNN@Z @ 0x180193F84
 * Callers:
 *     ?Compute@?$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801924B0 (-Compute@-$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Compo.c)
 *     ?Compute@?$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801925D0 (-Compute@-$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations.c)
 * Callees:
 *     <none>
 */

__m128 __fastcall Components::Animations::CubicBezierInterpolation<Components::Animations::HslCoordinateSpace>::EvaluateCurveDerivative(
        __int64 a1,
        double a2,
        double a3,
        double a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx
  __int128 v6; // xmm4
  double v8; // xmm5_8
  double i; // xmm0_8
  double v10; // xmm0_8
  double v11; // xmm2_8

  v4 = 2;
  v5 = 2;
  v6 = *(unsigned __int64 *)&DOUBLE_1_0;
  *(double *)&v6 = 1.0 - a2;
  v8 = DOUBLE_1_0;
  for ( i = 1.0 - a2; ; i = i * i )
  {
    if ( (v5 & 1) != 0 )
      v8 = v8 * i;
    v5 >>= 1;
    if ( !v5 )
      break;
  }
  v10 = a2;
  v11 = DOUBLE_1_0;
  while ( 1 )
  {
    if ( (v4 & 1) != 0 )
      v11 = v11 * v10;
    v4 >>= 1;
    if ( !v4 )
      break;
    v10 = v10 * v10;
  }
  *(double *)&v6 = *(double *)&v6 * 6.0 * a2 * (a4 - a3) + v8 * 3.0 * a3 + v11 * 3.0 * (1.0 - a4);
  return (__m128)v6;
}
