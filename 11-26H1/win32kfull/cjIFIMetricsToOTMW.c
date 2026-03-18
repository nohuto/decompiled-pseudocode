/*
 * XREFs of cjIFIMetricsToOTMW @ 0x14010E0AC
 * Callers:
 *     ?GrepGetOutlineTextMetrics@@YAKAEAVDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@@Z @ 0x14010F74C (-GrepGetOutlineTextMetrics@@YAKAEAVDCOBJ@@KPEAU_OUTLINETEXTMETRICW@@PEAU_TMDIFF@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14010EE3C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z @ 0x14010EEB0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVXDCOBJ@@@Z.c)
 *     ?vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS@@@Z @ 0x14010F068 (-vIFIMetricsToTextMetricWStrict@@YAXAEAVRFONTOBJ@@AEAVDCOBJ@@PEAUtagTEXTMETRICW@@PEAU_IFIMETRICS.c)
 *     ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x14010F584 (-cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1401104E0 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall cjIFIMetricsToOTMW(
        _BYTE *a1,
        unsigned int *a2,
        struct RFONTOBJ *a3,
        struct XDCOBJ *a4,
        struct _IFIMETRICS *a5,
        int a6)
{
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // r11
  unsigned int *v15; // r14
  __int64 v16; // r11
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int16 *v20; // r14
  __int64 v21; // r11
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int16 *v24; // r14
  __int64 v25; // r11
  __int64 result; // rax
  float v27; // xmm3_4
  float v28; // xmm2_4
  __m128i v29; // xmm0
  int v30; // r8d
  unsigned int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rax
  __m128i v34; // xmm0
  int v35; // r8d
  unsigned int v36; // edx
  __int64 v37; // rax
  __int64 v38; // rax
  __m128i v39; // xmm0
  int v40; // r8d
  unsigned int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rax
  __m128i v44; // xmm0
  int v45; // r8d
  unsigned int v46; // edx
  __int64 v47; // rax
  __int64 v48; // rax
  __m128i v49; // xmm0
  int v50; // r8d
  unsigned int v51; // edx
  __int64 v52; // rax
  __int64 v53; // rax
  __m128i v54; // xmm0
  int v55; // r8d
  unsigned int v56; // edx
  __int64 v57; // rax
  __int64 v58; // rax
  __m128i v59; // xmm0
  int v60; // r8d
  unsigned int v61; // edx
  __int64 v62; // rax
  __int64 v63; // rax
  __m128i v64; // xmm0
  int v65; // r8d
  unsigned int v66; // edx
  __int64 v67; // rax
  __int64 v68; // rax
  __m128i v69; // xmm0
  int v70; // r8d
  unsigned int v71; // edx
  __int64 v72; // rax
  __int64 v73; // rax
  __m128i v74; // xmm0
  int v75; // r8d
  unsigned int v76; // edx
  __int64 v77; // rax
  __int64 v78; // rax
  __m128i v79; // xmm0
  int v80; // r8d
  unsigned int v81; // edx
  __int64 v82; // rax
  __int64 v83; // rax
  __m128i v84; // xmm0
  int v85; // r8d
  unsigned int v86; // edx
  __int64 v87; // rax
  __int64 v88; // rax
  __m128i v89; // xmm0
  int v90; // r8d
  unsigned int v91; // edx
  __int64 v92; // rax
  __int64 v93; // rax
  __m128i v94; // xmm0
  int v95; // r8d
  unsigned int v96; // edx
  __int64 v97; // rax
  __int64 v98; // rax
  __m128i v99; // xmm0
  int v100; // r8d
  unsigned int v101; // edx
  __int64 v102; // rax
  __int64 v103; // rax
  __m128i v104; // xmm0
  int v105; // r8d
  unsigned int v106; // edx
  __int64 v107; // rax
  __int64 v108; // rax
  __m128i v109; // xmm0
  int v110; // r8d
  unsigned int v111; // edx
  __int64 v112; // rax
  __int64 v113; // rax
  __m128i v114; // xmm0
  int v115; // r8d
  unsigned int v116; // edx
  __int64 v117; // rax
  __int64 v118; // rax
  __m128i v119; // xmm0
  int v120; // r8d
  unsigned int v121; // edx
  __int64 v122; // rax
  __int64 v123; // rax
  __m128i v124; // xmm0
  int v125; // r8d
  unsigned int v126; // edx
  __int64 v127; // rax
  __int64 v128; // rax
  __m128i v129; // xmm0
  int v130; // r8d
  unsigned int v131; // edx
  __int64 v132; // rax
  __int64 v133; // rax
  __m128i v134; // xmm0
  int v135; // r8d
  unsigned int v136; // edx
  __int64 v137; // rax
  __int64 v138; // rax
  __m128i v139; // xmm0
  int v140; // r8d
  unsigned int v141; // edx
  __int64 v142; // rax
  __int64 v143; // rax
  __m128i v144; // xmm0
  int v145; // r8d
  unsigned int v146; // edx
  __int64 v147; // rax
  __int64 v148; // rax
  signed int v149; // eax
  __m128i v150; // xmm1
  int v151; // eax
  __m128i v152; // xmm0
  __int64 v153; // rcx
  int v154; // r8d
  unsigned int v155; // edx
  __int64 v156; // rax
  __int64 v157; // rax
  __m128i v158; // xmm1
  int v159; // r8d
  unsigned int v160; // edx
  __int64 v161; // rax
  __int64 v162; // rax
  float v163; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v164[12]; // [rsp+24h] [rbp-84h] BYREF
  __int64 v165; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int16 v166; // [rsp+46h] [rbp-62h]

  IFIOBJR::IFIOBJR((IFIOBJR *)&v165, a5, a3, a4);
  if ( a5->fwdWinAscender + a5->fwdWinDescender == 0 || a5->fwdUnitsPerEm == 0 )
    return 0LL;
  vIFIMetricsToTextMetricWStrict(a3, a4, (struct tagTEXTMETRICW *)(a2 + 1), a5);
  a1[4] = a5->chFirstChar;
  a1[5] = a5->chLastChar;
  a1[6] = a5->chDefaultChar;
  a1[7] = a5->chBreakChar;
  v10 = *(_QWORD *)a3;
  if ( *(_DWORD *)(*(_QWORD *)a3 + 220LL) )
  {
    v11 = v165;
    a2[21] = *(_DWORD *)(v165 + 140);
    a2[22] = *(_DWORD *)(v11 + 136);
    a2[24] = *(__int16 *)(v11 + 56);
    a2[25] = *(__int16 *)(v11 + 70);
    a2[26] = *(__int16 *)(v11 + 72);
    a2[27] = *(__int16 *)(v11 + 74);
    a2[30] = *(_DWORD *)(v11 + 144);
    a2[31] = *(_DWORD *)(v11 + 148);
    a2[32] = *(_DWORD *)(v11 + 152);
    a2[33] = *(_DWORD *)(v11 + 156);
    a2[34] = *(__int16 *)(v11 + 64);
    a2[35] = *(__int16 *)(v11 + 66);
    a2[36] = *(__int16 *)(v11 + 68);
    a2[38] = *(__int16 *)(v11 + 84);
    a2[39] = *(__int16 *)(v11 + 86);
    a2[40] = *(__int16 *)(v11 + 88);
    a2[41] = *(__int16 *)(v11 + 90);
    a2[42] = *(__int16 *)(v11 + 92);
    a2[43] = *(__int16 *)(v11 + 94);
    a2[44] = *(__int16 *)(v11 + 96);
    a2[45] = *(__int16 *)(v11 + 98);
    a2[46] = *(__int16 *)(v11 + 104);
    a2[47] = *(__int16 *)(v11 + 106);
    a2[48] = *(__int16 *)(v11 + 100);
    a2[49] = *(__int16 *)(v11 + 102);
    a2[29] = *(__int16 *)(v11 + 82);
    LODWORD(v12) = *(__int16 *)(v11 + 80);
  }
  else
  {
    v27 = *(float *)(v10 + 212);
    v28 = *(float *)(v10 + 216);
    if ( v27 == v28 || v28 == 0.0 )
    {
      v11 = v165;
      a2[21] = *(_DWORD *)(v165 + 140);
      LODWORD(v12) = *(_DWORD *)(v11 + 136);
    }
    else
    {
      v11 = v165;
      v158 = (__m128i)*(unsigned int *)(v10 + 212);
      LODWORD(v12) = 0;
      a2[21] = *(_DWORD *)(v165 + 140);
      *(float *)v158.m128i_i32 = (float)(v27 / v28) * (float)*(int *)(v11 + 136);
      v159 = _mm_cvtsi128_si32(v158);
      v160 = (unsigned __int8)(v159 >> 23);
      if ( v160 <= 0x9E )
      {
        v161 = v159 & 0x7FFFFFLL | 0x800000;
        v162 = v160 < 0x76 ? v161 >> (118 - (unsigned __int8)v160) : v161 << ((unsigned __int8)v160 - 118);
        v12 = (v162 + 0x80000000LL) >> 32;
        if ( v159 < 0 )
          LODWORD(v12) = -(int)v12;
      }
    }
    a2[22] = v12;
    LODWORD(v12) = 0;
    a2[24] = *(__int16 *)(v11 + 56);
    v29 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 70));
    *(float *)v29.m128i_i32 = *(float *)v29.m128i_i32 * v28;
    v30 = _mm_cvtsi128_si32(v29);
    v31 = (unsigned __int8)(v30 >> 23);
    if ( v31 <= 0x9E )
    {
      v32 = v30 & 0x7FFFFFLL | 0x800000;
      v33 = v31 < 0x76 ? v32 >> (118 - (unsigned __int8)v31) : v32 << ((unsigned __int8)v31 - 118);
      v12 = (v33 + 0x80000000LL) >> 32;
      if ( v30 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[25] = v12;
    LODWORD(v12) = 0;
    v34 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 72));
    *(float *)v34.m128i_i32 = *(float *)v34.m128i_i32 * v28;
    v35 = _mm_cvtsi128_si32(v34);
    v36 = (unsigned __int8)(v35 >> 23);
    if ( v36 <= 0x9E )
    {
      v37 = v35 & 0x7FFFFFLL | 0x800000;
      v38 = v36 < 0x76 ? v37 >> (118 - (unsigned __int8)v36) : v37 << ((unsigned __int8)v36 - 118);
      v12 = (v38 + 0x80000000LL) >> 32;
      if ( v35 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[26] = v12;
    LODWORD(v12) = 0;
    v39 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 74));
    *(float *)v39.m128i_i32 = *(float *)v39.m128i_i32 * v28;
    v40 = _mm_cvtsi128_si32(v39);
    v41 = (unsigned __int8)(v40 >> 23);
    if ( v41 <= 0x9E )
    {
      v42 = v40 & 0x7FFFFFLL | 0x800000;
      v43 = v41 < 0x76 ? v42 >> (118 - (unsigned __int8)v41) : v42 << ((unsigned __int8)v41 - 118);
      v12 = (v43 + 0x80000000LL) >> 32;
      if ( v40 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[27] = v12;
    LODWORD(v12) = 0;
    v44 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(v11 + 148));
    *(float *)v44.m128i_i32 = *(float *)v44.m128i_i32 * v28;
    v45 = _mm_cvtsi128_si32(v44);
    v46 = (unsigned __int8)(v45 >> 23);
    if ( v46 <= 0x9E )
    {
      v47 = v45 & 0x7FFFFFLL | 0x800000;
      v48 = v46 < 0x76 ? v47 >> (118 - (unsigned __int8)v46) : v47 << ((unsigned __int8)v46 - 118);
      v12 = (v48 + 0x80000000LL) >> 32;
      if ( v45 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[31] = v12;
    LODWORD(v12) = 0;
    v49 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(v11 + 144));
    *(float *)v49.m128i_i32 = *(float *)v49.m128i_i32 * v27;
    v50 = _mm_cvtsi128_si32(v49);
    v51 = (unsigned __int8)(v50 >> 23);
    if ( v51 <= 0x9E )
    {
      v52 = v50 & 0x7FFFFFLL | 0x800000;
      v53 = v51 < 0x76 ? v52 >> (118 - (unsigned __int8)v51) : v52 << ((unsigned __int8)v51 - 118);
      v12 = (v53 + 0x80000000LL) >> 32;
      if ( v50 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[30] = v12;
    LODWORD(v12) = 0;
    v54 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(v11 + 156));
    *(float *)v54.m128i_i32 = *(float *)v54.m128i_i32 * v28;
    v55 = _mm_cvtsi128_si32(v54);
    v56 = (unsigned __int8)(v55 >> 23);
    if ( v56 <= 0x9E )
    {
      v57 = v55 & 0x7FFFFFLL | 0x800000;
      v58 = v56 < 0x76 ? v57 >> (118 - (unsigned __int8)v56) : v57 << ((unsigned __int8)v56 - 118);
      v12 = (v58 + 0x80000000LL) >> 32;
      if ( v55 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[33] = v12;
    LODWORD(v12) = 0;
    v59 = (__m128i)COERCE_UNSIGNED_INT((float)*(int *)(v11 + 152));
    *(float *)v59.m128i_i32 = *(float *)v59.m128i_i32 * v27;
    v60 = _mm_cvtsi128_si32(v59);
    v61 = (unsigned __int8)(v60 >> 23);
    if ( v61 <= 0x9E )
    {
      v62 = v60 & 0x7FFFFFLL | 0x800000;
      v63 = v61 < 0x76 ? v62 >> (118 - (unsigned __int8)v61) : v62 << ((unsigned __int8)v61 - 118);
      v12 = (v63 + 0x80000000LL) >> 32;
      if ( v60 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[32] = v12;
    LODWORD(v12) = 0;
    v64 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 64));
    *(float *)v64.m128i_i32 = *(float *)v64.m128i_i32 * v28;
    v65 = _mm_cvtsi128_si32(v64);
    v66 = (unsigned __int8)(v65 >> 23);
    if ( v66 <= 0x9E )
    {
      v67 = v65 & 0x7FFFFFLL | 0x800000;
      v68 = v66 < 0x76 ? v67 >> (118 - (unsigned __int8)v66) : v67 << ((unsigned __int8)v66 - 118);
      v12 = (v68 + 0x80000000LL) >> 32;
      if ( v65 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[34] = v12;
    LODWORD(v12) = 0;
    v69 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 66));
    *(float *)v69.m128i_i32 = *(float *)v69.m128i_i32 * v28;
    v70 = _mm_cvtsi128_si32(v69);
    v71 = (unsigned __int8)(v70 >> 23);
    if ( v71 <= 0x9E )
    {
      v72 = v70 & 0x7FFFFFLL | 0x800000;
      v73 = v71 < 0x76 ? v72 >> (118 - (unsigned __int8)v71) : v72 << ((unsigned __int8)v71 - 118);
      v12 = (v73 + 0x80000000LL) >> 32;
      if ( v70 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[35] = v12;
    LODWORD(v12) = 0;
    v74 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 68));
    *(float *)v74.m128i_i32 = *(float *)v74.m128i_i32 * v28;
    v75 = _mm_cvtsi128_si32(v74);
    v76 = (unsigned __int8)(v75 >> 23);
    if ( v76 <= 0x9E )
    {
      v77 = v75 & 0x7FFFFFLL | 0x800000;
      v78 = v76 < 0x76 ? v77 >> (118 - (unsigned __int8)v76) : v77 << ((unsigned __int8)v76 - 118);
      v12 = (v78 + 0x80000000LL) >> 32;
      if ( v75 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[36] = v12;
    LODWORD(v12) = 0;
    v79 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 84));
    *(float *)v79.m128i_i32 = *(float *)v79.m128i_i32 * v27;
    v80 = _mm_cvtsi128_si32(v79);
    v81 = (unsigned __int8)(v80 >> 23);
    if ( v81 <= 0x9E )
    {
      v82 = v80 & 0x7FFFFFLL | 0x800000;
      v83 = v81 < 0x76 ? v82 >> (118 - (unsigned __int8)v81) : v82 << ((unsigned __int8)v81 - 118);
      v12 = (v83 + 0x80000000LL) >> 32;
      if ( v80 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[38] = v12;
    LODWORD(v12) = 0;
    v84 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 86));
    *(float *)v84.m128i_i32 = *(float *)v84.m128i_i32 * v28;
    v85 = _mm_cvtsi128_si32(v84);
    v86 = (unsigned __int8)(v85 >> 23);
    if ( v86 <= 0x9E )
    {
      v87 = v85 & 0x7FFFFFLL | 0x800000;
      v88 = v86 < 0x76 ? v87 >> (118 - (unsigned __int8)v86) : v87 << ((unsigned __int8)v86 - 118);
      v12 = (v88 + 0x80000000LL) >> 32;
      if ( v85 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[39] = v12;
    LODWORD(v12) = 0;
    v89 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 88));
    *(float *)v89.m128i_i32 = *(float *)v89.m128i_i32 * v27;
    v90 = _mm_cvtsi128_si32(v89);
    v91 = (unsigned __int8)(v90 >> 23);
    if ( v91 <= 0x9E )
    {
      v92 = v90 & 0x7FFFFFLL | 0x800000;
      v93 = v91 < 0x76 ? v92 >> (118 - (unsigned __int8)v91) : v92 << ((unsigned __int8)v91 - 118);
      v12 = (v93 + 0x80000000LL) >> 32;
      if ( v90 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[40] = v12;
    LODWORD(v12) = 0;
    v94 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 90));
    *(float *)v94.m128i_i32 = *(float *)v94.m128i_i32 * v28;
    v95 = _mm_cvtsi128_si32(v94);
    v96 = (unsigned __int8)(v95 >> 23);
    if ( v96 <= 0x9E )
    {
      v97 = v95 & 0x7FFFFFLL | 0x800000;
      v98 = v96 < 0x76 ? v97 >> (118 - (unsigned __int8)v96) : v97 << ((unsigned __int8)v96 - 118);
      v12 = (v98 + 0x80000000LL) >> 32;
      if ( v95 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[41] = v12;
    LODWORD(v12) = 0;
    v99 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 84));
    *(float *)v99.m128i_i32 = *(float *)v99.m128i_i32 * v27;
    v100 = _mm_cvtsi128_si32(v99);
    v101 = (unsigned __int8)(v100 >> 23);
    if ( v101 <= 0x9E )
    {
      v102 = v100 & 0x7FFFFFLL | 0x800000;
      v103 = v101 < 0x76 ? v102 >> (118 - (unsigned __int8)v101) : v102 << ((unsigned __int8)v101 - 118);
      v12 = (v103 + 0x80000000LL) >> 32;
      if ( v100 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[42] = v12;
    LODWORD(v12) = 0;
    v104 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 86));
    *(float *)v104.m128i_i32 = *(float *)v104.m128i_i32 * v28;
    v105 = _mm_cvtsi128_si32(v104);
    v106 = (unsigned __int8)(v105 >> 23);
    if ( v106 <= 0x9E )
    {
      v107 = v105 & 0x7FFFFFLL | 0x800000;
      v108 = v106 < 0x76 ? v107 >> (118 - (unsigned __int8)v106) : v107 << ((unsigned __int8)v106 - 118);
      v12 = (v108 + 0x80000000LL) >> 32;
      if ( v105 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[43] = v12;
    LODWORD(v12) = 0;
    v109 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 96));
    *(float *)v109.m128i_i32 = *(float *)v109.m128i_i32 * v27;
    v110 = _mm_cvtsi128_si32(v109);
    v111 = (unsigned __int8)(v110 >> 23);
    if ( v111 <= 0x9E )
    {
      v112 = v110 & 0x7FFFFFLL | 0x800000;
      v113 = v111 < 0x76 ? v112 >> (118 - (unsigned __int8)v111) : v112 << ((unsigned __int8)v111 - 118);
      v12 = (v113 + 0x80000000LL) >> 32;
      if ( v110 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[44] = v12;
    LODWORD(v12) = 0;
    v114 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 98));
    *(float *)v114.m128i_i32 = *(float *)v114.m128i_i32 * v28;
    v115 = _mm_cvtsi128_si32(v114);
    v116 = (unsigned __int8)(v115 >> 23);
    if ( v116 <= 0x9E )
    {
      v117 = v115 & 0x7FFFFFLL | 0x800000;
      v118 = v116 < 0x76 ? v117 >> (118 - (unsigned __int8)v116) : v117 << ((unsigned __int8)v116 - 118);
      v12 = (v118 + 0x80000000LL) >> 32;
      if ( v115 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[45] = v12;
    LODWORD(v12) = 0;
    v119 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 104));
    *(float *)v119.m128i_i32 = *(float *)v119.m128i_i32 * v28;
    v120 = _mm_cvtsi128_si32(v119);
    v121 = (unsigned __int8)(v120 >> 23);
    if ( v121 <= 0x9E )
    {
      v122 = v120 & 0x7FFFFFLL | 0x800000;
      v123 = v121 < 0x76 ? v122 >> (118 - (unsigned __int8)v121) : v122 << ((unsigned __int8)v121 - 118);
      v12 = (v123 + 0x80000000LL) >> 32;
      if ( v120 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[46] = v12;
    LODWORD(v12) = 0;
    v124 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 106));
    *(float *)v124.m128i_i32 = *(float *)v124.m128i_i32 * v28;
    v125 = _mm_cvtsi128_si32(v124);
    v126 = (unsigned __int8)(v125 >> 23);
    if ( v126 <= 0x9E )
    {
      v127 = v125 & 0x7FFFFFLL | 0x800000;
      v128 = v126 < 0x76 ? v127 >> (118 - (unsigned __int8)v126) : v127 << ((unsigned __int8)v126 - 118);
      v12 = (v128 + 0x80000000LL) >> 32;
      if ( v125 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[47] = v12;
    LODWORD(v12) = 0;
    v129 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 100));
    *(float *)v129.m128i_i32 = *(float *)v129.m128i_i32 * v28;
    v130 = _mm_cvtsi128_si32(v129);
    v131 = (unsigned __int8)(v130 >> 23);
    if ( v131 <= 0x9E )
    {
      v132 = v130 & 0x7FFFFFLL | 0x800000;
      v133 = v131 < 0x76 ? v132 >> (118 - (unsigned __int8)v131) : v132 << ((unsigned __int8)v131 - 118);
      v12 = (v133 + 0x80000000LL) >> 32;
      if ( v130 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[48] = v12;
    LODWORD(v12) = 0;
    v134 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 102));
    *(float *)v134.m128i_i32 = *(float *)v134.m128i_i32 * v28;
    v135 = _mm_cvtsi128_si32(v134);
    v136 = (unsigned __int8)(v135 >> 23);
    if ( v136 <= 0x9E )
    {
      v137 = v135 & 0x7FFFFFLL | 0x800000;
      v138 = v136 < 0x76 ? v137 >> (118 - (unsigned __int8)v136) : v137 << ((unsigned __int8)v136 - 118);
      v12 = (v138 + 0x80000000LL) >> 32;
      if ( v135 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[49] = v12;
    LODWORD(v12) = 0;
    v139 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 82));
    *(float *)v139.m128i_i32 = *(float *)v139.m128i_i32 * v28;
    v140 = _mm_cvtsi128_si32(v139);
    v141 = (unsigned __int8)(v140 >> 23);
    if ( v141 <= 0x9E )
    {
      v142 = v140 & 0x7FFFFFLL | 0x800000;
      v143 = v141 < 0x76 ? v142 >> (118 - (unsigned __int8)v141) : v142 << ((unsigned __int8)v141 - 118);
      v12 = (v143 + 0x80000000LL) >> 32;
      if ( v140 < 0 )
        LODWORD(v12) = -(int)v12;
    }
    a2[29] = v12;
    LODWORD(v12) = 0;
    v144 = (__m128i)COERCE_UNSIGNED_INT((float)*(__int16 *)(v11 + 80));
    *(float *)v144.m128i_i32 = *(float *)v144.m128i_i32 * v28;
    v145 = _mm_cvtsi128_si32(v144);
    v146 = (unsigned __int8)(v145 >> 23);
    if ( v146 <= 0x9E )
    {
      v147 = v145 & 0x7FFFFFLL | 0x800000;
      v148 = v146 < 0x76 ? v147 >> (118 - (unsigned __int8)v146) : v147 << ((unsigned __int8)v146 - 118);
      v12 = (v148 + 0x80000000LL) >> 32;
      if ( v145 < 0 )
        LODWORD(v12) = -(int)v12;
    }
  }
  a2[28] = v12;
  v13 = *(_DWORD *)(v11 + 32);
  a2[23] = v13;
  if ( !v13 )
  {
    v149 = *(_DWORD *)(v11 + 140);
    if ( v149 <= 0 || *(_DWORD *)(v11 + 136) )
    {
      v150 = _mm_cvtsi32_si128(v149);
      v151 = -*(_DWORD *)(v11 + 136);
      v163 = 0.0;
      vArctan(
        (unsigned int)_mm_cvtsi128_si32((__m128i)_mm_cvtepi32_ps(v150)),
        (unsigned int)_mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)v151)),
        &v163,
        v164);
      v152 = (__m128i)LODWORD(v163);
      LODWORD(v153) = 0;
      *(float *)v152.m128i_i32 = v163 * 10.0;
      v154 = _mm_cvtsi128_si32(v152);
      v155 = (unsigned __int8)(v154 >> 23);
      if ( v155 <= 0x9E )
      {
        v156 = v154 & 0x7FFFFFLL | 0x800000;
        v157 = v155 < 0x76 ? v156 >> (118 - (unsigned __int8)v155) : v156 << ((unsigned __int8)v155 - 118);
        v153 = (v157 + 0x80000000LL) >> 32;
        if ( v154 < 0 )
          LODWORD(v153) = -(int)v153;
      }
      a2[23] = v153;
      if ( (int)v153 > 1800 )
        a2[23] = v153 - 3600;
    }
  }
  cjOTMAWSize(a5, a2);
  *(_QWORD *)((char *)a2 + 65) = *(_QWORD *)(v11 + 172);
  *(_WORD *)((char *)a2 + 73) = *(_WORD *)(v11 + 180);
  a2[19] = v166;
  a2[20] = *(unsigned __int16 *)(v11 + 54);
  a2[37] = *(__int16 *)(v11 + 58);
  if ( a6 )
  {
    v14 = *a2;
    v15 = a2 + 58;
    *((_QWORD *)a2 + 25) = 232LL;
    StringCchCopyW(
      (unsigned __int16 *)a2 + 116,
      (unsigned __int64)(v14 - 232) >> 1,
      (const unsigned __int16 *)(v11 + *(int *)(v11 + 8)));
    v17 = -1LL;
    v18 = -1LL;
    do
      ++v18;
    while ( *((_WORD *)v15 + v18) );
    v19 = v18 + 1;
    v20 = (unsigned __int16 *)v15 + v19;
    *((_QWORD *)a2 + 26) = (char *)v20 - (char *)a2;
    StringCchCopyW(v20, v16 - v19, (const unsigned __int16 *)(v11 + *(int *)(v11 + 16)));
    v22 = -1LL;
    do
      ++v22;
    while ( v20[v22] );
    v23 = v22 + 1;
    v24 = &v20[v23];
    *((_QWORD *)a2 + 27) = (char *)v24 - (char *)a2;
    StringCchCopyW(v24, v21 - v23, (const unsigned __int16 *)(v11 + *(int *)(v11 + 12)));
    do
      ++v17;
    while ( v24[v17] );
    *((_QWORD *)a2 + 28) = (char *)&v24[v17 + 1] - (char *)a2;
    StringCchCopyW(&v24[v17 + 1], v25 - (v17 + 1), (const unsigned __int16 *)(v11 + *(int *)(v11 + 20)));
    return *a2;
  }
  else
  {
    *((_QWORD *)a2 + 25) = 0LL;
    result = 232LL;
    *((_QWORD *)a2 + 26) = 0LL;
    *((_QWORD *)a2 + 27) = 0LL;
    *((_QWORD *)a2 + 28) = 0LL;
  }
  return result;
}
