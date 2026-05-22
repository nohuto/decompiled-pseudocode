/*
 * XREFs of ?PredictFromPoses@VRShimPosePredictionModel@@UEAAJPEAUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@_K_J0@Z @ 0x180095040
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z @ 0x18008B2DC (--4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18008FE6C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$SE3_mult@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@1@Z @ 0x18009BB7C (--$SE3_mult@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@1@Z.c)
 *     ??$SE3_exp@M@ST@@YAXAEAU?$SE3@M@0@QEBM@Z @ 0x18009BCDC (--$SE3_exp@M@ST@@YAXAEAU-$SE3@M@0@QEBM@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

__int64 __fastcall VRShimPosePredictionModel::PredictFromPoses(
        VRShimPosePredictionModel *this,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a2,
        __int64 a3,
        __int64 a4,
        struct SPATIAL_GRAPH_DYNAMIC_NODE_POSE *a5)
{
  unsigned int v7; // ebx
  __int64 v8; // rdx
  char *v9; // rax
  __int64 v10; // rdx
  float v11; // xmm8_4
  unsigned __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  bool v15; // zf
  __int32 v16; // xmm1_4
  __int32 v17; // xmm10_4
  __m128 v18; // xmm12
  __m128 v19; // xmm11
  __int128 v20; // xmm0
  unsigned int v21; // xmm1_4
  const char *v23; // [rsp+30h] [rbp-D8h]
  __int128 v24; // [rsp+38h] [rbp-D0h]
  __int128 v25; // [rsp+38h] [rbp-D0h]
  __int128 v26; // [rsp+48h] [rbp-C0h]
  __int128 v27; // [rsp+48h] [rbp-C0h]
  __m256i v28; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v29; // [rsp+78h] [rbp-90h]
  __int128 v30; // [rsp+88h] [rbp-80h]
  _DWORD v31[12]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v32; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v33; // [rsp+D8h] [rbp-30h]
  __int128 v34; // [rsp+E8h] [rbp-20h]
  float v35; // [rsp+F8h] [rbp-10h] BYREF
  float v36; // [rsp+FCh] [rbp-Ch]
  float v37; // [rsp+100h] [rbp-8h]
  float v38; // [rsp+104h] [rbp-4h]
  float v39; // [rsp+108h] [rbp+0h]
  float v40; // [rsp+10Ch] [rbp+4h]
  __int128 v41; // [rsp+118h] [rbp+10h]
  __int128 v42; // [rsp+128h] [rbp+20h]
  __m256i v43; // [rsp+138h] [rbp+30h] BYREF
  unsigned __int64 v44; // [rsp+158h] [rbp+50h]
  float v45; // [rsp+160h] [rbp+58h]
  float v46; // [rsp+164h] [rbp+5Ch]
  float v47; // [rsp+168h] [rbp+60h]
  float v48; // [rsp+16Ch] [rbp+64h]
  float v49; // [rsp+170h] [rbp+68h]
  float v50; // [rsp+174h] [rbp+6Ch]
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  if ( !a2 )
  {
    v7 = -2147467261;
    v8 = 259LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\posepredictionmodels.cpp",
      (const char *)v7);
    return v7;
  }
  if ( !a5 )
  {
    v7 = -2147467261;
    v8 = 260LL;
    goto LABEL_27;
  }
  if ( a3 == 1 )
  {
    if ( *(_QWORD *)a2 <= a4 )
    {
      if ( (*((_BYTE *)a2 + 16) & 1) != 0 )
      {
        if ( (*((_DWORD *)a2 + 4) & 2) != 0 )
        {
          v11 = (double)((int)a4 - *(_DWORD *)a2) / (double)(int)qword_1800D3928;
          if ( v11 == 0.0 )
          {
            SPATIAL_GRAPH_DYNAMIC_NODE_POSE::operator=((__int64)a5, (__int64)a2);
          }
          else
          {
            v12 = 0LL;
            v13 = *(_OWORD *)((char *)a2 + 52);
            *(_OWORD *)&v28.m256i_u64[2] = *(_OWORD *)((char *)a2 + 36);
            v14 = *(_OWORD *)((char *)a2 + 68);
            v29 = v13;
            v30 = v14;
            do
            {
              v43.m256i_i32[v12 + 4] = 0;
              *(&v45 + v12++) = 0.0;
            }
            while ( v12 < 6 );
            v15 = (*((_BYTE *)a2 + 16) & 4) == 0;
            *(_QWORD *)&v24 = __PAIR64__(v28.m256i_u32[7], v28.m256i_u32[4]);
            *((_QWORD *)&v24 + 1) = __PAIR64__(v28.m256i_u32[5], DWORD2(v29));
            *(_QWORD *)&v26 = __PAIR64__(HIDWORD(v29), v29);
            *((_QWORD *)&v26 + 1) = __PAIR64__(DWORD1(v29), v28.m256i_u32[6]);
            *(_OWORD *)v28.m256i_i8 = v30;
            v42 = v26;
            *(_OWORD *)v43.m256i_i8 = v30;
            v41 = v24;
            if ( !v15 )
            {
              v16 = *((_DWORD *)a2 + 22);
              v43.m256i_i32[4] = *((_DWORD *)a2 + 21);
              v43.m256i_i32[6] = *((_DWORD *)a2 + 23);
              v43.m256i_i32[5] = v16;
            }
            if ( (*((_BYTE *)a2 + 16) & 0x10) != 0 )
            {
              v17 = *((__int32 *)a2 + 24);
              v18 = (__m128)*((unsigned int *)a2 + 25);
              v19 = (__m128)*((unsigned int *)a2 + 26);
              v43.m256i_i32[7] = v17;
            }
            else
            {
              v19 = (__m128)HIDWORD(v44);
              v18 = (__m128)(unsigned int)v44;
              v17 = v43.m256i_i32[7];
            }
            v20 = *(_OWORD *)&v43.m256i_u64[2];
            memset((char *)v43.m256i_i64 + 4, 0, 24);
            v44 = _mm_unpacklo_ps(v18, v19).m128_u64[0];
            *(_QWORD *)&v29 = v44;
            *(_OWORD *)&v28.m256i_u64[2] = v20;
            if ( v11 < 0.000000059600001 )
            {
              v8 = 306LL;
              v7 = -2147418113;
              goto LABEL_27;
            }
            v36 = (float)((float)((float)(v46 * 0.5) * v11) * v11) + (float)(0.0 * v11);
            v35 = (float)((float)((float)(v45 * 0.5) * v11) * v11) + (float)(0.0 * v11);
            v40 = (float)((float)((float)(v50 * 0.5) * v11) * v11) + (float)(v19.m128_f32[0] * v11);
            v34 = *(_OWORD *)v43.m256i_i8;
            v37 = (float)((float)((float)(v47 * 0.5) * v11) * v11) + (float)(0.0 * v11);
            v38 = (float)((float)((float)(v48 * 0.5) * v11) * v11) + (float)(*(float *)&v17 * v11);
            v39 = (float)((float)((float)(v49 * 0.5) * v11) * v11) + (float)(v18.m128_f32[0] * v11);
            v32 = v24;
            v33 = v26;
            ST::SE3_exp<float>(v31, &v35);
            ST::SE3_mult<float>(v31, v31, &v32);
            v44 = 0LL;
            *(_OWORD *)((char *)v43.m256i_i64 + 4) = *(_OWORD *)((char *)v28.m256i_i64 + 4);
            *(float *)v43.m256i_i32 = FLOAT_1_0;
            v43.m256i_i32[5] = v28.m256i_i32[5];
            v43.m256i_i64[3] = v28.m256i_u32[6];
            v41 = _xmm;
            v42 = _xmm;
            v35 = (float)((float)((float)(v45 * 0.5) * v11) * v11) + (float)(*(float *)&v28.m256i_i32[4] * v11);
            v38 = (float)(v11 * 0.0) + (float)((float)((float)(v48 * 0.5) * v11) * v11);
            v36 = (float)((float)((float)(v46 * 0.5) * v11) * v11) + (float)(*(float *)&v28.m256i_i32[5] * v11);
            v37 = (float)((float)((float)(v47 * 0.5) * v11) * v11) + (float)(*(float *)&v28.m256i_i32[6] * v11);
            v39 = (float)(v11 * 0.0) + (float)((float)((float)(v49 * 0.5) * v11) * v11);
            v32 = _xmm;
            v33 = _xmm;
            v40 = (float)((float)((float)(v50 * 0.5) * v11) * v11) + (float)(v11 * 0.0);
            v34 = *(_OWORD *)v43.m256i_i8;
            ST::SE3_exp<float>(&v28.m256i_u64[2], &v35);
            ST::SE3_mult<float>(&v28.m256i_u64[2], &v28.m256i_u64[2], &v32);
            *(_OWORD *)a5 = *(_OWORD *)a2;
            *((_OWORD *)a5 + 1) = *((_OWORD *)a2 + 1);
            *((_OWORD *)a5 + 2) = *((_OWORD *)a2 + 2);
            *((_OWORD *)a5 + 3) = *((_OWORD *)a2 + 3);
            *((_OWORD *)a5 + 4) = *((_OWORD *)a2 + 4);
            *((_OWORD *)a5 + 5) = *((_OWORD *)a2 + 5);
            *((_OWORD *)a5 + 6) = *((_OWORD *)a2 + 6);
            *((_OWORD *)a5 + 7) = *((_OWORD *)a2 + 7);
            *((_OWORD *)a5 + 8) = *((_OWORD *)a2 + 8);
            v21 = v31[0];
            *((_OWORD *)a5 + 9) = *((_OWORD *)a2 + 9);
            *(_QWORD *)&v25 = __PAIR64__(v31[3], v21);
            *((_QWORD *)&v25 + 1) = __PAIR64__(v31[1], v31[6]);
            *(_QWORD *)&v27 = __PAIR64__(v31[7], v31[4]);
            *((_QWORD *)&v27 + 1) = __PAIR64__(v31[5], v31[2]);
            v28.m256i_i32[0] = v31[8];
            *(__int64 *)((char *)v28.m256i_i64 + 4) = *(_QWORD *)((char *)&v30 + 4);
            v28.m256i_i32[3] = HIDWORD(v30);
            *(_OWORD *)((char *)a5 + 36) = v25;
            *(_OWORD *)((char *)a5 + 52) = v27;
            *(_OWORD *)((char *)a5 + 68) = *(_OWORD *)v28.m256i_i8;
            *(_QWORD *)a5 = a4;
          }
          return 0LL;
        }
        v9 = "Orientation not valid";
        v10 = 267LL;
      }
      else
      {
        v9 = "Position not valid";
        v10 = 266LL;
      }
    }
    else
    {
      v9 = "timestamp predates prediction pose";
      v10 = 265LL;
    }
  }
  else
  {
    v9 = "Incorrect number of poses provided";
    v10 = 264LL;
  }
  v7 = -2147024809;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\posepredictionmodels.cpp",
    (const char *)0x80070057LL,
    (unsigned __int16 *)v9,
    v23);
  return v7;
}
