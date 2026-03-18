/*
 * XREFs of ?Interpolate@CartesianCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801656F4
 * Callers:
 *     ?Compute@?$CubicBezierInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180162160 (-Compute@-$CubicBezierInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations.c)
 *     ?Compute@?$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801624D0 (-Compute@-$LinearInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Comp.c)
 *     ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180165A30 (-Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ??DValue@Animations@Components@@QEBA?AV012@M@Z @ 0x180160D3C (--DValue@Animations@Components@@QEBA-AV012@M@Z.c)
 */

__int64 __fastcall Components::Animations::CartesianCoordinateSpace::Interpolate(
        double a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5)
{
  float v5; // xmm1_4
  __int64 v6; // r10
  double *v7; // rax
  double *v8; // r11
  int v9; // ecx
  signed __int64 v10; // rdx
  char *v11; // r8
  __int64 result; // rax
  __int128 v13; // xmm1
  __int128 v14; // [rsp+20h] [rbp-78h] BYREF
  __int128 v15; // [rsp+30h] [rbp-68h]
  double v16[4]; // [rsp+40h] [rbp-58h] BYREF
  double v17[4]; // [rsp+60h] [rbp-38h] BYREF

  v5 = a1;
  Components::Animations::Value::operator*(a4, v16, v5);
  v7 = Components::Animations::Value::operator*(v6, v17, 1.0 - v5);
  v9 = 0;
  v14 = 0uLL;
  v10 = (char *)v7 - (char *)v8;
  v11 = (char *)((char *)&v14 - (char *)v8);
  v15 = 0uLL;
  do
  {
    result = ++v9;
    *(double *)((char *)v8 + (_QWORD)v11) = *(double *)((char *)v8 + v10) + *v8;
    ++v8;
  }
  while ( (unsigned __int64)v9 < 4 );
  v13 = v15;
  *a5 = v14;
  a5[1] = v13;
  return result;
}
