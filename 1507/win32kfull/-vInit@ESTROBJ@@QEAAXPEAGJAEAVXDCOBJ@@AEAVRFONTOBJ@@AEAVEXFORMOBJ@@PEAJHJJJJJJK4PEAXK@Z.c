/*
 * XREFs of ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00225B0
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C001E8B0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGetTextExtentW @ 0x1C00FA610 (GreGetTextExtentW.c)
 *     GreGetTextExtentExW @ 0x1C015CBE0 (GreGetTextExtentExW.c)
 * Callees:
 *     ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ2@Z @ 0x1C0004410 (-vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ2@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C00231E0 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C0023650 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C002AD38 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C002AF58 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C002CC74 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C002CFD8 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C002D03C (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C002D088 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C002E94C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009DA98 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 *     ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x1C01119A0 (-vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z.c)
 *     ?bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C029B3BC (-bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C02B6430 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z @ 0x1C02B6798 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ2@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C02B6C50 (-vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 */

void __fastcall ESTROBJ::vInit(
        ESTROBJ *this,
        __m128i *a2,
        unsigned int a3,
        struct XDCOBJ *a4,
        struct RFONTOBJ **a5,
        float **a6,
        __m128i *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        unsigned int a13,
        int a14,
        char a15,
        int *a16,
        void *a17,
        unsigned int a18)
{
  int v20; // r11d
  __int64 v23; // r14
  __m128i v24; // xmm6
  float v25; // xmm7_4
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  struct RFONTOBJ *v30; // rcx
  int v31; // edx
  int v32; // r9d
  unsigned int v33; // r12d
  struct RFONTOBJ *v34; // rdx
  int v35; // ebx
  struct _GLYPHPOS *v36; // rbp
  unsigned __int16 *v37; // r15
  struct _GLYPHPOS *v38; // r14
  unsigned __int16 *v39; // rsi
  struct RFONTOBJ *v40; // rax
  __int64 v41; // r12
  int v42; // ecx
  int v43; // ebx
  struct RFONTOBJ *v44; // rax
  struct RFONTOBJ *v45; // r8
  _DWORD *v46; // rbp
  struct GPRUN *v47; // rbp
  unsigned __int16 *v48; // r12
  int v49; // ebx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r15
  struct _GLYPHDATA **v53; // rdx
  struct _GLYPHDATA *LinkMetricsPlus; // rbx
  struct XDCOBJ *v55; // rsi
  int v56; // eax
  GLYPHDEF *pgdf; // rcx
  unsigned int v58; // ebp
  struct RFONTOBJ *v59; // rax
  int v60; // ecx
  int v61; // r15d
  int v62; // edx
  int *v63; // r11
  __int64 v64; // rcx
  __int64 v65; // rcx
  float v66; // xmm1_4
  __int64 v67; // rdx
  float v68; // r8d
  int v69; // ecx
  __int64 v70; // rdx
  __int64 v71; // rdx
  int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // rcx
  unsigned int v75; // edx
  __m128i v76; // xmm1
  __m128i v77; // xmm1
  unsigned int v78; // esi
  _DWORD *v79; // r10
  unsigned int v80; // eax
  __int64 v81; // rbx
  __int64 v82; // rdx
  float v83; // r8d
  int v84; // ecx
  __int64 v85; // rdx
  __int64 v86; // rdx
  float v87; // r8d
  int v88; // ecx
  __int64 v89; // rdx
  __int64 v90; // rdx
  float v91; // r8d
  int v92; // ecx
  __int64 v93; // rdx
  __int64 v94; // rdx
  float v95; // r8d
  __int64 v96; // rdx
  __int64 v97; // rdx
  _DWORD *v98; // r10
  __int64 v99; // rbx
  __int64 v100; // rdx
  float v101; // r8d
  __int64 v102; // rdx
  __int64 v103; // rdx
  _DWORD *v104; // r11
  __int64 v105; // rax
  int v106; // r8d
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rax
  struct GPRUN *Run; // rax
  __int64 v111; // rbx
  __int64 v112; // rcx
  __int64 v113; // rcx
  __int64 v114; // rdx
  int v115; // eax
  int v116; // r10d
  ERECTL *v117; // r8
  int v118; // r9d
  int v119; // r11d
  int v120; // ecx
  int v121; // edx
  __int64 v122; // r8
  unsigned __int16 *v123; // rcx
  unsigned __int64 v124; // r9
  unsigned __int64 v125; // r8
  __m128i *v126; // rdx
  unsigned __int64 v127; // r9
  unsigned __int64 v128; // r8
  unsigned __int64 v129; // r8
  unsigned __int64 v130; // rcx
  int v131; // ecx
  int v132; // r8d
  _DWORD *v133; // rax
  __int64 v134; // rdx
  int v135; // eax
  int v136; // edx
  __int64 v137; // r8
  int v138; // [rsp+50h] [rbp-88h] BYREF
  int v139; // [rsp+54h] [rbp-84h]
  int v140; // [rsp+58h] [rbp-80h] BYREF
  unsigned int v141; // [rsp+5Ch] [rbp-7Ch]
  int v142; // [rsp+60h] [rbp-78h]
  struct _GLYPHPOS *v143; // [rsp+68h] [rbp-70h]
  unsigned __int16 *v144; // [rsp+70h] [rbp-68h]
  unsigned int v145; // [rsp+E0h] [rbp+8h]
  int v148; // [rsp+100h] [rbp+28h]

  v20 = a8;
  v23 = a3;
  v24 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a10), 0);
  v25 = **a6;
  *(_DWORD *)this = a3;
  *((_QWORD *)this + 7) = a5;
  *((_DWORD *)this + 16) = 0;
  if ( a8 )
    v26 = 1024;
  else
    v26 = 0;
  *((_DWORD *)this + 1) = v26;
  v27 = *(_QWORD *)(*((_QWORD *)*a5 + 14) + 16LL);
  if ( !v27 )
    return;
  if ( (*(_DWORD *)(v27 + 4) & 0x10) != 0 )
    *((_DWORD *)this + 1) = v26 | 0x80;
  *((_DWORD *)this + 33) = a18;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 5) = a2;
  *(_QWORD *)((char *)this + 124) = 0LL;
  if ( (*((_DWORD *)*a5 + 17) & 4) != 0 )
  {
    *((_DWORD *)this + 1) |= 0x100u;
    v74 = *((_QWORD *)*a5 + 14);
    v75 = *(unsigned __int8 *)(*(_QWORD *)(v74 + 32) + 108LL);
    v76 = _mm_cvtsi32_si128(v75);
    v77 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v76, v76), 0);
    if ( (*(_DWORD *)(*(_QWORD *)(v74 + 16) + 4LL) & 2) != 0 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v74 + 32) + 108LL) )
      {
        v123 = (unsigned __int16 *)a2 + a3;
        v124 = 0LL;
        v125 = (2 * (unsigned __int64)a3 + 1) >> 1;
        if ( a2 > (__m128i *)v123 )
          v125 = 0LL;
        if ( v125 )
        {
          if ( v125 >= 0x10 )
          {
            do
            {
              v124 += 16LL;
              *a2 = _mm_sub_epi16(_mm_loadu_si128(a2), v77);
              a2[1] = _mm_sub_epi16(_mm_loadu_si128(a2 + 1), v77);
              a2 += 2;
            }
            while ( v124 < v125 - (v125 & 0xF) );
          }
          for ( ; v124 < v125; ++v124 )
          {
            a2->m128i_i16[0] -= v75;
            a2 = (__m128i *)((char *)a2 + 2);
          }
        }
      }
    }
  }
  v28 = *((_QWORD *)*a5 + 12);
  if ( (*(_DWORD *)(v28 + 1848) & 0x40000) != 0 )
    *((_DWORD *)this + 16) |= 0x100u;
  v29 = (__int64)a17;
  if ( !a17 )
  {
    v29 = AllocFreeTmpBuffer((30 * (_DWORD)v23 + 7) & 0xFFFFFFF8);
    if ( !v29 )
      return;
    *((_DWORD *)this + 16) |= 1u;
    v20 = a8;
  }
  *((_QWORD *)this + 9) = v29;
  v30 = *a5;
  v31 = *((_DWORD *)*a5 + 50);
  if ( v31 != 1 || (*((_DWORD *)v30 + 122) & 4) != 0 )
    v139 = a9;
  else
    v139 = *((_DWORD *)v30 + 97);
  v32 = a14;
  v33 = a13;
  if ( (a15 & 0x18) != 0 )
  {
    if ( (a15 & 0x18) == 8 )
    {
      v33 = a13 - *((_DWORD *)v30 + 82);
      v32 = a14 - *((_DWORD *)v30 + 83);
    }
  }
  else
  {
    v33 = a13 - *((_DWORD *)v30 + 80);
    v32 = a14 - *((_DWORD *)v30 + 81);
  }
  v145 = v33;
  v148 = v32;
  if ( a10 && a7 && v31 == 1 && (*((_DWORD *)v30 + 122) & 4) == 0 && (*(_DWORD *)(v28 + 56) & 1) != 0 )
  {
    v126 = a7;
    if ( v20 )
    {
      v129 = 0LL;
      v130 = (unsigned __int64)(8LL * (_DWORD)v23 + 7) >> 3;
      if ( a7 > (__m128i *)((char *)a7 + 8 * (int)v23) )
        v130 = 0LL;
      if ( v130 )
      {
        do
        {
          v126->m128i_i32[0] += a10;
          v126 = (__m128i *)((char *)v126 + 8);
          ++v129;
        }
        while ( v129 < v130 );
      }
    }
    else
    {
      v127 = 0LL;
      v128 = (unsigned __int64)(4LL * (int)v23 + 3) >> 2;
      if ( a7 > (__m128i *)((char *)a7 + 4 * (int)v23) )
        v128 = 0LL;
      if ( v128 )
      {
        if ( v128 >= 8 )
        {
          do
          {
            v127 += 8LL;
            *v126 = _mm_add_epi32(_mm_loadu_si128(v126), v24);
            v126[1] = _mm_add_epi32(_mm_loadu_si128(v126 + 1), v24);
            v126 += 2;
          }
          while ( v127 < v128 - (v128 & 7) );
        }
        for ( ; v127 < v128; ++v127 )
        {
          v126->m128i_i32[0] += a10;
          v126 = (__m128i *)((char *)v126 + 4);
        }
      }
      v32 = v148;
    }
  }
  v34 = *a5;
  v35 = v139;
  if ( v139 | *((_DWORD *)*a5 + 97) || ((_DWORD)(*a6)[8] & 1) == 0 || (*a6)[3] < 0.0 || v25 < 0.0 )
  {
    if ( v20 )
    {
      if ( v139 != *((_DWORD *)v34 + 107) )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapementP((RFONTOBJ *)a5, (struct EXFORMOBJ *)a6, v139) )
          return;
        v32 = v148;
      }
      *((_DWORD *)this + 16) |= 8u;
      ESTROBJ::vCharPos_G4(this, a4, (struct RFONTOBJ *)a5, v33, v32, a7->m128i_i32);
    }
    else if ( v139 == *((_DWORD *)*a5 + 97) )
    {
      if ( a7 )
        ESTROBJ::vCharPos_G1(this, a4, (struct RFONTOBJ *)a5, v33, v32, a7->m128i_i32, a16);
      else
        ESTROBJ::vCharPos_G2(this, a4, (struct RFONTOBJ *)a5, v33, v32, a10, a11, a12, a16);
    }
    else
    {
      if ( v139 != *((_DWORD *)v34 + 107) )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapementP((RFONTOBJ *)a5, (struct EXFORMOBJ *)a6, v139) )
          return;
        v32 = v148;
      }
      *((_DWORD *)this + 16) |= 8u;
      *((_DWORD *)this + 1) |= 0x200u;
      ESTROBJ::vCharPos_G3(this, a4, (struct RFONTOBJ *)a5, v33, v32, a10, a11, a12, a7->m128i_i32, a16);
    }
    *((_QWORD *)this + 12) = *((_QWORD *)this + 11);
    if ( (a15 & 6) != 0 )
    {
      v131 = *((_DWORD *)this + 22);
      v132 = *((_DWORD *)this + 23);
      if ( (a15 & 6) == 6 )
      {
        v131 /= 2;
        v132 /= 2;
        *((_QWORD *)this + 11) = 0LL;
      }
      else
      {
        *((_DWORD *)this + 22) = -v131;
        *((_DWORD *)this + 23) = -v132;
      }
      if ( (_DWORD)v23 )
      {
        v133 = (_DWORD *)(*((_QWORD *)this + 9) + 20LL);
        v134 = v23;
        do
        {
          *(v133 - 1) -= v131;
          *v133 -= v132;
          v133 += 6;
          --v134;
        }
        while ( v134 );
      }
      v33 -= v131;
      v61 = v148 - v132;
    }
    else
    {
      v61 = v148;
    }
    v112 = *((_QWORD *)this + 9);
    *((_DWORD *)this + 20) = v33;
    *((_DWORD *)this + 21) = v61;
    if ( (_DWORD)v23 )
    {
      v113 = v112 + 20;
      v114 = v23;
      do
      {
        v115 = *(_DWORD *)(v113 - 4);
        v113 += 24LL;
        *(_DWORD *)(v113 - 28) = (v115 + 8) >> 4;
        *(_DWORD *)(v113 - 24) = (*(_DWORD *)(v113 - 24) + 8) >> 4;
        --v114;
      }
      while ( v114 );
    }
    goto LABEL_52;
  }
  if ( a7 )
  {
    if ( v20 )
    {
      if ( (a15 & 0xA0) != 0 )
      {
        if ( v139 != *((_DWORD *)v34 + 107) )
        {
          if ( !(unsigned int)RFONTOBJ::bCalcEscapementP((RFONTOBJ *)a5, (struct EXFORMOBJ *)a6, v139) )
            return;
          v32 = v148;
        }
        *((_DWORD *)this + 16) |= 8u;
      }
      ESTROBJ::vCharPos_H4(this, a4, a5, v33, v32, a7, LODWORD(v25), *((_DWORD *)*a6 + 3));
    }
    else
    {
      ESTROBJ::vCharPos_H1(this, a4, a5, v33, v32, a7, LODWORD(v25));
    }
    goto LABEL_47;
  }
  if ( !*((_DWORD *)v34 + 76) || a11 | a10 )
  {
    ESTROBJ::vCharPos_H3(this, a4, a5, v33, v32, a10, a11, a12, LODWORD(v25), 0LL);
LABEL_47:
    v58 = 0;
LABEL_48:
    v61 = v148;
    goto LABEL_49;
  }
  v36 = (struct _GLYPHPOS *)*((_QWORD *)this + 9);
  v37 = (unsigned __int16 *)*((_QWORD *)this + 5);
  v38 = v36;
  v39 = v37;
  v143 = v36;
  v36->ptl.x = (int)(v33 + 8) >> 4;
  v36->ptl.y = (v32 + 8) >> 4;
  v40 = *a5;
  v41 = *(unsigned int *)this;
  v144 = v37;
  v141 = v41;
  *((_DWORD *)this + 1) |= *((_DWORD *)v40 + 67) & 0x71 | 2;
  v42 = *((_DWORD *)*a5 + 76);
  *((_DWORD *)this + 2) = v42;
  v43 = 16 * v42 * v41;
  *((_DWORD *)this + 30) = v43;
  v44 = *a5;
  v142 = v43;
  if ( !*((_QWORD *)v44 + 60) && !(unsigned int)RFONTOBJ::bAllocateCache((RFONTOBJ *)a5, v34) )
  {
LABEL_176:
    v33 = v145;
    LODWORD(v23) = a3;
    goto LABEL_47;
  }
  v45 = *a5;
  if ( (*(_DWORD *)(*((_QWORD *)*a5 + 12) + 1848LL) & 0x40000000) == 0 || *((_DWORD *)v45 + 18) != 1 )
  {
    v46 = (_DWORD *)*((_QWORD *)v45 + 60);
    v138 = 1;
    if ( *v46 )
    {
      v47 = (struct GPRUN *)(v46 + 4);
      v48 = &v37[v41];
      if ( v37 < v48 )
      {
        while ( 1 )
        {
          v49 = *v39;
          v50 = (unsigned int)(v49 - *(_DWORD *)v47);
          if ( (unsigned int)v50 >= *((_DWORD *)v47 + 1) )
          {
            Run = RFONTOBJ::gprunFindRun((RFONTOBJ *)a5, v49);
            v47 = Run;
            v111 = (unsigned int)(v49 - *(_DWORD *)Run);
            if ( (unsigned int)v111 >= *((_DWORD *)Run + 1) )
            {
              LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus((RFONTOBJ *)a5, a4, this, v39, v37, v141, &v138, 1);
              if ( !LinkMetricsPlus )
                goto LABEL_176;
              goto LABEL_33;
            }
            _mm_lfence();
            v51 = *((_QWORD *)Run + 1);
            v52 = 8 * v111;
          }
          else
          {
            _mm_lfence();
            v51 = *((_QWORD *)v47 + 1);
            v52 = 8 * v50;
          }
          v53 = (struct _GLYPHDATA **)(v52 + v51);
          LinkMetricsPlus = *v53;
          if ( !*v53 )
          {
            if ( !(unsigned int)RFONTOBJ::bInsertMetricsPlus((RFONTOBJ *)a5, v53, *v39) )
              goto LABEL_176;
            LinkMetricsPlus = *(struct _GLYPHDATA **)(v52 + *((_QWORD *)v47 + 1));
          }
          v37 = v144;
LABEL_33:
          if ( !LinkMetricsPlus->gdf.pgb
            && v138
            && *((_DWORD *)*a5 + 18)
            && !(unsigned int)RFONTOBJ::bInsertGlyphbits((RFONTOBJ *)a5, LinkMetricsPlus, v39 == v37) )
          {
            v138 = 0;
          }
          ++v39;
          v38->hg = LinkMetricsPlus->hg;
          v38->pgdf = &LinkMetricsPlus->gdf;
          ++v38;
          if ( v39 >= v48 )
          {
            v43 = v142;
            v36 = v143;
            goto LABEL_36;
          }
        }
      }
    }
    else if ( (_DWORD)v41 )
    {
      do
      {
        v38->hg = *((_DWORD *)*a5 + 114);
        v38->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault((RFONTOBJ *)a5);
        ++v38;
        LODWORD(v41) = v41 - 1;
      }
      while ( (_DWORD)v41 );
      v36 = v143;
      goto LABEL_36;
    }
    v36 = v38;
LABEL_36:
    v55 = a4;
    goto LABEL_37;
  }
  v55 = a4;
  v138 = 0;
  if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics((RFONTOBJ *)a5, v41, v36, v37, a4, this) )
    goto LABEL_176;
LABEL_37:
  v56 = *((_DWORD *)this + 16);
  if ( (v56 & 0x1400) == 0 )
  {
    if ( v138 )
    {
      *((_DWORD *)this + 16) = v56 | 2;
      *((_QWORD *)this + 4) = *((_QWORD *)this + 9);
    }
    pgdf = v36->pgdf;
    if ( (*((_DWORD *)this + 1) & 0x10) != 0 )
    {
      v58 = 0;
      *((_DWORD *)this + 28) = v43;
      *((_DWORD *)this + 26) = 0;
    }
    else
    {
      *((_DWORD *)this + 26) = pgdf[2].pgb;
      *((_DWORD *)this + 28) = v43 + HIDWORD(pgdf[2].ppo) - 16 * *((_DWORD *)this + 2);
      v58 = 0;
    }
    v59 = *a5;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v55 + 80LL) + 352LL) & 0x40) != 0 )
    {
      *((_DWORD *)this + 27) = -*((_DWORD *)v59 + 78);
      v60 = -*((_DWORD *)*a5 + 77);
    }
    else
    {
      *((_DWORD *)this + 27) = *((_DWORD *)v59 + 77);
      v60 = *((_DWORD *)*a5 + 78);
    }
    *((_DWORD *)this + 16) |= 4u;
    LODWORD(v23) = a3;
    v33 = v145;
    *((_DWORD *)this + 29) = v60;
    *((_DWORD *)this + 22) = v43;
    *((_DWORD *)this + 23) = 0;
    goto LABEL_48;
  }
  v58 = 0;
  v33 = v145;
  v61 = v148;
  ESTROBJ::vCharPos_H3(
    this,
    v55,
    a5,
    v145,
    v148,
    0,
    0,
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v55 + 80LL) + 172LL),
    LODWORD(v25),
    &v138);
  LODWORD(v23) = a3;
LABEL_49:
  v62 = *((_DWORD *)this + 22);
  *((_QWORD *)this + 12) = *((_QWORD *)this + 11);
  if ( (a15 & 6) != 0 )
  {
    if ( (a15 & 6) == 6 )
    {
      *((_DWORD *)this + 22) = 0;
      v62 /= 2;
    }
    else
    {
      *((_DWORD *)this + 22) = -v62;
    }
    v105 = *((_QWORD *)this + 9);
    v106 = (v62 + 8) >> 4;
    v107 = v105 + 24;
    *(_DWORD *)(v105 + 16) -= v106;
    v33 = 16 * *(_DWORD *)(v105 + 16);
    if ( !*((_DWORD *)this + 2) && (_DWORD)v23 != 1 )
    {
      v108 = (unsigned int)(v23 - 1);
      do
      {
        v109 = v107;
        v107 += 24LL;
        *(_DWORD *)(v109 + 16) -= v106;
        --v108;
      }
      while ( v108 );
    }
  }
  v63 = a16;
  if ( a16 )
  {
    v65 = *((unsigned int *)this + 2);
    v66 = *((float *)*a5 + 101);
    if ( !(_DWORD)v65 || (*((_DWORD *)this + 16) & 0x1400) != 0 )
    {
      v78 = v23 - 1;
      v79 = (_DWORD *)(*((_QWORD *)this + 9) + 24LL);
      if ( (unsigned int)(v23 - 1) >= 4 )
      {
        v80 = ((unsigned int)(v23 - 5) >> 2) + 1;
        v81 = v80;
        v58 = 4 * v80;
        do
        {
          LODWORD(v82) = 0;
          v83 = (float)(int)(16 * v79[4] - v33) * v66;
          v84 = (unsigned __int8)(SLODWORD(v83) >> 23) - 118;
          if ( v84 <= 40 )
          {
            v85 = LODWORD(v83) & 0x7FFFFF | 0x800000LL;
            v86 = v84 < 0 ? v85 >> (118 - (unsigned __int8)(SLODWORD(v83) >> 23)) : v85 << v84;
            v82 = (v86 + 0x80000000LL) >> 32;
            if ( v83 < 0.0 )
              LODWORD(v82) = -(int)v82;
          }
          *v63 = v82;
          LODWORD(v82) = 0;
          v87 = (float)(int)(16 * v79[10] - v33) * v66;
          v88 = (unsigned __int8)(SLODWORD(v87) >> 23) - 118;
          if ( v88 <= 40 )
          {
            v89 = LODWORD(v87) & 0x7FFFFF | 0x800000LL;
            v90 = v88 < 0 ? v89 >> (118 - (unsigned __int8)(SLODWORD(v87) >> 23)) : v89 << v88;
            v82 = (v90 + 0x80000000LL) >> 32;
            if ( v87 < 0.0 )
              LODWORD(v82) = -(int)v82;
          }
          v63[1] = v82;
          LODWORD(v82) = 0;
          v91 = (float)(int)(16 * v79[16] - v33) * v66;
          v92 = (unsigned __int8)(SLODWORD(v91) >> 23) - 118;
          if ( v92 <= 40 )
          {
            v93 = LODWORD(v91) & 0x7FFFFF | 0x800000LL;
            v94 = v92 < 0 ? v93 >> (118 - (unsigned __int8)(SLODWORD(v91) >> 23)) : v93 << v92;
            v82 = (v94 + 0x80000000LL) >> 32;
            if ( v91 < 0.0 )
              LODWORD(v82) = -(int)v82;
          }
          v63[2] = v82;
          LODWORD(v82) = 0;
          v95 = (float)(int)(16 * v79[22] - v33) * v66;
          v65 = (unsigned int)(unsigned __int8)(SLODWORD(v95) >> 23) - 118;
          if ( (int)v65 <= 40 )
          {
            v96 = LODWORD(v95) & 0x7FFFFF | 0x800000LL;
            if ( (int)v65 < 0 )
            {
              v65 = 118 - (unsigned int)(unsigned __int8)(SLODWORD(v95) >> 23);
              v97 = v96 >> (118 - (unsigned __int8)(SLODWORD(v95) >> 23));
            }
            else
            {
              v97 = v96 << ((unsigned __int8)(SLODWORD(v95) >> 23) - 118);
            }
            v82 = (v97 + 0x80000000LL) >> 32;
            if ( v95 < 0.0 )
              LODWORD(v82) = -(int)v82;
          }
          v63[3] = v82;
          v79 += 24;
          v63 += 4;
          --v81;
        }
        while ( v81 );
      }
      if ( v58 < v78 )
      {
        v98 = v79 + 4;
        v99 = v78 - v58;
        do
        {
          LODWORD(v100) = 0;
          v101 = (float)(int)(16 * *v98 - v33) * v66;
          v65 = (unsigned int)(unsigned __int8)(SLODWORD(v101) >> 23) - 118;
          if ( (int)v65 <= 40 )
          {
            v102 = LODWORD(v101) & 0x7FFFFF | 0x800000LL;
            if ( (int)v65 < 0 )
            {
              v65 = 118 - (unsigned int)(unsigned __int8)(SLODWORD(v101) >> 23);
              v103 = v102 >> (118 - (unsigned __int8)(SLODWORD(v101) >> 23));
            }
            else
            {
              v103 = v102 << ((unsigned __int8)(SLODWORD(v101) >> 23) - 118);
            }
            v100 = (v103 + 0x80000000LL) >> 32;
            if ( v101 < 0.0 )
              LODWORD(v100) = -(int)v100;
          }
          *v63 = v100;
          v98 += 6;
          ++v63;
          --v99;
        }
        while ( v99 );
      }
      v140 = 0;
      bFToL(v65, &v140, 0LL);
      *v104 = v140;
    }
    else
    {
      LODWORD(v67) = 0;
      v68 = (float)(16 * v65) * v66;
      v69 = (unsigned __int8)(SLODWORD(v68) >> 23) - 118;
      if ( v69 <= 40 )
      {
        v70 = LODWORD(v68) & 0x7FFFFF | 0x800000LL;
        v71 = v69 < 0 ? v70 >> (118 - (unsigned __int8)(SLODWORD(v68) >> 23)) : v70 << v69;
        v67 = (v71 + 0x80000000LL) >> 32;
        if ( v68 < 0.0 )
          LODWORD(v67) = -(int)v67;
      }
      v72 = 0;
      if ( (_DWORD)v23 )
      {
        v73 = (unsigned int)v23;
        do
        {
          v72 += v67;
          *v63++ = v72;
          --v73;
        }
        while ( v73 );
      }
    }
  }
  v64 = *((_QWORD *)this + 9);
  v35 = v139;
  *((_DWORD *)this + 20) = 16 * *(_DWORD *)(v64 + 16);
  *((_DWORD *)this + 21) = 16 * *(_DWORD *)(v64 + 20);
LABEL_52:
  if ( (a15 & 0xA0) != 0 )
  {
    *((_DWORD *)this + 16) |= a15 & 0xA0;
    if ( !(v35 | a8 | *((_DWORD *)*a5 + 97)) && ((_DWORD)(*a6)[8] & 1) != 0 )
    {
      v116 = (int)(v33 + 8) >> 4;
      v117 = (ESTROBJ *)((char *)this + 16 * *((unsigned int *)this + 34) + 140);
      v118 = (*((_DWORD *)this + 24) + 8) >> 4;
      v119 = (v61 + 8) >> 4;
      if ( (a15 & 0x20) != 0 )
      {
        v120 = v116 + *((_DWORD *)*a5 + 68);
        *(_DWORD *)v117 = v120;
        *((_DWORD *)v117 + 2) = v120 + v118;
        v121 = v119 + *((_DWORD *)*a5 + 69);
        *((_DWORD *)v117 + 1) = v121;
        *((_DWORD *)v117 + 3) = v121 + *((_DWORD *)*a5 + 73);
        ERECTL::vOrder(v117);
        ++*((_DWORD *)this + 34);
        v117 = (ERECTL *)(v122 + 16);
      }
      if ( a15 < 0 )
      {
        v135 = v116 + *((_DWORD *)*a5 + 70);
        *(_DWORD *)v117 = v135;
        *((_DWORD *)v117 + 2) = v118 + v135;
        v136 = v119 + *((_DWORD *)*a5 + 71);
        *((_DWORD *)v117 + 1) = v136;
        *((_DWORD *)v117 + 3) = v136 + *((_DWORD *)*a5 + 75);
        ERECTL::vOrder(v117);
        ++*((_DWORD *)this + 34);
        v117 = (ERECTL *)(v137 + 16);
      }
      *(_QWORD *)v117 = 0LL;
      *((_QWORD *)v117 + 1) = 0LL;
    }
  }
  if ( (*((_DWORD *)*a5 + 3) & 1) != 0 )
    *((_DWORD *)this + 16) |= 0x200u;
  else
    *((_DWORD *)this + 16) &= ~0x200u;
}
