/*
 * XREFs of ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180194CD0
 * Callers:
 *     ?Compute@?$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801925D0 (-Compute@-$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations.c)
 *     ?Compute@?$LinearInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180192730 (-Compute@-$LinearInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Comp.c)
 *     ?Compute@?$StepInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180192810 (-Compute@-$StepInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Compon.c)
 *     ?Compute@?$XamlInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801929B0 (-Compute@-$XamlInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Compon.c)
 * Callees:
 *     ?Interpolate@CartesianCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180019F60 (-Interpolate@CartesianCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 *     ??DValue@Animations@Components@@QEBA?AV012@M@Z @ 0x18001A030 (--DValue@Animations@Components@@QEBA-AV012@M@Z.c)
 *     ?IsWithinEpsilon@Math@Animations@Components@@SA_NM@Z @ 0x1800221EC (-IsWithinEpsilon@Math@Animations@Components@@SA_NM@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     acos_0 @ 0x1800BF5A2 (acos_0.c)
 *     sin_0 @ 0x1800BF692 (sin_0.c)
 *     ?GetColor@Value@Animations@Components@@QEBA?AVColor@23@XZ @ 0x1800C29B0 (-GetColor@Value@Animations@Components@@QEBA-AVColor@23@XZ.c)
 *     ?GetQuaternion@Value@Animations@Components@@QEBA?AUQuaternion@23@XZ @ 0x180194030 (-GetQuaternion@Value@Animations@Components@@QEBA-AUQuaternion@23@XZ.c)
 *     ?Normalize@Vector3@Animations@Components@@QEAAAEAV123@_N@Z @ 0x180194498 (-Normalize@Vector3@Animations@Components@@QEAAAEAV123@_N@Z.c)
 *     ??KValue@Animations@Components@@QEBA?AV012@M@Z @ 0x180194A1C (--KValue@Animations@Components@@QEBA-AV012@M@Z.c)
 *     ?Normalize@Vector2@Animations@Components@@QEAAAEAV123@_N@Z @ 0x180195110 (-Normalize@Vector2@Animations@Components@@QEAAAEAV123@_N@Z.c)
 *     ?Normalize@Vector4@Animations@Components@@QEAAAEAV123@_N@Z @ 0x1801951DC (-Normalize@Vector4@Animations@Components@@QEAAAEAV123@_N@Z.c)
 */

__int128 *__fastcall Components::Animations::SphericalCoordinateSpace::Interpolate(
        double a1,
        int a2,
        double *a3,
        double *a4,
        _OWORD *a5)
{
  int v5; // ebx
  float v6; // xmm8_4
  double v10; // xmm6_8
  double v11; // xmm0_8
  double v12; // xmm1_8
  __int64 v13; // r9
  bool v14; // dl
  bool v15; // dl
  double v16; // xmm1_8
  unsigned int v17; // xmm0_4
  unsigned int v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  double v21; // xmm0_8
  float v22; // xmm1_4
  double v23; // xmm3_8
  unsigned int v24; // xmm0_4
  unsigned int v25; // xmm1_4
  float v26; // xmm1_4
  bool v27; // dl
  double v28; // xmm2_8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int128 *result; // rax
  __int128 v32; // xmm3
  __int128 v33; // xmm4
  float v34; // xmm9_4
  float v35; // xmm2_4
  double *v36; // rsi
  float v37; // xmm2_4
  double *v38; // rax
  double *v39; // rax
  signed __int64 v40; // rdx
  char *v41; // rcx
  __m128 v42[2]; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v43; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v44; // [rsp+78h] [rbp-90h] BYREF
  __int128 v45; // [rsp+88h] [rbp-80h]
  double v46[4]; // [rsp+98h] [rbp-70h] BYREF
  double v47[4]; // [rsp+B8h] [rbp-50h] BYREF

  v5 = 0;
  v6 = FLOAT_1_0;
  v44 = 0uLL;
  v10 = 0.0;
  v45 = 0uLL;
  switch ( a2 )
  {
    case 18:
      goto LABEL_16;
    case 35:
      *(float *)&v24 = *a3;
      *(float *)&v25 = a3[1];
      v43.m128_u64[0] = __PAIR64__(v25, v24);
      v26 = a4[1];
      v42[0].m128_f32[0] = *a4;
      v42[0].m128_f32[1] = v26;
      Components::Animations::Vector2::Normalize((Components::Animations::Vector2 *)&v43, 35);
      Components::Animations::Vector2::Normalize((Components::Animations::Vector2 *)v42, v27);
      v11 = DOUBLE_N1_0;
      v28 = (float)((float)(v42[0].m128_f32[1] * v43.m128_f32[1]) + (float)(v42[0].m128_f32[0] * v43.m128_f32[0]));
      if ( v28 >= -1.0 )
        v11 = fmin(1.0, v28);
      break;
    case 52:
      *(float *)&v17 = *a3;
      *(float *)&v18 = a3[1];
      v42[0].m128_u64[0] = __PAIR64__(v18, v17);
      v19 = a3[2];
      v20 = *a4;
      v42[0].m128_f32[2] = v19;
      v21 = a4[1];
      v43.m128_f32[0] = v20;
      v22 = a4[2];
      v43.m128_f32[1] = v21;
      v43.m128_f32[2] = v22;
      Components::Animations::Vector3::Normalize((Components::Animations::Vector3 *)v42);
      Components::Animations::Vector3::Normalize((Components::Animations::Vector3 *)&v43);
      v11 = DOUBLE_N1_0;
      v23 = (float)((float)((float)(v43.m128_f32[1] * v42[0].m128_f32[1]) + (float)(v43.m128_f32[0] * v42[0].m128_f32[0]))
                  + (float)(v43.m128_f32[2] * v42[0].m128_f32[2]));
      if ( v23 >= -1.0 )
        v11 = fmin(1.0, v23);
      break;
    case 69:
      Components::Animations::Value::GetColor((__int64)a3, (__int64)&v43);
      Components::Animations::Value::GetColor(v13, (__int64)v42);
      Components::Animations::Vector4::Normalize((Components::Animations::Vector4 *)&v43, v14);
      Components::Animations::Vector4::Normalize((Components::Animations::Vector4 *)v42, v15);
      v11 = DOUBLE_N1_0;
      v16 = (float)((float)((float)((float)(v43.m128_f32[0] * v42[0].m128_f32[0])
                                  + (float)(v43.m128_f32[1] * v42[0].m128_f32[1]))
                          + (float)(v43.m128_f32[2] * v42[0].m128_f32[2]))
                  + (float)(v43.m128_f32[3] * v42[0].m128_f32[3]));
      if ( v16 >= -1.0 )
        v11 = fmin(1.0, v16);
      break;
    case 71:
      Components::Animations::Value::GetQuaternion(a3, &v43);
      Components::Animations::Value::GetQuaternion(a4, v42);
      v11 = DOUBLE_N1_0;
      v12 = (float)((float)((float)((float)(v43.m128_f32[0] * v42[0].m128_f32[0])
                                  + (float)(v43.m128_f32[1] * v42[0].m128_f32[1]))
                          + (float)(v43.m128_f32[2] * v42[0].m128_f32[2]))
                  + (float)(v43.m128_f32[3] * v42[0].m128_f32[3]));
      if ( v12 < -1.0 || (v11 = fmin(1.0, v12), v11 < 0.0) )
        v6 = FLOAT_N1_0;
      break;
    default:
      goto LABEL_16;
  }
  v10 = acos_0(v11);
LABEL_16:
  if ( Components::Animations::Math::IsWithinEpsilon(v10) )
  {
    result = (__int128 *)Components::Animations::CartesianCoordinateSpace::Interpolate(
                           v30,
                           v29,
                           (__int64)a3,
                           (__int64)a4,
                           &v44);
    v32 = v45;
    v33 = v44;
  }
  else
  {
    v34 = sin_0(v10);
    v35 = sin_0(a1 * v10);
    v36 = Components::Animations::Value::operator*((__int64)a4, (double *)v43.m128_u64, v35);
    v37 = sin_0((1.0 - a1) * v10);
    v38 = Components::Animations::Value::operator*((__int64)a3, (double *)v42[0].m128_u64, v37);
    v39 = Components::Animations::Value::operator*((__int64)v38, v46, v6);
    v44 = 0uLL;
    v40 = (char *)v39 - (char *)v36;
    v45 = 0uLL;
    v41 = (char *)((char *)&v44 - (char *)v36);
    do
    {
      ++v5;
      *(double *)((char *)v36 + (_QWORD)v41) = *(double *)((char *)v36 + v40) + *v36;
      ++v36;
    }
    while ( (unsigned __int64)v5 < 4 );
    result = (__int128 *)Components::Animations::Value::operator/((__int64)&v44, v47, v34);
    v33 = *result;
    v32 = result[1];
  }
  *a5 = v33;
  a5[1] = v32;
  return result;
}
