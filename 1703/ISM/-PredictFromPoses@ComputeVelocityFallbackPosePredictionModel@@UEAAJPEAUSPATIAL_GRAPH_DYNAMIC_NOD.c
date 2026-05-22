/*
 * XREFs of ?PredictFromPoses@ComputeVelocityFallbackPosePredictionModel@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x1800948A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z @ 0x18008B2DC (--4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18008FE6C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     PoseClientStatics::SpatialTrackingPoseToPoseWithDifferentials @ 0x180093FA4 (PoseClientStatics--SpatialTrackingPoseToPoseWithDifferentials.c)
 *     ??$SE3_mult_a_binv@M@ST@@YA?AU?$SE3@M@0@AEBU10@0@Z @ 0x1800956E8 (--$SE3_mult_a_binv@M@ST@@YA-AU-$SE3@M@0@AEBU10@0@Z.c)
 *     ??$SE3_mult@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x18009BB7C (--$SE3_mult@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1@Z.c)
 *     ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x18009BBF8 (--$SE3_invert@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@@Z.c)
 *     ??$SE3_exp@M@ST@@YAXAEAU?$SE3@M@0@QEBM@Z @ 0x18009BCDC (--$SE3_exp@M@ST@@YAXAEAU-$SE3@M@0@QEBM@Z.c)
 *     ??$SE3_log@M@ST@@YAXQEAMAEBU?$SE3@M@0@@Z @ 0x18009BE2C (--$SE3_log@M@ST@@YAXQEAMAEBU-$SE3@M@0@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

__int64 __fastcall ComputeVelocityFallbackPosePredictionModel::PredictFromPoses(
        ComputeVelocityFallbackPosePredictionModel *this,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a2,
        unsigned __int64 a3,
        __int64 a4,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a5)
{
  __int64 v7; // rdx
  unsigned int v8; // ebx
  char *v10; // rax
  __int64 v11; // rdx
  char *v12; // rdi
  __int64 v13; // rax
  int v14; // edx
  bool v15; // al
  bool v16; // r8
  bool v17; // cl
  bool v18; // dl
  bool v19; // r14
  bool v20; // si
  unsigned __int64 v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __m128 v25; // xmm0
  __int128 v26; // xmm0
  __int128 *v27; // rax
  struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *v28; // rdx
  float v29; // xmm11_4
  float v30; // xmm7_4
  __m128 *v31; // rax
  __m128 v32; // xmm1
  __m128 v33; // xmm0
  __m128 v34; // xmm4
  __m128 v35; // xmm1
  __m128 v36; // xmm2
  __m128 v37; // xmm4
  int v38; // xmm1_4
  __int128 v39; // xmm1
  const char *v40; // [rsp+30h] [rbp-D8h]
  __m128 v41; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v42; // [rsp+48h] [rbp-C0h]
  __int128 v43; // [rsp+58h] [rbp-B0h]
  __m128 v44; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v45; // [rsp+78h] [rbp-90h]
  __int128 v46; // [rsp+88h] [rbp-80h]
  __m128 v47; // [rsp+98h] [rbp-70h] BYREF
  __int128 v48; // [rsp+A8h] [rbp-60h]
  __int128 v49; // [rsp+B8h] [rbp-50h]
  __int128 v50; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v51; // [rsp+D8h] [rbp-30h]
  __int128 v52; // [rsp+E8h] [rbp-20h]
  __int128 v53; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v54; // [rsp+108h] [rbp+0h]
  __int128 v55; // [rsp+118h] [rbp+10h]
  __int128 v56; // [rsp+128h] [rbp+20h] BYREF
  __int128 v57; // [rsp+138h] [rbp+30h]
  __int128 v58; // [rsp+148h] [rbp+40h]
  _DWORD v59[4]; // [rsp+188h] [rbp+80h] BYREF
  char v60; // [rsp+198h] [rbp+90h]
  __int32 v61; // [rsp+1DCh] [rbp+D4h]
  unsigned __int64 v62; // [rsp+1E0h] [rbp+D8h]
  __int32 v63; // [rsp+1E8h] [rbp+E0h]
  __int64 v64; // [rsp+1ECh] [rbp+E4h]
  wil::details::in1diag3 *retaddr; // [rsp+2F0h] [rbp+1E8h]

  if ( !a2 )
  {
    v7 = 143LL;
LABEL_3:
    v8 = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\posepredictionmodels.cpp",
      (const char *)v8);
    return v8;
  }
  if ( !a5 )
  {
    v7 = 144LL;
    goto LABEL_3;
  }
  if ( a3 < 2 )
  {
    v10 = "Incorrect number of poses provided";
    v11 = 146LL;
LABEL_10:
    v8 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\posepredictionmodels.cpp",
      (const char *)0x80070057LL,
      (unsigned __int16 *)v10,
      v40);
    return v8;
  }
  v12 = (char *)a2 + 160;
  v13 = *((_QWORD *)a2 + 20);
  if ( *(_QWORD *)a2 > v13 )
  {
    v10 = "Poses incorrectly ordered";
    v11 = 150LL;
    goto LABEL_10;
  }
  if ( v13 > a4 )
  {
    v10 = "timestamp predates poses";
    v11 = 151LL;
    goto LABEL_10;
  }
  v14 = *((_DWORD *)a2 + 4);
  v15 = (v14 & 4) == 0;
  v16 = (v14 & 1) != 0 && (v12[16] & 1) != 0;
  v17 = (v14 & 0x10) == 0;
  v18 = (v14 & 2) != 0 && (v12[16] & 2) != 0;
  v19 = v15 && v16;
  v20 = v17 && v18;
  v21 = 0LL;
  v22 = *(_OWORD *)((char *)a2 + 52);
  v44 = *(__m128 *)((char *)a2 + 36);
  v23 = *(_OWORD *)((char *)a2 + 68);
  v45 = v22;
  v24 = *(_OWORD *)(v12 + 52);
  v46 = v23;
  v25 = *(__m128 *)(v12 + 36);
  v48 = v24;
  v47 = v25;
  v26 = *(_OWORD *)(v12 + 68);
  v50 = `ST::SE3_identity<float>'::`2'::id;
  v49 = v26;
  v52 = xmmword_1800B3290;
  v51 = xmmword_1800B3280;
  do
  {
    *((_DWORD *)&v53 + v21) = 0;
    *((_DWORD *)&v54 + v21++ + 2) = 0;
  }
  while ( v21 < 6 );
  if ( v19 || v20 )
  {
    v27 = PoseClientStatics::SpatialTrackingPoseToPoseWithDifferentials(&v56, &v44);
    v28 = a2;
  }
  else
  {
    v27 = PoseClientStatics::SpatialTrackingPoseToPoseWithDifferentials(&v56, &v47);
    v28 = (struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *)v12;
  }
  v50 = *v27;
  v51 = v27[1];
  v52 = v27[2];
  v53 = v27[3];
  v54 = v27[4];
  v55 = v27[5];
  SPATIAL_GRAPH_DYNAMIC_NODE_POSE::operator=((__int64)v59, (__int64)v28);
  SPATIAL_GRAPH_DYNAMIC_NODE_POSE::operator=((__int64)a5, (__int64)v59);
  v29 = (double)((int)a4 - v59[0]) / (double)(int)qword_1800D3928;
  if ( v29 > 0.0 )
  {
    if ( !v19 && !v20 )
      goto LABEL_43;
    v41.m128_u64[0] = __PAIR64__(v44.m128_u32[3], v44.m128_u32[0]);
    v41.m128_u64[1] = __PAIR64__(v44.m128_u32[1], DWORD2(v45));
    *(_QWORD *)&v42 = __PAIR64__(HIDWORD(v45), v45);
    *((_QWORD *)&v42 + 1) = __PAIR64__(DWORD1(v45), v44.m128_u32[2]);
    v44 = v41;
    v45 = v42;
    ST::SE3_invert<float>(&v56, &v44);
    v41.m128_u64[0] = __PAIR64__(v47.m128_u32[3], v47.m128_u32[0]);
    v41.m128_u64[1] = __PAIR64__(v47.m128_u32[1], DWORD2(v48));
    *(_QWORD *)&v42 = __PAIR64__(HIDWORD(v48), v48);
    *((_QWORD *)&v42 + 1) = __PAIR64__(DWORD1(v48), v47.m128_u32[2]);
    v43 = v49;
    v47 = v41;
    v48 = v42;
    ST::SE3_invert<float>(&v41, &v47);
    v30 = (double)(*(_DWORD *)v12 - *(_DWORD *)a2) / (double)(int)qword_1800D3928;
    if ( v30 >= 0.000000059600001 )
    {
      v31 = (__m128 *)ST::SE3_mult_a_binv<float>(&v47, &v41, &v56);
      v32 = v31[1];
      v41 = *v31;
      v33 = v31[2];
      v42 = (__int128)v32;
      v43 = (__int128)v33;
      ST::SE3_log<float>(&v53, &v41);
      v34 = (__m128)LODWORD(FLOAT_1_0);
      v35 = (__m128)(unsigned int)v54;
      v36 = (__m128)DWORD1(v54);
      v34.m128_f32[0] = 1.0 / v30;
      v37 = _mm_shuffle_ps(v34, v34, 0);
      v35.m128_f32[0] = *(float *)&v54 * v37.m128_f32[0];
      v36.m128_f32[0] = *((float *)&v54 + 1) * v37.m128_f32[0];
      v44 = _mm_mul_ps((__m128)v53, v37);
      *(_QWORD *)&v54 = _mm_unpacklo_ps(v35, v36).m128_u64[0];
      v53 = (__int128)v44;
    }
    if ( !v19 )
    {
LABEL_43:
      if ( (v60 & 4) != 0 )
      {
        LODWORD(v53) = v61;
        *(_QWORD *)((char *)&v53 + 4) = v62;
      }
    }
    if ( !v20 && (v60 & 0x10) != 0 )
    {
      HIDWORD(v53) = v63;
      *(_QWORD *)&v54 = v64;
    }
    ST::SE3_invert<float>(&v56, &v50);
    v50 = v56;
    v51 = v57;
    v52 = v58;
    if ( v29 < 0.000000059600001 )
    {
      v8 = -2147418113;
      v7 = 229LL;
      goto LABEL_4;
    }
    v44.m128_f32[2] = (float)((float)((float)(*(float *)&v55 * 0.5) * v29) * v29) + (float)(*((float *)&v53 + 2) * v29);
    v44.m128_f32[1] = (float)((float)((float)(*((float *)&v54 + 3) * 0.5) * v29) * v29)
                    + (float)(*((float *)&v53 + 1) * v29);
    v44.m128_f32[0] = (float)((float)((float)(*((float *)&v54 + 2) * 0.5) * v29) * v29) + (float)(*(float *)&v53 * v29);
    v44.m128_f32[3] = (float)((float)((float)(*((float *)&v55 + 1) * 0.5) * v29) * v29)
                    + (float)(*((float *)&v53 + 3) * v29);
    *(float *)&v45 = (float)((float)((float)(*((float *)&v55 + 2) * 0.5) * v29) * v29) + (float)(*(float *)&v54 * v29);
    v41 = (__m128)v56;
    v42 = v57;
    *((float *)&v45 + 1) = (float)((float)((float)(*((float *)&v55 + 3) * 0.5) * v29) * v29)
                         + (float)(*((float *)&v54 + 1) * v29);
    v43 = v58;
    ST::SE3_exp<float>(&v47, &v44);
    ST::SE3_mult<float>(&v47, &v47, &v41);
    v41 = v47;
    v42 = v48;
    v43 = v49;
    ST::SE3_invert<float>(&v56, &v41);
    v41.m128_u64[0] = __PAIR64__(HIDWORD(v56), v56);
    *((_QWORD *)&v42 + 1) = __PAIR64__(DWORD1(v57), DWORD2(v56));
    LODWORD(v42) = v57;
    v41.m128_u64[1] = __PAIR64__(DWORD1(v56), DWORD2(v57));
    *(_QWORD *)&v43 = v58;
    DWORD2(v43) = DWORD2(v58);
    v38 = HIDWORD(v57);
    *(__m128 *)((char *)a5 + 36) = v41;
    DWORD1(v42) = v38;
    HIDWORD(v43) = HIDWORD(v58);
    v39 = v43;
    *(_OWORD *)((char *)a5 + 52) = v42;
    *(_OWORD *)((char *)a5 + 68) = v39;
    *(_QWORD *)a5 = a4;
  }
  return 0LL;
}
