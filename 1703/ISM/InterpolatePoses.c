/*
 * XREFs of InterpolatePoses @ 0x180094080
 * Callers:
 *     ?InterpolatePoses@ConstantVelocityPosePredictionModel@@UEAAJAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0_JPEAU2@@Z @ 0x180094880 (-InterpolatePoses@ConstantVelocityPosePredictionModel@@UEAAJAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z @ 0x18008B2DC (--4SPATIAL_GRAPH_DYNAMIC_NODE_POSE@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18008FE6C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$SE3_invert@M@ST@@YAXAEAU?$SE3@M@0@AEBU10@@Z @ 0x18009BBF8 (--$SE3_invert@M@ST@@YAXAEAU-$SE3@M@0@AEBU10@@Z.c)
 *     ??$SE3_interpolate@M@ST@@YA?AU?$SE3@M@0@AEBU10@0M@Z @ 0x18009BFE4 (--$SE3_interpolate@M@ST@@YA-AU-$SE3@M@0@AEBU10@0M@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

__int64 __fastcall InterpolatePoses(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  char *v10; // rax
  __int64 v11; // rdx
  float v12; // xmm2_4
  float v14; // xmm6_4
  unsigned int v15; // xmm1_4
  int v16; // xmm0_4
  int v17; // xmm1_4
  int v18; // xmm0_4
  int v19; // xmm1_4
  int v20; // xmm0_4
  int v21; // xmm1_4
  unsigned int v22; // xmm1_4
  int v23; // xmm0_4
  int v24; // xmm1_4
  int v25; // xmm0_4
  int v26; // xmm1_4
  int v27; // xmm0_4
  int v28; // xmm1_4
  __int128 *v29; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  const char *v33; // [rsp+30h] [rbp-D8h]
  __int128 v34; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v35; // [rsp+48h] [rbp-C0h]
  __int128 v36; // [rsp+58h] [rbp-B0h]
  __int128 v37; // [rsp+70h] [rbp-98h] BYREF
  __int128 v38; // [rsp+80h] [rbp-88h]
  __int128 v39; // [rsp+90h] [rbp-78h]
  _BYTE v40[48]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v41[48]; // [rsp+D0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  if ( a4 )
  {
    if ( *(_QWORD *)a1 > *(_QWORD *)a2 )
    {
      v10 = "Poses incorrectly ordered";
      v11 = 18LL;
LABEL_16:
      v8 = -2147024809;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)v11,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\posepredictionmodels.cpp",
        (const char *)0x80070057LL,
        (unsigned __int16 *)v10,
        v33);
      return v8;
    }
    v12 = (float)(*(_DWORD *)a2 - *(_DWORD *)a1);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm) >= 0.00000011920929 )
    {
      v14 = (float)(a3 - *(_DWORD *)a1) / v12;
      if ( v14 < 0.0 || v14 > 1.0 )
      {
        v10 = "Timestamp outside valid range";
        v11 = 28LL;
        goto LABEL_16;
      }
      v15 = *(_DWORD *)(a1 + 48);
      LODWORD(v34) = *(_DWORD *)(a1 + 36);
      *(_QWORD *)((char *)&v34 + 4) = __PAIR64__(*(_DWORD *)(a1 + 60), v15);
      v16 = *(_DWORD *)(a1 + 40);
      DWORD1(v36) = *(_DWORD *)(a1 + 72);
      v17 = *(_DWORD *)(a1 + 52);
      HIDWORD(v34) = v16;
      DWORD1(v35) = *(_DWORD *)(a1 + 64);
      v18 = *(_DWORD *)(a1 + 44);
      LODWORD(v35) = v17;
      v19 = *(_DWORD *)(a1 + 76);
      DWORD2(v35) = v18;
      v20 = *(_DWORD *)(a1 + 68);
      DWORD2(v36) = v19;
      v21 = *(_DWORD *)(a1 + 56);
      LODWORD(v36) = v20;
      HIDWORD(v35) = v21;
      HIDWORD(v36) = *(_DWORD *)(a1 + 80);
      v37 = v34;
      v38 = v35;
      v39 = v36;
      ST::SE3_invert<float>(v41, &v37);
      v22 = *(_DWORD *)(a2 + 48);
      LODWORD(v34) = *(_DWORD *)(a2 + 36);
      *(_QWORD *)((char *)&v34 + 4) = __PAIR64__(*(_DWORD *)(a2 + 60), v22);
      v23 = *(_DWORD *)(a2 + 40);
      DWORD1(v36) = *(_DWORD *)(a2 + 72);
      v24 = *(_DWORD *)(a2 + 52);
      HIDWORD(v34) = v23;
      DWORD1(v35) = *(_DWORD *)(a2 + 64);
      v25 = *(_DWORD *)(a2 + 44);
      LODWORD(v35) = v24;
      v26 = *(_DWORD *)(a2 + 76);
      DWORD2(v35) = v25;
      v27 = *(_DWORD *)(a2 + 68);
      DWORD2(v36) = v26;
      v28 = *(_DWORD *)(a2 + 56);
      LODWORD(v36) = v27;
      HIDWORD(v35) = v28;
      HIDWORD(v36) = *(_DWORD *)(a2 + 80);
      v37 = v34;
      v38 = v35;
      v39 = v36;
      ST::SE3_invert<float>(v40, &v37);
      if ( v14 < 0.0 && v14 > 1.0 )
      {
        v8 = -2147418113;
        v9 = 44LL;
        goto LABEL_3;
      }
      v29 = (__int128 *)ST::SE3_interpolate<float>(&v34, v41, v40);
      v30 = v29[1];
      v37 = *v29;
      v31 = v29[2];
      v38 = v30;
      v39 = v31;
      ST::SE3_invert<float>(&v34, &v37);
      SPATIAL_GRAPH_DYNAMIC_NODE_POSE::operator=(a4, a1);
      HIDWORD(v38) = DWORD1(v35);
      LODWORD(v38) = v35;
      *((_QWORD *)&v37 + 1) = __PAIR64__(DWORD1(v34), DWORD2(v35));
      v39 = v36;
      *(_QWORD *)((char *)&v38 + 4) = __PAIR64__(DWORD2(v34), HIDWORD(v35));
      *(_QWORD *)&v37 = __PAIR64__(HIDWORD(v34), v34);
      v32 = v36;
      *(_OWORD *)(a4 + 36) = v37;
      *(_OWORD *)(a4 + 52) = v38;
      *(_OWORD *)(a4 + 68) = v32;
      *(_QWORD *)a4 = a3;
    }
    else
    {
      SPATIAL_GRAPH_DYNAMIC_NODE_POSE::operator=(a4, a1);
    }
    return 0LL;
  }
  v8 = -2147467261;
  v9 = 17LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\posepredictionmodels.cpp",
    (const char *)v8);
  return v8;
}
