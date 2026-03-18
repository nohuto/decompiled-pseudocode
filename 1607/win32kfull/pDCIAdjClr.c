/*
 * XREFs of pDCIAdjClr @ 0x1C00F3FD4
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C00F3410 (HT_HalftoneBitmap.c)
 *     HT_CreateHalftoneBrush @ 0x1C0249F68 (HT_CreateHalftoneBrush.c)
 *     HT_CreateStandardMonoPattern @ 0x1C024A0C0 (HT_CreateStandardMonoPattern.c)
 * Callees:
 *     RaisePower @ 0x1C00068F0 (RaisePower.c)
 *     Log @ 0x1C0006AFC (Log.c)
 *     AdjustSrcDevGamma @ 0x1C00F4A14 (AdjustSrcDevGamma.c)
 *     ComputeColorSpaceXForm @ 0x1C00F5218 (ComputeColorSpaceXForm.c)
 *     DivFD6 @ 0x1C00F5E78 (DivFD6.c)
 *     CompareMemory @ 0x1C0125A18 (CompareMemory.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     GenCMYMaskXlate @ 0x1C024BED4 (GenCMYMaskXlate.c)
 *     TintAngle @ 0x1C024C0D0 (TintAngle.c)
 */

__int64 __fastcall pDCIAdjClr(__int64 a1, __m128i *a2, char **a3, unsigned int a4, __int16 a5, int a6, _DWORD *a7)
{
  __int64 v11; // rdi
  __int16 v12; // si
  char *v13; // rax
  int v14; // r9d
  char *v15; // r12
  int v16; // r15d
  _DWORD *v17; // rcx
  __int64 v18; // xmm1_8
  __int8 v19; // r8d^2
  __int64 v20; // xmm1_8
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  int v35; // ecx
  __int16 v36; // cx
  __int16 v37; // cx
  char v38; // r14
  int v39; // eax
  __int64 v40; // rdx
  int v41; // r11d
  unsigned int v42; // ebx
  __m128i v43; // xmm2
  int v44; // ebx
  int v45; // eax
  unsigned int v46; // r9d
  unsigned int v47; // r8d
  unsigned int v48; // eax
  int v49; // edx
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  int v63; // eax
  int v65; // ebx
  char v66; // r15
  __int64 v67; // r15
  unsigned __int16 epi16; // ax
  int v69; // eax
  unsigned int v70; // ebx
  unsigned int v71; // r12d
  int v72; // r15d
  __int64 v73; // xmm1_8
  __int128 v74; // xmm0
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  __int128 v83; // xmm0
  __int128 v84; // xmm1
  __int128 v85; // xmm0
  __int128 v86; // xmm1
  int v87; // eax
  unsigned int *v88; // r8
  unsigned int i; // ecx
  unsigned int v90; // eax
  int v91; // ebx
  char v92; // cl
  char v93; // r8
  char v94; // cl
  char v95; // r9
  unsigned __int8 v96; // r10
  unsigned int v97; // ecx
  char *v98; // rdx
  char v99; // al
  int v100; // eax
  char v101; // al
  __int16 v102; // [rsp+30h] [rbp-D0h]
  int v103; // [rsp+30h] [rbp-D0h]
  __int128 v104; // [rsp+38h] [rbp-C8h]
  __int128 v105; // [rsp+48h] [rbp-B8h]
  char *v106; // [rsp+58h] [rbp-A8h]
  _DWORD *v107; // [rsp+60h] [rbp-A0h]
  __int128 v108; // [rsp+70h] [rbp-90h] BYREF
  __int128 v109; // [rsp+80h] [rbp-80h]
  __int128 v110; // [rsp+90h] [rbp-70h] BYREF
  __m256i v111; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v112; // [rsp+C0h] [rbp-40h]
  __int128 v113; // [rsp+D0h] [rbp-30h]
  __int128 v114; // [rsp+E0h] [rbp-20h]
  __int128 v115; // [rsp+F0h] [rbp-10h]
  __int128 v116; // [rsp+100h] [rbp+0h] BYREF
  __int128 v117; // [rsp+110h] [rbp+10h]
  __int128 v118; // [rsp+120h] [rbp+20h]
  __int128 v119; // [rsp+130h] [rbp+30h]
  __int128 v120; // [rsp+140h] [rbp+40h]
  int v121; // [rsp+150h] [rbp+50h]
  __int128 v122; // [rsp+160h] [rbp+60h] BYREF
  __int64 v123; // [rsp+170h] [rbp+70h]
  __int128 v124; // [rsp+178h] [rbp+78h] BYREF
  __int64 v125; // [rsp+188h] [rbp+88h]

  if ( a1 && (v11 = a1 + 40, *(_DWORD *)(a1 + 40) == 1414021956) )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
    if ( !a3 )
      return v11;
    v12 = a5;
    if ( (a5 & 0x200) != 0 && dwABPreMul )
    {
      dwABPreMul = 0;
      v88 = (unsigned int *)&unk_1C0325734;
      for ( i = 1; i < 0x100; ++i )
      {
        v90 = (i - 16777217) / i;
        *v88++ = v90;
      }
    }
    if ( a4 + 312 >= a4 )
    {
      v13 = (char *)EngAllocMem(1u, a4 + 312, 0x30355448u);
      v14 = 0;
      *a3 = v13;
      v106 = v13;
      v15 = v13;
      if ( v13 )
      {
        v16 = *(_DWORD *)(v11 + 184);
        v102 = v16;
        if ( (v16 & 0x80u) != 0 )
          v12 = a5 | 8;
        DWORD1(v104) = a6;
        if ( HIBYTE(a6) == 1 || HIBYTE(a6) == 0xFE && (*(_DWORD *)(v11 + 184) & 0x300) == 0x300 )
          v12 |= 0x41u;
        v17 = (_DWORD *)(v11 + 3956);
        if ( (v12 & 0x10) == 0 )
          v17 = (_DWORD *)(v11 + 856);
        v107 = v17;
        if ( (v12 & 8) != 0 )
          v12 &= ~0x10u;
        if ( !a2 )
          a2 = (__m128i *)(a1 + 12);
        v18 = a2[1].m128i_i64[0];
        v122 = (__int128)*a2;
        v123 = v18;
        if ( (unsigned __int16)_mm_cvtsi128_si32((__m128i)v122) != 24
          || (v19 = BYTE2(v122), (WORD1(v122) & 0xFFFC) != 0) )
        {
          v122 = DefaultCA;
          v19 = BYTE2(DefaultCA);
          v123 = 0LL;
        }
        v20 = *(_QWORD *)(v11 + 212);
        v124 = *(_OWORD *)(v11 + 196);
        v21 = *(_OWORD *)(v11 + 220);
        v125 = v20;
        v22 = *(_OWORD *)(v11 + 236);
        WORD1(v122) = v19 & 3;
        v108 = v21;
        v23 = *(_OWORD *)(v11 + 252);
        v109 = v22;
        v24 = *(_OWORD *)(v11 + 268);
        v110 = v23;
        v25 = *(_OWORD *)(v11 + 284);
        *(_OWORD *)v111.m256i_i8 = v24;
        v26 = *(_OWORD *)(v11 + 300);
        *(_OWORD *)&v111.m256i_u64[2] = v25;
        v27 = *(_OWORD *)(v11 + 316);
        v112 = v26;
        v28 = *(_OWORD *)(v11 + 332);
        v113 = v27;
        v29 = *(_OWORD *)(v11 + 348);
        v114 = v28;
        v30 = *(_OWORD *)(v11 + 364);
        v115 = v29;
        v31 = *(_OWORD *)(v11 + 380);
        v116 = v30;
        v32 = *(_OWORD *)(v11 + 396);
        v117 = v31;
        v33 = *(_OWORD *)(v11 + 412);
        v118 = v32;
        v34 = *(_OWORD *)(v11 + 428);
        v35 = *(_DWORD *)(v11 + 444);
        v119 = v33;
        v120 = v34;
        v121 = v35;
        if ( WORD2(v122) > 8u )
          WORD2(v122) = 0;
        if ( WORD3(v122) < 0x540u )
        {
          WORD3(v122) = 1344;
        }
        else if ( WORD3(v122) > 0xFDE8u )
        {
          WORD3(v122) = -536;
        }
        if ( WORD4(v122) < 0x540u )
        {
          WORD4(v122) = 1344;
        }
        else if ( WORD4(v122) > 0xFDE8u )
        {
          WORD4(v122) = -536;
        }
        if ( WORD5(v122) < 0x540u )
        {
          WORD5(v122) = 1344;
        }
        else if ( WORD5(v122) > 0xFDE8u )
        {
          WORD5(v122) = -536;
        }
        if ( WORD6(v122) > 0xFA0u )
          WORD6(v122) = 4000;
        v36 = 6000;
        if ( HIWORD(v122) < 0x1770u || (v36 = 10000, HIWORD(v122) > 0x2710u) )
          HIWORD(v122) = v36;
        if ( (__int16)v123 < -100 )
        {
          LOWORD(v123) = -100;
        }
        else if ( (__int16)v123 > 100 )
        {
          LOWORD(v123) = 100;
        }
        if ( SWORD1(v123) < -100 )
        {
          WORD1(v123) = -100;
        }
        else if ( SWORD1(v123) > 100 )
        {
          WORD1(v123) = 100;
        }
        v37 = WORD2(v123);
        if ( SWORD2(v123) < -100 )
        {
          v37 = -100;
          WORD2(v123) = -100;
        }
        else if ( SWORD2(v123) > 100 )
        {
          v37 = 100;
          WORD2(v123) = 100;
        }
        if ( SHIWORD(v123) < -100 )
        {
          HIWORD(v123) = -100;
        }
        else if ( SHIWORD(v123) > 100 )
        {
          HIWORD(v123) = 100;
        }
        if ( (v12 & 1) != 0 || v37 == -100 )
          HIDWORD(v123) = 65436;
        v38 = 2;
        if ( (v12 & 2) != 0 )
          WORD1(v122) = v19 & 2 | 1;
        LOBYTE(v14) = HIBYTE(a6);
        LOWORD(v122) = v12 & 0x8059;
        v39 = AdjustSrcDevGamma(v11, (unsigned int)&v108, (unsigned int)&v122, v14, v12);
        v41 = 0;
        if ( !v39 && (unsigned int)CompareMemory(&v122, &v124, 24LL) )
        {
          v42 = v108;
          v43 = (__m128i)v122;
          goto LABEL_53;
        }
        v65 = v108 & 0x1007;
        LODWORD(v108) = v65;
        if ( (v12 & 0x40) != 0 )
        {
          v65 |= 0x2000u;
          LODWORD(v108) = v65;
        }
        v43 = (__m128i)v122;
        v66 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v122, 2));
        if ( (v66 & 2) != 0 )
        {
          if ( LogFilterMax == v41 )
            LogFilterMax = Log(8000000LL);
          v65 |= 0x100u;
          LODWORD(v108) = v65;
        }
        if ( (v66 & 1) != 0 )
        {
          v65 |= 0x200u;
          LODWORD(v108) = v65;
        }
        v67 = v11 + 36;
        if ( (v65 & 1) == 0 )
          v67 = v11 + 72;
        if ( (((unsigned __int16)_mm_cvtsi128_si32(v43) ^ (unsigned __int16)v124) & 0x8008) != 0 )
        {
          ComputeColorSpaceXForm(v11, v67, (char *)&v116 + 4, 0xFFFFFFFFLL);
          v43 = (__m128i)v122;
          v65 = v108;
        }
        epi16 = _mm_extract_epi16(v43, 2);
        if ( epi16 != WORD2(v124) )
        {
          ComputeColorSpaceXForm(v11, v11 + 36, (char *)&v111.m256i_u64[2] + 4, epi16);
          v43 = (__m128i)v122;
          v65 = v108;
        }
        if ( (v65 & 0x2000) != 0 )
        {
          v41 = 0;
        }
        else
        {
          v69 = CompareMemory(v67, v11 + 36, 36LL);
          v41 = 0;
          if ( !v69 )
          {
            v70 = v65 | 0x8000;
LABEL_89:
            v71 = 100 * (unsigned __int16)_mm_extract_epi16(v43, 6);
            v72 = 100 * (unsigned __int16)_mm_extract_epi16(v43, 7);
            v111.m256i_i64[0] = __PAIR64__(v72, v71);
            if ( v71 || v72 != 1000000 )
            {
              v42 = v70 | 8;
              LODWORD(v108) = v42;
              v111.m256i_i32[2] = DivFD6(0LL, v71);
              v111.m256i_i32[3] = DivFD6(0LL, (unsigned int)(1000000 - v72));
              v111.m256i_i32[4] = DivFD6(1000000LL, v72 - v71);
              v41 = 0;
            }
            else
            {
              v42 = v70 & 0xFFFFFFF7;
              v111.m256i_i32[0] = 0;
              *(__int64 *)((char *)&v111.m256i_i64[1] + 4) = 0LL;
              LODWORD(v108) = v42;
              *(__int64 *)((char *)v111.m256i_i64 + 4) = 1000000LL;
            }
            if ( (_WORD)v123 )
            {
              v42 |= 0x10u;
              HIDWORD(v109) = RaisePower(1015000, (unsigned int)(__int16)v123, 2LL);
              LODWORD(v108) = v42;
              v41 = 0;
            }
            if ( WORD1(v123) )
            {
              v42 |= 0x20u;
              LODWORD(v108) = v42;
              LODWORD(v110) = 3750 * SWORD1(v123);
            }
            if ( (v42 & 0x2000) != 0 )
            {
              LOWORD(v16) = v102;
            }
            else
            {
              DWORD1(v110) = 10000 * (SWORD2(v123) + 100);
              if ( DWORD1(v110) != 1000000 )
              {
                v42 |= 0x40u;
                LODWORD(v108) = v42;
              }
              if ( HIWORD(v123) )
              {
                TintAngle((unsigned int)SHIWORD(v123), v40, (char *)&v110 + 8, (char *)&v110 + 12);
                v42 = v108 | 0x80;
                LODWORD(v108) = v108 | 0x80;
                v41 = 0;
              }
              LOWORD(v16) = v102;
              if ( (v102 & 4) != 0 && (v42 & 0x1001) == 0x1000 )
              {
                v42 |= 0x400u;
                LODWORD(v108) = v42;
                if ( (v102 & 1) != 0 )
                {
                  v42 |= 0x800u;
                  LODWORD(v108) = v42;
                }
              }
            }
            v73 = v123;
            v74 = v108;
            v15 = v106;
            *(__m128i *)(v11 + 196) = v43;
            *(_OWORD *)(v11 + 220) = v74;
            v75 = v110;
            *(_QWORD *)(v11 + 212) = v73;
            *(_OWORD *)(v11 + 236) = v109;
            v76 = *(_OWORD *)v111.m256i_i8;
            *(_OWORD *)(v11 + 252) = v75;
            v77 = *(_OWORD *)&v111.m256i_u64[2];
            *(_OWORD *)(v11 + 268) = v76;
            v78 = v112;
            *(_OWORD *)(v11 + 284) = v77;
            v79 = v113;
            *(_OWORD *)(v11 + 300) = v78;
            v80 = v114;
            *(_OWORD *)(v11 + 316) = v79;
            v81 = v115;
            *(_OWORD *)(v11 + 332) = v80;
            v82 = v116;
            *(_OWORD *)(v11 + 348) = v81;
            v83 = v117;
            *(_OWORD *)(v11 + 364) = v82;
            v84 = v118;
            *(_OWORD *)(v11 + 380) = v83;
            v85 = v119;
            *(_OWORD *)(v11 + 396) = v84;
            v86 = v120;
            v87 = v121;
            *(_OWORD *)(v11 + 412) = v85;
            *(_OWORD *)(v11 + 428) = v86;
            *(_DWORD *)(v11 + 444) = v87;
LABEL_53:
            v44 = v42 & 0x3DB4BFFF;
            LODWORD(v108) = v44;
            if ( (v44 & 0x97FE) == 0 )
            {
              v44 |= 0x80000000;
              LODWORD(v108) = v44;
            }
            if ( (v44 & 0x84C0) == 0 || (v44 & 0x2000) != 0 )
            {
              v44 |= 0x40000000u;
              LODWORD(v108) = v44;
            }
            if ( (v16 & 0x1000) != 0 || (v12 & 0x20) != 0 )
            {
              v44 |= 0x80000u;
              LODWORD(v108) = v44;
            }
            if ( (v12 & 0x80u) == 0 )
            {
LABEL_60:
              if ( (v12 & 4) != 0 )
              {
                v44 |= 0x4000u;
                LODWORD(v108) = v44;
              }
              HIDWORD(v105) = 1000000;
              v124 = 0uLL;
              v125 = 0LL;
              LODWORD(v104) = 67372032;
              BYTE4(v104) = 3;
              if ( (v44 & 0x2000) != 0 )
              {
                v44 |= 0x40000u;
                LOBYTE(v104) = 1;
                LODWORD(v108) = v44;
                v45 = 0xFFFF;
                DWORD1(v105) = v41;
              }
              else
              {
                DWORD1(v105) = 4096;
                v45 = 4095;
              }
              DWORD2(v104) = v45;
              HIDWORD(v104) = v45;
              LODWORD(v105) = v45;
              switch ( HIBYTE(a6) )
              {
                case 1u:
                  BYTE6(v104) = v41;
                  goto LABEL_69;
                case 2u:
LABEL_140:
                  BYTE3(v104) = 6;
                  *(_QWORD *)&v124 = 0x20000000100000LL;
                  *((_QWORD *)&v124 + 1) = 0x1000000400000LL;
                  v125 = 0x4000000020000LL;
                  *(_WORD *)((char *)&v104 + 1) = 1284;
                  DWORD1(v105) = v41;
                  goto LABEL_69;
                case 5u:
                case 6u:
                  WORD1(v104) = 0;
                  *((_QWORD *)&v104 + 1) = 0xFF000000FFLL;
                  *(_QWORD *)&v105 = 255LL;
                  BYTE1(v104) = v41;
                  LODWORD(v124) = v41;
                  *(_QWORD *)((char *)&v124 + 4) = 0x200000001LL;
LABEL_69:
                  *(__m128i *)v15 = v43;
                  v46 = DstOrderTable[BYTE6(v104)];
                  *(_OWORD *)(v15 + 24) = v104;
                  DWORD2(v105) = v46;
                  v47 = v46;
                  v48 = HIBYTE(v46);
                  v46 >>= 8;
                  *(_OWORD *)(v15 + 40) = v105;
                  v47 >>= 16;
                  *((_QWORD *)v15 + 2) = v123;
                  v107[3] = *((_DWORD *)&v124 + (unsigned __int8)v46);
                  v107[2] = *((_DWORD *)&v124 + (unsigned __int8)v47);
                  v107[1] = *((_DWORD *)&v124 + (unsigned __int8)v48);
                  v107[6] = *((_DWORD *)&v124 + (unsigned __int8)v46 + 3);
                  v49 = *((_DWORD *)&v124 + (unsigned __int8)v47 + 3);
                  v50 = v108;
                  v107[4] = *((_DWORD *)&v124 + (int)(v48 + 3));
                  v51 = v109;
                  v107[5] = v49;
                  *(_OWORD *)(v15 + 56) = v50;
                  v52 = v110;
                  *(_OWORD *)(v15 + 72) = v51;
                  v53 = *(_OWORD *)v111.m256i_i8;
                  *(_OWORD *)(v15 + 88) = v52;
                  v54 = *(_OWORD *)&v111.m256i_u64[2];
                  *(_OWORD *)(v15 + 104) = v53;
                  v55 = v112;
                  *(_OWORD *)(v15 + 120) = v54;
                  v56 = v113;
                  *(_OWORD *)(v15 + 136) = v55;
                  v57 = v114;
                  *(_OWORD *)(v15 + 152) = v56;
                  *(_OWORD *)(v15 + 168) = v57;
                  v58 = v116;
                  *(_OWORD *)(v15 + 184) = v115;
                  v59 = v117;
                  *(_OWORD *)(v15 + 200) = v58;
                  v60 = v118;
                  *(_OWORD *)(v15 + 216) = v59;
                  v61 = v119;
                  *(_OWORD *)(v15 + 232) = v60;
                  v62 = v120;
                  v63 = v121;
                  *(_OWORD *)(v15 + 248) = v61;
                  *(_OWORD *)(v15 + 264) = v62;
                  *((_DWORD *)v15 + 70) = v63;
                  *((_QWORD *)v15 + 36) = v11 + 32;
                  *((_QWORD *)v15 + 37) = v11 + 808;
                  *((_QWORD *)v15 + 38) = v11 + 832;
                  return v11;
                case 0xFCu:
                  if ( BYTE2(a6) )
                  {
                    v101 = BYTE2(a6);
                    if ( BYTE2(a6) != 4 )
                      v101 = v41;
                    BYTE6(v104) = v101;
                  }
                  LODWORD(v105) = 126975;
                  *((_QWORD *)&v104 + 1) = 0x3EFFF0001EFFFLL;
                  v125 = -1LL;
                  *(_QWORD *)&v124 = 0x7E00000001F0000LL;
                  *((_QWORD *)&v124 + 1) = -134217728LL;
                  *(_WORD *)((char *)&v104 + 1) = 2308;
                  BYTE3(v104) = 15;
                  goto LABEL_69;
                case 0xFDu:
                  *(_QWORD *)&v124 = 0x3E00000001F0000LL;
                  LODWORD(v105) = 126975;
                  *((_QWORD *)&v104 + 1) = 0x1EFFF0001EFFFLL;
                  v125 = 0x7FFF7FFF7FFF7FFFLL;
                  *((_QWORD *)&v124 + 1) = 0x7FFF7FFF7C000000LL;
                  *(_WORD *)((char *)&v104 + 1) = 2308;
                  BYTE3(v104) = 14;
                  goto LABEL_69;
              }
              if ( HIBYTE(a6) != 254 )
              {
                if ( HIBYTE(a6) != 255 )
                  goto LABEL_69;
                BYTE6(v104) = 4;
                LODWORD(v108) = v44 | 0x4000;
                goto LABEL_140;
              }
              if ( (v16 & 0x100) == 0 )
              {
                *(_QWORD *)&v124 = 0x38000000070000LL;
                LODWORD(v105) = 20479;
                *((_QWORD *)&v104 + 1) = 0x4FFF00004FFFLL;
                BYTE3(v104) = 10;
                LODWORD(v108) = v44 & 0xFFFEFFFF;
                DWORD2(v124) = 29360128;
                *(_WORD *)((char *)&v104 + 1) = 1796;
                BYTE6(v104) = 4;
                goto LABEL_69;
              }
              v91 = v44 | 0x10000;
              LOBYTE(v103) = v41;
              LODWORD(v108) = v91;
              if ( *(_BYTE *)(v11 + 804) != (_BYTE)v41 )
              {
                GenCMYMaskXlate(
                  v11 + 548,
                  v16 & 0x2000,
                  *(unsigned __int8 *)(v11 + 448),
                  *(unsigned __int8 *)(v11 + 449),
                  *(unsigned __int8 *)(v11 + 450));
                LOBYTE(v41) = 0;
                *(_BYTE *)(v11 + 804) = 0;
              }
              if ( (v16 & 0x2000) != 0 )
              {
                LOWORD(v103) = -254;
                v92 = -1;
              }
              else
              {
                v38 = v103;
                v92 = v41;
                BYTE1(v103) = v41;
              }
              HIBYTE(v103) = v92;
              BYTE2(v103) = v92 ^ *(_BYTE *)(v11 + 452);
              if ( (v16 & 0x200) != 0 )
              {
                WORD3(v104) = -1280;
                *(_QWORD *)((char *)&v124 + 4) = 0xFF000000FF0000LL;
                LODWORD(v124) = 16711680;
LABEL_165:
                HIDWORD(v125) = v103;
                LODWORD(v125) = v103;
                HIDWORD(v124) = v103;
                goto LABEL_69;
              }
              v93 = 10;
              v94 = *(_BYTE *)(v11 + 453);
              v95 = 7;
              *(_WORD *)((char *)&v104 + 1) = 1796;
              DWORD2(v104) = (*(unsigned __int8 *)(v11 + 450) << 12) - 1;
              BYTE3(v104) = 10;
              HIDWORD(v104) = (*(unsigned __int8 *)(v11 + 449) << 12) - 1;
              LODWORD(v105) = (*(unsigned __int8 *)(v11 + 448) << 12) - 1;
              LODWORD(v124) = *(unsigned __int16 *)(v11 + 458);
              DWORD1(v124) = *(unsigned __int16 *)(v11 + 456);
              DWORD2(v124) = *(unsigned __int16 *)(v11 + 454);
              if ( (unsigned __int8)(v94 - 4) > 1u )
              {
                WORD1(v104) = 2310;
                v96 = -6;
                BYTE7(v104) = -6;
                v95 = 6;
                v93 = 9;
                if ( (v16 & 0x2000) == 0 )
                {
LABEL_157:
                  v100 = *(_DWORD *)(v11 + 472);
                  if ( v100 )
                  {
                    LODWORD(v108) = v91 | 0x20000;
                    HIDWORD(v105) = v100;
                    BYTE1(v104) = v41;
                    BYTE2(v104) = v95 - 4;
                    BYTE3(v104) = v93 - 4;
                    switch ( v96 )
                    {
                      case 0xF8u:
                        BYTE7(v104) = -11;
                        break;
                      case 0xF9u:
                        BYTE7(v104) = -10;
                        break;
                      case 0xFAu:
                        BYTE7(v104) = -9;
                        break;
                    }
                  }
                  BYTE6(v104) = v41;
                  goto LABEL_165;
                }
                v91 |= 0x2000000u;
                BYTE2(v103) = *(_BYTE *)(v11 + 803);
                v99 = *(_BYTE *)(v11 + 548);
              }
              else
              {
                if ( v94 == 4 )
                {
                  v96 = -7;
                  v97 = 292;
                }
                else
                {
                  v96 = -8;
                  v38 |= 1u;
                  v97 = 365;
                }
                v91 |= 0x400000u;
                BYTE7(v104) = v96;
                LOBYTE(v103) = v38 & 3;
                v98 = (char *)*(&p8BPPXlate + (v38 & 3));
                v99 = *v98;
                BYTE2(v103) = v98[v97];
              }
              HIBYTE(v103) = v99;
              LODWORD(v108) = v91;
              goto LABEL_157;
            }
            v44 |= 0x100000u;
            LODWORD(v108) = v44;
            if ( (v12 & 0x100) != 0 )
            {
              v44 |= 0x200000u;
            }
            else
            {
              if ( (v12 & 0x200) != 0 )
              {
                v44 |= 0x800000u;
                LODWORD(v108) = v44;
              }
              if ( (v12 & 0x400) == 0 )
                goto LABEL_60;
              v44 |= 0x1000000u;
            }
            LODWORD(v108) = v44;
            goto LABEL_60;
          }
        }
        v70 = v65 & 0xFFFF7FFF;
        goto LABEL_89;
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
