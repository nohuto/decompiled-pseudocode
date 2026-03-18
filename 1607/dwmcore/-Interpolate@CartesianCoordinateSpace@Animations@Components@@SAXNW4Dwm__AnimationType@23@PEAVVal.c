/*
 * XREFs of ?Interpolate@CartesianCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180019F60
 * Callers:
 *     ?Compute@?$XamlInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180019ED0 (-Compute@-$XamlInterpolation@VCartesianCoordinateSpace@Animations@Components@@@Animations@Compon.c)
 *     ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180194CD0 (-Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 * Callees:
 *     ??DValue@Animations@Components@@QEBA?AV012@M@Z @ 0x18001A030 (--DValue@Animations@Components@@QEBA-AV012@M@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall Components::Animations::CartesianCoordinateSpace::Interpolate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5)
{
  __int64 v5; // r10
  __int64 v6; // rax
  double *v7; // r11
  int v8; // ecx
  __int64 v9; // rdx
  char *v10; // r8
  __int64 result; // rax
  __int128 v12; // xmm1
  __int128 v13; // [rsp+20h] [rbp-78h] BYREF
  __int128 v14; // [rsp+30h] [rbp-68h]
  _BYTE v15[32]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v16[32]; // [rsp+60h] [rbp-38h] BYREF

  Components::Animations::Value::operator*(a4, v15);
  v6 = Components::Animations::Value::operator*(v5, v16);
  v8 = 0;
  v13 = 0uLL;
  v9 = v6 - (_QWORD)v7;
  v10 = (char *)((char *)&v13 - (char *)v7);
  v14 = 0uLL;
  do
  {
    result = ++v8;
    *(double *)((char *)v7 + (_QWORD)v10) = *(double *)((char *)v7 + v9) + *v7;
    ++v7;
  }
  while ( (unsigned __int64)v8 < 4 );
  v12 = v14;
  *a5 = v13;
  a5[1] = v12;
  return result;
}
