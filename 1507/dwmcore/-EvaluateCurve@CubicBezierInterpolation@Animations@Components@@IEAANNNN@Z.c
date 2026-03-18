/*
 * XREFs of ?EvaluateCurve@CubicBezierInterpolation@Animations@Components@@IEAANNNN@Z @ 0x180157980
 * Callers:
 *     ?Compute@CubicBezierInterpolation@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180157720 (-Compute@CubicBezierInterpolation@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue.c)
 * Callees:
 *     <none>
 */

double __fastcall Components::Animations::CubicBezierInterpolation::EvaluateCurve(
        Components::Animations::CubicBezierInterpolation *this,
        double a2,
        double a3,
        double a4)
{
  unsigned int v4; // ecx
  double v5; // xmm6_8
  unsigned int v6; // eax
  double v7; // xmm4_8
  double v9; // xmm7_8
  double v10; // xmm5_8
  double i; // xmm0_8
  double v12; // xmm0_8
  double v13; // xmm2_8
  unsigned int v14; // eax

  v4 = 2;
  v5 = DOUBLE_1_0;
  v6 = 2;
  v7 = 1.0 - a2;
  v9 = a2;
  v10 = DOUBLE_1_0;
  for ( i = 1.0 - a2; ; i = i * i )
  {
    if ( (v6 & 1) != 0 )
      v10 = v10 * i;
    v6 >>= 1;
    if ( !v6 )
      break;
  }
  v12 = a2;
  v13 = DOUBLE_1_0;
  while ( 1 )
  {
    if ( (v4 & 1) != 0 )
      v13 = v13 * v12;
    v4 >>= 1;
    if ( !v4 )
      break;
    v12 = v12 * v12;
  }
  v14 = 3;
  while ( 1 )
  {
    if ( (v14 & 1) != 0 )
      v5 = v5 * a2;
    v14 >>= 1;
    if ( !v14 )
      break;
    a2 = a2 * a2;
  }
  return v7 * 3.0 * v13 * a4 + v10 * 3.0 * v9 * a3 + v5;
}
