/*
 * XREFs of ?LinearCombine@Interpolation@Animations@Components@@AEAAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180157B14
 * Callers:
 *     ?Combine@Interpolation@Animations@Components@@IEAAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801576DC (-Combine@Interpolation@Animations@Components@@IEAAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z.c)
 *     ?SphericalCombine@Interpolation@Animations@Components@@AEAAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180157BE8 (-SphericalCombine@Interpolation@Animations@Components@@AEAAXNW4Dwm__AnimationType@23@PEAVValue@2.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ??DValue@Animations@Components@@QEBA?AV012@M@Z @ 0x1801575EC (--DValue@Animations@Components@@QEBA-AV012@M@Z.c)
 */

__int64 __fastcall Components::Animations::Interpolation::LinearCombine(
        __int64 a1,
        double a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6)
{
  float v6; // xmm3_4
  __int64 v7; // r10
  double *v8; // rax
  double *v9; // r11
  int v10; // ecx
  signed __int64 v11; // rdx
  char *v12; // r8
  __int64 result; // rax
  __int128 v14; // xmm1
  __int128 v15; // [rsp+20h] [rbp-78h] BYREF
  __int128 v16; // [rsp+30h] [rbp-68h]
  double v17[4]; // [rsp+40h] [rbp-58h] BYREF
  double v18[4]; // [rsp+60h] [rbp-38h] BYREF

  v6 = a2;
  Components::Animations::Value::operator*(a5, v17, v6);
  v8 = Components::Animations::Value::operator*(v7, v18, 1.0 - v6);
  v10 = 0;
  v15 = 0uLL;
  v11 = (char *)v8 - (char *)v9;
  v12 = (char *)((char *)&v15 - (char *)v9);
  v16 = 0uLL;
  do
  {
    result = ++v10;
    *(double *)((char *)v9 + (_QWORD)v12) = *(double *)((char *)v9 + v11) + *v9;
    ++v9;
  }
  while ( (unsigned __int64)v10 < 4 );
  v14 = v16;
  *a6 = v15;
  a6[1] = v14;
  return result;
}
