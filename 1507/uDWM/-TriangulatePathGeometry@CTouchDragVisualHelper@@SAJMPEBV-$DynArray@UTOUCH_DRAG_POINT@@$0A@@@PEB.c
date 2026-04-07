/*
 * XREFs of ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x1800847CC
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x180086164 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800282D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x1800498DE (sqrtf_0.c)
 *     ?AddAndSet@?$DynArray@K$0A@@@QEAAJIAEBK@Z @ 0x1800830F8 (-AddAndSet@-$DynArray@K$0A@@@QEAAJIAEBK@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CTouchDragVisualHelper::TriangulatePathGeometry(
        double a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __m128 v7; // xmm1
  __int64 v8; // r14
  unsigned int v9; // ebx
  unsigned int *v11; // r9
  unsigned int v12; // esi
  unsigned int v13; // r15d
  _QWORD *v14; // r8
  int v15; // eax
  unsigned int v16; // edx
  int v17; // r13d
  float v18; // xmm12_4
  float v19; // xmm13_4
  __int64 v20; // rax
  __m128 v21; // xmm3
  __m128 v22; // xmm4
  float *v23; // rcx
  __int64 v24; // r8
  float v25; // xmm5_4
  unsigned int v26; // edx
  __m128 v27; // xmm2
  __m128 v28; // xmm1
  __m128 v29; // xmm2
  __m128 v30; // xmm1
  unsigned __int64 v31; // xmm0_8
  __m128i v32; // xmm1
  __m128i v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // eax
  int v37; // edi
  __int64 v38; // rax
  unsigned int v39; // ecx
  _OWORD *v40; // rax
  int v41; // eax
  int v42; // eax
  int v43; // edx
  __int64 v44; // r8
  int v45; // edi
  __int64 v46; // r14
  __int64 v47; // rdx
  float v48; // eax
  float v49; // eax
  __m128 v50; // xmm4
  __m128 v51; // xmm5
  float v52; // xmm7_4
  float v53; // xmm3_4
  float v54; // xmm2_4
  unsigned __int64 v55; // xmm0_8
  unsigned int v56; // r8d
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  int v60; // eax
  float v61; // xmm5_4
  float v62; // xmm4_4
  float v63; // xmm3_4
  float *v64; // rax
  __int64 v65; // rcx
  float v66; // xmm2_4
  unsigned int v67; // esi
  __int64 v68; // r14
  __int64 v69; // rdi
  float v70; // xmm13_4
  float v71; // xmm14_4
  __m128 v72; // xmm8
  __m128 v73; // xmm9
  __m128 v74; // xmm11
  __m128 v75; // xmm12
  float v76; // xmm15_4
  float v77; // xmm7_4
  float v78; // xmm10_4
  float v79; // xmm6_4
  char v80; // dl
  __int64 v81; // rcx
  float v82; // eax
  float v83; // xmm0_4
  float v84; // xmm6_4
  float v85; // xmm10_4
  __int64 v86; // rax
  unsigned int v87; // r8d
  __int64 v88; // rcx
  __int64 v89; // rdx
  int v90; // eax
  __int64 v91; // r10
  __int64 v92; // rax
  unsigned int v93; // ecx
  int v94; // eax
  __int64 v95; // r10
  unsigned int v96; // eax
  unsigned int v97; // edx
  int v98; // eax
  __int64 v99; // r10
  int v100; // ecx
  __int64 v101; // rsi
  unsigned int v102; // eax
  int *v103; // r9
  unsigned int v104; // r8d
  int v105; // eax
  int v106; // ecx
  int v107; // eax
  __int64 v108; // r10
  __int64 v109; // r14
  unsigned int v110; // eax
  int *v111; // r9
  unsigned int v112; // r8d
  int v113; // eax
  unsigned int v115; // [rsp+28h] [rbp-E0h]
  char v116; // [rsp+38h] [rbp-D0h]
  char v117; // [rsp+39h] [rbp-CFh]
  unsigned int v118; // [rsp+3Ch] [rbp-CCh] BYREF
  int v119; // [rsp+40h] [rbp-C8h]
  int v120; // [rsp+44h] [rbp-C4h] BYREF
  float v121; // [rsp+48h] [rbp-C0h]
  unsigned int v122; // [rsp+4Ch] [rbp-BCh]
  __int64 v123; // [rsp+50h] [rbp-B8h]
  unsigned int v124; // [rsp+58h] [rbp-B0h]
  unsigned int v125; // [rsp+5Ch] [rbp-ACh]
  _QWORD v126[3]; // [rsp+60h] [rbp-A8h] BYREF
  int v127; // [rsp+78h] [rbp-90h]
  unsigned int v128; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v129; // [rsp+80h] [rbp-88h]
  __int64 v130; // [rsp+88h] [rbp-80h]
  float v131; // [rsp+90h] [rbp-78h]
  __int64 v132; // [rsp+98h] [rbp-70h]
  __int64 v133; // [rsp+A0h] [rbp-68h]
  __int64 v134; // [rsp+A8h] [rbp-60h]
  unsigned int *v135; // [rsp+B0h] [rbp-58h]
  __int64 v136; // [rsp+B8h] [rbp-50h]
  _QWORD *v137; // [rsp+C8h] [rbp-40h]
  __int64 v138; // [rsp+D0h] [rbp-38h]
  float v139; // [rsp+E0h] [rbp-28h]
  float v140; // [rsp+F0h] [rbp-18h]
  float v141; // [rsp+100h] [rbp-8h]
  float v142; // [rsp+110h] [rbp+8h]
  float v143; // [rsp+120h] [rbp+18h]
  _QWORD v144[2]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v145; // [rsp+138h] [rbp+30h]
  float v146; // [rsp+140h] [rbp+38h]
  __int64 v147; // [rsp+148h] [rbp+40h]
  __int64 v148; // [rsp+158h] [rbp+50h]
  float v149; // [rsp+160h] [rbp+58h]
  __int64 v150; // [rsp+168h] [rbp+60h]
  float v151; // [rsp+170h] [rbp+68h]
  unsigned __int64 v152; // [rsp+178h] [rbp+70h] BYREF
  float v153; // [rsp+180h] [rbp+78h]
  __int128 v154; // [rsp+188h] [rbp+80h] BYREF
  int v155; // [rsp+198h] [rbp+90h] BYREF
  int v156; // [rsp+19Ch] [rbp+94h]
  int v157; // [rsp+1A0h] [rbp+98h]
  int v158; // [rsp+1A4h] [rbp+9Ch]
  int v159; // [rsp+1A8h] [rbp+A0h]
  int v160; // [rsp+1ACh] [rbp+A4h]
  _BYTE v161[24]; // [rsp+1B0h] [rbp+A8h] BYREF
  __int128 v162; // [rsp+1C8h] [rbp+C0h] BYREF
  __int128 v163; // [rsp+1D8h] [rbp+D0h]

  v7 = *(__m128 *)&a1;
  v8 = a5;
  v123 = a6;
  v9 = 0;
  v127 = 0;
  v11 = a3;
  v128 = 0;
  v12 = 0;
  v133 = a7;
  v13 = 0;
  v135 = a3;
  v14 = (_QWORD *)a2;
  v15 = v11[3] - v11[1];
  v137 = (_QWORD *)a2;
  v16 = *(_DWORD *)(a2 + 24);
  LODWORD(v126[0]) = LODWORD(a1);
  v134 = a5;
  v124 = v16;
  v125 = v16 - 1;
  v129 = 0;
  v119 = -1;
  v17 = -1;
  v18 = (float)v15 / (float)(int)(v16 - 1);
  v121 = v18;
  *(_OWORD *)&v126[1] = 0LL;
  if ( !v16 )
    goto LABEL_113;
  v19 = FLOAT_1_1920929eN7;
  v20 = 0LL;
  v132 = 0LL;
  while ( 1 )
  {
    v21 = v7;
    v22 = v7;
    v23 = (float *)(*v14 + 28 * v20);
    v24 = *(unsigned int *)(a4 + 24);
    v122 = v24;
    v25 = v7.m128_f32[0] * v23[6];
    v26 = v24 + 2;
    v21.m128_f32[0] = v7.m128_f32[0] * v23[4];
    v22.m128_f32[0] = v7.m128_f32[0] * v23[5];
    v27 = v21;
    v28 = v22;
    v27.m128_f32[0] = v21.m128_f32[0] + v23[1];
    v28.m128_f32[0] = v22.m128_f32[0] + v23[2];
    v142 = v25 + v23[3];
    *(float *)&v161[8] = v142;
    *(_QWORD *)v161 = _mm_unpacklo_ps(v27, v28).m128_u64[0];
    v29 = (__m128)*((unsigned int *)v23 + 1);
    v29.m128_f32[0] = v29.m128_f32[0] - v21.m128_f32[0];
    v30 = (__m128)*((unsigned int *)v23 + 2);
    v30.m128_f32[0] = v30.m128_f32[0] - v22.m128_f32[0];
    v139 = v23[3] - v25;
    v31 = _mm_unpacklo_ps(v29, v30).m128_u64[0];
    v32 = _mm_cvtsi32_si128(v11[2]);
    *(_QWORD *)&v161[12] = v31;
    v33 = _mm_cvtsi32_si128(*v11);
    *(float *)&v161[20] = v139;
    *(_QWORD *)&v162 = *(_OWORD *)&_mm_cvtepi32_pd(v33);
    v29.m128_f32[0] = (float)((float)(int)v13 * v18) + (float)(int)v11[1];
    *(_QWORD *)&v163 = *(_OWORD *)&_mm_cvtepi32_pd(v32);
    *((double *)&v162 + 1) = v29.m128_f32[0];
    *((double *)&v163 + 1) = v29.m128_f32[0];
    if ( (int)v24 + 2 < (unsigned int)v24 )
    {
      v37 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v9 = -2147024362;
LABEL_111:
      v115 = 237;
      goto LABEL_112;
    }
    if ( v26 > *(_DWORD *)(a4 + 20) )
    {
      v36 = DynArrayImpl<0>::AddMultipleAndSet(a4, 0xCu, 2, v161);
      v37 = v36;
      if ( v36 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v36, 0xC0u);
      v9 = v37;
      if ( v37 < 0 )
        goto LABEL_111;
    }
    else
    {
      v34 = *(_QWORD *)a4;
      v35 = 3 * v24;
      *(_OWORD *)(v34 + 4 * v35) = *(_OWORD *)v161;
      *(_QWORD *)(v34 + 4 * v35 + 16) = *(_QWORD *)&v161[16];
      *(_DWORD *)(a4 + 24) = v26;
    }
    v38 = *(unsigned int *)(v8 + 24);
    v39 = v38 + 2;
    if ( (int)v38 + 2 < (unsigned int)v38 )
    {
      v37 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v9 = -2147024362;
LABEL_109:
      v115 = 238;
      goto LABEL_112;
    }
    if ( v39 > *(_DWORD *)(v8 + 20) )
    {
      v41 = DynArrayImpl<0>::AddMultipleAndSet(v8, 0x10u, 2, &v162);
      v37 = v41;
      if ( v41 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v41, 0xC0u);
      v9 = v37;
      if ( v37 < 0 )
        goto LABEL_109;
    }
    else
    {
      v40 = (_OWORD *)(*(_QWORD *)v8 + 16 * v38);
      *v40 = v162;
      v40[1] = v163;
      *(_DWORD *)(v8 + 24) = v39;
    }
    v118 = 255;
    v42 = DynArray<unsigned long,0>::AddAndSet(v133, 2u, (int *)&v118);
    v9 = v42;
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v42, 0xEFu);
      goto LABEL_113;
    }
    if ( v13 )
    {
      v43 = v17;
      if ( v17 < 0 )
        v43 = v13 - 1;
      v44 = *(_QWORD *)a4;
      v45 = v122;
      v117 = 0;
      v46 = v122 + 1;
      v147 = *(_QWORD *)(*(_QWORD *)a4 + 12LL * v122);
      v47 = v122 + 2 * (v43 - v13);
      v136 = *(_QWORD *)(v44 + 12 * v46);
      v48 = *(float *)(v44 + 12 * v47 + 8);
      v148 = *(_QWORD *)(v44 + 12 * v47);
      v149 = v48;
      HIDWORD(v126[0]) = v122 + 1;
      v49 = *(float *)(v44 + 12LL * (unsigned int)(v47 + 1) + 8);
      v130 = *(_QWORD *)(v44 + 12LL * (unsigned int)(v47 + 1));
      v50 = (__m128)(unsigned int)v130;
      v51 = (__m128)HIDWORD(v130);
      v50.m128_f32[0] = *(float *)&v130 - *(float *)&v148;
      v51.m128_f32[0] = *((float *)&v130 + 1) - *((float *)&v148 + 1);
      v131 = v49;
      v52 = (float)((float)(*(float *)&v130 - *(float *)&v148) * (float)(*((float *)&v136 + 1) - *((float *)&v147 + 1)))
          - (float)((float)(*((float *)&v130 + 1) - *((float *)&v148 + 1)) * (float)(*(float *)&v136 - *(float *)&v147));
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v52) & _xmm) <= v19 )
        break;
      v53 = (float)((float)((float)(*((float *)&v148 + 1) - *((float *)&v147 + 1))
                          * (float)(*(float *)&v136 - *(float *)&v147))
                  - (float)((float)(*(float *)&v148 - *(float *)&v147)
                          * (float)(*((float *)&v136 + 1) - *((float *)&v147 + 1))))
          / v52;
      v54 = (float)((float)((float)(*((float *)&v148 + 1) - *((float *)&v147 + 1)) * v50.m128_f32[0])
                  - (float)((float)(*(float *)&v148 - *(float *)&v147) * v51.m128_f32[0]))
          / v52;
      if ( v53 <= v19 || v53 >= 0.99999988 || v54 <= v19 || v54 >= 0.99999988 )
        break;
      v50.m128_f32[0] = (float)(v50.m128_f32[0] * v53) + *(float *)&v148;
      v51.m128_f32[0] = (float)(v51.m128_f32[0] * v53) + *((float *)&v148 + 1);
      v55 = _mm_unpacklo_ps(v50, v51).m128_u64[0];
      v152 = v55;
      v140 = (float)((float)(v49 - v149) * v53) + v149;
      v153 = v140;
      if ( v17 < 0 )
        v17 = v13 - 1;
      v56 = v12 + 1;
      if ( v12 + 1 >= v12 )
      {
        if ( v56 > v128 )
        {
          v60 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v126[1], 0xCu, 1, &v152);
          if ( v60 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v60, 0xC0u);
          v12 = v129;
        }
        else
        {
          v57 = v126[1];
          v58 = v12++;
          v129 = v56;
          v59 = 3 * v58;
          *(_QWORD *)(v126[1] + 4 * v59) = v55;
          *(float *)(v57 + 4 * v59 + 8) = v153;
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      }
      v117 = 1;
      if ( v13 == v125 )
        break;
    }
LABEL_95:
    ++v13;
    v20 = ++v132;
    if ( v13 >= v124 )
      goto LABEL_113;
    v7 = (__m128)LODWORD(v126[0]);
    v8 = v134;
    v11 = v135;
    v14 = v137;
  }
  if ( v17 < 0 )
  {
LABEL_80:
    if ( !v117 )
    {
      v106 = v119;
      v107 = v45 - 2;
      if ( v119 > 0 )
      {
        v119 = -1;
        v107 = v106;
      }
      if ( v17 >= 0 )
      {
        v119 = v45;
        v17 = -1;
      }
      v108 = v123;
      v156 = v107;
      v159 = v46;
      v109 = 0LL;
      v157 = v107 + 1;
      v158 = v107 + 1;
      v155 = v45;
      v160 = v45;
      while ( 1 )
      {
        v110 = *(_DWORD *)(v108 + 24);
        v111 = &v155 + v109;
        v112 = v110 + 1;
        if ( v110 + 1 < v110 )
          break;
        v9 = 0;
        if ( v112 > *(_DWORD *)(v108 + 20) )
        {
          v113 = DynArrayImpl<0>::AddMultipleAndSet(v108, 4u, 1, v111);
          v37 = v113;
          if ( v113 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v113, 0xC0u);
          v9 = v37;
          if ( v37 < 0 )
            goto LABEL_106;
          v108 = v123;
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)v108 + 4LL * v110) = *v111;
          *(_DWORD *)(v108 + 24) = v112;
        }
        v109 = (unsigned int)(v109 + 1);
        if ( (unsigned int)v109 >= 6 )
          goto LABEL_95;
      }
      v37 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v9 = -2147024362;
LABEL_106:
      v115 = 381;
      goto LABEL_112;
    }
    goto LABEL_95;
  }
  v61 = 0.0;
  v62 = 0.0;
  v63 = 0.0;
  memset(v144, 0, 12);
  v116 = 0;
  if ( v12 )
  {
    v64 = (float *)(v126[1] + 8LL);
    v65 = v12;
    do
    {
      v61 = v61 + *(v64 - 2);
      v63 = v63 + *(v64 - 1);
      v62 = v62 + *v64;
      v64 += 3;
      v144[0] = __PAIR64__(LODWORD(v63), LODWORD(v61));
      *(float *)&v144[1] = v62;
      --v65;
    }
    while ( v65 );
  }
  v129 = 0;
  v66 = 1.0 / (float)(int)v12;
  *(float *)v144 = v66 * v61;
  *((float *)v144 + 1) = v63 * v66;
  *(float *)&v144[1] = v62 * v66;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v126[1], 0xCu);
  v118 = v17;
  v67 = v17;
  if ( v17 >= v13 )
  {
LABEL_79:
    v12 = v129;
    goto LABEL_80;
  }
  v68 = 2 * v17 - 2 * v13 + v45 + 1;
  while ( 1 )
  {
    v69 = *(_QWORD *)a4;
    v74 = (__m128)LODWORD(v144[0]);
    v75 = (__m128)HIDWORD(v144[0]);
    v72 = (__m128)LODWORD(v144[0]);
    v73 = (__m128)HIDWORD(v144[0]);
    v150 = *(_QWORD *)(*(_QWORD *)a4 + 12LL * (unsigned int)(v68 - 1));
    v70 = *(float *)&v150;
    v71 = *((float *)&v150 + 1);
    v72.m128_f32[0] = *(float *)v144 - *(float *)&v150;
    v145 = *(_QWORD *)(v69 + 12 * v68);
    v73.m128_f32[0] = *((float *)v144 + 1) - *((float *)&v150 + 1);
    v74.m128_f32[0] = *(float *)v144 - *(float *)&v145;
    v75.m128_f32[0] = *((float *)v144 + 1) - *((float *)&v145 + 1);
    v138 = 3LL * (unsigned int)(v68 - 1);
    v151 = *(float *)(v69 + 12LL * (unsigned int)(v68 - 1) + 8);
    v76 = v151;
    v146 = *(float *)(v69 + 12 * v68 + 8);
    v77 = *(float *)&v144[1] - v151;
    v78 = *(float *)&v144[1] - v146;
    *(float *)&v120 = sqrtf_0(
                        (float)((float)((float)(*((float *)&v145 + 1) - *((float *)&v150 + 1))
                                      * (float)(*((float *)&v145 + 1) - *((float *)&v150 + 1)))
                              + (float)((float)(*(float *)&v145 - *(float *)&v150)
                                      * (float)(*(float *)&v145 - *(float *)&v150)))
                      + (float)((float)(v146 - v151) * (float)(v146 - v151)));
    v79 = *(float *)&v120
        / sqrtf_0(
            (float)((float)(v73.m128_f32[0] * v73.m128_f32[0]) + (float)(v72.m128_f32[0] * v72.m128_f32[0]))
          + (float)(v77 * v77));
    if ( v67 == v17 )
    {
      if ( v79 <= 2.0 )
      {
        v116 = 1;
LABEL_46:
        v81 = 3 * v68;
        v72.m128_f32[0] = (float)(v72.m128_f32[0] * v79) + v70;
        v73.m128_f32[0] = (float)(v73.m128_f32[0] * v79) + v71;
        *(_QWORD *)(v69 + 12 * v68) = _mm_unpacklo_ps(v72, v73).m128_u64[0];
        v141 = (float)(v77 * v79) + v76;
        v82 = v141;
        goto LABEL_48;
      }
      v80 = 0;
      v116 = 0;
    }
    else
    {
      v80 = v116;
    }
    if ( v80 )
      goto LABEL_46;
    v83 = sqrtf_0(
            (float)((float)(v75.m128_f32[0] * v75.m128_f32[0]) + (float)(v74.m128_f32[0] * v74.m128_f32[0]))
          + (float)(v78 * v78));
    v81 = v138;
    v84 = *(float *)&v120 / v83;
    v74.m128_f32[0] = (float)(v74.m128_f32[0] * (float)(*(float *)&v120 / v83)) + *(float *)&v145;
    v75.m128_f32[0] = (float)(v75.m128_f32[0] * (float)(*(float *)&v120 / v83)) + *((float *)&v145 + 1);
    v85 = (float)(v78 * (float)(*(float *)&v120 / v83)) + v146;
    *(_QWORD *)(v69 + 4 * v138) = _mm_unpacklo_ps(v74, v75).m128_u64[0];
    v143 = v85;
    v82 = v85;
    v79 = v84 / (float)(v84 - 1.0);
LABEL_48:
    *(float *)(v69 + 4 * v81 + 8) = v82;
    if ( v67 < v13 - 1 )
      break;
    v18 = v121;
LABEL_77:
    ++v67;
    v68 = (unsigned int)(v68 + 2);
    v118 = v67;
    if ( v67 >= v13 )
    {
      v19 = FLOAT_1_1920929eN7;
      v45 = v122;
      LODWORD(v46) = HIDWORD(v126[0]);
      goto LABEL_79;
    }
  }
  v86 = *(unsigned int *)(a4 + 24);
  v87 = v86 + 1;
  if ( (int)v86 + 1 < (unsigned int)v86 )
  {
    v37 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v9 = -2147024362;
LABEL_104:
    v115 = 337;
    goto LABEL_112;
  }
  if ( v87 <= *(_DWORD *)(a4 + 20) )
  {
    v88 = *(_QWORD *)a4;
    v89 = 3 * v86;
    *(_QWORD *)(v88 + 4 * v89) = v144[0];
    *(_DWORD *)(v88 + 4 * v89 + 8) = v144[1];
    *(_DWORD *)(a4 + 24) = v87;
    goto LABEL_55;
  }
  v90 = DynArrayImpl<0>::AddMultipleAndSet(a4, 0xCu, 1, v144);
  v37 = v90;
  if ( v90 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v90, 0xC0u);
  v9 = v37;
  if ( v37 < 0 )
    goto LABEL_104;
LABEL_55:
  v18 = v121;
  v91 = v134;
  v92 = *(unsigned int *)(v134 + 24);
  *(double *)&v154 = (float)((float)((float)(int)(v135[2] - *v135) / v79) + (float)(int)*v135);
  v93 = v92 + 1;
  *((double *)&v154 + 1) = (float)((float)((float)((float)(int)v67 * v121) + (float)(int)v135[1]) + (float)(v121 * 0.5));
  if ( (int)v92 + 1 < (unsigned int)v92 )
  {
    v37 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v9 = -2147024362;
LABEL_102:
    v115 = 340;
    goto LABEL_112;
  }
  if ( v93 <= *(_DWORD *)(v134 + 20) )
  {
    *(_OWORD *)(*(_QWORD *)v134 + 16 * v92) = v154;
    *(_DWORD *)(v91 + 24) = v93;
    goto LABEL_61;
  }
  v94 = DynArrayImpl<0>::AddMultipleAndSet(v134, 0x10u, 1, &v154);
  v37 = v94;
  if ( v94 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v94, 0xC0u);
  v9 = v37;
  if ( v37 < 0 )
    goto LABEL_102;
LABEL_61:
  v95 = v133;
  v120 = 255;
  v96 = *(_DWORD *)(v133 + 24);
  v97 = v96 + 1;
  if ( v96 + 1 < v96 )
  {
    v37 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    v9 = -2147024362;
LABEL_100:
    v115 = 341;
    goto LABEL_112;
  }
  if ( v97 > *(_DWORD *)(v133 + 20) )
  {
    v98 = DynArrayImpl<0>::AddMultipleAndSet(v133, 4u, 1, &v120);
    v37 = v98;
    if ( v98 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v98, 0xC0u);
    v9 = v37;
    if ( v37 >= 0 )
      goto LABEL_67;
    goto LABEL_100;
  }
  *(_DWORD *)(*(_QWORD *)v133 + 4LL * v96) = 255;
  *(_DWORD *)(v95 + 24) = v97;
LABEL_67:
  v99 = v123;
  v100 = *(_DWORD *)(a4 + 24) - 1;
  v155 = v68 - 1;
  v101 = 0LL;
  v157 = v100;
  v156 = v68 + 1;
  v159 = v68 + 2;
  v158 = v68;
  v160 = v100;
  while ( 1 )
  {
    v102 = *(_DWORD *)(v99 + 24);
    v103 = &v155 + v101;
    v104 = v102 + 1;
    if ( v102 + 1 < v102 )
      break;
    v9 = 0;
    if ( v104 > *(_DWORD *)(v99 + 20) )
    {
      v105 = DynArrayImpl<0>::AddMultipleAndSet(v99, 4u, 1, v103);
      v37 = v105;
      if ( v105 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v105, 0xC0u);
      v9 = v37;
      if ( v37 < 0 )
        goto LABEL_98;
      v99 = v123;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)v99 + 4LL * v102) = *v103;
      *(_DWORD *)(v99 + 24) = v104;
    }
    v101 = (unsigned int)(v101 + 1);
    if ( (unsigned int)v101 >= 6 )
    {
      v67 = v118;
      goto LABEL_77;
    }
  }
  v37 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
  v9 = -2147024362;
LABEL_98:
  v115 = 353;
LABEL_112:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v37, v115);
LABEL_113:
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v126[1]);
  return v9;
}
