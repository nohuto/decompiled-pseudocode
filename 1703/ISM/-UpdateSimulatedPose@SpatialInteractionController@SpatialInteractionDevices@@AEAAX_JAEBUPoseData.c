/*
 * XREFs of ?UpdateSimulatedPose@SpatialInteractionController@SpatialInteractionDevices@@AEAAX_JAEBUPoseData@2@AEBUMatrix4x4@Numerics@Foundation@Windows@@@Z @ 0x180099F8C
 * Callers:
 *     ?Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeReference@Holographic@Internal@Windows@@AEBUMatrix4x4@Numerics@Foundation@6@PEA_NPEAW4MPCAugmentedInputGestureType@@@Z @ 0x180099A98 (-Parse@SpatialInteractionController@SpatialInteractionDevices@@QEAAJPEADKPEAUISpatialGraphNodeRe.c)
 * Callees:
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x18002CAAC (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     ?ComputeControllerPoses@SpatialInteractionController@SpatialInteractionDevices@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@Windows@@@Z @ 0x18009A1DC (-ComputeControllerPoses@SpatialInteractionController@SpatialInteractionDevices@@AEAAXAEBUSPATIAL.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionController::UpdateSimulatedPose(
        SpatialInteractionDevices::SpatialInteractionController *this,
        __int64 a2,
        const struct SpatialInteractionDevices::PoseData *a3,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a4)
{
  int v8; // eax
  double v9; // xmm4_8
  __m128 v10; // xmm11
  __m128 v11; // xmm3
  __m128 v12; // xmm6
  __m128 v13; // xmm6
  __m128 v14; // xmm3
  __m128 v15; // xmm4
  __m128 v16; // xmm2
  __m128 v17; // xmm1
  __m128 v18; // xmm4
  __m128 v19; // xmm1
  __m128 v20; // xmm5
  __m128 v21; // xmm3
  __m128 v22; // xmm1
  __m128 v23; // xmm0
  __m128 v24; // xmm3
  __m128 v25; // xmm0
  __m128 v26; // xmm0
  __m128 v27; // xmm4
  __m128 v28; // xmm11
  __m128 v29; // xmm0
  __m128 v30[4]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v31[20]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v32[20]; // [rsp+108h] [rbp+0h] BYREF

  memset(v32, 0, sizeof(v32));
  v32[0] = a2;
  *(_OWORD *)((char *)&v32[4] + 4) = xmmword_1800B2EF0;
  LODWORD(v32[2]) = 3;
  *(_OWORD *)((char *)&v32[6] + 4) = xmmword_1800B2F00;
  *(_OWORD *)((char *)&v32[8] + 4) = xmmword_1800B2F10;
  memset(v31, 0, sizeof(v31));
  v8 = 0;
  v9 = DirectX::g_XMIdentityR0;
  v10 = (__m128)DirectX::g_XMIdentityR1;
  v11 = (__m128)DirectX::g_XMIdentityR2;
  v12 = (__m128)DirectX::g_XMIdentityR3;
  v31[0] = a2;
  LODWORD(v31[2]) = 0;
  if ( *((_BYTE *)a3 + 28) )
  {
    v8 = 1;
    v13 = _mm_and_ps(
            _mm_movelh_ps(
              _mm_unpacklo_ps((__m128)*(unsigned int *)a3, (__m128)*((unsigned int *)a3 + 1)),
              (__m128)*((unsigned int *)a3 + 2)),
            DirectX::g_XMMask3);
    LODWORD(v31[2]) = 1;
    v12 = _mm_or_ps(v13, _mm_andnot_ps(DirectX::g_XMMask3, DirectX::g_XMIdentityR3));
  }
  if ( *((_BYTE *)a3 + 29) )
  {
    v14 = *(__m128 *)((char *)a3 + 12);
    LODWORD(v31[2]) = v8 | 2;
    v15 = _mm_add_ps(v14, v14);
    v16 = _mm_mul_ps(v15, v14);
    v17 = _mm_shuffle_ps(v15, v15, 230);
    v18 = _mm_mul_ps(_mm_shuffle_ps(v15, v15, 201), _mm_shuffle_ps(v14, v14, 255));
    v19 = _mm_mul_ps(v17, _mm_shuffle_ps(v14, v14, 208));
    v20 = _mm_sub_ps(
            _mm_sub_ps(
              (__m128)`DirectX::XMMatrixRotationQuaternion'::`2'::Constant1110,
              _mm_and_ps(_mm_shuffle_ps(v16, v16, 193), DirectX::g_XMMask3)),
            _mm_and_ps(_mm_shuffle_ps(v16, v16, 218), DirectX::g_XMMask3));
    v21 = _mm_add_ps(v18, v19);
    v22 = _mm_sub_ps(v19, v18);
    v23 = v21;
    v24 = _mm_shuffle_ps(v21, v22, 160);
    v25 = _mm_shuffle_ps(v23, v22, 73);
    v26 = _mm_shuffle_ps(v25, v25, 120);
    v27 = _mm_shuffle_ps(v20, v26, 76);
    v28 = _mm_shuffle_ps(v20, v26, 237);
    *(_QWORD *)&v9 = _mm_shuffle_ps(v27, v27, 120).m128_u64[0];
    v10 = _mm_shuffle_ps(v28, v28, 114);
    v11 = _mm_shuffle_ps(_mm_shuffle_ps(v24, v24, 136), v20, 228);
  }
  v30[0] = (__m128)DirectX::g_XMIdentityR0;
  v30[1] = (__m128)DirectX::g_XMIdentityR1;
  v30[2] = (__m128)DirectX::g_XMIdentityR2;
  v30[3] = v12;
  v29 = DirectX::XMMatrixMultiply(v9, v30);
  *(__m128 *)((char *)&v31[4] + 4) = _mm_shuffle_ps(v29, _mm_shuffle_ps(v10, v29, 160), 36);
  *(__m128 *)((char *)&v31[8] + 4) = _mm_shuffle_ps(
                                       _mm_shuffle_ps(v11, DirectX::g_XMIdentityR3, 10),
                                       DirectX::g_XMIdentityR3,
                                       152);
  *(__m128 *)((char *)&v31[6] + 4) = _mm_shuffle_ps(v10, v11, 73);
  SpatialInteractionDevices::SpatialInteractionController::ComputeControllerPoses(
    this,
    (const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v32,
    (const struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v31,
    a4);
}
