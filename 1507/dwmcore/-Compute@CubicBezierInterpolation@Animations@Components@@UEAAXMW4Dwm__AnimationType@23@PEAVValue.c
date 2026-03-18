/*
 * XREFs of ?Compute@CubicBezierInterpolation@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180157720
 * Callers:
 *     <none>
 * Callees:
 *     ?EvaluateCurve@CubicBezierInterpolation@Animations@Components@@IEAANNNN@Z @ 0x180157980 (-EvaluateCurve@CubicBezierInterpolation@Animations@Components@@IEAANNNN@Z.c)
 *     ?EvaluateCurveDerivative@CubicBezierInterpolation@Animations@Components@@IEAANNNN@Z @ 0x180157A40 (-EvaluateCurveDerivative@CubicBezierInterpolation@Animations@Components@@IEAANNNN@Z.c)
 *     ?IsWithinDelta@Math@Animations@Components@@SA_NNN@Z @ 0x180157AEC (-IsWithinDelta@Math@Animations@Components@@SA_NNN@Z.c)
 */

__int64 __fastcall Components::Animations::CubicBezierInterpolation::Compute(float *a1, float a2)
{
  __int128 v2; // xmm7
  double v3; // xmm8_8
  __int128 v4; // xmm6
  double v5; // xmm11_8
  double v6; // xmm3_8
  double v7; // xmm12_8
  double v8; // xmm10_8
  __int128 v9; // xmm1
  double v10; // xmm0_8
  int v11; // r11d
  __int64 v12; // rdx
  __int64 v13; // r10

  v2 = 0LL;
  *(double *)&v2 = a2;
  v3 = a1[4];
  v4 = v2;
  v5 = a1[5];
  v6 = a1[6];
  v7 = a1[7];
  do
  {
    v8 = Components::Animations::CubicBezierInterpolation::EvaluateCurveDerivative(
           (Components::Animations::CubicBezierInterpolation *)a1,
           *(double *)&v4,
           v3,
           v6);
    if ( Components::Animations::Math::IsWithinDelta(v8, 0.000001) )
      break;
    *((_QWORD *)&v9 + 1) = *((_QWORD *)&v4 + 1);
    *(double *)&v9 = *(double *)&v4
                   - (Components::Animations::CubicBezierInterpolation::EvaluateCurve(
                        (Components::Animations::CubicBezierInterpolation *)a1,
                        *(double *)&v4,
                        v3,
                        v6)
                    - *(double *)&v2)
                   / v8;
    v10 = *(double *)&v4 - *(double *)&v9;
    v4 = v9;
    if ( Components::Animations::Math::IsWithinDelta(v10, 0.000001) )
      break;
  }
  while ( v11 + 1 < 30 );
  Components::Animations::CubicBezierInterpolation::EvaluateCurve(
    (Components::Animations::CubicBezierInterpolation *)a1,
    *(double *)&v4,
    v5,
    v7);
  return Components::Animations::Interpolation::Combine(v13, v12);
}
