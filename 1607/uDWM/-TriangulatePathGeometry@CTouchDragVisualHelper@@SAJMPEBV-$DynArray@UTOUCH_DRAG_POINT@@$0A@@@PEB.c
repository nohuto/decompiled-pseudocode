/*
 * XREFs of ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x18004D260
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x180089544 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002AC70 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     sqrtf_0 @ 0x1800505BE (sqrtf_0.c)
 *     ?AddAndSet@?$DynArray@K$0A@@@QEAAJIAEBK@Z @ 0x18006E440 (-AddAndSet@-$DynArray@K$0A@@@QEAAJIAEBK@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z @ 0x18006E510 (-AddMultipleAndSet@-$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z @ 0x18006E5AC (-AddMultipleAndSet@-$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CTouchDragVisualHelper::TriangulatePathGeometry(
        double a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r12
  __m128 v8; // xmm1
  __int64 *v9; // r10
  unsigned int v10; // edi
  int v11; // eax
  int v12; // r14d
  unsigned int v13; // esi
  unsigned int v14; // edx
  int v15; // r15d
  float v16; // xmm12_4
  __int64 v18; // rcx
  __int64 v19; // rbx
  __m128 v20; // xmm3
  __m128 v21; // xmm4
  float v22; // xmm5_4
  __m128 v23; // xmm2
  __m128 v24; // xmm1
  __m128 v25; // xmm2
  __m128 v26; // xmm1
  unsigned __int64 v27; // xmm0_8
  __m128i v28; // xmm1
  double v29; // xmm0_8
  int v30; // eax
  int v31; // edx
  __int64 v32; // r12
  __int64 v33; // r8
  __int64 v34; // rdx
  float v35; // eax
  float v36; // eax
  __m128 v37; // xmm4
  __m128 v38; // xmm5
  float v39; // xmm7_4
  float v40; // xmm3_4
  float v41; // xmm2_4
  float v42; // xmm5_4
  float v43; // xmm4_4
  float v44; // xmm3_4
  float *v45; // rax
  __int64 v46; // rcx
  float v47; // xmm2_4
  unsigned int v48; // r12d
  char v49; // r8
  float v50; // xmm0_4
  __int64 v51; // rcx
  float v52; // xmm6_4
  __int64 v53; // rdx
  float v54; // xmm10_4
  float v55; // eax
  float v56; // xmm6_4
  int v57; // r14d
  int v58; // eax
  float v59; // xmm13_4
  int v60; // ecx
  int v61; // eax
  __int64 v62; // r12
  __int64 v63; // r8
  float v64; // eax
  float v65; // xmm13_4
  float v66; // xmm14_4
  __m128 v67; // xmm8
  __m128 v68; // xmm9
  float v69; // xmm15_4
  float v70; // xmm7_4
  float v71; // eax
  __m128 v72; // xmm11
  __m128 v73; // xmm12
  float v74; // xmm10_4
  int v75; // eax
  _QWORD *v76; // r14
  __int64 v77; // r10
  unsigned int v78; // eax
  unsigned int v79; // edx
  int v80; // ecx
  __int64 v81; // r14
  __int64 v82; // rdx
  int v83; // eax
  int v84; // ebx
  unsigned int v85; // eax
  int *v86; // r9
  unsigned int v87; // r8d
  int v88; // eax
  unsigned int v89; // eax
  int *v90; // r9
  unsigned int v91; // r8d
  int v92; // eax
  int v93; // r9d
  unsigned int v94; // [rsp+28h] [rbp-E0h]
  char v95; // [rsp+38h] [rbp-D0h]
  char v96; // [rsp+39h] [rbp-CFh]
  int v97; // [rsp+3Ch] [rbp-CCh]
  int v98; // [rsp+40h] [rbp-C8h] BYREF
  int v99; // [rsp+44h] [rbp-C4h]
  int v100; // [rsp+48h] [rbp-C0h] BYREF
  float v101; // [rsp+4Ch] [rbp-BCh]
  _QWORD *v102; // [rsp+50h] [rbp-B8h]
  unsigned int v103; // [rsp+58h] [rbp-B0h]
  int v104; // [rsp+5Ch] [rbp-ACh]
  int v105; // [rsp+60h] [rbp-A8h]
  unsigned int v106; // [rsp+64h] [rbp-A4h]
  unsigned int v107; // [rsp+68h] [rbp-A0h]
  __int64 v108; // [rsp+70h] [rbp-98h]
  float v109; // [rsp+78h] [rbp-90h]
  __int64 v110; // [rsp+80h] [rbp-88h]
  __int64 v111; // [rsp+88h] [rbp-80h]
  __int64 v112; // [rsp+90h] [rbp-78h]
  __int64 v113; // [rsp+98h] [rbp-70h]
  _DWORD *v114; // [rsp+A0h] [rbp-68h]
  __int128 v115; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v116; // [rsp+B8h] [rbp-50h]
  int v117; // [rsp+C0h] [rbp-48h]
  __int64 v118; // [rsp+C8h] [rbp-40h]
  __int64 *v119; // [rsp+D8h] [rbp-30h]
  float v120; // [rsp+E8h] [rbp-20h]
  float v121; // [rsp+F8h] [rbp-10h]
  float v122; // [rsp+108h] [rbp+0h]
  float v123; // [rsp+118h] [rbp+10h]
  float v124; // [rsp+128h] [rbp+20h]
  float v125; // [rsp+130h] [rbp+28h] BYREF
  unsigned __int64 v126; // [rsp+134h] [rbp+2Ch]
  __int64 v127; // [rsp+140h] [rbp+38h]
  float v128; // [rsp+148h] [rbp+40h]
  __int64 v129; // [rsp+150h] [rbp+48h]
  float v130; // [rsp+158h] [rbp+50h]
  __int64 v131; // [rsp+160h] [rbp+58h]
  __int64 v132; // [rsp+170h] [rbp+68h]
  float v133; // [rsp+178h] [rbp+70h]
  unsigned __int64 v134; // [rsp+180h] [rbp+78h] BYREF
  float v135; // [rsp+188h] [rbp+80h]
  double v136[2]; // [rsp+190h] [rbp+88h] BYREF
  int v137; // [rsp+1A0h] [rbp+98h] BYREF
  int v138; // [rsp+1A4h] [rbp+9Ch]
  int v139; // [rsp+1A8h] [rbp+A0h]
  int v140; // [rsp+1ACh] [rbp+A4h]
  int v141; // [rsp+1B0h] [rbp+A8h]
  int v142; // [rsp+1B4h] [rbp+ACh]
  unsigned __int64 v143; // [rsp+1B8h] [rbp+B0h] BYREF
  float v144; // [rsp+1C0h] [rbp+B8h]
  unsigned __int64 v145; // [rsp+1C4h] [rbp+BCh]
  float v146; // [rsp+1CCh] [rbp+C4h]
  _QWORD v147[4]; // [rsp+1D0h] [rbp+C8h] BYREF

  v7 = a7;
  v8 = *(__m128 *)&a1;
  v111 = a5;
  v9 = (__int64 *)a2;
  v10 = 0;
  v11 = a3[3] - a3[1];
  v12 = 0;
  v119 = (__int64 *)a2;
  v13 = 0;
  v14 = *(_DWORD *)(a2 + 24);
  v107 = LODWORD(a1);
  v102 = a4;
  v114 = a3;
  v113 = a7;
  v106 = v14;
  v103 = v14 - 1;
  v116 = 0LL;
  v15 = -1;
  v117 = 0;
  v99 = -1;
  v16 = (float)v11 / (float)(int)(v14 - 1);
  v101 = v16;
  v115 = 0LL;
  if ( !v14 )
    goto LABEL_2;
  v59 = FLOAT_1_1920929eN7;
  v82 = 0LL;
  v112 = 0LL;
  v97 = 0;
  while ( 1 )
  {
    v18 = *v9;
    v19 = *((unsigned int *)a4 + 6);
    v20 = v8;
    v21 = v8;
    v105 = *((_DWORD *)a4 + 6);
    v22 = v8.m128_f32[0] * *(float *)(v82 + v18 + 24);
    v20.m128_f32[0] = v8.m128_f32[0] * *(float *)(v82 + v18 + 16);
    v21.m128_f32[0] = v8.m128_f32[0] * *(float *)(v82 + v18 + 20);
    v23 = v20;
    v23.m128_f32[0] = v20.m128_f32[0] + *(float *)(v82 + v18 + 4);
    v24 = v21;
    v24.m128_f32[0] = v21.m128_f32[0] + *(float *)(v82 + v18 + 8);
    v120 = v22 + *(float *)(v82 + v18 + 12);
    v144 = v120;
    v143 = _mm_unpacklo_ps(v23, v24).m128_u64[0];
    v25 = (__m128)*(unsigned int *)(v82 + v18 + 4);
    v25.m128_f32[0] = v25.m128_f32[0] - v20.m128_f32[0];
    v26 = (__m128)*(unsigned int *)(v82 + v18 + 8);
    v26.m128_f32[0] = v26.m128_f32[0] - v21.m128_f32[0];
    v121 = *(float *)(v82 + v18 + 12) - v22;
    v27 = _mm_unpacklo_ps(v25, v26).m128_u64[0];
    v28 = _mm_cvtsi32_si128(a3[2]);
    v145 = v27;
    v29 = (double)(int)*a3;
    v146 = v121;
    *(double *)v147 = v29;
    v25.m128_f32[0] = (float)((float)(int)v13 * v16) + (float)(int)a3[1];
    v147[2] = *(_OWORD *)&_mm_cvtepi32_pd(v28);
    *(double *)&v147[1] = v25.m128_f32[0];
    *(double *)&v147[3] = v25.m128_f32[0];
    v30 = DynArray<MilPoint3F,0>::AddMultipleAndSet(a4, &v143, 2LL);
    v10 = v30;
    if ( v30 < 0 )
    {
      v94 = 237;
      goto LABEL_84;
    }
    v30 = DynArray<MilPoint2D,0>::AddMultipleAndSet(v111, v147, 2LL);
    v10 = v30;
    if ( v30 < 0 )
    {
      v94 = 238;
      goto LABEL_84;
    }
    v98 = 255;
    v30 = DynArray<unsigned long,0>::AddAndSet(v7, 2LL, &v98);
    v10 = v30;
    if ( v30 < 0 )
    {
      v94 = 239;
      goto LABEL_84;
    }
    if ( !v13 )
      goto LABEL_45;
    v31 = v15;
    if ( v15 < 0 )
      v31 = v13 - 1;
    v96 = 0;
    v32 = (unsigned int)(v19 + 1);
    v33 = *v102;
    v34 = (unsigned int)v19 + 2 * (v31 - v13);
    v131 = *(_QWORD *)(*v102 + 12 * v19);
    v35 = *(float *)(v33 + 12 * v34 + 8);
    v118 = *(_QWORD *)(v33 + 12 * v32);
    v129 = *(_QWORD *)(v33 + 12 * v34);
    v130 = v35;
    v36 = *(float *)(v33 + 12LL * (unsigned int)(v34 + 1) + 8);
    v108 = *(_QWORD *)(v33 + 12LL * (unsigned int)(v34 + 1));
    v37 = (__m128)(unsigned int)v108;
    v38 = (__m128)HIDWORD(v108);
    v37.m128_f32[0] = *(float *)&v108 - *(float *)&v129;
    v38.m128_f32[0] = *((float *)&v108 + 1) - *((float *)&v129 + 1);
    v109 = v36;
    v39 = (float)((float)(*(float *)&v108 - *(float *)&v129) * (float)(*((float *)&v118 + 1) - *((float *)&v131 + 1)))
        - (float)((float)(*((float *)&v108 + 1) - *((float *)&v129 + 1)) * (float)(*(float *)&v118 - *(float *)&v131));
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v39) & _xmm) > v59 )
    {
      v40 = (float)((float)((float)(*((float *)&v129 + 1) - *((float *)&v131 + 1))
                          * (float)(*(float *)&v118 - *(float *)&v131))
                  - (float)((float)(*(float *)&v129 - *(float *)&v131)
                          * (float)(*((float *)&v118 + 1) - *((float *)&v131 + 1))))
          / v39;
      v41 = (float)((float)((float)(*((float *)&v129 + 1) - *((float *)&v131 + 1)) * v37.m128_f32[0])
                  - (float)((float)(*(float *)&v129 - *(float *)&v131) * v38.m128_f32[0]))
          / v39;
      if ( v40 > v59 && v40 < 0.99999988 && v41 > v59 && v41 < 0.99999988 )
      {
        v37.m128_f32[0] = (float)(v37.m128_f32[0] * v40) + *(float *)&v129;
        v38.m128_f32[0] = (float)(v38.m128_f32[0] * v40) + *((float *)&v129 + 1);
        v134 = _mm_unpacklo_ps(v37, v38).m128_u64[0];
        v122 = (float)((float)(v36 - v130) * v40) + v130;
        v135 = v122;
        if ( v15 < 0 )
          v15 = v13 - 1;
        DynArray<MilPoint3F,0>::AddMultipleAndSet(&v115, &v134, 1LL);
        v12 = v117;
        v96 = 1;
        if ( v13 != v103 )
          goto LABEL_45;
      }
    }
    if ( v15 >= 0 )
      break;
LABEL_27:
    if ( !v96 )
    {
      v60 = v99;
      v61 = v19 - 2;
      if ( v99 > 0 )
      {
        v99 = -1;
        v61 = v60;
      }
      if ( v15 >= 0 )
      {
        v99 = v19;
        v15 = -1;
      }
      v138 = v61;
      v141 = v32;
      v62 = 0LL;
      v139 = v61 + 1;
      v140 = v61 + 1;
      v137 = v19;
      v142 = v19;
      while ( 1 )
      {
        v89 = *(_DWORD *)(a6 + 24);
        v90 = &v137 + v62;
        v91 = v89 + 1;
        if ( v89 + 1 < v89 )
          break;
        v10 = 0;
        if ( v91 > *(_DWORD *)(a6 + 20) )
        {
          v92 = DynArrayImpl<0>::AddMultipleAndSet(a6, 4u, 1, v90);
          v84 = v92;
          if ( v92 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v92, 0xC0u);
          v10 = v84;
          if ( v84 < 0 )
            goto LABEL_75;
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)a6 + 4LL * v89) = *v90;
          *(_DWORD *)(a6 + 24) = v91;
        }
        v62 = (unsigned int)(v62 + 1);
        if ( (unsigned int)v62 >= 6 )
          goto LABEL_45;
      }
      v84 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v10 = -2147024362;
LABEL_75:
      v94 = 381;
      goto LABEL_76;
    }
LABEL_45:
    ++v13;
    v97 += 2;
    v82 = v112 + 28;
    v112 += 28LL;
    if ( v13 >= v106 )
      goto LABEL_2;
    v8 = (__m128)v107;
    v7 = v113;
    a3 = v114;
    a4 = v102;
    v9 = v119;
  }
  v42 = 0.0;
  v126 = 0LL;
  v43 = 0.0;
  v44 = 0.0;
  v125 = 0.0;
  v95 = 0;
  if ( v12 )
  {
    v45 = (float *)(v115 + 8);
    v46 = (unsigned int)v12;
    do
    {
      v42 = v42 + *(v45 - 2);
      v44 = v44 + *(v45 - 1);
      v43 = v43 + *v45;
      v45 += 3;
      v125 = v42;
      v126 = __PAIR64__(LODWORD(v43), LODWORD(v44));
      --v46;
    }
    while ( v46 );
  }
  v117 = 0;
  v47 = 1.0 / (float)v12;
  v125 = v47 * v42;
  *(float *)&v126 = v44 * v47;
  *((float *)&v126 + 1) = v43 * v47;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v115, 0xCu);
  v48 = v15;
  if ( v15 >= v13 )
  {
LABEL_26:
    v12 = v117;
    LODWORD(v32) = v19 + 1;
    goto LABEL_27;
  }
  v57 = 2 * v15;
  v98 = 2 * v15;
  v58 = 2 * v13;
  while ( 2 )
  {
    v72 = (__m128)LODWORD(v125);
    v73 = (__m128)(unsigned int)v126;
    v63 = (unsigned int)(v19 + v57 - v58);
    v67 = (__m128)LODWORD(v125);
    v68 = (__m128)(unsigned int)v126;
    v104 = v19 + v57 - v58;
    v110 = *v102;
    v64 = *(float *)(v110 + 12 * v63 + 8);
    v132 = *(_QWORD *)(v110 + 12 * v63);
    v65 = *(float *)&v132;
    v66 = *((float *)&v132 + 1);
    v67.m128_f32[0] = v125 - *(float *)&v132;
    v133 = v64;
    v68.m128_f32[0] = *(float *)&v126 - *((float *)&v132 + 1);
    v69 = v64;
    v70 = *((float *)&v126 + 1) - v64;
    v71 = *(float *)(v110 + 12LL * (unsigned int)(v63 + 1) + 8);
    v127 = *(_QWORD *)(v110 + 12LL * (unsigned int)(v63 + 1));
    v72.m128_f32[0] = v125 - *(float *)&v127;
    v73.m128_f32[0] = *(float *)&v126 - *((float *)&v127 + 1);
    v128 = v71;
    v74 = *((float *)&v126 + 1) - v71;
    *(float *)&v100 = sqrtf_0(
                        (float)((float)((float)(*((float *)&v127 + 1) - *((float *)&v132 + 1))
                                      * (float)(*((float *)&v127 + 1) - *((float *)&v132 + 1)))
                              + (float)((float)(*(float *)&v127 - *(float *)&v132)
                                      * (float)(*(float *)&v127 - *(float *)&v132)))
                      + (float)((float)(v71 - v69) * (float)(v71 - v69)));
    v56 = *(float *)&v100
        / sqrtf_0(
            (float)((float)(v68.m128_f32[0] * v68.m128_f32[0]) + (float)(v67.m128_f32[0] * v67.m128_f32[0]))
          + (float)(v70 * v70));
    if ( v48 == v15 )
    {
      if ( v56 <= 2.0 )
      {
        v95 = 1;
LABEL_36:
        v51 = v110;
        v75 = v57 - v97 + 1;
        v67.m128_f32[0] = (float)(v67.m128_f32[0] * v56) + v65;
        v53 = 3LL * (unsigned int)(v19 + v75);
        v68.m128_f32[0] = (float)(v68.m128_f32[0] * v56) + v66;
        *(_QWORD *)(v110 + 12LL * (unsigned int)(v19 + v75)) = _mm_unpacklo_ps(v67, v68).m128_u64[0];
        v123 = (float)(v70 * v56) + v69;
        v55 = v123;
        goto LABEL_22;
      }
      v49 = 0;
      v95 = 0;
    }
    else
    {
      v49 = v95;
    }
    if ( v49 )
      goto LABEL_36;
    v50 = sqrtf_0(
            (float)((float)(v73.m128_f32[0] * v73.m128_f32[0]) + (float)(v72.m128_f32[0] * v72.m128_f32[0]))
          + (float)(v74 * v74));
    v51 = v110;
    v52 = *(float *)&v100 / v50;
    v53 = 3LL * (unsigned int)(v19 + v57 - v97);
    v72.m128_f32[0] = (float)(v72.m128_f32[0] * (float)(*(float *)&v100 / v50)) + *(float *)&v127;
    v73.m128_f32[0] = (float)(v73.m128_f32[0] * (float)(*(float *)&v100 / v50)) + *((float *)&v127 + 1);
    v54 = (float)(v74 * (float)(*(float *)&v100 / v50)) + v128;
    *(_QWORD *)(v110 + 12LL * (unsigned int)(v19 + v57 - v97)) = _mm_unpacklo_ps(v72, v73).m128_u64[0];
    v124 = v54;
    v55 = v54;
    v56 = v52 / (float)(v52 - 1.0);
LABEL_22:
    *(float *)(v51 + 4 * v53 + 8) = v55;
    if ( v48 >= v13 - 1 )
    {
      v16 = v101;
LABEL_24:
      v57 += 2;
      v58 = 2 * v13;
      ++v48;
      v98 = v57;
      if ( v48 >= v13 )
      {
        v59 = FLOAT_1_1920929eN7;
        goto LABEL_26;
      }
      continue;
    }
    break;
  }
  v76 = v102;
  v30 = DynArray<MilPoint3F,0>::AddMultipleAndSet(v102, &v125, 1LL);
  v10 = v30;
  if ( v30 < 0 )
  {
    v94 = 337;
    goto LABEL_84;
  }
  v16 = v101;
  v136[0] = (float)((float)((float)(v114[2] - *v114) / v56) + (float)(int)*v114);
  v136[1] = (float)((float)((float)((float)(int)v48 * v101) + (float)(int)v114[1]) + (float)(v101 * 0.5));
  v30 = DynArray<MilPoint2D,0>::AddMultipleAndSet(v111, v136, 1LL);
  v10 = v30;
  if ( v30 < 0 )
  {
    v94 = 340;
LABEL_84:
    v93 = v30;
    goto LABEL_85;
  }
  v77 = v113;
  v100 = 255;
  v78 = *(_DWORD *)(v113 + 24);
  v79 = v78 + 1;
  if ( v78 + 1 < v78 )
  {
    v84 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v10 = -2147024362;
LABEL_78:
    v94 = 341;
    goto LABEL_76;
  }
  if ( v79 > *(_DWORD *)(v113 + 20) )
  {
    v83 = DynArrayImpl<0>::AddMultipleAndSet(v113, 4u, 1, &v100);
    v84 = v83;
    if ( v83 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v83, 0xC0u);
    v10 = v84;
    if ( v84 >= 0 )
      goto LABEL_42;
    goto LABEL_78;
  }
  *(_DWORD *)(*(_QWORD *)v113 + 4LL * v78) = 255;
  *(_DWORD *)(v77 + 24) = v79;
LABEL_42:
  v80 = *((_DWORD *)v76 + 6) - 1;
  v137 = v104;
  v139 = v80;
  v81 = 0LL;
  v142 = v80;
  v138 = v104 + 2;
  v140 = v104 + 1;
  v141 = v104 + 3;
  while ( 1 )
  {
    v85 = *(_DWORD *)(a6 + 24);
    v86 = &v137 + v81;
    v87 = v85 + 1;
    if ( v85 + 1 < v85 )
      break;
    v10 = 0;
    if ( v87 > *(_DWORD *)(a6 + 20) )
    {
      v88 = DynArrayImpl<0>::AddMultipleAndSet(a6, 4u, 1, v86);
      v84 = v88;
      if ( v88 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v88, 0xC0u);
      v10 = v84;
      if ( v84 < 0 )
        goto LABEL_73;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)a6 + 4LL * v85) = *v86;
      *(_DWORD *)(a6 + 24) = v87;
    }
    v81 = (unsigned int)(v81 + 1);
    if ( (unsigned int)v81 >= 6 )
    {
      LODWORD(v19) = v105;
      v57 = v98;
      goto LABEL_24;
    }
  }
  v84 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v10 = -2147024362;
LABEL_73:
  v94 = 353;
LABEL_76:
  v93 = v84;
LABEL_85:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v93, v94);
LABEL_2:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v115);
  return v10;
}
