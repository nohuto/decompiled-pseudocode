/*
 * XREFs of _lambda_f8380620b3870a98be7ea388687506c5_::operator() @ 0x18008AD1C
 * Callers:
 *     ?GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JW4GetPoseAtTimePurpose@234@PEA_JPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@@Z @ 0x18008A960 (-GetPoseAtTime@SpatialGraphNodeReference@Holographic@Internal@Windows@@UEAAJ_JW4GetPoseAtTimePur.c)
 * Callees:
 *     ??$ValidateOrthonormalRightHandedMatrix@$00@Details@DirectX@@YQ?AW4OrthonormalMatrixValidationFailures@1@UXMMATRIX@1@@Z @ 0x18008C344 (--$ValidateOrthonormalRightHandedMatrix@$00@Details@DirectX@@YQ-AW4OrthonormalMatrixValidationFa.c)
 *     ?GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXW4GetPoseAtTimePurpose@Holographic@Internal@Windows@@AEBUSPATIAL_NODE_ID@@_J3333W4TracePredictionType@@AEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@I@Z @ 0x18008F2D0 (-GetPoseAtTime_@HolographicDriverClientContinuousTrace@@QEAAXPEBXW4GetPoseAtTimePurpose@Holograp.c)
 *     ?TelemetryFirstValidPose_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0@Z @ 0x18008FEE4 (-TelemetryFirstValidPose_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0@Z.c)
 *     ?Report@GetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@AEAAX_J_N@Z @ 0x1800904E4 (-Report@GetPoseAtTimeHeartbeat@Holographic@Internal@Windows@@AEAAX_J_N@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180091C50 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ @ 0x180092D40 (-Instance@HolographicDriverClientContinuousTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall lambda_f8380620b3870a98be7ea388687506c5_::operator()(__int64 **a1)
{
  __int64 v2; // rdx
  int v3; // eax
  unsigned int v4; // esi
  __int64 v5; // rdi
  float *v6; // r14
  __int64 *v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // esi
  __int64 v10; // rdi
  float *v11; // r14
  __int64 *v12; // rax
  __int64 v13; // rcx
  __int64 *v14; // rax
  float **v15; // rdi
  __int64 v16; // rcx
  float *v17; // rsi
  unsigned int v18; // r14d
  float *v19; // r15
  __int64 *v20; // rax
  _QWORD *v21; // r8
  __int64 **v22; // rax
  __int64 v23; // rcx
  __m128 v24; // xmm6
  __m128 v25; // xmm3
  __m128 v26; // xmm2
  __m128 v27; // xmm0
  __m128 v28; // xmm4
  __m128 v29; // xmm3
  __m128 v30; // xmm2
  __int64 *v31; // r14
  __int64 *v32; // r15
  __int64 *v33; // r12
  __int64 v34; // rsi
  __int64 *v35; // r13
  __int64 *v36; // rdi
  _DWORD *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdi
  __int64 v40; // r14
  int v41; // r12d
  int v42; // r15d
  __int64 v43; // rcx
  __int64 v44; // r13
  struct HolographicDriverClientTrace *v45; // rax
  unsigned __int64 v46; // r8
  _DWORD *v47; // rcx
  HolographicDriverClientTrace *v48; // rcx
  __int64 v49; // rbx
  unsigned __int64 i; // rsi
  __int64 v51; // rax
  unsigned __int64 j; // rax
  float v53; // xmm2_4
  unsigned __int64 k; // rax
  float v55; // xmm2_4
  int v56; // r9d
  volatile signed __int32 *v57; // rdx
  int v58; // [rsp+60h] [rbp-A0h]
  int v59; // [rsp+60h] [rbp-A0h]
  LARGE_INTEGER PerformanceCount; // [rsp+68h] [rbp-98h] BYREF
  unsigned int *v61; // [rsp+70h] [rbp-90h]
  __m128 v62; // [rsp+80h] [rbp-80h]
  __m128 v63; // [rsp+90h] [rbp-70h]
  __m128 v64; // [rsp+A0h] [rbp-60h]
  __int128 v65; // [rsp+B0h] [rbp-50h]
  __m128 v66; // [rsp+C0h] [rbp-40h]
  __m128 v67; // [rsp+D0h] [rbp-30h]
  __m128 v68; // [rsp+E0h] [rbp-20h]
  __int64 v69; // [rsp+100h] [rbp+0h] BYREF
  int v70; // [rsp+108h] [rbp+8h]
  __int64 v71; // [rsp+110h] [rbp+10h]
  int v72; // [rsp+118h] [rbp+18h]
  __int64 v73; // [rsp+120h] [rbp+20h]
  int v74; // [rsp+128h] [rbp+28h]
  __int64 v75; // [rsp+130h] [rbp+30h]
  int v76; // [rsp+138h] [rbp+38h]
  __int64 v77; // [rsp+140h] [rbp+40h]
  int v78; // [rsp+148h] [rbp+48h]
  __int64 v79; // [rsp+150h] [rbp+50h]
  int v80; // [rsp+158h] [rbp+58h]
  __int64 v81; // [rsp+160h] [rbp+60h] BYREF

  v2 = **a1;
  v3 = *(_DWORD *)(v2 + 16);
  *(_DWORD *)(v2 + 16) = v3 & 0xFFFFFF7F;
  v58 = v3;
  v4 = 0;
  v5 = **a1;
  v6 = (float *)(v5 + 72);
  while ( (_fpclass(*v6) & 0x207) == 0 )
  {
    ++v4;
    ++v6;
    if ( v4 >= 3 )
      goto LABEL_6;
  }
  v7 = *a1;
  *(_QWORD *)(v5 + 72) = 0LL;
  *(_DWORD *)(v5 + 80) = 0;
  *(_DWORD *)(*v7 + 16) &= ~1u;
LABEL_6:
  v8 = **a1;
  if ( (*(_BYTE *)(v8 + 16) & 1) == 0 )
    *(_DWORD *)(v8 + 16) &= 0xFFFFFFF2;
  v9 = 0;
  v10 = **a1;
  v11 = (float *)(v10 + 36);
  while ( (_fpclass(*v11) & 0x207) == 0 )
  {
    ++v9;
    ++v11;
    if ( v9 >= 9 )
    {
      if ( !(unsigned int)DirectX::Details::ValidateOrthonormalRightHandedMatrix<1>() )
        goto LABEL_13;
      break;
    }
  }
  *(_QWORD *)(v10 + 44) = 0LL;
  *(_QWORD *)(v10 + 36) = 1065353216LL;
  *(_QWORD *)(v10 + 52) = 1065353216LL;
  *(_DWORD *)(v10 + 68) = 1065353216;
  v12 = *a1;
  *(_QWORD *)(v10 + 60) = 0LL;
  *(_DWORD *)(*v12 + 16) &= ~2u;
LABEL_13:
  v13 = **a1;
  if ( (*(_BYTE *)(v13 + 16) & 2) == 0 )
    *(_DWORD *)(v13 + 16) &= 0xFFFFFF8D;
  v14 = *a1;
  v15 = (float **)&v69;
  v70 = 4;
  v72 = 16;
  v74 = 8;
  v16 = *v14;
  v76 = 32;
  v78 = 64;
  v80 = 128;
  v69 = v16 + 84;
  v71 = v16 + 96;
  v73 = v16 + 108;
  v75 = v16 + 120;
  v77 = v16 + 132;
  v79 = v16 + 144;
  do
  {
    v17 = *v15;
    v18 = 0;
    v19 = *v15;
    while ( (_fpclass(*v19) & 0x207) == 0 )
    {
      ++v18;
      ++v19;
      if ( v18 >= 3 )
        goto LABEL_21;
    }
    v20 = *a1;
    *(_QWORD *)v17 = 0LL;
    v17[2] = 0.0;
    *(_DWORD *)(*v20 + 16) &= ~*((_DWORD *)v15 + 2);
LABEL_21:
    v15 += 2;
  }
  while ( v15 != (float **)&v81 );
  v21 = (_QWORD *)*a1[1];
  if ( v21 )
  {
    *v21 = *a1[2] - *a1[3];
    v22 = (__int64 **)a1[1];
    if ( **v22 < 0 )
      **v22 = 0LL;
  }
  if ( (a1[4][12] & 0x10) == 0 )
  {
    v23 = **a1;
    if ( (*(_BYTE *)(v23 + 16) & 2) != 0 )
    {
      v24 = *(__m128 *)(v23 + 36);
      v25 = *(__m128 *)(v23 + 52);
      v26 = _mm_shuffle_ps(v25, v24, 244);
      v64 = _mm_and_ps(_mm_shuffle_ps(v25, *(__m128 *)(v23 + 68), 14), DirectX::g_XMMask3);
      v63 = _mm_and_ps(_mm_shuffle_ps(v26, v26, 82), DirectX::g_XMMask3);
      v62 = _mm_and_ps(v24, DirectX::g_XMMask3);
      v27 = _mm_shuffle_ps(v64, (__m128)0LL, 68);
      v28 = _mm_shuffle_ps(v62, v63, 68);
      v65 = 0LL;
      v29 = _mm_movelh_ps(_mm_unpacklo_ps((__m128)0, (__m128)0xBF800000), (__m128)0);
      v66 = _mm_shuffle_ps(v28, v27, 136);
      v67 = _mm_shuffle_ps(v28, v27, 221);
      v68 = _mm_shuffle_ps(_mm_shuffle_ps(v62, v63, 238), _mm_shuffle_ps(v64, (__m128)0LL, 238), 136);
      v30 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v29, v29, 85), v67), _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v66)),
              _mm_mul_ps(_mm_shuffle_ps(v29, v29, 170), v68));
      *(_DWORD *)(v23 + 132) = v30.m128_i32[0];
      *(_DWORD *)(v23 + 136) = _mm_shuffle_ps(v30, v30, 85).m128_u32[0];
      *(_DWORD *)(v23 + 140) = _mm_shuffle_ps(v30, v30, 170).m128_u32[0];
      *(_DWORD *)(**a1 + 16) |= 0x40u;
    }
  }
  QueryPerformanceCounter(&PerformanceCount);
  v31 = a1[7];
  v32 = a1[2];
  v33 = a1[3];
  v34 = **a1;
  v35 = a1[6];
  v36 = a1[4];
  v61 = (unsigned int *)a1[5];
  v37 = (_DWORD *)*((_QWORD *)HolographicDriverClientContinuousTrace::Instance() + 1);
  if ( v37 && *v37 )
  {
    HolographicDriverClientContinuousTrace::Instance();
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD))HolographicDriverClientContinuousTrace::GetPoseAtTime_)(
      v38,
      a1[4],
      *v61,
      v36 + 10,
      *v35,
      (LARGE_INTEGER)PerformanceCount.QuadPart,
      *v33,
      *v32,
      *(_QWORD *)(v34 + 8),
      *(_DWORD *)v31,
      v34,
      v58);
  }
  v39 = a1[4][16];
  v40 = **a1;
  v41 = *(_DWORD *)a1[7];
  v42 = *(_DWORD *)a1[5];
  v43 = *a1[3];
  v59 = v43;
  v44 = *a1[6];
  if ( (*(_BYTE *)(v40 + 16) & 3) == 0 || _InterlockedCompareExchange((volatile signed __int32 *)(v39 + 56), 1, 0) )
    goto LABEL_36;
  v45 = HolographicDriverClientTrace::Instance();
  v46 = 0LL;
  v47 = (_DWORD *)*((_QWORD *)v45 + 1);
  if ( v47 && *v47 )
  {
    HolographicDriverClientTrace::Instance();
    HolographicDriverClientTrace::TelemetryFirstValidPose_(
      v48,
      (const struct _GUID *)v39,
      (const struct SPATIAL_NODE_ID *)(v39 + 32),
      (const struct _GUID *)(v39 + 16));
    LODWORD(v43) = v59;
LABEL_36:
    v46 = 0LL;
    goto LABEL_37;
  }
  LODWORD(v43) = v59;
LABEL_37:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v39 + 48), 0LL, 0LL) )
  {
    v49 = v39 + 60;
    for ( i = 0LL; i < 8; i += 4LL )
    {
      if ( v42 == *(_DWORD *)((char *)&Windows::Internal::Holographic::GetPoseAtTimeHeartbeat::PurposeBuckets + i) )
      {
        v51 = 0LL;
        while ( v41 != *((_DWORD *)&Windows::Internal::Holographic::GetPoseAtTimeHeartbeat::PredictionTypeBuckets + v51) )
        {
          if ( (unsigned __int64)++v51 >= 3 )
            goto LABEL_46;
        }
        _InterlockedAdd((volatile signed __int32 *)(v49 + 4 * v51), 1u);
LABEL_46:
        for ( j = 0LL; j < 5; ++j )
        {
          v53 = (double)(1000 * (PerformanceCount.LowPart - (int)v44)) / (double)(int)qword_1800D3928;
          if ( v53 <= *((float *)&Windows::Internal::Holographic::GetPoseAtTimeHeartbeat::ExecutionTimeMsecBuckets + j) )
            break;
        }
        _InterlockedAdd((volatile signed __int32 *)(v49 + 4 * j + 12), 1u);
        for ( k = 0LL; k < 5; ++k )
        {
          v55 = (double)(1000 * (PerformanceCount.LowPart - (int)v43)) / (double)(int)qword_1800D3928;
          if ( v55 <= *((float *)&Windows::Internal::Holographic::GetPoseAtTimeHeartbeat::LatencyMsecBuckets + k) )
            break;
        }
        _InterlockedAdd((volatile signed __int32 *)(v49 + 4 * k + 36), 1u);
        v56 = *(_DWORD *)(v40 + 16);
        v57 = (volatile signed __int32 *)(v49 + 60);
        do
        {
          if ( (v56 & *(_DWORD *)((_BYTE *)&Windows::Internal::Holographic::GetPoseAtTimeHeartbeat::TrackingValidityFlagsBuckets
                                + v46)) == *(_DWORD *)((char *)&Windows::Internal::Holographic::GetPoseAtTimeHeartbeat::TrackingValidityFlagsBuckets
                                                     + v46) )
            _InterlockedAdd(v57, 1u);
          else
            _InterlockedAdd(v57 + 1, 1u);
          v46 += 4LL;
          v57 += 2;
        }
        while ( v46 < 0x10 );
        Windows::Internal::Holographic::GetPoseAtTimeHeartbeat::Report(
          (Windows::Internal::Holographic::GetPoseAtTimeHeartbeat *)v39,
          PerformanceCount.QuadPart,
          0);
        v46 = 0LL;
      }
      LODWORD(v43) = v59;
      v49 += 92LL;
    }
  }
}
