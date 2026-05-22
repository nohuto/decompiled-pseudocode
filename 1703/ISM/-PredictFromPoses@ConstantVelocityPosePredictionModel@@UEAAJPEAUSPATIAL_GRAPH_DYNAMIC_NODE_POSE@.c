/*
 * XREFs of ?PredictFromPoses@ConstantVelocityPosePredictionModel@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x180094450
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z @ 0x18008B2DC (--4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18008FE6C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     PoseClientStatics::SpatialTrackingPoseToPoseWithDifferentials @ 0x180093FA4 (PoseClientStatics--SpatialTrackingPoseToPoseWithDifferentials.c)
 *     ??$SE3_mult@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x18009BB7C (--$SE3_mult@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1@Z.c)
 *     ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x18009BBF8 (--$SE3_invert@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@@Z.c)
 *     ??$SE3_exp@M@ST@@YAXAEAU?$SE3@M@0@QEBM@Z @ 0x18009BCDC (--$SE3_exp@M@ST@@YAXAEAU-$SE3@M@0@QEBM@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

__int64 __fastcall ConstantVelocityPosePredictionModel::PredictFromPoses(
        ConstantVelocityPosePredictionModel *this,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a2,
        __int64 a3,
        __int64 a4,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a5)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  char *v9; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // r10
  __int64 v14; // r10
  float v15; // xmm11_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  int v18; // xmm1_4
  __int128 v19; // xmm1
  const char *v20; // [rsp+30h] [rbp-D8h]
  __int128 v21; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v22; // [rsp+48h] [rbp-C0h]
  __int128 v23; // [rsp+58h] [rbp-B0h]
  __int128 v24; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v25; // [rsp+78h] [rbp-90h]
  __int128 v26; // [rsp+88h] [rbp-80h]
  __int128 v27; // [rsp+98h] [rbp-70h] BYREF
  __int128 v28; // [rsp+A8h] [rbp-60h]
  __int128 v29; // [rsp+B8h] [rbp-50h]
  _OWORD v30[3]; // [rsp+D8h] [rbp-30h] BYREF
  float v31; // [rsp+108h] [rbp+0h]
  float v32; // [rsp+10Ch] [rbp+4h]
  float v33; // [rsp+110h] [rbp+8h]
  float v34; // [rsp+114h] [rbp+Ch]
  float v35; // [rsp+118h] [rbp+10h]
  float v36; // [rsp+11Ch] [rbp+14h]
  float v37; // [rsp+120h] [rbp+18h]
  float v38; // [rsp+124h] [rbp+1Ch]
  float v39; // [rsp+128h] [rbp+20h]
  float v40; // [rsp+12Ch] [rbp+24h]
  float v41; // [rsp+130h] [rbp+28h]
  float v42; // [rsp+134h] [rbp+2Ch]
  __int128 v43; // [rsp+138h] [rbp+30h] BYREF
  __int128 v44; // [rsp+148h] [rbp+40h]
  __int128 v45; // [rsp+158h] [rbp+50h]
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  if ( !a2 )
  {
    v6 = 68LL;
LABEL_3:
    v7 = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\posepredictionmodels.cpp",
      (const char *)v7);
    return v7;
  }
  if ( !a5 )
  {
    v6 = 69LL;
    goto LABEL_3;
  }
  if ( !a3 )
  {
    v9 = "Incorrect number of poses provided";
    v10 = 71LL;
LABEL_10:
    v7 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\posepredictionmodels.cpp",
      (const char *)0x80070057LL,
      (unsigned __int16 *)v9,
      v20);
    return v7;
  }
  if ( *(_QWORD *)a2 > a4 )
  {
    v9 = "timestamp predates poses";
    v10 = 74LL;
    goto LABEL_10;
  }
  v11 = *(_OWORD *)((char *)a2 + 52);
  v21 = *(_OWORD *)((char *)a2 + 36);
  v12 = *(_OWORD *)((char *)a2 + 68);
  v22 = v11;
  v23 = v12;
  PoseClientStatics::SpatialTrackingPoseToPoseWithDifferentials(v30, &v21);
  SPATIAL_GRAPH_DYNAMIC_NODE_POSE::operator=((__int64)a5, v13);
  v15 = (double)((int)a4 - *(_DWORD *)v14) / (double)(int)qword_1800D3928;
  if ( v15 > 0.0 )
  {
    if ( (*(_BYTE *)(v14 + 16) & 4) != 0 )
    {
      v16 = *(float *)(v14 + 88);
      v31 = *(float *)(v14 + 84);
      v33 = *(float *)(v14 + 92);
      v32 = v16;
    }
    if ( (*(_BYTE *)(v14 + 16) & 0x10) != 0 )
    {
      v17 = *(float *)(v14 + 100);
      v34 = *(float *)(v14 + 96);
      v36 = *(float *)(v14 + 104);
      v35 = v17;
    }
    ST::SE3_invert<float>(&v27, v30);
    v30[0] = v27;
    v30[1] = v28;
    v30[2] = v29;
    if ( v15 < 0.000000059600001 )
    {
      v7 = -2147418113;
      v6 = 113LL;
      goto LABEL_4;
    }
    *((float *)&v24 + 2) = (float)((float)((float)(v39 * 0.5) * v15) * v15) + (float)(v33 * v15);
    *((float *)&v24 + 1) = (float)((float)((float)(v38 * 0.5) * v15) * v15) + (float)(v32 * v15);
    *(float *)&v24 = (float)((float)((float)(v37 * 0.5) * v15) * v15) + (float)(v31 * v15);
    *((float *)&v24 + 3) = (float)((float)((float)(v40 * 0.5) * v15) * v15) + (float)(v34 * v15);
    *(float *)&v25 = (float)((float)((float)(v41 * 0.5) * v15) * v15) + (float)(v35 * v15);
    v43 = v27;
    v44 = v28;
    *((float *)&v25 + 1) = (float)((float)((float)(v42 * 0.5) * v15) * v15) + (float)(v36 * v15);
    v45 = v29;
    ST::SE3_exp<float>(&v21, &v24);
    ST::SE3_mult<float>(&v21, &v21, &v43);
    v43 = v21;
    v44 = v22;
    v45 = v23;
    ST::SE3_invert<float>(&v27, &v43);
    *(_QWORD *)&v24 = __PAIR64__(HIDWORD(v27), v27);
    *((_QWORD *)&v25 + 1) = __PAIR64__(DWORD1(v28), DWORD2(v27));
    LODWORD(v25) = v28;
    *((_QWORD *)&v24 + 1) = __PAIR64__(DWORD1(v27), DWORD2(v28));
    *(_QWORD *)&v26 = v29;
    DWORD2(v26) = DWORD2(v29);
    v18 = HIDWORD(v28);
    *(_OWORD *)((char *)a5 + 36) = v24;
    DWORD1(v25) = v18;
    HIDWORD(v26) = HIDWORD(v29);
    v19 = v26;
    *(_OWORD *)((char *)a5 + 52) = v25;
    *(_OWORD *)((char *)a5 + 68) = v19;
    *(_QWORD *)a5 = a4;
  }
  return 0LL;
}
