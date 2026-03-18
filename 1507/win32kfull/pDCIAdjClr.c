/*
 * XREFs of pDCIAdjClr @ 0x1C00A57C8
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C00A3910 (HT_HalftoneBitmap.c)
 *     HT_CreateStandardMonoPattern @ 0x1C01147D4 (HT_CreateStandardMonoPattern.c)
 *     HT_CreateHalftoneBrush @ 0x1C024D928 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     AdjustSrcDevGamma @ 0x1C00A67F0 (AdjustSrcDevGamma.c)
 *     ComputeColorSpaceXForm @ 0x1C00A69E8 (ComputeColorSpaceXForm.c)
 *     DivFD6 @ 0x1C00A7640 (DivFD6.c)
 *     RaisePower @ 0x1C00A7894 (RaisePower.c)
 *     Log @ 0x1C00A7ABC (Log.c)
 *     CompareMemory @ 0x1C00A7DB8 (CompareMemory.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     GenCMYMaskXlate @ 0x1C024F088 (GenCMYMaskXlate.c)
 *     TintAngle @ 0x1C024F284 (TintAngle.c)
 */

__int64 __fastcall pDCIAdjClr(__int64 a1, __m128i *a2, char **a3, unsigned int a4, __int16 a5, int a6, _DWORD *a7)
{
  __int64 v11; // rdi
  __int16 v12; // si
  char *v13; // rax
  char *v14; // r12
  int v15; // r13d
  _DWORD *v16; // rcx
  __int64 v17; // xmm1_8
  __int8 v18; // r8d^2
  __int64 v19; // xmm1_8
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  int v34; // ecx
  __int16 v35; // cx
  int v36; // r9d
  __int16 v37; // cx
  char v38; // r14
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int16 v42; // r11
  unsigned int v43; // ebx
  __m128i v44; // xmm2
  int v45; // ebx
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  int v61; // eax
  int v63; // ebx
  char v64; // r15
  __int64 v65; // r15
  unsigned __int16 epi16; // ax
  unsigned int v67; // ebx
  unsigned int v68; // r12d
  int v69; // r15d
  __int64 v70; // xmm1_8
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  __int128 v79; // xmm0
  __int128 v80; // xmm1
  __int128 v81; // xmm0
  __int128 v82; // xmm1
  int v83; // eax
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // r8
  __int64 v87; // r9
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
  __int128 v102; // [rsp+30h] [rbp-D0h]
  __int128 v103; // [rsp+40h] [rbp-C0h]
  char *v104; // [rsp+50h] [rbp-B0h]
  int v105; // [rsp+50h] [rbp-B0h]
  _DWORD *v106; // [rsp+58h] [rbp-A8h]
  __int128 v107; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v108; // [rsp+70h] [rbp-90h]
  __int128 v109; // [rsp+80h] [rbp-80h] BYREF
  __m256i v110; // [rsp+90h] [rbp-70h] BYREF
  __int128 v111; // [rsp+B0h] [rbp-50h]
  __int128 v112; // [rsp+C0h] [rbp-40h]
  __int128 v113; // [rsp+D0h] [rbp-30h]
  __int128 v114; // [rsp+E0h] [rbp-20h]
  __int128 v115; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v116; // [rsp+100h] [rbp+0h]
  __int128 v117; // [rsp+110h] [rbp+10h]
  __int128 v118; // [rsp+120h] [rbp+20h]
  __int128 v119; // [rsp+130h] [rbp+30h]
  int v120; // [rsp+140h] [rbp+40h]
  __int128 v121; // [rsp+150h] [rbp+50h] BYREF
  __int64 v122; // [rsp+160h] [rbp+60h]
  __int128 v123; // [rsp+168h] [rbp+68h] BYREF
  __int64 v124; // [rsp+178h] [rbp+78h]

  if ( a1 && (v11 = a1 + 40, *(_DWORD *)(a1 + 40) == 1414021956) )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
    if ( !a3 )
      return v11;
    v12 = a5;
    if ( (a5 & 0x200) != 0 && dwABPreMul )
    {
      dwABPreMul = 0;
      v88 = (unsigned int *)&unk_1C0320694;
      for ( i = 1; i < 0x100; ++i )
      {
        v90 = (i - 16777217) / i;
        *v88++ = v90;
      }
    }
    if ( a4 + 312 >= a4 )
    {
      v13 = (char *)EngAllocMem(1u, a4 + 312, 0x30355448u);
      *a3 = v13;
      v14 = v13;
      v104 = v13;
      if ( v13 )
      {
        v15 = *(_DWORD *)(v11 + 184);
        if ( (v15 & 0x80u) != 0 )
          v12 = a5 | 8;
        DWORD1(v102) = a6;
        if ( HIBYTE(a6) == 1 || HIBYTE(a6) == 0xFE && (*(_DWORD *)(v11 + 184) & 0x300) == 0x300 )
          v12 |= 0x41u;
        v16 = (_DWORD *)(v11 + 3956);
        if ( (v12 & 0x10) == 0 )
          v16 = (_DWORD *)(v11 + 856);
        v106 = v16;
        if ( (v12 & 8) != 0 )
          v12 &= ~0x10u;
        if ( !a2 )
          a2 = (__m128i *)(a1 + 12);
        v17 = a2[1].m128i_i64[0];
        v121 = (__int128)*a2;
        v122 = v17;
        if ( (unsigned __int16)_mm_cvtsi128_si32((__m128i)v121) != 24
          || (v18 = BYTE2(v121), (WORD1(v121) & 0xFFFC) != 0) )
        {
          v121 = DefaultCA;
          v18 = BYTE2(DefaultCA);
          v122 = 0LL;
        }
        v19 = *(_QWORD *)(v11 + 212);
        v123 = *(_OWORD *)(v11 + 196);
        v20 = *(_OWORD *)(v11 + 220);
        WORD1(v121) = v18 & 3;
        v124 = v19;
        v21 = *(_OWORD *)(v11 + 236);
        v107 = v20;
        v22 = *(_OWORD *)(v11 + 252);
        v108 = v21;
        v23 = *(_OWORD *)(v11 + 268);
        v109 = v22;
        v24 = *(_OWORD *)(v11 + 284);
        *(_OWORD *)v110.m256i_i8 = v23;
        v25 = *(_OWORD *)(v11 + 300);
        *(_OWORD *)&v110.m256i_u64[2] = v24;
        v26 = *(_OWORD *)(v11 + 316);
        v111 = v25;
        v27 = *(_OWORD *)(v11 + 332);
        v112 = v26;
        v28 = *(_OWORD *)(v11 + 348);
        v113 = v27;
        v29 = *(_OWORD *)(v11 + 364);
        v114 = v28;
        v30 = *(_OWORD *)(v11 + 380);
        v115 = v29;
        v31 = *(_OWORD *)(v11 + 396);
        v116 = v30;
        v32 = *(_OWORD *)(v11 + 412);
        v117 = v31;
        v33 = *(_OWORD *)(v11 + 428);
        v34 = *(_DWORD *)(v11 + 444);
        v118 = v32;
        v119 = v33;
        v120 = v34;
        if ( WORD2(v121) > 8u )
          WORD2(v121) = 0;
        if ( WORD3(v121) < 0x540u )
        {
          WORD3(v121) = 1344;
        }
        else if ( WORD3(v121) > 0xFDE8u )
        {
          WORD3(v121) = -536;
        }
        if ( WORD4(v121) < 0x540u )
        {
          WORD4(v121) = 1344;
        }
        else if ( WORD4(v121) > 0xFDE8u )
        {
          WORD4(v121) = -536;
        }
        if ( WORD5(v121) < 0x540u )
        {
          WORD5(v121) = 1344;
        }
        else if ( WORD5(v121) > 0xFDE8u )
        {
          WORD5(v121) = -536;
        }
        if ( WORD6(v121) > 0xFA0u )
          WORD6(v121) = 4000;
        v35 = 6000;
        if ( HIWORD(v121) < 0x1770u || (v35 = 10000, HIWORD(v121) > 0x2710u) )
          HIWORD(v121) = v35;
        v36 = 100;
        if ( (__int16)v122 < -100 )
        {
          LOWORD(v122) = -100;
        }
        else if ( (__int16)v122 > 100 )
        {
          LOWORD(v122) = 100;
        }
        if ( SWORD1(v122) < -100 )
        {
          WORD1(v122) = -100;
        }
        else if ( SWORD1(v122) > 100 )
        {
          WORD1(v122) = 100;
        }
        v37 = WORD2(v122);
        if ( SWORD2(v122) < -100 )
        {
          v37 = -100;
          WORD2(v122) = -100;
        }
        else if ( SWORD2(v122) > 100 )
        {
          v37 = 100;
          WORD2(v122) = 100;
        }
        if ( SHIWORD(v122) < -100 )
        {
          HIWORD(v122) = -100;
        }
        else if ( SHIWORD(v122) > 100 )
        {
          HIWORD(v122) = 100;
        }
        if ( (v12 & 1) != 0 || v37 == -100 )
          HIDWORD(v122) = 65436;
        v38 = 2;
        if ( (v12 & 2) != 0 )
          WORD1(v121) = v18 & 2 | 1;
        LOBYTE(v36) = HIBYTE(a6);
        LOWORD(v121) = v12 & 0x8059;
        if ( (unsigned int)AdjustSrcDevGamma(v11, (unsigned int)&v107, (unsigned int)&v121, v36, v12)
          || !(unsigned int)CompareMemory(&v121, &v123, 24LL) )
        {
          v63 = v107 & 0x1007;
          LODWORD(v107) = v63;
          if ( (v12 & 0x40) != 0 )
          {
            v63 |= 0x2000u;
            LODWORD(v107) = v63;
          }
          v44 = (__m128i)v121;
          v64 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v121, 2));
          if ( (v64 & 2) != 0 )
          {
            v40 = 0LL;
            if ( !LogFilterMax )
              LogFilterMax = Log(8000000LL);
            v63 |= 0x100u;
            LODWORD(v107) = v63;
          }
          if ( (v64 & 1) != 0 )
          {
            v63 |= 0x200u;
            LODWORD(v107) = v63;
          }
          v65 = v11 + 36;
          if ( (v63 & 1) == 0 )
            v65 = v11 + 72;
          if ( (((unsigned __int16)_mm_cvtsi128_si32(v44) ^ (unsigned __int16)v123) & 0x8008) != 0 )
          {
            ComputeColorSpaceXForm(v11, v65, (char *)&v115 + 4, 0xFFFFFFFFLL);
            v44 = (__m128i)v121;
            v63 = v107;
          }
          epi16 = _mm_extract_epi16(v44, 2);
          if ( epi16 != WORD2(v123) )
          {
            ComputeColorSpaceXForm(v11, v11 + 36, (char *)&v110.m256i_u64[2] + 4, epi16);
            v44 = (__m128i)v121;
            v63 = v107;
          }
          if ( (v63 & 0x2000) != 0 || (unsigned int)CompareMemory(v65, v11 + 36, 36LL) )
            v67 = v63 & 0xFFFF7FFF;
          else
            v67 = v63 | 0x8000;
          v68 = 100 * (unsigned __int16)_mm_extract_epi16(v44, 6);
          v69 = 100 * (unsigned __int16)_mm_extract_epi16(v44, 7);
          v110.m256i_i64[0] = __PAIR64__(v69, v68);
          if ( v68 || v69 != 1000000 )
          {
            v43 = v67 | 8;
            LODWORD(v107) = v43;
            v110.m256i_i32[2] = DivFD6(0LL, v68, v40, v41);
            v110.m256i_i32[3] = DivFD6(0LL, (unsigned int)(1000000 - v69), v84, v85);
            v110.m256i_i32[4] = DivFD6(1000000LL, v69 - v68, v86, v87);
          }
          else
          {
            v43 = v67 & 0xFFFFFFF7;
            *(__int64 *)((char *)v110.m256i_i64 + 4) = 1000000LL;
            LODWORD(v107) = v43;
            v110.m256i_i32[0] = 0;
            *(__int64 *)((char *)&v110.m256i_i64[1] + 4) = 0LL;
          }
          if ( (_WORD)v122 )
          {
            v43 |= 0x10u;
            HIDWORD(v108) = RaisePower(1015000LL, (unsigned int)(__int16)v122, 2LL);
            LODWORD(v107) = v43;
          }
          if ( WORD1(v122) )
          {
            v43 |= 0x20u;
            LODWORD(v107) = v43;
            LODWORD(v109) = 3750 * SWORD1(v122);
          }
          if ( (v43 & 0x2000) != 0 )
          {
            v42 = 1024;
          }
          else
          {
            DWORD1(v109) = 10000 * (SWORD2(v122) + 100);
            if ( DWORD1(v109) != 1000000 )
            {
              v43 |= 0x40u;
              LODWORD(v107) = v43;
            }
            if ( HIWORD(v122) )
            {
              TintAngle((unsigned int)SHIWORD(v122), v39, (char *)&v109 + 8, (char *)&v109 + 12);
              v43 = v107 | 0x80;
              LODWORD(v107) = v107 | 0x80;
            }
            v42 = 1024;
            if ( (v15 & 4) != 0 && (v43 & 0x1001) == 0x1000 )
            {
              v43 |= 0x400u;
              LODWORD(v107) = v43;
              if ( (v15 & 1) != 0 )
              {
                v43 |= 0x800u;
                LODWORD(v107) = v43;
              }
            }
          }
          v70 = v122;
          v14 = v104;
          *(_OWORD *)(v11 + 220) = v107;
          v71 = v109;
          *(__m128i *)(v11 + 196) = v44;
          *(_QWORD *)(v11 + 212) = v70;
          *(_OWORD *)(v11 + 236) = v108;
          v72 = *(_OWORD *)v110.m256i_i8;
          *(_OWORD *)(v11 + 252) = v71;
          v73 = *(_OWORD *)&v110.m256i_u64[2];
          *(_OWORD *)(v11 + 268) = v72;
          v74 = v111;
          *(_OWORD *)(v11 + 284) = v73;
          v75 = v112;
          *(_OWORD *)(v11 + 300) = v74;
          v76 = v113;
          *(_OWORD *)(v11 + 316) = v75;
          v77 = v114;
          *(_OWORD *)(v11 + 332) = v76;
          v78 = v115;
          *(_OWORD *)(v11 + 348) = v77;
          v79 = v116;
          *(_OWORD *)(v11 + 364) = v78;
          v80 = v117;
          *(_OWORD *)(v11 + 380) = v79;
          v81 = v118;
          *(_OWORD *)(v11 + 396) = v80;
          v82 = v119;
          v83 = v120;
          *(_OWORD *)(v11 + 412) = v81;
          *(_OWORD *)(v11 + 428) = v82;
          *(_DWORD *)(v11 + 444) = v83;
        }
        else
        {
          v43 = v107;
          v44 = (__m128i)v121;
        }
        v45 = v43 & 0x3DB4BFFF;
        LODWORD(v107) = v45;
        if ( (v45 & 0x97FE) == 0 )
        {
          v45 |= 0x80000000;
          LODWORD(v107) = v45;
        }
        if ( (v45 & 0x84C0) == 0 || (v45 & 0x2000) != 0 )
        {
          v45 |= 0x40000000u;
          LODWORD(v107) = v45;
        }
        if ( (v15 & 0x1000) != 0 || (v12 & 0x20) != 0 )
        {
          v45 |= 0x80000u;
          LODWORD(v107) = v45;
        }
        if ( (v12 & 0x80u) == 0 )
        {
LABEL_60:
          if ( (v12 & 4) != 0 )
          {
            v45 |= 0x4000u;
            LODWORD(v107) = v45;
          }
          HIDWORD(v103) = 1000000;
          v123 = 0uLL;
          v124 = 0LL;
          LODWORD(v102) = 67372032;
          BYTE4(v102) = 3;
          if ( (v45 & 0x2000) != 0 )
          {
            v45 |= 0x40000u;
            LOBYTE(v102) = 1;
            LODWORD(v107) = v45;
            v46 = 0xFFFF;
            DWORD1(v103) = 0;
          }
          else
          {
            DWORD1(v103) = 4096;
            v46 = 4095;
          }
          DWORD2(v102) = v46;
          HIDWORD(v102) = v46;
          LODWORD(v103) = v46;
          switch ( HIBYTE(a6) )
          {
            case 1u:
              BYTE6(v102) = 0;
              goto LABEL_69;
            case 2u:
LABEL_139:
              BYTE3(v102) = 6;
              *(_QWORD *)&v123 = 0x20000000100000LL;
              *((_QWORD *)&v123 + 1) = 0x1000000400000LL;
              v124 = 0x4000000020000LL;
              *(_WORD *)((char *)&v102 + 1) = 1284;
              DWORD1(v103) = 0;
              goto LABEL_69;
            case 5u:
            case 6u:
              *(_QWORD *)&v103 = 255LL;
              *((_QWORD *)&v102 + 1) = 0xFF000000FFLL;
              WORD1(v102) = 0;
              BYTE1(v102) = 0;
              *(_QWORD *)&v123 = 0x100000000LL;
              DWORD2(v123) = 2;
LABEL_69:
              *(__m128i *)v14 = v44;
              v47 = DstOrderTable[BYTE6(v102)];
              *(_OWORD *)(v14 + 24) = v102;
              DWORD2(v103) = v47;
              *(_OWORD *)(v14 + 40) = v103;
              v48 = *((_DWORD *)&v123 + BYTE1(v47));
              *((_QWORD *)v14 + 2) = v122;
              v106[3] = v48;
              v106[2] = *((_DWORD *)&v123 + BYTE2(v47));
              v106[1] = *((_DWORD *)&v123 + HIBYTE(v47));
              v106[6] = *((_DWORD *)&v123 + BYTE1(v47) + 3);
              v106[5] = *((_DWORD *)&v123 + BYTE2(v47) + 3);
              v106[4] = *((_DWORD *)&v123 + HIBYTE(v47) + 3);
              v49 = v108;
              *(_OWORD *)(v14 + 56) = v107;
              v50 = v109;
              *(_OWORD *)(v14 + 72) = v49;
              v51 = *(_OWORD *)v110.m256i_i8;
              *(_OWORD *)(v14 + 88) = v50;
              v52 = *(_OWORD *)&v110.m256i_u64[2];
              *(_OWORD *)(v14 + 104) = v51;
              v53 = v111;
              *(_OWORD *)(v14 + 120) = v52;
              v54 = v112;
              *(_OWORD *)(v14 + 136) = v53;
              v55 = v113;
              *(_OWORD *)(v14 + 152) = v54;
              *(_OWORD *)(v14 + 168) = v55;
              v56 = v115;
              *(_OWORD *)(v14 + 184) = v114;
              v57 = v116;
              *(_OWORD *)(v14 + 200) = v56;
              v58 = v117;
              *(_OWORD *)(v14 + 216) = v57;
              v59 = v118;
              *(_OWORD *)(v14 + 232) = v58;
              v60 = v119;
              v61 = v120;
              *(_OWORD *)(v14 + 248) = v59;
              *(_OWORD *)(v14 + 264) = v60;
              *((_DWORD *)v14 + 70) = v61;
              *((_QWORD *)v14 + 36) = v11 + 32;
              *((_QWORD *)v14 + 37) = v11 + 808;
              *((_QWORD *)v14 + 38) = v11 + 832;
              return v11;
            case 0xFCu:
              if ( BYTE2(a6) )
              {
                v101 = BYTE2(a6);
                if ( BYTE2(a6) != 4 )
                  v101 = 0;
                BYTE6(v102) = v101;
              }
              LODWORD(v103) = 126975;
              *((_QWORD *)&v102 + 1) = 0x3EFFF0001EFFFLL;
              v124 = -1LL;
              *(_QWORD *)&v123 = 0x7E00000001F0000LL;
              *((_QWORD *)&v123 + 1) = -134217728LL;
              *(_WORD *)((char *)&v102 + 1) = 2308;
              BYTE3(v102) = 15;
              goto LABEL_69;
            case 0xFDu:
              *(_QWORD *)&v123 = 0x3E00000001F0000LL;
              LODWORD(v103) = 126975;
              *((_QWORD *)&v102 + 1) = 0x1EFFF0001EFFFLL;
              v124 = 0x7FFF7FFF7FFF7FFFLL;
              *((_QWORD *)&v123 + 1) = 0x7FFF7FFF7C000000LL;
              *(_WORD *)((char *)&v102 + 1) = 2308;
              BYTE3(v102) = 14;
              goto LABEL_69;
          }
          if ( HIBYTE(a6) != 254 )
          {
            if ( HIBYTE(a6) != 255 )
              goto LABEL_69;
            BYTE6(v102) = 4;
            LODWORD(v107) = v45 | 0x4000;
            goto LABEL_139;
          }
          if ( (v15 & 0x100) == 0 )
          {
            *(_QWORD *)&v123 = 0x38000000070000LL;
            LODWORD(v103) = 20479;
            *((_QWORD *)&v102 + 1) = 0x4FFF00004FFFLL;
            BYTE3(v102) = 10;
            LODWORD(v107) = v45 & 0xFFFEFFFF;
            DWORD2(v123) = 29360128;
            *(_WORD *)((char *)&v102 + 1) = 1796;
            BYTE6(v102) = 4;
            goto LABEL_69;
          }
          v91 = v45 | 0x10000;
          LOBYTE(v105) = 0;
          LODWORD(v107) = v91;
          if ( *(_BYTE *)(v11 + 804) )
          {
            GenCMYMaskXlate(
              v11 + 548,
              v15 & 0x2000,
              *(unsigned __int8 *)(v11 + 448),
              *(unsigned __int8 *)(v11 + 449),
              *(unsigned __int8 *)(v11 + 450));
            *(_BYTE *)(v11 + 804) = 0;
          }
          if ( (v15 & 0x2000) != 0 )
          {
            LOWORD(v105) = -254;
            v92 = -1;
          }
          else
          {
            v38 = 0;
            v92 = 0;
            BYTE1(v105) = 0;
          }
          HIBYTE(v105) = v92;
          BYTE2(v105) = v92 ^ *(_BYTE *)(v11 + 452);
          if ( (v15 & 0x200) != 0 )
          {
            WORD3(v102) = -1280;
            *(_QWORD *)((char *)&v123 + 4) = 0xFF000000FF0000LL;
            LODWORD(v123) = 16711680;
LABEL_164:
            HIDWORD(v124) = v105;
            LODWORD(v124) = v105;
            HIDWORD(v123) = v105;
            goto LABEL_69;
          }
          v93 = 10;
          v94 = *(_BYTE *)(v11 + 453);
          v95 = 7;
          *(_WORD *)((char *)&v102 + 1) = 1796;
          DWORD2(v102) = (*(unsigned __int8 *)(v11 + 450) << 12) - 1;
          BYTE3(v102) = 10;
          HIDWORD(v102) = (*(unsigned __int8 *)(v11 + 449) << 12) - 1;
          LODWORD(v103) = (*(unsigned __int8 *)(v11 + 448) << 12) - 1;
          LODWORD(v123) = *(unsigned __int16 *)(v11 + 458);
          DWORD1(v123) = *(unsigned __int16 *)(v11 + 456);
          DWORD2(v123) = *(unsigned __int16 *)(v11 + 454);
          if ( (unsigned __int8)(v94 - 4) > 1u )
          {
            WORD1(v102) = 2310;
            v96 = -6;
            BYTE7(v102) = -6;
            v95 = 6;
            v93 = 9;
            if ( (v15 & 0x2000) == 0 )
            {
LABEL_156:
              v100 = *(_DWORD *)(v11 + 472);
              if ( v100 )
              {
                LODWORD(v107) = v91 | 0x20000;
                HIDWORD(v103) = v100;
                BYTE1(v102) = 0;
                BYTE2(v102) = v95 - 4;
                BYTE3(v102) = v93 - 4;
                switch ( v96 )
                {
                  case 0xF8u:
                    BYTE7(v102) = -11;
                    break;
                  case 0xF9u:
                    BYTE7(v102) = -10;
                    break;
                  case 0xFAu:
                    BYTE7(v102) = -9;
                    break;
                }
              }
              BYTE6(v102) = 0;
              goto LABEL_164;
            }
            v91 |= 0x2000000u;
            BYTE2(v105) = *(_BYTE *)(v11 + 803);
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
            BYTE7(v102) = v96;
            LOBYTE(v105) = v38 & 3;
            v98 = (char *)*(&p8BPPXlate + (v38 & 3));
            v99 = *v98;
            BYTE2(v105) = v98[v97];
          }
          HIBYTE(v105) = v99;
          LODWORD(v107) = v91;
          goto LABEL_156;
        }
        v45 |= 0x100000u;
        LODWORD(v107) = v45;
        if ( (v12 & 0x100) != 0 )
        {
          v45 |= 0x200000u;
        }
        else
        {
          if ( (v12 & 0x200) != 0 )
          {
            v45 |= 0x800000u;
            LODWORD(v107) = v45;
          }
          if ( ((unsigned __int16)v12 & (unsigned __int16)v42) == 0 )
            goto LABEL_60;
          v45 |= 0x1000000u;
        }
        LODWORD(v107) = v45;
        goto LABEL_60;
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
