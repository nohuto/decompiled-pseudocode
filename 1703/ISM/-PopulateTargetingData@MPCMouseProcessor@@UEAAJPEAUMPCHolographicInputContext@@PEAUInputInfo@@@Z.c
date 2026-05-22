/*
 * XREFs of ?PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180041CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x18002CD08 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUquaternion@123@@Z @ 0x18003CB74 (-make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUquaternion@123.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18003D6E0 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x180042704 (-GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?GetPitchAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x18004284C (-GetPitchAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180043494 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@w.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     cosf_0 @ 0x18009EADA (cosf_0.c)
 *     sinf_0 @ 0x18009EAE0 (sinf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall MPCMouseProcessor::PopulateTargetingData(
        MPCMouseProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  __m128 v6; // xmm3
  __m128 v7; // xmm2
  __m128 v8; // xmm0
  __m128 v9; // xmm3
  unsigned __int32 v10; // xmm1_4
  float v11; // xmm10_4
  float v12; // xmm11_4
  float v13; // xmm12_4
  unsigned __int64 v14; // xmm6_8
  unsigned __int32 v15; // ebx
  double YawAngleBetweenTwoVectors; // xmm0_8
  float v17; // xmm13_4
  __int64 v18; // rdx
  double PitchAngleBetweenTwoVectors; // xmm0_8
  float v20; // xmm7_4
  float v21; // xmm6_4
  float v22; // xmm1_4
  float v23; // xmm9_4
  float v24; // xmm8_4
  float v25; // xmm8_4
  float v26; // xmm6_4
  float v27; // xmm0_4
  float v28; // xmm9_4
  float v29; // xmm6_4
  float v30; // xmm0_4
  __m128 v31; // xmm4
  __m128 v32; // xmm1
  __m128 v33; // xmm4
  float v34; // xmm3_4
  float v35; // xmm2_4
  int v36; // eax
  __int64 v37; // rbx
  __int64 v38; // rcx
  int v39; // eax
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  int v43; // eax
  int v44; // eax
  unsigned __int64 v45; // rcx
  unsigned __int64 v47; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int32 v48; // [rsp+60h] [rbp-A8h]
  int v49; // [rsp+68h] [rbp-A0h] BYREF
  __m128 v50; // [rsp+70h] [rbp-98h] BYREF
  int v51[2]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int32 v52; // [rsp+90h] [rbp-78h]
  int v53; // [rsp+98h] [rbp-70h] BYREF
  __int16 v54; // [rsp+9Ch] [rbp-6Ch]
  int v55; // [rsp+A0h] [rbp-68h] BYREF
  float v56; // [rsp+A8h] [rbp-60h] BYREF
  float v57; // [rsp+ACh] [rbp-5Ch]
  float v58; // [rsp+B0h] [rbp-58h]
  float v59; // [rsp+B8h] [rbp-50h]
  float v60; // [rsp+BCh] [rbp-4Ch]
  float v61; // [rsp+C0h] [rbp-48h]
  float v62; // [rsp+C8h] [rbp-40h]
  float v63; // [rsp+CCh] [rbp-3Ch]
  float v64; // [rsp+D0h] [rbp-38h]
  __int64 v65; // [rsp+E8h] [rbp-20h]
  __m128 v66; // [rsp+F0h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v65 = -2LL;
  v50.m128_u64[0] = *(_QWORD *)((char *)a2 + 164);
  v50.m128_i32[2] = *((_DWORD *)a2 + 43);
  if ( *((float *)a2 + 47) == *((float *)a2 + 38)
    && *((float *)a2 + 48) == *((float *)a2 + 39)
    && *((float *)a2 + 49) == *((float *)a2 + 40) )
  {
    goto LABEL_21;
  }
  v6 = _mm_movelh_ps(
         _mm_unpacklo_ps(
           (__m128)COERCE_UNSIGNED_INT(*((float *)a2 + 47) - COERCE_FLOAT(*((_QWORD *)a2 + 19))),
           (__m128)COERCE_UNSIGNED_INT(*((float *)a2 + 48) - COERCE_FLOAT(HIDWORD(*((_QWORD *)a2 + 19))))),
         (__m128)COERCE_UNSIGNED_INT(*((float *)a2 + 49) - *((float *)a2 + 40)));
  v7 = _mm_mul_ps(v6, v6);
  v8 = _mm_shuffle_ps(v7, v7, 102);
  v7.m128_f32[0] = (float)(v7.m128_f32[0] + v8.m128_f32[0]) + _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
  v9 = _mm_div_ps(v6, _mm_sqrt_ps(_mm_shuffle_ps(v7, v7, 0)));
  v10 = _mm_shuffle_ps(v9, v9, 85).m128_u32[0];
  v47 = __PAIR64__(v10, v9.m128_u32[0]);
  v48 = _mm_shuffle_ps(v9, v9, 170).m128_u32[0];
  v11 = v9.m128_f32[0];
  v12 = *(float *)&v10;
  v13 = *(float *)&v48;
  if ( !*((_QWORD *)this + 31) )
    goto LABEL_22;
  v14 = _mm_unpacklo_ps((__m128)v9.m128_u32[0], (__m128)v10).m128_u64[0];
  *(_QWORD *)v51 = v14;
  v15 = v48;
  v52 = v48;
  v47 = *(_QWORD *)((char *)a2 + 164);
  v48 = *((_DWORD *)a2 + 43);
  YawAngleBetweenTwoVectors = MPCMouseProcessor::GetYawAngleBetweenTwoVectors(&v47, v51);
  v17 = *(float *)&YawAngleBetweenTwoVectors;
  v47 = v14;
  v48 = v15;
  *(_QWORD *)v51 = *(_QWORD *)((char *)a2 + 164);
  v52 = *((_DWORD *)a2 + 43);
  PitchAngleBetweenTwoVectors = MPCMouseProcessor::GetPitchAngleBetweenTwoVectors(v51, &v47);
  v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v17) & _xmm);
  v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&PitchAngleBetweenTwoVectors) & _xmm);
  if ( v20 > *((float *)this + 53) || v21 > *((float *)this + 54) )
  {
    v50.m128_u64[0] = *(_QWORD *)((char *)a2 + 164);
    v50.m128_i32[2] = *((_DWORD *)a2 + 43);
LABEL_21:
    v11 = v50.m128_f32[0];
    v12 = v50.m128_f32[1];
    v13 = v50.m128_f32[2];
    goto LABEL_22;
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetCachedFeatureEnabledState();
  LODWORD(v47) = 0;
  BYTE4(v47) = 3;
  v53 = 0;
  v54 = WORD2(v47);
  v49 = 3;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       &`wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetFeaturePropertyCache'::`2'::data,
                       v18,
                       2)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    g_wil_details_pfnFeatureLoggingHook(
      0xA019AFu,
      (const struct FEATURE_LOGGED_TRAITS *)&v53,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v49,
      0LL,
      0,
      1uLL);
  }
  if ( !*((_BYTE *)a2 + 2088) )
  {
    v22 = *((float *)this + 52);
    v23 = (float)((float)*((int *)this + 62) / v22) * -1.0;
    v24 = (float)((float)*((int *)this + 63) / v22) * -1.0;
    if ( v20 > *((float *)this + 55) && (float)(v17 < 0.0) != (float)(v23 < 0.0) )
      v23 = 0.0;
    if ( v21 > *((float *)this + 56) && (float)(*(float *)&PitchAngleBetweenTwoVectors < 0.0) == (float)(v24 < 0.0) )
      v24 = 0.0;
    MPCMath::OrientToGravity((__int64)&v56, (__int64)a2, 0.89999998);
    v25 = v24 * 0.5;
    v26 = sinf_0(v25);
    v27 = cosf_0(v25);
    v66.m128_f32[0] = v26 * v56;
    v66.m128_f32[1] = v26 * v57;
    v66.m128_f32[2] = v26 * v58;
    v66.m128_f32[3] = v27;
    v28 = v23 * 0.5;
    v29 = sinf_0(v28);
    v30 = cosf_0(v28);
    v50.m128_f32[0] = v29 * v59;
    v50.m128_f32[1] = v29 * v60;
    v50.m128_f32[2] = v29 * v61;
    v50.m128_f32[3] = v30;
    v31 = _mm_shuffle_ps(v50, v50, 27);
    v32 = _mm_mul_ps(_mm_shuffle_ps(v66, v66, 0), v31);
    v33 = _mm_shuffle_ps(v31, v31, 177);
    v66 = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(v66, v66, 255), v50),
              _mm_mul_ps(v32, (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlWZYX)),
            _mm_add_ps(
              _mm_mul_ps(
                _mm_mul_ps(_mm_shuffle_ps(v66, v66, 85), v33),
                (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlZWXY),
              _mm_mul_ps(
                _mm_mul_ps(_mm_shuffle_ps(v66, v66, 170), _mm_shuffle_ps(v33, v33, 27)),
                (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlYXWZ)));
    Windows::Foundation::Numerics::make_float4x4_from_quaternion((__int64)&v56, v66.m128_f32);
    v34 = (float)((float)(v12 * v61) + (float)(v9.m128_f32[0] * v58)) + (float)(v13 * v64);
    v35 = (float)((float)(v12 * v60) + (float)(v11 * v57)) + (float)(v13 * v63);
    v11 = (float)((float)(v12 * v59) + (float)(v11 * v56)) + (float)(v13 * v62);
    v12 = v35;
    v13 = v34;
  }
LABEL_22:
  *((_BYTE *)a3 + 684) = 1;
  *((_DWORD *)a3 + 181) = *((_DWORD *)a2 + 38);
  *((_DWORD *)a3 + 182) = *((_DWORD *)a2 + 39);
  *((_DWORD *)a3 + 183) = *((_DWORD *)a2 + 40);
  *((float *)a3 + 184) = v11;
  *((float *)a3 + 185) = v12;
  *((float *)a3 + 186) = v13;
  *((_BYTE *)a3 + 748) = 0;
  v50.m128_u64[0] = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __m128 *))(**((_QWORD **)this + 20) + 40LL))(*((_QWORD *)this + 20), &v50) >= 0 )
  {
    v36 = (*(__int64 (__fastcall **)(unsigned __int64, __m128 *))(*(_QWORD *)v50.m128_u64[0] + 104LL))(
            v50.m128_u64[0],
            &v66);
    if ( v36 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x217,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v36);
      __debugbreak();
    }
    if ( ((v66.m128_i32[0] == v66.m128_i32[2]) == v66.m128_i32[1]) == v66.m128_i32[3] )
    {
      v55 = 0;
      v53 = 0;
      v49 = 0;
      *(_QWORD *)v51 = 0LL;
      v37 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1));
      v38 = *(_QWORD *)v51;
      if ( *(_QWORD *)v51 )
      {
        *(_QWORD *)v51 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      }
      v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int *))(*(_QWORD *)v37 + 56LL))(
              v37,
              0LL,
              *((_QWORD *)this + 2),
              0LL,
              v51);
      if ( v39 < 0 )
      {
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          (void *)0x226,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v39);
        __debugbreak();
      }
      v40 = 0LL;
      v47 = 0LL;
      v41 = *(_QWORD *)v51;
      if ( *(_QWORD *)v51 )
      {
        if ( (***(int (__fastcall ****)(_QWORD, GUID *, unsigned __int64 *))v51)(
               *(_QWORD *)v51,
               &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
               &v47) >= 0 )
        {
          v42 = (*(__int64 (__fastcall **)(unsigned __int64, int *))(*(_QWORD *)v47 + 32LL))(v47, &v55);
          if ( v42 < 0 )
          {
            wil::details::in1diag3::_FailFast_Hr(
              retaddr,
              (void *)0x22B,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
              (const char *)(unsigned int)v42);
            __debugbreak();
          }
          v43 = (*(__int64 (__fastcall **)(unsigned __int64, int *))(*(_QWORD *)v47 + 40LL))(v47, &v53);
          if ( v43 < 0 )
          {
            wil::details::in1diag3::_FailFast_Hr(
              retaddr,
              (void *)0x22C,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
              (const char *)(unsigned int)v43);
            __debugbreak();
          }
          v44 = (*(__int64 (__fastcall **)(unsigned __int64, int *))(*(_QWORD *)v47 + 48LL))(v47, &v49);
          if ( v44 < 0 )
          {
            wil::details::in1diag3::_FailFast_Hr(
              retaddr,
              (void *)0x22D,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
              (const char *)(unsigned int)v44);
            __debugbreak();
          }
        }
        v41 = *(_QWORD *)v51;
        v40 = v47;
      }
      *((_BYTE *)a3 + 748) = 1;
      *((_DWORD *)a3 + 188) = v55;
      *((_DWORD *)a3 + 189) = v53;
      *((_DWORD *)a3 + 190) = v49;
      *(__m128 *)((char *)a3 + 764) = v66;
      if ( v40 )
      {
        v47 = 0LL;
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v40 + 16LL))(v40);
        v41 = *(_QWORD *)v51;
      }
      if ( v41 )
      {
        *(_QWORD *)v51 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
      }
    }
  }
  v45 = v50.m128_u64[0];
  if ( v50.m128_u64[0] )
  {
    v50.m128_u64[0] = 0LL;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v45 + 16LL))(v45);
  }
  return 0LL;
}
