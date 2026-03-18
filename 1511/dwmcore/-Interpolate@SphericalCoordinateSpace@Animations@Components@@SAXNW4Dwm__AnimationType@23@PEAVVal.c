/*
 * XREFs of ?Interpolate@SphericalCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180165A30
 * Callers:
 *     ?Compute@?$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801623A0 (-Compute@-$CubicBezierInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations.c)
 *     ?Compute@?$LinearInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Components@@UEAAXMW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180162530 (-Compute@-$LinearInterpolation@VSphericalCoordinateSpace@Animations@Components@@@Animations@Comp.c)
 * Callees:
 *     ?IsWithinEpsilon@Math@Animations@Components@@SA_NM@Z @ 0x1800B4DBC (-IsWithinEpsilon@Math@Animations@Components@@SA_NM@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     acos_0 @ 0x1800BC81E (acos_0.c)
 *     sin_0 @ 0x1800BC8EA (sin_0.c)
 *     ?GetColor@Value@Animations@Components@@QEBA?AVColor@23@XZ @ 0x1800BF57C (-GetColor@Value@Animations@Components@@QEBA-AVColor@23@XZ.c)
 *     ??DValue@Animations@Components@@QEBA?AV012@M@Z @ 0x180160D3C (--DValue@Animations@Components@@QEBA-AV012@M@Z.c)
 *     ?GetQuaternion@Value@Animations@Components@@QEBA?AUQuaternion@23@XZ @ 0x180162B68 (-GetQuaternion@Value@Animations@Components@@QEBA-AUQuaternion@23@XZ.c)
 *     ?Normalize@Vector3@Animations@Components@@QEAAAEAV123@_N@Z @ 0x18016354C (-Normalize@Vector3@Animations@Components@@QEAAAEAV123@_N@Z.c)
 *     ??KValue@Animations@Components@@QEBA?AV012@M@Z @ 0x1801656AC (--KValue@Animations@Components@@QEBA-AV012@M@Z.c)
 *     ?Interpolate@CartesianCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801656F4 (-Interpolate@CartesianCoordinateSpace@Animations@Components@@SAXNW4Dwm__AnimationType@23@PEAVVal.c)
 *     ?Normalize@Vector2@Animations@Components@@QEAAAEAV123@_N@Z @ 0x1801660A4 (-Normalize@Vector2@Animations@Components@@QEAAAEAV123@_N@Z.c)
 *     ?Normalize@Vector4@Animations@Components@@QEAAAEAV123@_N@Z @ 0x180166170 (-Normalize@Vector4@Animations@Components@@QEAAAEAV123@_N@Z.c)
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
  double v10; // xmm7_8
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
  __int128 *result; // rax
  __int128 v31; // xmm3
  __int128 v32; // xmm4
  float v33; // xmm9_4
  float v34; // xmm2_4
  double *v35; // rsi
  float v36; // xmm2_4
  double *v37; // rax
  double *v38; // rax
  signed __int64 v39; // rdx
  char *v40; // rcx
  __m128 v41[2]; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v42; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v43; // [rsp+78h] [rbp-90h] BYREF
  __int128 v44; // [rsp+88h] [rbp-80h]
  double v45[4]; // [rsp+98h] [rbp-70h] BYREF
  double v46[4]; // [rsp+B8h] [rbp-50h] BYREF

  v5 = 0;
  v6 = FLOAT_1_0;
  v43 = 0uLL;
  v10 = 0.0;
  v44 = 0uLL;
  switch ( a2 )
  {
    case 18:
      goto LABEL_21;
    case 35:
      *(float *)&v24 = *a3;
      *(float *)&v25 = a3[1];
      v42.m128_u64[0] = __PAIR64__(v25, v24);
      v26 = a4[1];
      v41[0].m128_f32[0] = *a4;
      v41[0].m128_f32[1] = v26;
      Components::Animations::Vector2::Normalize((Components::Animations::Vector2 *)&v42, 35);
      Components::Animations::Vector2::Normalize((Components::Animations::Vector2 *)v41, v27);
      v11 = DOUBLE_N1_0;
      v28 = (float)((float)(v41[0].m128_f32[1] * v42.m128_f32[1]) + (float)(v41[0].m128_f32[0] * v42.m128_f32[0]));
      if ( v28 < -1.0 )
        goto LABEL_20;
      if ( v28 <= 1.0 )
      {
        v11 = (float)((float)(v41[0].m128_f32[1] * v42.m128_f32[1]) + (float)(v41[0].m128_f32[0] * v42.m128_f32[0]));
        goto LABEL_20;
      }
      goto LABEL_18;
    case 52:
      *(float *)&v17 = *a3;
      *(float *)&v18 = a3[1];
      v41[0].m128_u64[0] = __PAIR64__(v18, v17);
      v19 = a3[2];
      v20 = *a4;
      v41[0].m128_f32[2] = v19;
      v21 = a4[1];
      v42.m128_f32[0] = v20;
      v22 = a4[2];
      v42.m128_f32[1] = v21;
      v42.m128_f32[2] = v22;
      Components::Animations::Vector3::Normalize((Components::Animations::Vector3 *)v41);
      Components::Animations::Vector3::Normalize((Components::Animations::Vector3 *)&v42);
      v11 = DOUBLE_N1_0;
      v23 = (float)((float)((float)(v42.m128_f32[1] * v41[0].m128_f32[1]) + (float)(v42.m128_f32[0] * v41[0].m128_f32[0]))
                  + (float)(v42.m128_f32[2] * v41[0].m128_f32[2]));
      if ( v23 < -1.0 )
        goto LABEL_20;
      if ( v23 <= 1.0 )
      {
        v11 = (float)((float)((float)(v42.m128_f32[1] * v41[0].m128_f32[1])
                            + (float)(v42.m128_f32[0] * v41[0].m128_f32[0]))
                    + (float)(v42.m128_f32[2] * v41[0].m128_f32[2]));
        goto LABEL_20;
      }
      goto LABEL_18;
    case 69:
      Components::Animations::Value::GetColor((__int64)a3, (__int64)&v42);
      Components::Animations::Value::GetColor(v13, (__int64)v41);
      Components::Animations::Vector4::Normalize((Components::Animations::Vector4 *)&v42, v14);
      Components::Animations::Vector4::Normalize((Components::Animations::Vector4 *)v41, v15);
      v11 = DOUBLE_N1_0;
      v16 = (float)((float)((float)((float)(v42.m128_f32[0] * v41[0].m128_f32[0])
                                  + (float)(v42.m128_f32[1] * v41[0].m128_f32[1]))
                          + (float)(v42.m128_f32[2] * v41[0].m128_f32[2]))
                  + (float)(v42.m128_f32[3] * v41[0].m128_f32[3]));
      if ( v16 < -1.0 )
        goto LABEL_20;
      if ( v16 <= 1.0 )
      {
        v11 = (float)((float)((float)((float)(v42.m128_f32[0] * v41[0].m128_f32[0])
                                    + (float)(v42.m128_f32[1] * v41[0].m128_f32[1]))
                            + (float)(v42.m128_f32[2] * v41[0].m128_f32[2]))
                    + (float)(v42.m128_f32[3] * v41[0].m128_f32[3]));
        goto LABEL_20;
      }
      goto LABEL_18;
  }
  if ( a2 != 71 )
    goto LABEL_21;
  Components::Animations::Value::GetQuaternion(a3, &v42);
  Components::Animations::Value::GetQuaternion(a4, v41);
  v11 = DOUBLE_N1_0;
  v12 = (float)((float)((float)((float)(v42.m128_f32[0] * v41[0].m128_f32[0])
                              + (float)(v42.m128_f32[1] * v41[0].m128_f32[1]))
                      + (float)(v42.m128_f32[2] * v41[0].m128_f32[2]))
              + (float)(v42.m128_f32[3] * v41[0].m128_f32[3]));
  if ( v12 < -1.0 )
    goto LABEL_9;
  if ( v12 > 1.0 )
  {
LABEL_18:
    v11 = DOUBLE_1_0;
    goto LABEL_20;
  }
  v11 = (float)((float)((float)((float)(v42.m128_f32[0] * v41[0].m128_f32[0])
                              + (float)(v42.m128_f32[1] * v41[0].m128_f32[1]))
                      + (float)(v42.m128_f32[2] * v41[0].m128_f32[2]))
              + (float)(v42.m128_f32[3] * v41[0].m128_f32[3]));
  if ( v12 < 0.0 )
LABEL_9:
    v6 = FLOAT_N1_0;
LABEL_20:
  v10 = acos_0(v11);
LABEL_21:
  if ( Components::Animations::Math::IsWithinEpsilon(v10) )
  {
    result = (__int128 *)Components::Animations::CartesianCoordinateSpace::Interpolate(
                           a1,
                           v29,
                           (__int64)a3,
                           (__int64)a4,
                           &v43);
    v31 = v44;
    v32 = v43;
  }
  else
  {
    v33 = sin_0(v10);
    v34 = sin_0(a1 * v10);
    v35 = Components::Animations::Value::operator*((__int64)a4, (double *)v42.m128_u64, v34);
    v36 = sin_0((1.0 - a1) * v10);
    v37 = Components::Animations::Value::operator*((__int64)a3, (double *)v41[0].m128_u64, v36);
    v38 = Components::Animations::Value::operator*((__int64)v37, v45, v6);
    v43 = 0uLL;
    v39 = (char *)v38 - (char *)v35;
    v44 = 0uLL;
    v40 = (char *)((char *)&v43 - (char *)v35);
    do
    {
      ++v5;
      *(double *)((char *)v35 + (_QWORD)v40) = *(double *)((char *)v35 + v39) + *v35;
      ++v35;
    }
    while ( (unsigned __int64)v5 < 4 );
    result = (__int128 *)Components::Animations::Value::operator/((__int64)&v43, v46, v33);
    v32 = *result;
    v31 = result[1];
  }
  *a5 = v32;
  a5[1] = v31;
  return result;
}
