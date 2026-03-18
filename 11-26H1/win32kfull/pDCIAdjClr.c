/*
 * XREFs of pDCIAdjClr @ 0x140144E04
 * Callers:
 *     HT_HalftoneBitmap @ 0x1401449FC (HT_HalftoneBitmap.c)
 *     HT_CreateStandardMonoPattern @ 0x1401DB8CC (HT_CreateStandardMonoPattern.c)
 *     HT_CreateHalftoneBrush @ 0x140303EB8 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     AdjustSrcDevGamma @ 0x140145CDC (AdjustSrcDevGamma.c)
 *     RaisePower @ 0x140146BD0 (RaisePower.c)
 *     DivFD6 @ 0x140146D00 (DivFD6.c)
 *     Log @ 0x140147308 (Log.c)
 *     ComputeColorSpaceXForm @ 0x14014758C (ComputeColorSpaceXForm.c)
 *     CompareMemory @ 0x1401DAC64 (CompareMemory.c)
 *     GenCMYMaskXlate @ 0x1403051BC (GenCMYMaskXlate.c)
 *     TintAngle @ 0x140305410 (TintAngle.c)
 */

__int64 __fastcall pDCIAdjClr(
        __int64 a1,
        __m128i *a2,
        char **a3,
        unsigned int a4,
        __int16 a5,
        unsigned int a6,
        _DWORD *a7)
{
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  char *v16; // rax
  int v17; // r12d
  __int16 v18; // dx
  __int16 v19; // si
  _DWORD *v20; // rax
  int v21; // ebx
  __int64 v22; // xmm0_8
  __int16 v23; // ax
  __int8 v24; // edx^2
  _OWORD *v25; // r13
  __int64 v26; // xmm1_8
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  int v41; // eax
  __int16 v42; // ax
  __int16 v43; // ax
  char v44; // r15
  int v45; // eax
  __int64 v46; // rdx
  __m128i v47; // xmm2
  __int64 v48; // r8
  __int8 v50; // cl
  char v51; // al
  int v52; // ebx
  char v53; // r14
  __int64 v54; // r14
  unsigned __int16 epi16; // ax
  unsigned int v56; // ebx
  unsigned int v57; // r12d
  int v58; // r14d
  unsigned int v59; // ebx
  __int64 v60; // r8
  __int64 v61; // r8
  __int64 v62; // xmm0_8
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  _OWORD *v70; // r13
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  int v77; // eax
  int v78; // ebx
  int v79; // eax
  int v80; // eax
  char *v81; // r9
  _DWORD *v82; // rdx
  _DWORD *v83; // r10
  int v84; // ecx
  __int64 v85; // r8
  int v86; // eax
  __int64 v87; // xmm0_8
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int128 v90; // xmm1
  __int128 v91; // xmm0
  __int128 v92; // xmm1
  __int128 v93; // xmm0
  __int128 v94; // xmm1
  __int128 v95; // xmm0
  __int128 v96; // xmm1
  __int128 v97; // xmm0
  __int128 v98; // xmm1
  __int128 v99; // xmm0
  __int128 v100; // xmm1
  __int128 v101; // xmm0
  __int128 v102; // xmm1
  int v103; // eax
  unsigned int *v105; // r8
  unsigned int i; // ecx
  unsigned int v107; // eax
  __int64 v108; // r13
  int v109; // ebx
  char v110; // r8
  unsigned __int8 v111; // r9
  char v112; // dl
  int v113; // eax
  int v114; // ecx
  char v115; // al
  char *v116; // rcx
  __int64 v117; // rax
  int v118; // ecx
  int v119; // ecx
  char v120; // al
  __int16 v121; // [rsp+30h] [rbp-D0h]
  int v122; // [rsp+30h] [rbp-D0h]
  __int128 v123; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v124; // [rsp+48h] [rbp-B8h]
  __int128 v125; // [rsp+50h] [rbp-B0h]
  __int128 v126; // [rsp+60h] [rbp-A0h]
  __int128 v127; // [rsp+70h] [rbp-90h]
  __int64 v128; // [rsp+80h] [rbp-80h]
  _DWORD *v129; // [rsp+88h] [rbp-78h]
  _DWORD *v130; // [rsp+90h] [rbp-70h]
  _DWORD *v131; // [rsp+98h] [rbp-68h]
  _DWORD *v132; // [rsp+A0h] [rbp-60h]
  _DWORD *v133; // [rsp+A8h] [rbp-58h]
  _DWORD *v134; // [rsp+B0h] [rbp-50h]
  __int64 v135; // [rsp+B8h] [rbp-48h]
  char *v136; // [rsp+C0h] [rbp-40h]
  __int128 v137; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v138; // [rsp+E0h] [rbp-20h]
  __int128 v139; // [rsp+F0h] [rbp-10h] BYREF
  __m256i v140; // [rsp+100h] [rbp+0h] BYREF
  __int128 v141; // [rsp+120h] [rbp+20h]
  __int128 v142; // [rsp+130h] [rbp+30h]
  __int128 v143; // [rsp+140h] [rbp+40h]
  __int128 v144; // [rsp+150h] [rbp+50h]
  __int128 v145; // [rsp+160h] [rbp+60h] BYREF
  __int128 v146; // [rsp+170h] [rbp+70h]
  __int128 v147; // [rsp+180h] [rbp+80h]
  __int128 v148; // [rsp+190h] [rbp+90h]
  __int128 v149; // [rsp+1A0h] [rbp+A0h]
  int v150; // [rsp+1B0h] [rbp+B0h]

  if ( a1 && (v11 = a1 + 40, *(_DWORD *)(a1 + 40) == 1414021956) )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
    if ( !a3 )
      return v11;
    v15 = *(_QWORD *)(W32GetSessionState(v13, v12, v14) + 112);
    v135 = v15;
    if ( (a5 & 0x200) != 0 && *(_DWORD *)(v15 + 80) )
    {
      *(_DWORD *)(v15 + 80) = 0;
      v105 = (unsigned int *)(v15 + 84);
      for ( i = 1; i < 0x100; ++i )
      {
        v107 = (i - 16777217) / i;
        *v105++ = v107;
      }
    }
    if ( a4 + 312 >= a4 )
    {
      v16 = (char *)EngAllocMem(1u, a4 + 312, 0x30355448u);
      v136 = v16;
      *a3 = v16;
      if ( v16 )
      {
        v17 = *(_DWORD *)(v11 + 184);
        v18 = a5 | 8;
        DWORD1(v125) = a6;
        v121 = v17;
        if ( (v17 & 0x80u) == 0 )
          v18 = a5;
        if ( HIBYTE(a6) == 1 || (v19 = v18, HIBYTE(a6) == 0xFE) && (v17 & 0x300) == 0x300 )
          v19 = v18 | 0x41;
        if ( (v19 & 0x10) != 0 )
        {
          v129 = (_DWORD *)(v11 + 3968);
          v130 = (_DWORD *)(v11 + 3964);
          v131 = (_DWORD *)(v11 + 3960);
          v132 = (_DWORD *)(v11 + 3980);
          v133 = (_DWORD *)(v11 + 3976);
          v20 = (_DWORD *)(v11 + 3972);
        }
        else
        {
          v129 = (_DWORD *)(v11 + 868);
          v130 = (_DWORD *)(v11 + 864);
          v131 = (_DWORD *)(v11 + 860);
          v132 = (_DWORD *)(v11 + 880);
          v133 = (_DWORD *)(v11 + 876);
          v20 = (_DWORD *)(v11 + 872);
        }
        v134 = v20;
        if ( (v19 & 8) != 0 )
          v19 &= ~0x10u;
        if ( !a2 )
          a2 = (__m128i *)(a1 + 12);
        v21 = 24;
        v22 = a2[1].m128i_i64[0];
        v23 = _mm_cvtsi128_si32(*a2);
        v123 = (__int128)*a2;
        v124 = v22;
        if ( v23 != 24 || (v24 = BYTE2(v123), (WORD1(v123) & 0xFFFC) != 0) )
        {
          v123 = DefaultCA;
          v24 = BYTE2(DefaultCA);
          v124 = 0LL;
        }
        v25 = (_OWORD *)(v11 + 220);
        v26 = *(_QWORD *)(v11 + 212);
        v127 = *(_OWORD *)(v11 + 196);
        v27 = *(_OWORD *)(v11 + 220);
        v128 = v26;
        v28 = *(_OWORD *)(v11 + 236);
        WORD1(v123) = v24 & 3;
        v137 = v27;
        v29 = *(_OWORD *)(v11 + 252);
        v138 = v28;
        v30 = *(_OWORD *)(v11 + 268);
        v139 = v29;
        v31 = *(_OWORD *)(v11 + 284);
        *(_OWORD *)v140.m256i_i8 = v30;
        v32 = *(_OWORD *)(v11 + 300);
        *(_OWORD *)&v140.m256i_u64[2] = v31;
        v33 = *(_OWORD *)(v11 + 316);
        v141 = v32;
        v34 = *(_OWORD *)(v11 + 332);
        v142 = v33;
        v35 = *(_OWORD *)(v11 + 348);
        v143 = v34;
        v36 = *(_OWORD *)(v11 + 364);
        v144 = v35;
        v37 = *(_OWORD *)(v11 + 380);
        v145 = v36;
        v38 = *(_OWORD *)(v11 + 396);
        v146 = v37;
        v39 = *(_OWORD *)(v11 + 412);
        v147 = v38;
        v40 = *(_OWORD *)(v11 + 428);
        v41 = *(_DWORD *)(v11 + 444);
        v148 = v39;
        v149 = v40;
        v150 = v41;
        if ( WORD2(v123) > 8u )
          WORD2(v123) = 0;
        if ( WORD3(v123) >= 0x540u )
        {
          if ( WORD3(v123) > 0xFDE8u )
            WORD3(v123) = -536;
        }
        else
        {
          WORD3(v123) = 1344;
        }
        if ( WORD4(v123) >= 0x540u )
        {
          if ( WORD4(v123) > 0xFDE8u )
            WORD4(v123) = -536;
        }
        else
        {
          WORD4(v123) = 1344;
        }
        if ( WORD5(v123) < 0x540u )
        {
          WORD5(v123) = 1344;
        }
        else if ( WORD5(v123) > 0xFDE8u )
        {
          WORD5(v123) = -536;
        }
        if ( WORD6(v123) > 0xFA0u )
          WORD6(v123) = 4000;
        v42 = 6000;
        if ( HIWORD(v123) < 0x1770u || (v42 = 10000, HIWORD(v123) > 0x2710u) )
          HIWORD(v123) = v42;
        if ( (__int16)v124 >= -100 )
        {
          if ( (__int16)v124 > 100 )
            LOWORD(v124) = 100;
        }
        else
        {
          LOWORD(v124) = -100;
        }
        if ( SWORD1(v124) < -100 )
        {
          WORD1(v124) = -100;
        }
        else if ( SWORD1(v124) > 100 )
        {
          WORD1(v124) = 100;
        }
        v43 = WORD2(v124);
        if ( SWORD2(v124) >= -100 )
        {
          if ( SWORD2(v124) > 100 )
          {
            v43 = 100;
            WORD2(v124) = 100;
          }
        }
        else
        {
          v43 = -100;
          WORD2(v124) = -100;
        }
        if ( SHIWORD(v124) < -100 )
        {
          HIWORD(v124) = -100;
        }
        else if ( SHIWORD(v124) > 100 )
        {
          HIWORD(v124) = 100;
        }
        if ( (v19 & 1) != 0 || v43 == -100 )
          HIDWORD(v124) = 65436;
        v44 = 2;
        if ( (v19 & 2) != 0 )
          WORD1(v123) = v24 & 2 | 1;
        LOWORD(v123) = v19 & 0x8059;
        v45 = AdjustSrcDevGamma(v11, (unsigned int)&v137, (unsigned int)&v123, HIBYTE(a6), v19);
        v47 = (__m128i)v123;
        v48 = 1024LL;
        if ( v45 )
        {
LABEL_50:
          v52 = v137 & 0x1007;
          LODWORD(v137) = v52;
          if ( (v19 & 0x40) != 0 )
          {
            v52 |= 0x2000u;
            LODWORD(v137) = v52;
          }
          v53 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v123, 2));
          if ( (v53 & 2) != 0 )
          {
            v108 = v135;
            if ( !*(_DWORD *)(v135 + 1104) )
              *(_DWORD *)(v108 + 1104) = Log(8000000LL, v46, 1024LL);
            v52 |= 0x100u;
            v25 = (_OWORD *)(v11 + 220);
            LODWORD(v137) = v52;
          }
          if ( (v53 & 1) != 0 )
          {
            v52 |= 0x200u;
            LODWORD(v137) = v52;
          }
          v54 = v11 + 36;
          if ( (v52 & 1) == 0 )
            v54 = v11 + 72;
          if ( (((unsigned __int16)_mm_cvtsi128_si32(v47) ^ (unsigned __int16)v127) & 0x8008) != 0 )
          {
            ComputeColorSpaceXForm(v11, v54, (char *)&v145 + 4, 0xFFFFFFFFLL);
            v52 = v137;
          }
          epi16 = _mm_extract_epi16(v47, 2);
          if ( epi16 != WORD2(v127) )
          {
            ComputeColorSpaceXForm(v11, v11 + 36, (char *)&v140.m256i_u64[2] + 4, epi16);
            v52 = v137;
          }
          if ( (v52 & 0x2000) != 0 || (unsigned int)CompareMemory(v54, v11 + 36, 36LL) )
            v56 = v52 & 0xFFFF7FFF;
          else
            v56 = v52 | 0x8000;
          v57 = 100 * _mm_extract_epi16(v47, 6);
          v58 = 100 * _mm_extract_epi16(v47, 7);
          v140.m256i_i64[0] = __PAIR64__(v58, v57);
          if ( v57 || v58 != 1000000 )
          {
            v59 = v56 | 8;
            LODWORD(v137) = v59;
            v140.m256i_i32[2] = DivFD6(0LL, v57, v48);
            v140.m256i_i32[3] = DivFD6(0LL, (unsigned int)(1000000 - v58), v60);
            v140.m256i_i32[4] = DivFD6(1000000LL, v58 - v57, v61);
          }
          else
          {
            v59 = v56 & 0xFFFFFFF7;
            *(__int64 *)((char *)v140.m256i_i64 + 4) = 1000000LL;
            LODWORD(v137) = v59;
            v140.m256i_i32[0] = 0;
            *(__int64 *)((char *)&v140.m256i_i64[1] + 4) = 0LL;
          }
          if ( (_WORD)v124 )
          {
            v59 |= 0x10u;
            HIDWORD(v138) = RaisePower(1015000LL, (unsigned int)(__int16)v124, 2LL);
            LODWORD(v137) = v59;
          }
          if ( WORD1(v124) )
          {
            v59 |= 0x20u;
            LODWORD(v137) = v59;
            LODWORD(v139) = 3750 * SWORD1(v124);
          }
          if ( (v59 & 0x2000) != 0 )
          {
            LOWORD(v17) = v121;
          }
          else
          {
            DWORD1(v139) = 10000 * (SWORD2(v124) + 100);
            if ( DWORD1(v139) != 1000000 )
            {
              v59 |= 0x40u;
              LODWORD(v137) = v59;
            }
            if ( HIWORD(v124) )
            {
              TintAngle((unsigned int)SHIWORD(v124), v46, (char *)&v139 + 8, (char *)&v139 + 12);
              v59 = v137 | 0x80;
              LODWORD(v137) = v137 | 0x80;
            }
            LOWORD(v17) = v121;
            if ( (v121 & 4) != 0 && (v59 & 0x1001) == 0x1000 )
            {
              v59 |= 0x400u;
              LODWORD(v137) = v59;
              if ( (v121 & 1) != 0 )
              {
                v59 |= 0x800u;
                LODWORD(v137) = v59;
              }
            }
          }
          v62 = v124;
          v63 = v138;
          *(__m128i *)(v11 + 196) = v47;
          *(_QWORD *)(v11 + 212) = v62;
          *v25 = v137;
          v64 = v139;
          v25[1] = v63;
          v65 = *(_OWORD *)v140.m256i_i8;
          v25[2] = v64;
          v66 = *(_OWORD *)&v140.m256i_u64[2];
          v25[3] = v65;
          v67 = v141;
          v25[4] = v66;
          v68 = v142;
          v25[5] = v67;
          v69 = v143;
          v25[6] = v68;
          v70 = v25 + 8;
          v71 = v144;
          *(v70 - 1) = v69;
          v72 = v145;
          *v70 = v71;
          v73 = v146;
          v70[1] = v72;
          v74 = v147;
          v70[2] = v73;
          v75 = v148;
          v70[3] = v74;
          v76 = v149;
          v77 = v150;
          v70[4] = v75;
          v70[5] = v76;
          *((_DWORD *)v70 + 24) = v77;
        }
        else
        {
          v46 = 0LL;
          while ( v21-- )
          {
            v50 = *((_BYTE *)&v123 + v46);
            v51 = *((_BYTE *)&v127 + v46++);
            if ( v50 != v51 )
              goto LABEL_50;
          }
          v59 = v137;
        }
        v78 = v59 & 0x3DB4BFFF;
        LODWORD(v137) = v78;
        if ( (v78 & 0x97FE) == 0 )
        {
          v78 |= 0x80000000;
          LODWORD(v137) = v78;
        }
        if ( (v78 & 0x84C0) == 0 || (v78 & 0x2000) != 0 )
        {
          v78 |= 0x40000000u;
          LODWORD(v137) = v78;
        }
        if ( (v17 & 0x1000) != 0 || (v19 & 0x20) != 0 )
        {
          v78 |= 0x80000u;
          LODWORD(v137) = v78;
        }
        v79 = v78;
        if ( (v19 & 0x80u) == 0 )
        {
LABEL_80:
          if ( (v19 & 4) != 0 )
          {
            v78 |= 0x4000u;
            LODWORD(v137) = v78;
          }
          HIDWORD(v126) = 1000000;
          v128 = 0LL;
          LODWORD(v125) = 67372032;
          BYTE4(v125) = 3;
          v127 = 0LL;
          if ( (v78 & 0x2000) != 0 )
          {
            v78 |= 0x40000u;
            LOBYTE(v125) = 1;
            LODWORD(v137) = v78;
            v80 = 0xFFFF;
            DWORD1(v126) = 0;
          }
          else
          {
            DWORD1(v126) = 4096;
            v80 = 4095;
          }
          DWORD2(v125) = v80;
          HIDWORD(v125) = v80;
          LODWORD(v126) = v80;
          switch ( BYTE7(v125) )
          {
            case 1u:
              BYTE6(v125) = 0;
              goto LABEL_92;
            case 2u:
LABEL_145:
              LODWORD(v127) = 0x100000;
              *(_QWORD *)((char *)&v127 + 4) = 0x40000000200000LL;
              HIDWORD(v127) = 0x10000;
              v128 = 0x4000000020000LL;
              WORD1(v125) = 1541;
              DWORD1(v126) = 0;
              goto LABEL_92;
            case 5u:
            case 6u:
              *(_QWORD *)&v126 = 255LL;
              WORD1(v125) = 0;
              BYTE1(v125) = 0;
              *((_QWORD *)&v125 + 1) = 0xFF000000FFLL;
              *(_QWORD *)((char *)&v127 + 4) = 0x200000001LL;
              goto LABEL_92;
            case 0xFCu:
              if ( BYTE6(v125) )
              {
                v120 = BYTE6(v125);
                if ( BYTE6(v125) != 4 )
                  v120 = 0;
                BYTE6(v125) = v120;
              }
              LODWORD(v126) = 126975;
              *((_QWORD *)&v125 + 1) = 0x3EFFF0001EFFFLL;
              *(_QWORD *)&v127 = 0x7E00000001F0000LL;
              *((_QWORD *)&v127 + 1) = -134217728LL;
              v128 = -1LL;
              WORD1(v125) = 3849;
              goto LABEL_92;
            case 0xFDu:
              *(_QWORD *)&v127 = 0x3E00000001F0000LL;
              LODWORD(v126) = 126975;
              *((_QWORD *)&v125 + 1) = 0x1EFFF0001EFFFLL;
              v128 = 0x7FFF7FFF7FFF7FFFLL;
              *((_QWORD *)&v127 + 1) = 0x7FFF7FFF7C000000LL;
              WORD1(v125) = 3593;
              goto LABEL_92;
          }
          if ( BYTE7(v125) != 254 )
          {
            if ( BYTE7(v125) != 255 )
            {
LABEL_92:
              v81 = v136;
              v82 = v129;
              v83 = v130;
              v84 = DstOrderTable[BYTE6(v125)];
              v85 = BYTE1(v84);
              *(_OWORD *)(v136 + 24) = v125;
              DWORD2(v126) = v84;
              v86 = *((_DWORD *)&v127 + BYTE1(v84));
              v87 = v124;
              *(_OWORD *)(v81 + 40) = v126;
              *(__m128i *)v81 = v47;
              *((_QWORD *)v81 + 2) = v87;
              *v82 = v86;
              v88 = BYTE2(v84);
              v89 = HIBYTE(v84);
              *v83 = *((_DWORD *)&v127 + v88);
              *v131 = *((_DWORD *)&v127 + v89);
              *v132 = *((_DWORD *)&v127 + v85 + 3);
              *v133 = *((_DWORD *)&v127 + v88 + 3);
              *v134 = *((_DWORD *)&v127 + v89 + 3);
              v90 = v138;
              *(_OWORD *)(v81 + 56) = v137;
              v91 = v139;
              *(_OWORD *)(v81 + 72) = v90;
              v92 = *(_OWORD *)v140.m256i_i8;
              *(_OWORD *)(v81 + 88) = v91;
              v93 = *(_OWORD *)&v140.m256i_u64[2];
              *(_OWORD *)(v81 + 104) = v92;
              v94 = v141;
              *(_OWORD *)(v81 + 120) = v93;
              v95 = v142;
              *(_OWORD *)(v81 + 136) = v94;
              v96 = v143;
              *(_OWORD *)(v81 + 152) = v95;
              v97 = v144;
              *(_OWORD *)(v81 + 168) = v96;
              v98 = v145;
              *(_OWORD *)(v81 + 184) = v97;
              v99 = v146;
              *(_OWORD *)(v81 + 200) = v98;
              v100 = v147;
              *(_OWORD *)(v81 + 216) = v99;
              v101 = v148;
              *(_OWORD *)(v81 + 232) = v100;
              v102 = v149;
              v103 = v150;
              *(_OWORD *)(v81 + 248) = v101;
              *(_OWORD *)(v81 + 264) = v102;
              *((_DWORD *)v81 + 70) = v103;
              *((_QWORD *)v81 + 36) = v11 + 32;
              *((_QWORD *)v81 + 37) = v11 + 808;
              *((_QWORD *)v81 + 38) = v11 + 832;
              return v11;
            }
            BYTE6(v125) = 4;
            LODWORD(v137) = v78 | 0x4000;
            goto LABEL_145;
          }
          if ( (v17 & 0x100) == 0 )
          {
            *(_QWORD *)&v127 = 0x38000000070000LL;
            LODWORD(v126) = 20479;
            *((_QWORD *)&v125 + 1) = 0x4FFF00004FFFLL;
            LODWORD(v137) = v78 & 0xFFFEFFFF;
            DWORD2(v127) = 29360128;
            WORD1(v125) = 2567;
            BYTE6(v125) = 4;
            goto LABEL_92;
          }
          v109 = v78 | 0x10000;
          LOWORD(v122) = 0;
          LODWORD(v137) = v109;
          if ( *(_BYTE *)(v11 + 804) )
          {
            GenCMYMaskXlate(
              v11 + 548,
              v17 & 0x2000,
              *(unsigned __int8 *)(v11 + 448),
              *(unsigned __int8 *)(v11 + 449),
              *(unsigned __int8 *)(v11 + 450));
            *(_BYTE *)(v11 + 804) = 0;
          }
          if ( (v17 & 0x2000) != 0 )
            LOWORD(v122) = -254;
          else
            v44 = 0;
          HIBYTE(v122) = -((v17 & 0x2000) != 0);
          BYTE2(v122) = *(_BYTE *)(v11 + 452) ^ HIBYTE(v122);
          if ( (v17 & 0x200) != 0 )
          {
            WORD3(v125) = -1280;
            *(_QWORD *)((char *)&v127 + 4) = 0xFF000000FF0000LL;
            LODWORD(v127) = 16711680;
LABEL_172:
            HIDWORD(v128) = v122;
            LODWORD(v128) = v122;
            HIDWORD(v127) = v122;
            goto LABEL_92;
          }
          v110 = 7;
          v111 = *(_BYTE *)(v11 + 453);
          v112 = 10;
          v113 = (*(unsigned __int8 *)(v11 + 450) << 12) - 1;
          WORD1(v125) = 2567;
          DWORD2(v125) = v113;
          HIDWORD(v125) = (*(unsigned __int8 *)(v11 + 449) << 12) - 1;
          LODWORD(v126) = (*(unsigned __int8 *)(v11 + 448) << 12) - 1;
          LODWORD(v127) = *(unsigned __int16 *)(v11 + 458);
          DWORD1(v127) = *(unsigned __int16 *)(v11 + 456);
          DWORD2(v127) = *(unsigned __int16 *)(v11 + 454);
          if ( (unsigned int)v111 - 4 < 2 )
          {
            if ( v111 == 4 )
            {
              BYTE7(v125) = -7;
            }
            else
            {
              BYTE7(v125) = -8;
              v44 |= 1u;
            }
            v109 |= 0x400000u;
            LOBYTE(v122) = v44 & 3;
            v116 = (char *)*(&p8BPPXlate + (v44 & 3));
            v117 = 292LL;
            if ( v111 != 4 )
              v117 = 365LL;
            BYTE2(v122) = v116[v117];
            v115 = *v116;
            v114 = 249 - (v111 != 4);
          }
          else
          {
            WORD1(v125) = 2310;
            v114 = 250;
            BYTE7(v125) = -6;
            v110 = 6;
            v112 = 9;
            if ( (v17 & 0x2000) == 0 )
            {
LABEL_164:
              if ( *(_DWORD *)(v11 + 472) )
              {
                HIDWORD(v126) = *(_DWORD *)(v11 + 472);
                LODWORD(v137) = v109 | 0x20000;
                BYTE1(v125) = 0;
                BYTE2(v125) = v110 - 4;
                BYTE3(v125) = v112 - 4;
                v118 = v114 - 248;
                if ( v118 )
                {
                  v119 = v118 - 1;
                  if ( v119 )
                  {
                    if ( v119 == 1 )
                      BYTE7(v125) = -9;
                  }
                  else
                  {
                    BYTE7(v125) = -10;
                  }
                }
                else
                {
                  BYTE7(v125) = -11;
                }
              }
              BYTE6(v125) = 0;
              goto LABEL_172;
            }
            v109 |= 0x2000000u;
            BYTE2(v122) = *(_BYTE *)(v11 + 803);
            v115 = *(_BYTE *)(v11 + 548);
          }
          HIBYTE(v122) = v115;
          LODWORD(v137) = v109;
          goto LABEL_164;
        }
        v78 |= 0x100000u;
        LODWORD(v137) = v78;
        if ( (v19 & 0x100) != 0 )
        {
          v78 = v79 | 0x300000;
        }
        else
        {
          if ( (v19 & 0x200) != 0 )
          {
            v78 = v79 | 0x900000;
            LODWORD(v137) = v79 | 0x900000;
          }
          if ( (v19 & 0x400) == 0 )
            goto LABEL_80;
          v78 |= 0x1000000u;
        }
        LODWORD(v137) = v78;
        goto LABEL_80;
      }
    }
    *a7 = -2;
    EngReleaseSemaphore(*(HSEMAPHORE *)(v11 + 8));
  }
  else
  {
    *a7 = -12;
  }
  return 0LL;
}
