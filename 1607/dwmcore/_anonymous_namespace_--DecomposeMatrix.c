/*
 * XREFs of _anonymous_namespace_::DecomposeMatrix @ 0x18016E08C
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x1800A5248 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180058CF0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A580 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     acosf_0 @ 0x1800BF5AE (acosf_0.c)
 *     ?Set2DRotation@CMILMatrix@@QEAAXMMM@Z @ 0x180110B50 (-Set2DRotation@CMILMatrix@@QEAAXMMM@Z.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x180162070 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x1801623E0 (-Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18018844C (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x1801885DC (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     TransformPoint @ 0x18018C0B8 (TransformPoint.c)
 */

void __fastcall anonymous_namespace_::DecomposeMatrix(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct CMILMatrix *a5,
        CMILMatrix *a6)
{
  __int128 v9; // xmm1
  int v11; // xmm0_4
  int v12; // xmm1_4
  float v13; // xmm6_4
  const GUID *v14; // r8
  const GUID *v15; // r9
  int v16; // xmm0_4
  int v17; // xmm0_4
  int v18; // xmm0_4
  int v19; // xmm0_4
  int v20; // xmm0_4
  int v21; // xmm0_4
  int v22; // xmm0_4
  int v23; // xmm0_4
  int v24; // xmm0_4
  int v25; // xmm0_4
  int v26; // xmm0_4
  int v27; // xmm0_4
  int v28; // xmm0_4
  int v29; // xmm0_4
  int v30; // xmm0_4
  int v31; // xmm0_4
  bool v32[4]; // [rsp+38h] [rbp-D0h] BYREF
  float v33; // [rsp+3Ch] [rbp-CCh] BYREF
  int v34; // [rsp+40h] [rbp-C8h] BYREF
  int v35; // [rsp+44h] [rbp-C4h]
  int v36; // [rsp+48h] [rbp-C0h] BYREF
  int v37; // [rsp+4Ch] [rbp-BCh]
  int v38; // [rsp+50h] [rbp-B8h] BYREF
  int v39; // [rsp+54h] [rbp-B4h] BYREF
  const struct Windows::Foundation::Numerics::float2 *v40; // [rsp+58h] [rbp-B0h] BYREF
  const struct Windows::Foundation::Numerics::float2 *v41; // [rsp+60h] [rbp-A8h] BYREF
  int v42; // [rsp+68h] [rbp-A0h] BYREF
  int v43; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v44; // [rsp+70h] [rbp-98h] BYREF
  float X; // [rsp+74h] [rbp-94h] BYREF
  int v46; // [rsp+78h] [rbp-90h] BYREF
  int v47; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v48; // [rsp+80h] [rbp-88h] BYREF
  int v49; // [rsp+84h] [rbp-84h] BYREF
  int v50; // [rsp+88h] [rbp-80h] BYREF
  int v51; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v52; // [rsp+90h] [rbp-78h] BYREF
  int v53; // [rsp+94h] [rbp-74h] BYREF
  int v54; // [rsp+98h] [rbp-70h] BYREF
  int v55; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v56; // [rsp+A0h] [rbp-68h] BYREF
  int v57; // [rsp+A4h] [rbp-64h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-58h] BYREF
  int v60; // [rsp+B8h] [rbp-50h] BYREF
  BOOL v61; // [rsp+BCh] [rbp-4Ch] BYREF
  int v62; // [rsp+C0h] [rbp-48h] BYREF
  int v63; // [rsp+C4h] [rbp-44h] BYREF
  int v64; // [rsp+C8h] [rbp-40h] BYREF
  int v65; // [rsp+CCh] [rbp-3Ch] BYREF
  int v66; // [rsp+D0h] [rbp-38h] BYREF
  _OWORD v67[4]; // [rsp+D8h] [rbp-30h] BYREF
  int v68; // [rsp+118h] [rbp+10h]
  __int64 v69; // [rsp+128h] [rbp+20h] BYREF
  __int64 v70; // [rsp+130h] [rbp+28h]
  __int64 v71; // [rsp+138h] [rbp+30h] BYREF
  __int64 v72; // [rsp+140h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+148h] [rbp+40h] BYREF
  BOOL *v74; // [rsp+168h] [rbp+60h]
  __int64 v75; // [rsp+170h] [rbp+68h]
  int *v76; // [rsp+178h] [rbp+70h]
  __int64 v77; // [rsp+180h] [rbp+78h]
  int *v78; // [rsp+188h] [rbp+80h]
  __int64 v79; // [rsp+190h] [rbp+88h]
  int *v80; // [rsp+198h] [rbp+90h]
  __int64 v81; // [rsp+1A0h] [rbp+98h]
  int *v82; // [rsp+1A8h] [rbp+A0h]
  __int64 v83; // [rsp+1B0h] [rbp+A8h]
  int *v84; // [rsp+1B8h] [rbp+B0h]
  __int64 v85; // [rsp+1C0h] [rbp+B8h]
  int *v86; // [rsp+1C8h] [rbp+C0h]
  __int64 v87; // [rsp+1D0h] [rbp+C8h]
  int *v88; // [rsp+1D8h] [rbp+D0h]
  __int64 v89; // [rsp+1E0h] [rbp+D8h]
  int *v90; // [rsp+1E8h] [rbp+E0h]
  __int64 v91; // [rsp+1F0h] [rbp+E8h]
  int *v92; // [rsp+1F8h] [rbp+F0h]
  __int64 v93; // [rsp+200h] [rbp+F8h]
  int *v94; // [rsp+208h] [rbp+100h]
  __int64 v95; // [rsp+210h] [rbp+108h]
  int *v96; // [rsp+218h] [rbp+110h]
  __int64 v97; // [rsp+220h] [rbp+118h]
  int *v98; // [rsp+228h] [rbp+120h]
  __int64 v99; // [rsp+230h] [rbp+128h]
  int *v100; // [rsp+238h] [rbp+130h]
  __int64 v101; // [rsp+240h] [rbp+138h]
  int *v102; // [rsp+248h] [rbp+140h]
  __int64 v103; // [rsp+250h] [rbp+148h]
  int *v104; // [rsp+258h] [rbp+150h]
  __int64 v105; // [rsp+260h] [rbp+158h]
  int *v106; // [rsp+268h] [rbp+160h]
  __int64 v107; // [rsp+270h] [rbp+168h]
  const struct Windows::Foundation::Numerics::float2 **v108; // [rsp+278h] [rbp+170h]
  __int64 v109; // [rsp+280h] [rbp+178h]
  char *v110; // [rsp+288h] [rbp+180h]
  __int64 v111; // [rsp+290h] [rbp+188h]
  int *v112; // [rsp+298h] [rbp+190h]
  __int64 v113; // [rsp+2A0h] [rbp+198h]
  int *v114; // [rsp+2A8h] [rbp+1A0h]
  __int64 v115; // [rsp+2B0h] [rbp+1A8h]
  int *v116; // [rsp+2B8h] [rbp+1B0h]
  __int64 v117; // [rsp+2C0h] [rbp+1B8h]
  int *v118; // [rsp+2C8h] [rbp+1C0h]
  __int64 v119; // [rsp+2D0h] [rbp+1C8h]
  int *v120; // [rsp+2D8h] [rbp+1D0h]
  __int64 v121; // [rsp+2E0h] [rbp+1D8h]
  float *p_X; // [rsp+2E8h] [rbp+1E0h]
  __int64 v123; // [rsp+2F0h] [rbp+1E8h]
  float *v124; // [rsp+2F8h] [rbp+1F0h]
  __int64 v125; // [rsp+300h] [rbp+1F8h]
  int *v126; // [rsp+308h] [rbp+200h]
  __int64 v127; // [rsp+310h] [rbp+208h]
  __int64 *v128; // [rsp+318h] [rbp+210h]
  __int64 v129; // [rsp+320h] [rbp+218h]
  char *v130; // [rsp+328h] [rbp+220h]
  __int64 v131; // [rsp+330h] [rbp+228h]
  __int64 *v132; // [rsp+338h] [rbp+230h]
  __int64 v133; // [rsp+340h] [rbp+238h]
  char *v134; // [rsp+348h] [rbp+240h]
  __int64 v135; // [rsp+350h] [rbp+248h]
  int *v136; // [rsp+358h] [rbp+250h]
  __int64 v137; // [rsp+360h] [rbp+258h]
  const struct Windows::Foundation::Numerics::float2 **v138; // [rsp+368h] [rbp+260h]
  __int64 v139; // [rsp+370h] [rbp+268h]
  int *v140; // [rsp+378h] [rbp+270h]
  __int64 v141; // [rsp+380h] [rbp+278h]
  int *v142; // [rsp+388h] [rbp+280h]
  __int64 v143; // [rsp+390h] [rbp+288h]

  *(_OWORD *)a3 = *(_OWORD *)a1;
  v33 = 0.0;
  v9 = *(_OWORD *)(a1 + 16);
  v32[0] = 0;
  *(_OWORD *)(a3 + 16) = v9;
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a3 + 48) = *(_OWORD *)(a1 + 48);
  *(_DWORD *)(a3 + 64) = *(_DWORD *)(a1 + 64);
  *(_OWORD *)a4 = CMILMatrix::Identity;
  *(_OWORD *)(a4 + 16) = xmmword_1801EAD20;
  *(_OWORD *)(a4 + 32) = xmmword_1801EAD30;
  *(_OWORD *)(a4 + 48) = xmmword_1801EAD40;
  *(_DWORD *)(a4 + 64) = dword_1801EAD50;
  *(_OWORD *)a5 = CMILMatrix::Identity;
  *((_OWORD *)a5 + 1) = xmmword_1801EAD20;
  *((_OWORD *)a5 + 2) = xmmword_1801EAD30;
  *((_OWORD *)a5 + 3) = xmmword_1801EAD40;
  *((_DWORD *)a5 + 16) = dword_1801EAD50;
  *(_OWORD *)a6 = *(_OWORD *)a3;
  *((_OWORD *)a6 + 1) = *(_OWORD *)(a3 + 16);
  *((_OWORD *)a6 + 2) = *(_OWORD *)(a3 + 32);
  *((_OWORD *)a6 + 3) = *(_OWORD *)(a3 + 48);
  *((_DWORD *)a6 + 16) = *(_DWORD *)(a3 + 64);
  LODWORD(v9) = *(_DWORD *)(a1 + 52);
  LODWORD(v40) = *(_DWORD *)(a1 + 48);
  v11 = *(_DWORD *)a1;
  HIDWORD(v40) = v9;
  LODWORD(v9) = *(_DWORD *)(a1 + 20);
  v38 = v11;
  v39 = v9;
  v67[0] = CMILMatrix::Identity;
  v67[1] = xmmword_1801EAD20;
  v67[2] = xmmword_1801EAD30;
  v67[3] = xmmword_1801EAD40;
  v68 = dword_1801EAD50;
  CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest((CMILMatrix *)a1, a5, (struct CMILMatrix *)v67, v32);
  if ( v32[0] )
  {
    v12 = *((_DWORD *)a5 + 5);
    v38 = *(_DWORD *)a5;
    v39 = v12;
    D3DXQuaternionRotationMatrix((struct D2DQuaternion *)&v42, (const struct D2DMatrix *)v67);
    v42 = 0;
    v43 = 0;
    D3DXQuaternionNormalize((struct D2DQuaternion *)&v42, (const struct D2DQuaternion *)&v42);
    v13 = acosf_0(X) * 2.0;
    v33 = v13;
    CMILMatrix::Set2DRotation((CMILMatrix *)a4, v13, 0.0, 0.0);
  }
  else
  {
    v13 = v33;
  }
  if ( !CMILMatrix::Is2DAffine<1>(a1, 1) )
  {
    v36 = 0;
    v37 = 0;
    v34 = 0;
    v35 = 0;
    CMILMatrix::Set2DAffineMatrix(
      (CMILMatrix *)a3,
      (const struct Windows::Foundation::Numerics::float2 *)&v38,
      v13,
      &v40,
      (const struct Windows::Foundation::Numerics::float2 *)&v34,
      (const struct Windows::Foundation::Numerics::float2 *)&v36);
    *(_OWORD *)a6 = *(_OWORD *)a3;
    *((_OWORD *)a6 + 1) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)a6 + 2) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)a6 + 3) = *(_OWORD *)(a3 + 48);
    *((_DWORD *)a6 + 16) = *(_DWORD *)(a3 + 64);
  }
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  if ( !CMILMatrix::IsIdentity<0>(a3) && (unsigned int)GetPointerDeviceRects(a2, &v69, &v71) )
  {
    TransformPoint((unsigned int)&v71, (unsigned int)&v69, (_DWORD)v14, (_DWORD)v15, (__int64)&v41, (__int64)&v41 + 4);
    v36 = 0;
    v37 = 0;
    v34 = 0;
    v35 = 0;
    CMILMatrix::Set2DAffineMatrix(
      a6,
      (const struct Windows::Foundation::Numerics::float2 *)&v38,
      v33,
      &v41,
      (const struct Windows::Foundation::Numerics::float2 *)&v34,
      (const struct Windows::Foundation::Numerics::float2 *)&v36);
  }
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 2) != 0 && (qword_1801EAA98 & 2) == qword_1801EAA98 )
  {
    v16 = *(_DWORD *)a1;
    v61 = v32[0];
    v74 = &v61;
    v62 = v16;
    v17 = *(_DWORD *)(a1 + 4);
    v76 = &v62;
    v63 = v17;
    v18 = *(_DWORD *)(a1 + 8);
    v78 = &v63;
    v64 = v18;
    v19 = *(_DWORD *)(a1 + 12);
    v80 = &v64;
    v65 = v19;
    v20 = *(_DWORD *)(a1 + 16);
    v82 = &v65;
    v66 = v20;
    v21 = *(_DWORD *)(a1 + 20);
    v84 = &v66;
    v46 = v21;
    v22 = *(_DWORD *)(a1 + 24);
    v86 = &v46;
    v47 = v22;
    v23 = *(_DWORD *)(a1 + 28);
    v88 = &v47;
    v48 = v23;
    v24 = *(_DWORD *)(a1 + 32);
    v90 = &v48;
    v49 = v24;
    v25 = *(_DWORD *)(a1 + 36);
    v92 = &v49;
    v50 = v25;
    v26 = *(_DWORD *)(a1 + 40);
    v94 = &v50;
    v51 = v26;
    v27 = *(_DWORD *)(a1 + 44);
    v96 = &v51;
    v52 = v27;
    v28 = *(_DWORD *)(a1 + 48);
    v98 = &v52;
    v53 = v28;
    v29 = *(_DWORD *)(a1 + 52);
    v100 = &v53;
    v54 = v29;
    v30 = *(_DWORD *)(a1 + 56);
    v102 = &v54;
    v55 = v30;
    v31 = *(_DWORD *)(a1 + 60);
    v104 = &v55;
    v75 = 4LL;
    v77 = 4LL;
    v79 = 4LL;
    v81 = 4LL;
    v83 = 4LL;
    v85 = 4LL;
    v87 = 4LL;
    v89 = 4LL;
    v91 = 4LL;
    v93 = 4LL;
    v95 = 4LL;
    v97 = 4LL;
    v99 = 4LL;
    v101 = 4LL;
    v103 = 4LL;
    v105 = 4LL;
    v56 = v31;
    v106 = &v56;
    v108 = &v40;
    v110 = (char *)&v40 + 4;
    v112 = &v38;
    v114 = &v39;
    v116 = &v42;
    v118 = &v43;
    v120 = &v44;
    p_X = &X;
    v124 = &v33;
    v126 = &v57;
    v58 = v69;
    v128 = &v58;
    v130 = (char *)&v58 + 4;
    v59 = v70;
    v132 = &v59;
    v134 = (char *)&v59 + 4;
    v60 = v71;
    v136 = &v60;
    LODWORD(v41) = HIDWORD(v71);
    v138 = &v41;
    v34 = v72;
    v140 = &v34;
    v36 = HIDWORD(v72);
    v142 = &v36;
    v107 = 4LL;
    v109 = 4LL;
    v111 = 4LL;
    v113 = 4LL;
    v115 = 4LL;
    v117 = 4LL;
    v119 = 4LL;
    v121 = 4LL;
    v123 = 4LL;
    v125 = 4LL;
    v57 = a2;
    v127 = 4LL;
    v129 = 4LL;
    v131 = 4LL;
    v133 = 4LL;
    v135 = 4LL;
    v137 = 4LL;
    v139 = 4LL;
    v141 = 4LL;
    v143 = 4LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C5C84, v14, v15, 0x25u, &pData);
  }
}
