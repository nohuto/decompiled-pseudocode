/*
 * XREFs of ?SphericalCombine@Interpolation@Animations@Components@@AEAAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180157BE8
 * Callers:
 *     ?Combine@Interpolation@Animations@Components@@IEAAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x1801576DC (-Combine@Interpolation@Animations@Components@@IEAAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z.c)
 * Callees:
 *     ?IsWithinEpsilon@Math@Animations@Components@@SA_NM@Z @ 0x180097468 (-IsWithinEpsilon@Math@Animations@Components@@SA_NM@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     acos_0 @ 0x180099B4E (acos_0.c)
 *     sin_0 @ 0x180099BD2 (sin_0.c)
 *     ?GetVector4@Value@Animations@Components@@QEBA?AVVector4@23@XZ @ 0x18009C19C (-GetVector4@Value@Animations@Components@@QEBA-AVVector4@23@XZ.c)
 *     ?GetQuaternion@Value@Animations@Components@@QEBA?AUQuaternion@23@XZ @ 0x180154F24 (-GetQuaternion@Value@Animations@Components@@QEBA-AUQuaternion@23@XZ.c)
 *     ?Normalize@Vector3@Animations@Components@@QEAAAEAV123@_N@Z @ 0x18015587C (-Normalize@Vector3@Animations@Components@@QEAAAEAV123@_N@Z.c)
 *     ??DValue@Animations@Components@@QEBA?AV012@M@Z @ 0x1801575EC (--DValue@Animations@Components@@QEBA-AV012@M@Z.c)
 *     ??KValue@Animations@Components@@QEBA?AV012@M@Z @ 0x180157630 (--KValue@Animations@Components@@QEBA-AV012@M@Z.c)
 *     ?LinearCombine@Interpolation@Animations@Components@@AEAAXNW4Dwm__AnimationType@23@PEAVValue@23@11@Z @ 0x180157B14 (-LinearCombine@Interpolation@Animations@Components@@AEAAXNW4Dwm__AnimationType@23@PEAVValue@23@1.c)
 *     ?Normalize@Vector2@Animations@Components@@QEAAAEAV123@_N@Z @ 0x180158664 (-Normalize@Vector2@Animations@Components@@QEAAAEAV123@_N@Z.c)
 *     ?Normalize@Vector4@Animations@Components@@QEAAAEAV123@_N@Z @ 0x180158730 (-Normalize@Vector4@Animations@Components@@QEAAAEAV123@_N@Z.c)
 */

__int128 *__fastcall Components::Animations::Interpolation::SphericalCombine(
        __int64 a1,
        bool a2,
        int a3,
        double *a4,
        double *a5,
        _OWORD *a6)
{
  double v6; // xmm1_8
  int v7; // ebx
  float v9; // xmm8_4
  double v10; // xmm10_8
  double v11; // xmm7_8
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  double v16; // xmm0_8
  double v17; // xmm1_8
  bool v18; // dl
  bool v19; // dl
  double v20; // xmm1_8
  unsigned int v21; // xmm0_4
  unsigned int v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  double v25; // xmm0_8
  float v26; // xmm1_4
  double v27; // xmm3_8
  unsigned int v28; // xmm0_4
  unsigned int v29; // xmm1_4
  float v30; // xmm1_4
  bool v31; // dl
  double v32; // xmm2_8
  __int64 v33; // rcx
  __int64 v34; // r8
  __int128 *result; // rax
  __int128 v36; // xmm4
  __int128 v37; // xmm5
  float v38; // xmm9_4
  float v39; // xmm2_4
  double *v40; // rsi
  float v41; // xmm2_4
  double *v42; // rax
  double *v43; // rax
  signed __int64 v44; // rdx
  char *v45; // rcx
  __m128 v46[2]; // [rsp+38h] [rbp-D0h] BYREF
  __m128 v47; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v48; // [rsp+78h] [rbp-90h] BYREF
  __int128 v49; // [rsp+88h] [rbp-80h]
  double v50[4]; // [rsp+98h] [rbp-70h] BYREF
  double v51[4]; // [rsp+B8h] [rbp-50h] BYREF

  v7 = 0;
  v9 = FLOAT_1_0;
  v10 = v6;
  v11 = 0.0;
  v48 = 0uLL;
  v49 = 0uLL;
  v12 = a3 - 17;
  if ( !v12 )
    goto LABEL_21;
  v13 = v12 - 17;
  if ( !v13 )
  {
    *(float *)&v28 = *a4;
    *(float *)&v29 = a4[1];
    v47.m128_u64[0] = __PAIR64__(v29, v28);
    v30 = a5[1];
    v46[0].m128_f32[0] = *a5;
    v46[0].m128_f32[1] = v30;
    Components::Animations::Vector2::Normalize((Components::Animations::Vector2 *)&v47, a2);
    Components::Animations::Vector2::Normalize((Components::Animations::Vector2 *)v46, v31);
    v16 = DOUBLE_N1_0;
    v32 = (float)((float)(v46[0].m128_f32[1] * v47.m128_f32[1]) + (float)(v46[0].m128_f32[0] * v47.m128_f32[0]));
    if ( v32 < -1.0 )
      goto LABEL_20;
    if ( v32 <= 1.0 )
    {
      v16 = (float)((float)(v46[0].m128_f32[1] * v47.m128_f32[1]) + (float)(v46[0].m128_f32[0] * v47.m128_f32[0]));
      goto LABEL_20;
    }
    goto LABEL_18;
  }
  v14 = v13 - 17;
  if ( !v14 )
  {
    *(float *)&v21 = *a4;
    *(float *)&v22 = a4[1];
    v46[0].m128_u64[0] = __PAIR64__(v22, v21);
    v23 = a4[2];
    v24 = *a5;
    v46[0].m128_f32[2] = v23;
    v25 = a5[1];
    v47.m128_f32[0] = v24;
    v26 = a5[2];
    v47.m128_f32[1] = v25;
    v47.m128_f32[2] = v26;
    Components::Animations::Vector3::Normalize((Components::Animations::Vector3 *)v46);
    Components::Animations::Vector3::Normalize((Components::Animations::Vector3 *)&v47);
    v16 = DOUBLE_N1_0;
    v27 = (float)((float)((float)(v47.m128_f32[1] * v46[0].m128_f32[1]) + (float)(v47.m128_f32[0] * v46[0].m128_f32[0]))
                + (float)(v47.m128_f32[2] * v46[0].m128_f32[2]));
    if ( v27 < -1.0 )
      goto LABEL_20;
    if ( v27 <= 1.0 )
    {
      v16 = (float)((float)((float)(v47.m128_f32[1] * v46[0].m128_f32[1]) + (float)(v47.m128_f32[0] * v46[0].m128_f32[0]))
                  + (float)(v47.m128_f32[2] * v46[0].m128_f32[2]));
      goto LABEL_20;
    }
    goto LABEL_18;
  }
  v15 = v14 - 17;
  if ( !v15 )
  {
    Components::Animations::Value::GetVector4((__int64)a4, (__int64)&v47);
    Components::Animations::Value::GetVector4((__int64)a5, (__int64)v46);
    Components::Animations::Vector4::Normalize((Components::Animations::Vector4 *)&v47, v18);
    Components::Animations::Vector4::Normalize((Components::Animations::Vector4 *)v46, v19);
    v16 = DOUBLE_N1_0;
    v20 = (float)((float)((float)((float)(v47.m128_f32[0] * v46[0].m128_f32[0])
                                + (float)(v47.m128_f32[1] * v46[0].m128_f32[1]))
                        + (float)(v47.m128_f32[2] * v46[0].m128_f32[2]))
                + (float)(v47.m128_f32[3] * v46[0].m128_f32[3]));
    if ( v20 < -1.0 )
      goto LABEL_20;
    if ( v20 <= 1.0 )
    {
      v16 = (float)((float)((float)((float)(v47.m128_f32[0] * v46[0].m128_f32[0])
                                  + (float)(v47.m128_f32[1] * v46[0].m128_f32[1]))
                          + (float)(v47.m128_f32[2] * v46[0].m128_f32[2]))
                  + (float)(v47.m128_f32[3] * v46[0].m128_f32[3]));
      goto LABEL_20;
    }
    goto LABEL_18;
  }
  if ( v15 != 1 )
    goto LABEL_21;
  Components::Animations::Value::GetQuaternion(a4, &v47);
  Components::Animations::Value::GetQuaternion(a5, v46);
  v16 = DOUBLE_N1_0;
  v17 = (float)((float)((float)((float)(v47.m128_f32[0] * v46[0].m128_f32[0])
                              + (float)(v47.m128_f32[1] * v46[0].m128_f32[1]))
                      + (float)(v47.m128_f32[2] * v46[0].m128_f32[2]))
              + (float)(v47.m128_f32[3] * v46[0].m128_f32[3]));
  if ( v17 < -1.0 )
    goto LABEL_9;
  if ( v17 > 1.0 )
  {
LABEL_18:
    v16 = DOUBLE_1_0;
    goto LABEL_20;
  }
  v16 = (float)((float)((float)((float)(v47.m128_f32[0] * v46[0].m128_f32[0])
                              + (float)(v47.m128_f32[1] * v46[0].m128_f32[1]))
                      + (float)(v47.m128_f32[2] * v46[0].m128_f32[2]))
              + (float)(v47.m128_f32[3] * v46[0].m128_f32[3]));
  if ( v17 < 0.0 )
LABEL_9:
    v9 = FLOAT_N1_0;
LABEL_20:
  v11 = acos_0(v16);
LABEL_21:
  if ( Components::Animations::Math::IsWithinEpsilon(v11) )
  {
    result = (__int128 *)Components::Animations::Interpolation::LinearCombine(
                           v33,
                           v10,
                           v34,
                           (__int64)a4,
                           (__int64)a5,
                           &v48);
    v36 = v49;
    v37 = v48;
  }
  else
  {
    v38 = sin_0(v11);
    v39 = sin_0(v10 * v11);
    v40 = Components::Animations::Value::operator*((__int64)a5, (double *)v47.m128_u64, v39);
    v41 = sin_0((1.0 - v10) * v11);
    v42 = Components::Animations::Value::operator*((__int64)a4, (double *)v46[0].m128_u64, v41);
    v43 = Components::Animations::Value::operator*((__int64)v42, v50, v9);
    v48 = 0uLL;
    v44 = (char *)v43 - (char *)v40;
    v49 = 0uLL;
    v45 = (char *)((char *)&v48 - (char *)v40);
    do
    {
      ++v7;
      *(double *)((char *)v40 + (_QWORD)v45) = *(double *)((char *)v40 + v44) + *v40;
      ++v40;
    }
    while ( (unsigned __int64)v7 < 4 );
    result = (__int128 *)Components::Animations::Value::operator/((__int64)&v48, v51, v38);
    v37 = *result;
    v36 = result[1];
  }
  *a6 = v37;
  a6[1] = v36;
  return result;
}
