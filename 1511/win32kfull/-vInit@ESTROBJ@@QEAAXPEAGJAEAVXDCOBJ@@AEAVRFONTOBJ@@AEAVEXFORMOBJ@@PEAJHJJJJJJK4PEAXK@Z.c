/*
 * XREFs of ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0028490
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002A200 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGetTextExtentW @ 0x1C01027C0 (GreGetTextExtentW.c)
 *     GreGetTextExtentExW @ 0x1C01523C4 (GreGetTextExtentExW.c)
 * Callees:
 *     ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ2@Z @ 0x1C0007C44 (-vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ2@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C00234A4 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C00236A0 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0023760 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C00254D0 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0025850 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00258A0 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0026C30 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C00293F0 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C0029860 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0041DE4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     bFToL @ 0x1C0116F84 (bFToL.c)
 *     ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x1C013C540 (-vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01492DC (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C029AD2C (-bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C02B5844 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z @ 0x1C02B5BAC (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C02B6064 (-vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 */

void __fastcall ESTROBJ::vInit(
        ESTROBJ *this,
        unsigned __int16 *a2,
        signed int a3,
        struct XDCOBJ *a4,
        struct RFONTOBJ *a5,
        struct EXFORMOBJ *a6,
        __m128i *a7,
        int a8,
        int a9,
        unsigned int a10,
        int a11,
        int a12,
        unsigned int a13,
        int a14,
        char a15,
        int *a16,
        void *a17,
        unsigned int a18)
{
  struct EXFORMOBJ *v18; // r11
  int v20; // esi
  RFONTOBJ *v22; // r15
  __m128i v23; // xmm6
  float v24; // xmm7_4
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  _DWORD *v29; // rcx
  int v30; // edx
  int v31; // r10d
  char v32; // r12
  int v33; // ebp
  unsigned int v34; // r13d
  int *v35; // r14
  __int64 v36; // rdx
  int v37; // r8d
  int v38; // edx
  unsigned int v39; // ebx
  int *v40; // r11
  __int64 v41; // rcx
  struct _GLYPHPOS *v42; // r10
  unsigned __int16 *v43; // rdx
  struct _GLYPHPOS *v44; // r14
  unsigned __int16 *v45; // rsi
  __int64 v46; // rax
  unsigned int v47; // r11d
  int v48; // ecx
  int v49; // ebx
  __int64 v50; // rax
  __int64 v51; // r8
  _DWORD *v52; // rbp
  struct GPRUN *v53; // rbp
  unsigned __int16 *v54; // r13
  int v55; // ebx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r12
  struct _GLYPHDATA **v59; // rdx
  struct _GLYPHDATA *LinkMetricsPlus; // rbx
  struct XDCOBJ *v61; // rsi
  int v62; // eax
  GLYPHDEF *pgdf; // rcx
  __int64 v64; // rax
  int v65; // ecx
  __int64 v66; // rcx
  float v67; // xmm1_4
  __int64 v68; // rdx
  int v69; // ecx
  __int64 v70; // rdx
  __int64 v71; // rdx
  int v72; // eax
  __int64 v73; // rcx
  unsigned int v74; // ebp
  _DWORD *v75; // r10
  unsigned int v76; // ebx
  unsigned int v77; // edx
  __int64 v78; // rsi
  __int64 v79; // rdx
  int v80; // ecx
  __int64 v81; // rdx
  __int64 v82; // rdx
  int v83; // ecx
  __int64 v84; // rdx
  __int64 v85; // rdx
  int v86; // ecx
  __int64 v87; // rdx
  __int64 v88; // rdx
  int v89; // ecx
  __int64 v90; // rdx
  __int64 v91; // rdx
  int v92; // ecx
  __int64 v93; // rdx
  __int64 v94; // rdx
  int v95; // ecx
  __int64 v96; // rdx
  __int64 v97; // rdx
  int v98; // ecx
  __int64 v99; // rdx
  __int64 v100; // rdx
  int v101; // ecx
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rdx
  _DWORD *v106; // r10
  __int64 v107; // rbx
  __int64 v108; // rdx
  __int64 v109; // rdx
  __int64 v110; // rdx
  _DWORD *v111; // r11
  __int64 v112; // rax
  int v113; // r8d
  __int64 v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // rax
  struct GPRUN *Run; // rax
  __int64 v118; // rbx
  unsigned int v119; // ebx
  __int64 v120; // rcx
  __int64 v121; // rcx
  __int64 v122; // rdx
  int v123; // eax
  int v124; // r10d
  ERECTL *v125; // r8
  int v126; // r9d
  int v127; // r11d
  int v128; // ecx
  int v129; // edx
  __int64 v130; // r8
  __m128i *v131; // rdx
  unsigned __int64 v132; // r9
  int *v133; // rcx
  unsigned __int64 v134; // r8
  int v135; // eax
  unsigned __int64 v136; // r8
  int *v137; // rax
  unsigned __int64 v138; // rcx
  unsigned int v139; // r12d
  int *v140; // rax
  int v141; // ecx
  int v142; // r8d
  _DWORD *v143; // rax
  __int64 v144; // rdx
  int v145; // eax
  int v146; // edx
  __int64 v147; // r8
  unsigned int v148; // [rsp+50h] [rbp-88h]
  unsigned int v149; // [rsp+54h] [rbp-84h]
  int v150; // [rsp+58h] [rbp-80h] BYREF
  int v151; // [rsp+5Ch] [rbp-7Ch]
  int v152; // [rsp+60h] [rbp-78h]
  unsigned __int16 *v153; // [rsp+68h] [rbp-70h]
  struct _GLYPHPOS *v154; // [rsp+70h] [rbp-68h]
  int v155; // [rsp+E0h] [rbp+8h] BYREF
  unsigned int v156; // [rsp+F0h] [rbp+18h]
  struct XDCOBJ *v157; // [rsp+F8h] [rbp+20h]

  v157 = a4;
  v156 = a3;
  v18 = a6;
  v20 = a10;
  v22 = a5;
  v23 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a10), 0);
  v24 = **(float **)a6;
  *(_DWORD *)this = a3;
  *((_QWORD *)this + 7) = v22;
  *((_DWORD *)this + 16) = 0;
  if ( a8 )
    v25 = 1024;
  else
    v25 = 0;
  *((_DWORD *)this + 1) = v25;
  v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 112LL) + 16LL);
  if ( !v26 )
    return;
  if ( (*(_DWORD *)(v26 + 4) & 0x10) != 0 )
    *((_DWORD *)this + 1) = v25 | 0x80;
  *((_DWORD *)this + 33) = a18;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 5) = a2;
  *(_QWORD *)((char *)this + 124) = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)v22 + 68LL) & 4) != 0 )
  {
    *((_DWORD *)this + 1) |= 0x100u;
    RFONTOBJ::vFixUpGlyphIndices(v22, a2, a3);
  }
  v27 = *(_QWORD *)(*(_QWORD *)v22 + 96LL);
  if ( (*(_DWORD *)(v27 + 1848) & 0x40000) != 0 )
    *((_DWORD *)this + 16) |= 0x100u;
  v28 = (__int64)a17;
  if ( !a17 )
  {
    v28 = AllocFreeTmpBuffer((30 * a3 + 7) & 0xFFFFFFF8);
    if ( !v28 )
      return;
    *((_DWORD *)this + 16) |= 1u;
    a3 = v156;
    v18 = a6;
  }
  *((_QWORD *)this + 9) = v28;
  v29 = *(_DWORD **)v22;
  v30 = *(_DWORD *)(*(_QWORD *)v22 + 200LL);
  if ( v30 != 1 || (v29[122] & 4) != 0 )
    v31 = a9;
  else
    v31 = v29[97];
  v32 = a15;
  v33 = a14;
  v34 = a13;
  v151 = v31;
  if ( (a15 & 0x18) != 0 )
  {
    if ( (a15 & 0x18) == 8 )
    {
      v34 = a13 - v29[82];
      v33 = a14 - v29[83];
    }
  }
  else
  {
    v34 = a13 - v29[80];
    v33 = a14 - v29[81];
  }
  v35 = (int *)a7;
  v148 = v34;
  LODWORD(a5) = v33;
  if ( v20 && a7 && v30 == 1 && (v29[122] & 4) == 0 && (*(_DWORD *)(v27 + 56) & 1) != 0 )
  {
    v131 = a7;
    if ( a8 )
    {
      v135 = 2 * a3;
      v136 = 0LL;
      v137 = &a7->m128i_i32[v135];
      v138 = (unsigned __int64)((char *)v137 - (char *)a7 + 7) >> 3;
      if ( a7 > (__m128i *)v137 )
        v138 = 0LL;
      if ( v138 )
      {
        do
        {
          v131->m128i_i32[0] += v20;
          v131 = (__m128i *)((char *)v131 + 8);
          ++v136;
        }
        while ( v136 < v138 );
      }
    }
    else
    {
      v132 = 0LL;
      v133 = &a7->m128i_i32[a3];
      v134 = (unsigned __int64)(4LL * a3 + 3) >> 2;
      if ( a7 > (__m128i *)v133 )
        v134 = 0LL;
      if ( v134 )
      {
        if ( v134 >= 8 )
        {
          do
          {
            v132 += 8LL;
            *v131 = _mm_add_epi32(_mm_loadu_si128(v131), v23);
            v131[1] = _mm_add_epi32(_mm_loadu_si128(v131 + 1), v23);
            v131 += 2;
          }
          while ( v132 < v134 - (v134 & 7) );
        }
        for ( ; v132 < v134; ++v132 )
        {
          v131->m128i_i32[0] += v20;
          v131 = (__m128i *)((char *)v131 + 4);
        }
      }
    }
  }
  v36 = *(_QWORD *)v22;
  v37 = *(_DWORD *)(*(_QWORD *)v22 + 388LL);
  if ( v31 | v37
    || (*(_DWORD *)(*(_QWORD *)v18 + 32LL) & 1) == 0
    || *(float *)(*(_QWORD *)v18 + 12LL) < 0.0
    || v24 < 0.0 )
  {
    if ( a8 )
    {
      if ( v31 != *(_DWORD *)(v36 + 428) && !(unsigned int)RFONTOBJ::bCalcEscapementP(v22, v18, v31) )
        return;
      *((_DWORD *)this + 16) |= 8u;
      ESTROBJ::vCharPos_G4(this, v157, v22, v34, v33, v35);
    }
    else if ( v31 == v37 )
    {
      if ( v35 )
        ESTROBJ::vCharPos_G1(this, v157, v22, v34, v33, v35, a16);
      else
        ESTROBJ::vCharPos_G2(this, v157, v22, v34, v33, v20, a11, a12, a16);
    }
    else
    {
      if ( v31 != *(_DWORD *)(v36 + 428) && !(unsigned int)RFONTOBJ::bCalcEscapementP(v22, v18, v31) )
        return;
      v140 = a16;
      *((_DWORD *)this + 16) |= 8u;
      *((_DWORD *)this + 1) |= 0x200u;
      ESTROBJ::vCharPos_G3(this, v157, v22, v34, v33, v20, a11, a12, v35, v140);
    }
    *((_QWORD *)this + 12) = *((_QWORD *)this + 11);
    if ( (v32 & 6) != 0 )
    {
      v141 = *((_DWORD *)this + 22);
      v142 = *((_DWORD *)this + 23);
      if ( (v32 & 6) == 6 )
      {
        *((_QWORD *)this + 11) = 0LL;
        v141 /= 2;
        v142 /= 2;
      }
      else
      {
        *((_DWORD *)this + 22) = -v141;
        *((_DWORD *)this + 23) = -v142;
      }
      v119 = v156;
      if ( *(float *)&v156 != 0.0 )
      {
        v143 = (_DWORD *)(*((_QWORD *)this + 9) + 20LL);
        v144 = v156;
        do
        {
          *(v143 - 1) -= v141;
          *v143 -= v142;
          v143 += 6;
          --v144;
        }
        while ( v144 );
      }
      v34 -= v141;
      v33 -= v142;
    }
    else
    {
      v119 = v156;
    }
    v120 = *((_QWORD *)this + 9);
    *((_DWORD *)this + 20) = v34;
    *((_DWORD *)this + 21) = v33;
    if ( v119 )
    {
      v121 = v120 + 20;
      v122 = v119;
      do
      {
        v123 = *(_DWORD *)(v121 - 4);
        v121 += 24LL;
        *(_DWORD *)(v121 - 28) = (v123 + 8) >> 4;
        *(_DWORD *)(v121 - 24) = (*(_DWORD *)(v121 - 24) + 8) >> 4;
        --v122;
      }
      while ( v122 );
    }
    goto LABEL_30;
  }
  if ( v35 )
  {
    if ( !a8 )
    {
      ESTROBJ::vCharPos_H1(this, v157, v22, v34, v33, v35, LODWORD(v24));
      goto LABEL_26;
    }
    if ( (v32 & 0xA0) != 0 )
    {
      if ( v31 != *(_DWORD *)(v36 + 428) )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(v22, v18, v31) )
          return;
        v18 = a6;
      }
      *((_DWORD *)this + 16) |= 8u;
    }
    ESTROBJ::vCharPos_H4(this, v157, v22, v34, v33, v35, LODWORD(v24), *(_DWORD *)(*(_QWORD *)v18 + 12LL));
    goto LABEL_26;
  }
  if ( !*(_DWORD *)(v36 + 304) || a11 | v20 )
  {
    ESTROBJ::vCharPos_H3(this, v157, v22, v34, v33, v20, a11, a12, LODWORD(v24), 0LL);
    goto LABEL_26;
  }
  v42 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
  v43 = (unsigned __int16 *)*((_QWORD *)this + 5);
  v44 = v42;
  v45 = v43;
  v154 = v42;
  v42->ptl.x = (int)(v34 + 8) >> 4;
  v42->ptl.y = (v33 + 8) >> 4;
  v46 = *(_QWORD *)v22;
  v47 = *(_DWORD *)this;
  v153 = v43;
  v149 = v47;
  *((_DWORD *)this + 1) |= *(_DWORD *)(v46 + 268) & 0x71 | 2;
  v48 = *(_DWORD *)(*(_QWORD *)v22 + 304LL);
  *((_DWORD *)this + 2) = v48;
  v49 = 16 * v48 * v47;
  *((_DWORD *)this + 30) = v49;
  v50 = *(_QWORD *)v22;
  v152 = v49;
  if ( !*(_QWORD *)(v50 + 480) )
  {
    if ( !(unsigned int)RFONTOBJ::bAllocateCache(v22, (struct RFONTOBJ *)v43) )
      goto LABEL_26;
    v47 = v149;
    v43 = v45;
    v42 = v44;
  }
  v51 = *(_QWORD *)v22;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 96LL) + 1848LL) & 0x40000000) == 0 || *(_DWORD *)(v51 + 72) != 1 )
  {
    v52 = *(_DWORD **)(v51 + 480);
    v155 = 1;
    if ( *v52 )
    {
      v53 = (struct GPRUN *)(v52 + 4);
      v54 = &v43[v47];
      if ( v43 < v54 )
      {
        while ( 1 )
        {
          v55 = *v45;
          v56 = (unsigned int)(v55 - *(_DWORD *)v53);
          if ( (unsigned int)v56 < *((_DWORD *)v53 + 1) )
            break;
          Run = RFONTOBJ::gprunFindRun(v22, v55);
          v53 = Run;
          v118 = (unsigned int)(v55 - *(_DWORD *)Run);
          if ( (unsigned int)v118 < *((_DWORD *)Run + 1) )
          {
            _mm_lfence();
            v57 = *((_QWORD *)Run + 1);
            v58 = 8 * v118;
LABEL_41:
            v59 = (struct _GLYPHDATA **)(v58 + v57);
            LinkMetricsPlus = *v59;
            if ( !*v59 )
            {
              if ( !(unsigned int)RFONTOBJ::bInsertMetricsPlus(v22, v59, *v45) )
                goto LABEL_195;
              LinkMetricsPlus = *(struct _GLYPHDATA **)(v58 + *((_QWORD *)v53 + 1));
            }
            goto LABEL_42;
          }
          LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(v22, v157, this, v45, v153, v149, &v155, 1);
          if ( !LinkMetricsPlus )
          {
LABEL_195:
            v32 = a15;
            goto LABEL_26;
          }
LABEL_42:
          if ( !LinkMetricsPlus->gdf.pgb
            && v155
            && *(_DWORD *)(*(_QWORD *)v22 + 72LL)
            && !(unsigned int)RFONTOBJ::bInsertGlyphbits(v22, LinkMetricsPlus, v45 == v153) )
          {
            v155 = 0;
          }
          ++v45;
          v44->hg = LinkMetricsPlus->hg;
          v44->pgdf = &LinkMetricsPlus->gdf;
          ++v44;
          if ( v45 >= v54 )
          {
            v32 = a15;
            v49 = v152;
            goto LABEL_45;
          }
        }
        _mm_lfence();
        v57 = *((_QWORD *)v53 + 1);
        v58 = 8 * v56;
        goto LABEL_41;
      }
LABEL_45:
      v34 = v148;
    }
    else if ( v47 )
    {
      v139 = v149;
      do
      {
        v44->hg = *(_DWORD *)(*(_QWORD *)v22 + 456LL);
        v44->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(v22);
        ++v44;
        --v139;
      }
      while ( v139 );
      v32 = a15;
    }
    v61 = v157;
    v33 = (int)a5;
    goto LABEL_47;
  }
  v61 = v157;
  v155 = 0;
  if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(v22, (struct RFONTOBJ *)v47, v42, v43, v157, this) )
    goto LABEL_26;
LABEL_47:
  v62 = *((_DWORD *)this + 16);
  if ( (v62 & 0x1400) != 0 )
  {
    ESTROBJ::vCharPos_H3(
      this,
      v61,
      v22,
      v34,
      v33,
      0,
      0,
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v61 + 80LL) + 172LL),
      LODWORD(v24),
      &v155);
  }
  else
  {
    if ( v155 )
    {
      *((_DWORD *)this + 16) = v62 | 2;
      *((_QWORD *)this + 4) = *((_QWORD *)this + 9);
    }
    pgdf = v154->pgdf;
    if ( (*((_DWORD *)this + 1) & 0x10) != 0 )
    {
      *((_DWORD *)this + 26) = 0;
      *((_DWORD *)this + 28) = v49;
    }
    else
    {
      *((_DWORD *)this + 26) = pgdf[2].pgb;
      *((_DWORD *)this + 28) = v49 + HIDWORD(pgdf[2].ppo) - 16 * *((_DWORD *)this + 2);
    }
    v64 = *(_QWORD *)v22;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v61 + 80LL) + 352LL) & 0x40) != 0 )
    {
      *((_DWORD *)this + 27) = -*(_DWORD *)(v64 + 312);
      v65 = -*(_DWORD *)(*(_QWORD *)v22 + 308LL);
    }
    else
    {
      *((_DWORD *)this + 27) = *(_DWORD *)(v64 + 308);
      v65 = *(_DWORD *)(*(_QWORD *)v22 + 312LL);
    }
    *((_DWORD *)this + 16) |= 4u;
    *((_DWORD *)this + 29) = v65;
    *((_DWORD *)this + 22) = v49;
    *((_DWORD *)this + 23) = 0;
  }
LABEL_26:
  v38 = *((_DWORD *)this + 22);
  *((_QWORD *)this + 12) = *((_QWORD *)this + 11);
  if ( (v32 & 6) != 0 )
  {
    if ( (v32 & 6) == 6 )
    {
      *((_DWORD *)this + 22) = 0;
      v38 /= 2;
    }
    else
    {
      *((_DWORD *)this + 22) = -v38;
    }
    v39 = v156;
    v112 = *((_QWORD *)this + 9);
    v113 = (v38 + 8) >> 4;
    v114 = v112 + 24;
    *(_DWORD *)(v112 + 16) -= v113;
    v34 = 16 * *(_DWORD *)(v112 + 16);
    if ( !*((_DWORD *)this + 2) && v39 != 1 )
    {
      v115 = v39 - 1;
      do
      {
        v116 = v114;
        v114 += 24LL;
        *(_DWORD *)(v116 + 16) -= v113;
        --v115;
      }
      while ( v115 );
    }
  }
  else
  {
    v34 = v148;
    v39 = v156;
  }
  v40 = a16;
  if ( a16 )
  {
    v66 = *((unsigned int *)this + 2);
    v67 = *(float *)(*(_QWORD *)v22 + 404LL);
    if ( !(_DWORD)v66 || (*((_DWORD *)this + 16) & 0x1400) != 0 )
    {
      v74 = 0;
      v75 = (_DWORD *)(*((_QWORD *)this + 9) + 24LL);
      v76 = v39 - 1;
      if ( v76 >= 9 )
      {
        v77 = (v76 - 9) / 9 + 1;
        v78 = v77;
        v74 = 9 * v77;
        do
        {
          LODWORD(v79) = 0;
          *(float *)&v156 = (float)(int)(16 * v75[4] - v34) * v67;
          v80 = (unsigned __int8)((int)v156 >> 23) - 118;
          if ( v80 <= 40 )
          {
            v81 = v156 & 0x7FFFFF | 0x800000LL;
            v82 = v80 < 0 ? v81 >> (118 - (unsigned __int8)((int)v156 >> 23)) : v81 << v80;
            v79 = (v82 + 0x80000000LL) >> 32;
            if ( (v156 & 0x80000000) != 0 )
              LODWORD(v79) = -(int)v79;
          }
          *v40 = v79;
          LODWORD(v79) = 0;
          *(float *)&v156 = (float)(int)(16 * v75[10] - v34) * v67;
          v83 = (unsigned __int8)((int)v156 >> 23) - 118;
          if ( v83 <= 40 )
          {
            v84 = v156 & 0x7FFFFF | 0x800000LL;
            v85 = v83 < 0 ? v84 >> (118 - (unsigned __int8)((int)v156 >> 23)) : v84 << v83;
            v79 = (v85 + 0x80000000LL) >> 32;
            if ( (v156 & 0x80000000) != 0 )
              LODWORD(v79) = -(int)v79;
          }
          v40[1] = v79;
          LODWORD(v79) = 0;
          *(float *)&v156 = (float)(int)(16 * v75[16] - v34) * v67;
          v86 = (unsigned __int8)((int)v156 >> 23) - 118;
          if ( v86 <= 40 )
          {
            v87 = v156 & 0x7FFFFF | 0x800000LL;
            v88 = v86 < 0 ? v87 >> (118 - (unsigned __int8)((int)v156 >> 23)) : v87 << v86;
            v79 = (v88 + 0x80000000LL) >> 32;
            if ( (v156 & 0x80000000) != 0 )
              LODWORD(v79) = -(int)v79;
          }
          v40[2] = v79;
          LODWORD(v79) = 0;
          *(float *)&v156 = (float)(int)(16 * v75[22] - v34) * v67;
          v89 = (unsigned __int8)((int)v156 >> 23) - 118;
          if ( v89 <= 40 )
          {
            v90 = v156 & 0x7FFFFF | 0x800000LL;
            v91 = v89 < 0 ? v90 >> (118 - (unsigned __int8)((int)v156 >> 23)) : v90 << v89;
            v79 = (v91 + 0x80000000LL) >> 32;
            if ( (v156 & 0x80000000) != 0 )
              LODWORD(v79) = -(int)v79;
          }
          v40[3] = v79;
          LODWORD(v79) = 0;
          *(float *)&v156 = (float)(int)(16 * v75[28] - v34) * v67;
          v92 = (unsigned __int8)((int)v156 >> 23) - 118;
          if ( v92 <= 40 )
          {
            v93 = v156 & 0x7FFFFF | 0x800000LL;
            v94 = v92 < 0 ? v93 >> (118 - (unsigned __int8)((int)v156 >> 23)) : v93 << v92;
            v79 = (v94 + 0x80000000LL) >> 32;
            if ( (v156 & 0x80000000) != 0 )
              LODWORD(v79) = -(int)v79;
          }
          v40[4] = v79;
          LODWORD(v79) = 0;
          *(float *)&v156 = (float)(int)(16 * v75[34] - v34) * v67;
          v95 = (unsigned __int8)((int)v156 >> 23) - 118;
          if ( v95 <= 40 )
          {
            v96 = v156 & 0x7FFFFF | 0x800000LL;
            v97 = v95 < 0 ? v96 >> (118 - (unsigned __int8)((int)v156 >> 23)) : v96 << v95;
            v79 = (v97 + 0x80000000LL) >> 32;
            if ( (v156 & 0x80000000) != 0 )
              LODWORD(v79) = -(int)v79;
          }
          v40[5] = v79;
          LODWORD(v79) = 0;
          *(float *)&v156 = (float)(int)(16 * v75[40] - v34) * v67;
          v98 = (unsigned __int8)((int)v156 >> 23) - 118;
          if ( v98 <= 40 )
          {
            v99 = v156 & 0x7FFFFF | 0x800000LL;
            v100 = v98 < 0 ? v99 >> (118 - (unsigned __int8)((int)v156 >> 23)) : v99 << v98;
            v79 = (v100 + 0x80000000LL) >> 32;
            if ( (v156 & 0x80000000) != 0 )
              LODWORD(v79) = -(int)v79;
          }
          v40[6] = v79;
          LODWORD(v79) = 0;
          *(float *)&v156 = (float)(int)(16 * v75[46] - v34) * v67;
          v101 = (unsigned __int8)((int)v156 >> 23) - 118;
          if ( v101 <= 40 )
          {
            v102 = v156 & 0x7FFFFF | 0x800000LL;
            v103 = v101 < 0 ? v102 >> (118 - (unsigned __int8)((int)v156 >> 23)) : v102 << v101;
            v79 = (v103 + 0x80000000LL) >> 32;
            if ( (v156 & 0x80000000) != 0 )
              LODWORD(v79) = -(int)v79;
          }
          v40[7] = v79;
          LODWORD(v79) = 0;
          *(float *)&v156 = (float)(int)(16 * v75[52] - v34) * v67;
          v66 = (unsigned int)(unsigned __int8)((int)v156 >> 23) - 118;
          if ( (int)v66 <= 40 )
          {
            v104 = v156 & 0x7FFFFF | 0x800000LL;
            if ( (int)v66 < 0 )
            {
              v66 = 118 - (unsigned int)(unsigned __int8)((int)v156 >> 23);
              v105 = v104 >> (118 - (unsigned __int8)((int)v156 >> 23));
            }
            else
            {
              v105 = v104 << ((unsigned __int8)((int)v156 >> 23) - 118);
            }
            v79 = (v105 + 0x80000000LL) >> 32;
            if ( (v156 & 0x80000000) != 0 )
              LODWORD(v79) = -(int)v79;
          }
          v40[8] = v79;
          v75 += 54;
          v40 += 9;
          --v78;
        }
        while ( v78 );
      }
      if ( v74 < v76 )
      {
        v106 = v75 + 4;
        v107 = v76 - v74;
        do
        {
          LODWORD(v108) = 0;
          *(float *)&v156 = (float)(int)(16 * *v106 - v34) * v67;
          v66 = (unsigned int)(unsigned __int8)((int)v156 >> 23) - 118;
          if ( (int)v66 <= 40 )
          {
            v109 = v156 & 0x7FFFFF | 0x800000LL;
            if ( (int)v66 < 0 )
            {
              v66 = 118 - (unsigned int)(unsigned __int8)((int)v156 >> 23);
              v110 = v109 >> (118 - (unsigned __int8)((int)v156 >> 23));
            }
            else
            {
              v110 = v109 << ((unsigned __int8)((int)v156 >> 23) - 118);
            }
            v108 = (v110 + 0x80000000LL) >> 32;
            if ( (v156 & 0x80000000) != 0 )
              LODWORD(v108) = -(int)v108;
          }
          *v40 = v108;
          v106 += 6;
          ++v40;
          --v107;
        }
        while ( v107 );
      }
      v150 = 0;
      bFToL(v66, &v150, 0LL);
      *v111 = v150;
    }
    else
    {
      LODWORD(v68) = 0;
      *(float *)&v156 = (float)(16 * v66) * v67;
      v69 = (unsigned __int8)((int)v156 >> 23) - 118;
      if ( v69 <= 40 )
      {
        v70 = v156 & 0x7FFFFF | 0x800000LL;
        v71 = v69 < 0 ? v70 >> (118 - (unsigned __int8)((int)v156 >> 23)) : v70 << v69;
        v68 = (v71 + 0x80000000LL) >> 32;
        if ( (v156 & 0x80000000) != 0 )
          LODWORD(v68) = -(int)v68;
      }
      v72 = 0;
      if ( v39 )
      {
        v73 = v39;
        do
        {
          v72 += v68;
          *v40++ = v72;
          --v73;
        }
        while ( v73 );
      }
    }
  }
  v41 = *((_QWORD *)this + 9);
  v33 = (int)a5;
  *((_DWORD *)this + 20) = 16 * *(_DWORD *)(v41 + 16);
  *((_DWORD *)this + 21) = 16 * *(_DWORD *)(v41 + 20);
LABEL_30:
  if ( (v32 & 0xA0) != 0 )
  {
    *((_DWORD *)this + 16) |= v32 & 0xA0;
    if ( !(v151 | a8 | *(_DWORD *)(*(_QWORD *)v22 + 388LL)) && (*(_DWORD *)(*(_QWORD *)a6 + 32LL) & 1) != 0 )
    {
      v124 = (int)(v34 + 8) >> 4;
      v125 = (ESTROBJ *)((char *)this + 16 * *((unsigned int *)this + 34) + 140);
      v126 = (*((_DWORD *)this + 24) + 8) >> 4;
      v127 = (v33 + 8) >> 4;
      if ( (v32 & 0x20) != 0 )
      {
        v128 = v124 + *(_DWORD *)(*(_QWORD *)v22 + 272LL);
        *(_DWORD *)v125 = v128;
        *((_DWORD *)v125 + 2) = v128 + v126;
        v129 = v127 + *(_DWORD *)(*(_QWORD *)v22 + 276LL);
        *((_DWORD *)v125 + 1) = v129;
        *((_DWORD *)v125 + 3) = v129 + *(_DWORD *)(*(_QWORD *)v22 + 292LL);
        ERECTL::vOrder(v125);
        ++*((_DWORD *)this + 34);
        v125 = (ERECTL *)(v130 + 16);
      }
      if ( v32 < 0 )
      {
        v145 = v124 + *(_DWORD *)(*(_QWORD *)v22 + 280LL);
        *(_DWORD *)v125 = v145;
        *((_DWORD *)v125 + 2) = v126 + v145;
        v146 = v127 + *(_DWORD *)(*(_QWORD *)v22 + 284LL);
        *((_DWORD *)v125 + 1) = v146;
        *((_DWORD *)v125 + 3) = v146 + *(_DWORD *)(*(_QWORD *)v22 + 300LL);
        ERECTL::vOrder(v125);
        ++*((_DWORD *)this + 34);
        v125 = (ERECTL *)(v147 + 16);
      }
      *(_QWORD *)v125 = 0LL;
      *((_QWORD *)v125 + 1) = 0LL;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)v22 + 12LL) & 1) != 0 )
    *((_DWORD *)this + 16) |= 0x200u;
  else
    *((_DWORD *)this + 16) &= ~0x200u;
}
