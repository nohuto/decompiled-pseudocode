/*
 * XREFs of ?ComputeControllerPoses@SpatialInteractionController@SpatialInteractionDevices@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@Windows@@@Z @ 0x18009A1DC
 * Callers:
 *     ?UpdatePose@SpatialInteractionController@SpatialInteractionDevices@@AEAAJ_JPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@6@@Z @ 0x180099DD0 (-UpdatePose@SpatialInteractionController@SpatialInteractionDevices@@AEAAJ_JPEAUISpatialGraphNode.c)
 *     ?UpdateSimulatedPose@SpatialInteractionController@SpatialInteractionDevices@@AEAAX_JAEBUPoseData@2@AEBUMatrix4x4@Numerics@Foundation@Windows@@@Z @ 0x180099F8C (-UpdateSimulatedPose@SpatialInteractionController@SpatialInteractionDevices@@AEAAX_JAEBUPoseData.c)
 * Callees:
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x18002CAAC (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x1800988EC (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 *     ?XMQuaternionRotationMatrix@DirectX@@YQ?AT__m128@@UXMMATRIX@1@@Z @ 0x180098BEC (-XMQuaternionRotationMatrix@DirectX@@YQ-AT__m128@@UXMMATRIX@1@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionController::ComputeControllerPoses(
        SpatialInteractionDevices::SpatialInteractionController *this,
        const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a2,
        const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a3,
        __m128 *a4)
{
  char v4; // bl
  bool v9; // di
  __m128 v10; // xmm3
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  __m128 v13; // xmm2
  __m128i v14; // xmm3
  __m128 v15; // xmm1
  __m128 v16; // xmm0
  __m128 v17; // xmm5
  __m128 v18; // xmm7
  __m128 v19; // xmm3
  __m128 v20; // xmm6
  __m128 v21; // xmm2
  __m128 v22; // xmm4
  __m128 v23; // xmm2
  __m128i v24; // xmm3
  __m128 v25; // xmm1
  __m128 v26; // xmm0
  __m128 v27; // xmm4
  __m128 v28; // xmm7
  __m128 v29; // xmm6
  __m128 v30; // xmm14
  __m128 v31; // xmm0
  __m128 v32; // xmm12
  __m128 v33; // xmm7
  __m128 v34; // xmm13
  __m128 v35; // xmm15
  __m128 v36; // xmm2
  __m128 v37; // xmm7
  __m128 v38; // xmm3
  __m128 v39; // xmm1
  __m128 v40; // xmm5
  __m128 v41; // xmm1
  __m128 v42; // xmm3
  __m128 v43; // xmm2
  __m128 v44; // xmm1
  __m128 v45; // xmm0
  __m128 v46; // xmm2
  __m128 v47; // xmm0
  __m128 v48; // xmm4
  __m128 v49; // xmm1
  double v50; // xmm0_8
  double v51; // xmm0_8
  char v52; // r9
  char v53; // r10
  __m128 v54; // xmm4
  __m128 v55; // xmm8
  __m128 v56; // xmm3
  __m128 v57; // xmm2
  __m128 v58; // xmm1
  __m128 v59; // xmm5
  __m128 v60; // xmm4
  __m128 v61; // xmm2
  __m128 v62; // xmm1
  __m128 v63; // xmm0
  __m128 v64; // xmm2
  __m128 v65; // xmm0
  __m128 v66; // xmm4
  __m128 v67; // xmm1
  double v68; // xmm9_8
  unsigned __int64 v69; // xmm0_8
  double v70; // xmm9_8
  char v71; // r9
  char v72; // r9
  int pvData; // [rsp+48h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-BCh] BYREF
  __m128 v75; // [rsp+58h] [rbp-B0h]
  __m128 v76; // [rsp+68h] [rbp-A0h]
  __m128 v77; // [rsp+78h] [rbp-90h]
  __m128 v78; // [rsp+88h] [rbp-80h]
  __m128 v79; // [rsp+98h] [rbp-70h]
  __m128 v80; // [rsp+A8h] [rbp-60h]
  __m128 v81; // [rsp+B8h] [rbp-50h] BYREF
  __m128 v82; // [rsp+C8h] [rbp-40h]
  __m128 v83; // [rsp+D8h] [rbp-30h]
  __m128 v84; // [rsp+E8h] [rbp-20h]

  v4 = 0;
  pcbData = 4;
  pvData = 0;
  v9 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"SOFTWARE\\Microsoft\\Analog\\Holographic",
          L"IgnorePoseValidityFlags",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
    v9 = pvData != 0;
  if ( (v9 || (*((_DWORD *)a2 + 4) & 2) != 0 && (*((_DWORD *)a3 + 4) & 2) != 0) && v9
    || (*((_BYTE *)a2 + 16) & 1) != 0 && (*((_DWORD *)a2 + 4) & 2) != 0 && (*((_BYTE *)a3 + 16) & 1) != 0 )
  {
    v4 = 1;
  }
  v10 = *(__m128 *)((char *)a2 + 68);
  v11 = *(__m128 *)((char *)a2 + 52);
  v12 = _mm_shuffle_ps(v11, *(__m128 *)((char *)a2 + 36), 244);
  v13 = _mm_and_ps(_mm_shuffle_ps(v11, v10, 14), DirectX::g_XMMask3);
  v14 = _mm_or_si128(_mm_srli_si128((__m128i)v10, 4), DirectX::g_XMIdentityR3);
  v15 = _mm_and_ps(_mm_shuffle_ps(v12, v12, 82), DirectX::g_XMMask3);
  v16 = DirectX::XMMatrixInverse(0LL, *(double *)v15.m128_u64, *(double *)v13.m128_u64, *(double *)v14.m128i_i64);
  v17 = *(__m128 *)((char *)a3 + 36);
  v18 = (__m128)v14;
  v19 = *(__m128 *)((char *)a3 + 68);
  v20 = v13;
  v21 = *(__m128 *)((char *)a3 + 52);
  v81 = v16;
  v22 = _mm_shuffle_ps(v21, v17, 244);
  v23 = _mm_and_ps(_mm_shuffle_ps(v21, v19, 14), DirectX::g_XMMask3);
  v82 = v15;
  v24 = _mm_or_si128(_mm_srli_si128((__m128i)v19, 4), DirectX::g_XMIdentityR3);
  v25 = _mm_and_ps(_mm_shuffle_ps(v22, v22, 82), DirectX::g_XMMask3);
  v83 = v20;
  v84 = v18;
  v26 = DirectX::XMMatrixMultiply(COERCE_DOUBLE(v17.m128_u64[0] & DirectX::g_XMMask3), &v81);
  v27 = a4[3];
  v28 = *a4;
  v29 = a4[1];
  v83 = a4[2];
  v84 = v27;
  v78 = (__m128)v24;
  v77 = v23;
  v76 = v25;
  v75 = v26;
  v81 = v28;
  v82 = v29;
  v30 = DirectX::XMMatrixMultiply(*(double *)v26.m128_u64, &v81);
  v31 = (__m128)*((unsigned int *)this + 83);
  v32 = v23;
  v33 = (__m128)*((unsigned int *)this + 81);
  v34 = (__m128)v24;
  v35 = v25;
  v79 = v23;
  v36 = *((__m128 *)this + 21);
  v37 = _mm_and_ps(_mm_movelh_ps(_mm_unpacklo_ps(v33, (__m128)*((unsigned int *)this + 82)), v31), DirectX::g_XMMask3);
  v80 = (__m128)v24;
  v38 = _mm_add_ps(v36, v36);
  v39 = _mm_mul_ps(v38, v36);
  v81 = (__m128)DirectX::g_XMIdentityR0;
  v40 = _mm_sub_ps(
          _mm_sub_ps(
            (__m128)`DirectX::XMMatrixRotationQuaternion'::`2'::Constant1110,
            _mm_and_ps(_mm_shuffle_ps(v39, v39, 193), DirectX::g_XMMask3)),
          _mm_and_ps(_mm_shuffle_ps(v39, v39, 218), DirectX::g_XMMask3));
  v82 = (__m128)DirectX::g_XMIdentityR1;
  v83 = (__m128)DirectX::g_XMIdentityR2;
  v41 = _mm_mul_ps(_mm_shuffle_ps(v38, v38, 230), _mm_shuffle_ps(v36, v36, 208));
  v42 = _mm_mul_ps(_mm_shuffle_ps(v38, v38, 201), _mm_shuffle_ps(v36, v36, 255));
  v84 = _mm_or_ps(v37, _mm_andnot_ps(DirectX::g_XMMask3, DirectX::g_XMIdentityR3));
  v43 = _mm_add_ps(v42, v41);
  v44 = _mm_sub_ps(v41, v42);
  v45 = _mm_shuffle_ps(v43, v44, 73);
  v46 = _mm_shuffle_ps(v43, v44, 160);
  v47 = _mm_shuffle_ps(v45, v45, 120);
  v48 = _mm_shuffle_ps(v40, v47, 76);
  v49 = _mm_shuffle_ps(v40, v47, 237);
  v46.m128_u64[0] = _mm_shuffle_ps(_mm_shuffle_ps(v46, v46, 136), v40, 228).m128_u64[0];
  *(_QWORD *)&v50 = DirectX::XMMatrixMultiply(*(double *)_mm_shuffle_ps(v48, v48, 120).m128_u64, &v81).m128_u64[0];
  v81 = v30;
  v82 = v35;
  v83 = v32;
  v84 = v34;
  *(_QWORD *)&v51 = DirectX::XMMatrixMultiply(v50, &v81).m128_u64[0];
  *(__m128 *)((char *)this + 388) = DirectX::XMQuaternionRotationMatrix(
                                      v51,
                                      *(double *)_mm_shuffle_ps(v49, v49, 114).m128_u64,
                                      *(double *)v46.m128_u64);
  *((_DWORD *)this + 101) = DirectX::g_XMIdentityR3;
  *((_DWORD *)this + 102) = _mm_shuffle_ps(DirectX::g_XMIdentityR3, DirectX::g_XMIdentityR3, 85).m128_u32[0];
  *((_DWORD *)this + 103) = _mm_shuffle_ps(DirectX::g_XMIdentityR3, DirectX::g_XMIdentityR3, 170).m128_u32[0];
  *((_BYTE *)this + 417) = v52;
  *((_BYTE *)this + 416) = v4;
  *((_DWORD *)this + 128) = *((_DWORD *)a3 + 36);
  *((_DWORD *)this + 129) = *((_DWORD *)a3 + 37);
  *((_DWORD *)this + 130) = *((_DWORD *)a3 + 38);
  *((_DWORD *)this + 125) = *((_DWORD *)a3 + 21);
  *((_DWORD *)this + 126) = *((_DWORD *)a3 + 22);
  *((_DWORD *)this + 127) = *((_DWORD *)a3 + 23);
  *((_BYTE *)this + 525) = v53 & (*((_DWORD *)a3 + 4) >> 7);
  *((_BYTE *)this + 524) = v53 & (*((_DWORD *)a3 + 4) >> 2);
  v54 = *((__m128 *)this + 23);
  v55 = _mm_or_ps(
          _mm_and_ps(
            _mm_movelh_ps(
              _mm_unpacklo_ps((__m128)*((unsigned int *)this + 89), (__m128)*((unsigned int *)this + 90)),
              (__m128)*((unsigned int *)this + 91)),
            DirectX::g_XMMask3),
          _mm_andnot_ps(DirectX::g_XMMask3, DirectX::g_XMIdentityR3));
  v81 = (__m128)DirectX::g_XMIdentityR0;
  v56 = _mm_add_ps(v54, v54);
  v82 = (__m128)DirectX::g_XMIdentityR1;
  v83 = (__m128)DirectX::g_XMIdentityR2;
  v84 = v55;
  v57 = _mm_mul_ps(v56, v54);
  v58 = _mm_mul_ps(_mm_shuffle_ps(v54, v54, 208), _mm_shuffle_ps(v56, v56, 230));
  v59 = _mm_sub_ps(
          _mm_sub_ps(
            (__m128)`DirectX::XMMatrixRotationQuaternion'::`2'::Constant1110,
            _mm_and_ps(_mm_shuffle_ps(v57, v57, 193), DirectX::g_XMMask3)),
          _mm_and_ps(_mm_shuffle_ps(v57, v57, 218), DirectX::g_XMMask3));
  v60 = _mm_mul_ps(_mm_shuffle_ps(v54, v54, 255), _mm_shuffle_ps(v56, v56, 201));
  v61 = _mm_add_ps(v60, v58);
  v62 = _mm_sub_ps(v58, v60);
  v63 = _mm_shuffle_ps(v61, v62, 73);
  v64 = _mm_shuffle_ps(v61, v62, 160);
  v65 = _mm_shuffle_ps(v63, v63, 120);
  v66 = _mm_shuffle_ps(v59, v65, 76);
  v67 = _mm_shuffle_ps(v59, v65, 237);
  v64.m128_u64[0] = _mm_shuffle_ps(_mm_shuffle_ps(v64, v64, 136), v59, 228).m128_u64[0];
  *(_QWORD *)&v68 = DirectX::XMMatrixMultiply(*(double *)_mm_shuffle_ps(v66, v66, 120).m128_u64, &v81).m128_u64[0];
  v81 = v75;
  v82 = v76;
  v83 = v77;
  v84 = v78;
  v69 = DirectX::XMMatrixMultiply(v68, &v81).m128_u64[0];
  v37.m128_u64[0] = _mm_shuffle_ps(v67, v67, 114).m128_u64[0];
  v81 = v30;
  v29.m128_u64[0] = v69;
  v84 = v80;
  v83 = v79;
  v82 = v35;
  *(_QWORD *)&v70 = DirectX::XMMatrixMultiply(v68, &v81).m128_u64[0];
  *(__m128 *)((char *)this + 452) = DirectX::XMQuaternionRotationMatrix(
                                      *(double *)v29.m128_u64,
                                      *(double *)v37.m128_u64,
                                      *(double *)v64.m128_u64);
  *((_DWORD *)this + 117) = DirectX::g_XMIdentityR3;
  *((_DWORD *)this + 118) = _mm_shuffle_ps(DirectX::g_XMIdentityR3, DirectX::g_XMIdentityR3, 85).m128_u32[0];
  *((_DWORD *)this + 119) = _mm_shuffle_ps(DirectX::g_XMIdentityR3, DirectX::g_XMIdentityR3, 170).m128_u32[0];
  *((_BYTE *)this + 481) = v71;
  *((_BYTE *)this + 480) = v4;
  *(__m128 *)((char *)this + 420) = DirectX::XMQuaternionRotationMatrix(
                                      v70,
                                      *(double *)v37.m128_u64,
                                      *(double *)v64.m128_u64);
  *((_DWORD *)this + 109) = DirectX::g_XMIdentityR3;
  *((_DWORD *)this + 110) = _mm_shuffle_ps(DirectX::g_XMIdentityR3, DirectX::g_XMIdentityR3, 85).m128_u32[0];
  *((_DWORD *)this + 111) = _mm_shuffle_ps(DirectX::g_XMIdentityR3, DirectX::g_XMIdentityR3, 170).m128_u32[0];
  *((_BYTE *)this + 449) = v72;
  *((_BYTE *)this + 448) = v4;
}
