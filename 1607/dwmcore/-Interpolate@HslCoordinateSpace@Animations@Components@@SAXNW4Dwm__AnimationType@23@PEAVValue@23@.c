/*
 * XREFs of ?Interpolate@HslCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180194A64
 * Callers:
 *     ?Compute@?$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801924B0 (-Compute@-$CubicBezierInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Compo.c)
 *     ?Compute@?$LinearInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180192700 (-Compute@-$LinearInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components.c)
 *     ?Compute@?$StepInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180192760 (-Compute@-$StepInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@.c)
 *     ?Compute@?$XamlInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801928D0 (-Compute@-$XamlInterpolation@VHslCoordinateSpace@Animations@Components@@@Animations@Components@@.c)
 * Callees:
 *     fmodf_0 @ 0x1800BF626 (fmodf_0.c)
 *     ?GetColor@Value@Animations@Components@@QEBA?AVColor@23@XZ @ 0x1800C29B0 (-GetColor@Value@Animations@Components@@QEBA-AVColor@23@XZ.c)
 *     ?Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x180159840 (-Color_HSLAfromRGBA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 *     ?Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z @ 0x1801599B4 (-Color_RGBAfromHSLA@ColorSpaceHelpers@@YAXMMMMPEAM000@Z.c)
 */

_OWORD *__fastcall Components::Animations::HslCoordinateSpace::Interpolate(
        double a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _OWORD *a5)
{
  __int64 v5; // rdi
  float v6; // xmm7_4
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 Color; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r8
  ColorSpaceHelpers *v20; // rcx
  float v21; // xmm6_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  _OWORD *result; // rax
  __int128 v25; // xmm1
  float v26; // [rsp+48h] [rbp-51h] BYREF
  float v27; // [rsp+4Ch] [rbp-4Dh] BYREF
  float v28; // [rsp+50h] [rbp-49h] BYREF
  float v29; // [rsp+54h] [rbp-45h] BYREF
  float v30; // [rsp+58h] [rbp-41h] BYREF
  float v31; // [rsp+5Ch] [rbp-3Dh] BYREF
  float v32; // [rsp+60h] [rbp-39h] BYREF
  float v33; // [rsp+64h] [rbp-35h] BYREF
  __int128 v34; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v35[16]; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v36[16]; // [rsp+88h] [rbp-11h] BYREF
  _BYTE v37[16]; // [rsp+98h] [rbp-1h] BYREF
  __int128 v38; // [rsp+A8h] [rbp+Fh]
  __int128 v39; // [rsp+B8h] [rbp+1Fh]

  v5 = 0LL;
  v38 = 0uLL;
  v6 = a1;
  v39 = 0uLL;
  Components::Animations::Value::GetColor(a3, (__int64)&v34);
  Components::Animations::Value::GetColor(v8, (__int64)&v30);
  Components::Animations::Value::GetColor(v9, (__int64)v35);
  Color = Components::Animations::Value::GetColor(v10, (__int64)v36);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    (ColorSpaceHelpers *)&v26,
    *(float *)(Color + 4),
    *(float *)(v13 + 8),
    *(float *)(v12 + 12),
    &v26,
    &v27,
    &v28,
    &v29);
  Components::Animations::Value::GetColor(a4, (__int64)v36);
  Components::Animations::Value::GetColor(v14, (__int64)v35);
  Components::Animations::Value::GetColor(v15, (__int64)&v34);
  v17 = Components::Animations::Value::GetColor(v16, (__int64)v37);
  ColorSpaceHelpers::Color_HSLAfromRGBA(
    (ColorSpaceHelpers *)&v30,
    *(float *)(v17 + 4),
    *(float *)(v19 + 8),
    *(float *)(v18 + 12),
    &v30,
    &v31,
    &v32,
    &v33);
  v21 = 1.0 - v6;
  v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v26 - v30)) & _xmm);
  if ( v22 >= 3.1415927 )
  {
    if ( v26 <= v30 )
      v23 = (float)((float)(v26 + 6.2831855) * v21) + (float)(v30 * v6);
    else
      v23 = (float)((float)(v30 + 6.2831855) * v6) + (float)(v21 * v26);
    fmodf_0(v23, 6.2831855);
  }
  v34 = 0LL;
  ColorSpaceHelpers::Color_RGBAfromHSLA(
    v20,
    (float)(v21 * v27) + (float)(v31 * v6),
    (float)(v21 * v28) + (float)(v32 * v6),
    (float)(v21 * v29) + (float)(v33 * v6),
    (float *)&v34,
    (float *)&v34 + 1,
    (float *)&v34 + 2,
    (float *)&v34 + 3);
  do
  {
    *((double *)&v38 + v5) = *(float *)&v35[4 * v5 - 16];
    ++v5;
  }
  while ( v5 < 4 );
  result = a5;
  v25 = v39;
  *a5 = v38;
  a5[1] = v25;
  return result;
}
