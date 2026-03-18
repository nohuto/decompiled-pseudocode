/*
 * XREFs of pDCIAdjClr @ 0x1C00BEF78
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C00BD0EC (HT_HalftoneBitmap.c)
 *     HT_CreateStandardMonoPattern @ 0x1C0140944 (HT_CreateStandardMonoPattern.c)
 *     HT_CreateHalftoneBrush @ 0x1C024D8B8 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     RaisePower @ 0x1C0001738 (RaisePower.c)
 *     Log @ 0x1C0001938 (Log.c)
 *     AdjustSrcDevGamma @ 0x1C00BF960 (AdjustSrcDevGamma.c)
 *     ComputeColorSpaceXForm @ 0x1C00C0304 (ComputeColorSpaceXForm.c)
 *     DivFD6 @ 0x1C00C0F60 (DivFD6.c)
 *     CompareMemory @ 0x1C00C13A4 (CompareMemory.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     GenCMYMaskXlate @ 0x1C024F018 (GenCMYMaskXlate.c)
 *     TintAngle @ 0x1C024F214 (TintAngle.c)
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
  __int16 v40; // r11
  unsigned int v41; // ebx
  __m128i v42; // xmm2
  int v43; // ebx
  int v44; // eax
  int v45; // eax
  int v46; // ecx
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  int v59; // eax
  int v61; // ebx
  char v62; // r15
  __int64 v63; // r15
  unsigned __int16 epi16; // ax
  unsigned int v65; // ebx
  unsigned int v66; // r12d
  int v67; // r15d
  __int64 v68; // xmm1_8
  __int128 v69; // xmm0
  __int128 v70; // xmm1
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
  int v81; // eax
  unsigned int *v82; // r8
  unsigned int i; // ecx
  unsigned int v84; // eax
  int v85; // ebx
  char v86; // cl
  char v87; // r8
  char v88; // cl
  char v89; // r9
  unsigned __int8 v90; // r10
  unsigned int v91; // ecx
  char *v92; // rdx
  char v93; // al
  int v94; // eax
  char v95; // al
  __int128 v96; // [rsp+30h] [rbp-D0h]
  __int128 v97; // [rsp+40h] [rbp-C0h]
  char *v98; // [rsp+50h] [rbp-B0h]
  int v99; // [rsp+50h] [rbp-B0h]
  _DWORD *v100; // [rsp+58h] [rbp-A8h]
  __int128 v101; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v102; // [rsp+70h] [rbp-90h]
  __int128 v103; // [rsp+80h] [rbp-80h] BYREF
  __m256i v104; // [rsp+90h] [rbp-70h] BYREF
  __int128 v105; // [rsp+B0h] [rbp-50h]
  __int128 v106; // [rsp+C0h] [rbp-40h]
  __int128 v107; // [rsp+D0h] [rbp-30h]
  __int128 v108; // [rsp+E0h] [rbp-20h]
  __int128 v109; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v110; // [rsp+100h] [rbp+0h]
  __int128 v111; // [rsp+110h] [rbp+10h]
  __int128 v112; // [rsp+120h] [rbp+20h]
  __int128 v113; // [rsp+130h] [rbp+30h]
  int v114; // [rsp+140h] [rbp+40h]
  __int128 v115; // [rsp+150h] [rbp+50h] BYREF
  __int64 v116; // [rsp+160h] [rbp+60h]
  __int128 v117; // [rsp+168h] [rbp+68h] BYREF
  __int64 v118; // [rsp+178h] [rbp+78h]

  if ( a1 && (v11 = a1 + 40, *(_DWORD *)(a1 + 40) == 1414021956) )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
    if ( !a3 )
      return v11;
    v12 = a5;
    if ( (a5 & 0x200) != 0 && dwABPreMul )
    {
      dwABPreMul = 0;
      v82 = (unsigned int *)&unk_1C0320654;
      for ( i = 1; i < 0x100; ++i )
      {
        v84 = (i - 16777217) / i;
        *v82++ = v84;
      }
    }
    if ( a4 + 312 >= a4 )
    {
      v13 = (char *)EngAllocMem(1u, a4 + 312, 0x30355448u);
      *a3 = v13;
      v14 = v13;
      v98 = v13;
      if ( v13 )
      {
        v15 = *(_DWORD *)(v11 + 184);
        if ( (v15 & 0x80u) != 0 )
          v12 = a5 | 8;
        DWORD1(v96) = a6;
        if ( HIBYTE(a6) == 1 || HIBYTE(a6) == 0xFE && (*(_DWORD *)(v11 + 184) & 0x300) == 0x300 )
          v12 |= 0x41u;
        v16 = (_DWORD *)(v11 + 3956);
        if ( (v12 & 0x10) == 0 )
          v16 = (_DWORD *)(v11 + 856);
        v100 = v16;
        if ( (v12 & 8) != 0 )
          v12 &= ~0x10u;
        if ( !a2 )
          a2 = (__m128i *)(a1 + 12);
        v17 = a2[1].m128i_i64[0];
        v115 = (__int128)*a2;
        v116 = v17;
        if ( (unsigned __int16)_mm_cvtsi128_si32((__m128i)v115) != 24
          || (v18 = BYTE2(v115), (WORD1(v115) & 0xFFFC) != 0) )
        {
          v115 = DefaultCA;
          v18 = BYTE2(DefaultCA);
          v116 = 0LL;
        }
        v19 = *(_QWORD *)(v11 + 212);
        v117 = *(_OWORD *)(v11 + 196);
        v20 = *(_OWORD *)(v11 + 220);
        WORD1(v115) = v18 & 3;
        v118 = v19;
        v21 = *(_OWORD *)(v11 + 236);
        v101 = v20;
        v22 = *(_OWORD *)(v11 + 252);
        v102 = v21;
        v23 = *(_OWORD *)(v11 + 268);
        v103 = v22;
        v24 = *(_OWORD *)(v11 + 284);
        *(_OWORD *)v104.m256i_i8 = v23;
        v25 = *(_OWORD *)(v11 + 300);
        *(_OWORD *)&v104.m256i_u64[2] = v24;
        v26 = *(_OWORD *)(v11 + 316);
        v105 = v25;
        v27 = *(_OWORD *)(v11 + 332);
        v106 = v26;
        v28 = *(_OWORD *)(v11 + 348);
        v107 = v27;
        v29 = *(_OWORD *)(v11 + 364);
        v108 = v28;
        v30 = *(_OWORD *)(v11 + 380);
        v109 = v29;
        v31 = *(_OWORD *)(v11 + 396);
        v110 = v30;
        v32 = *(_OWORD *)(v11 + 412);
        v111 = v31;
        v33 = *(_OWORD *)(v11 + 428);
        v34 = *(_DWORD *)(v11 + 444);
        v112 = v32;
        v113 = v33;
        v114 = v34;
        if ( WORD2(v115) > 8u )
          WORD2(v115) = 0;
        if ( WORD3(v115) < 0x540u )
        {
          WORD3(v115) = 1344;
        }
        else if ( WORD3(v115) > 0xFDE8u )
        {
          WORD3(v115) = -536;
        }
        if ( WORD4(v115) < 0x540u )
        {
          WORD4(v115) = 1344;
        }
        else if ( WORD4(v115) > 0xFDE8u )
        {
          WORD4(v115) = -536;
        }
        if ( WORD5(v115) < 0x540u )
        {
          WORD5(v115) = 1344;
        }
        else if ( WORD5(v115) > 0xFDE8u )
        {
          WORD5(v115) = -536;
        }
        if ( WORD6(v115) > 0xFA0u )
          WORD6(v115) = 4000;
        v35 = 6000;
        if ( HIWORD(v115) < 0x1770u || (v35 = 10000, HIWORD(v115) > 0x2710u) )
          HIWORD(v115) = v35;
        v36 = 100;
        if ( (__int16)v116 < -100 )
        {
          LOWORD(v116) = -100;
        }
        else if ( (__int16)v116 > 100 )
        {
          LOWORD(v116) = 100;
        }
        if ( SWORD1(v116) < -100 )
        {
          WORD1(v116) = -100;
        }
        else if ( SWORD1(v116) > 100 )
        {
          WORD1(v116) = 100;
        }
        v37 = WORD2(v116);
        if ( SWORD2(v116) < -100 )
        {
          v37 = -100;
          WORD2(v116) = -100;
        }
        else if ( SWORD2(v116) > 100 )
        {
          v37 = 100;
          WORD2(v116) = 100;
        }
        if ( SHIWORD(v116) < -100 )
        {
          HIWORD(v116) = -100;
        }
        else if ( SHIWORD(v116) > 100 )
        {
          HIWORD(v116) = 100;
        }
        if ( (v12 & 1) != 0 || v37 == -100 )
          HIDWORD(v116) = 65436;
        v38 = 2;
        if ( (v12 & 2) != 0 )
          WORD1(v115) = v18 & 2 | 1;
        LOBYTE(v36) = HIBYTE(a6);
        LOWORD(v115) = v12 & 0x8059;
        if ( (unsigned int)AdjustSrcDevGamma(v11, (unsigned int)&v101, (unsigned int)&v115, v36, v12)
          || !(unsigned int)CompareMemory(&v115, &v117, 24LL) )
        {
          v61 = v101 & 0x1007;
          LODWORD(v101) = v61;
          if ( (v12 & 0x40) != 0 )
          {
            v61 |= 0x2000u;
            LODWORD(v101) = v61;
          }
          v42 = (__m128i)v115;
          v62 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v115, 2));
          if ( (v62 & 2) != 0 )
          {
            if ( !LogFilterMax )
              LogFilterMax = Log(8000000LL);
            v61 |= 0x100u;
            LODWORD(v101) = v61;
          }
          if ( (v62 & 1) != 0 )
          {
            v61 |= 0x200u;
            LODWORD(v101) = v61;
          }
          v63 = v11 + 36;
          if ( (v61 & 1) == 0 )
            v63 = v11 + 72;
          if ( (((unsigned __int16)_mm_cvtsi128_si32(v42) ^ (unsigned __int16)v117) & 0x8008) != 0 )
          {
            ComputeColorSpaceXForm(v11, v63, (char *)&v109 + 4, 0xFFFFFFFFLL);
            v42 = (__m128i)v115;
            v61 = v101;
          }
          epi16 = _mm_extract_epi16(v42, 2);
          if ( epi16 != WORD2(v117) )
          {
            ComputeColorSpaceXForm(v11, v11 + 36, (char *)&v104.m256i_u64[2] + 4, epi16);
            v42 = (__m128i)v115;
            v61 = v101;
          }
          if ( (v61 & 0x2000) != 0 || (unsigned int)CompareMemory(v63, v11 + 36, 36LL) )
            v65 = v61 & 0xFFFF7FFF;
          else
            v65 = v61 | 0x8000;
          v66 = 100 * (unsigned __int16)_mm_extract_epi16(v42, 6);
          v67 = 100 * (unsigned __int16)_mm_extract_epi16(v42, 7);
          v104.m256i_i64[0] = __PAIR64__(v67, v66);
          if ( v66 || v67 != 1000000 )
          {
            v41 = v65 | 8;
            LODWORD(v101) = v41;
            v104.m256i_i32[2] = DivFD6(0LL, v66);
            v104.m256i_i32[3] = DivFD6(0LL, (unsigned int)(1000000 - v67));
            v104.m256i_i32[4] = DivFD6(1000000LL, v67 - v66);
          }
          else
          {
            v41 = v65 & 0xFFFFFFF7;
            *(__int64 *)((char *)v104.m256i_i64 + 4) = 1000000LL;
            LODWORD(v101) = v41;
            v104.m256i_i32[0] = 0;
            *(__int64 *)((char *)&v104.m256i_i64[1] + 4) = 0LL;
          }
          if ( (_WORD)v116 )
          {
            v41 |= 0x10u;
            HIDWORD(v102) = RaisePower(1015000, (unsigned int)(__int16)v116, 2LL);
            LODWORD(v101) = v41;
          }
          if ( WORD1(v116) )
          {
            v41 |= 0x20u;
            LODWORD(v101) = v41;
            LODWORD(v103) = 3750 * SWORD1(v116);
          }
          if ( (v41 & 0x2000) != 0 )
          {
            v40 = 1024;
          }
          else
          {
            DWORD1(v103) = 10000 * (SWORD2(v116) + 100);
            if ( DWORD1(v103) != 1000000 )
            {
              v41 |= 0x40u;
              LODWORD(v101) = v41;
            }
            if ( HIWORD(v116) )
            {
              TintAngle((unsigned int)SHIWORD(v116), v39, (char *)&v103 + 8, (char *)&v103 + 12);
              v41 = v101 | 0x80;
              LODWORD(v101) = v101 | 0x80;
            }
            v40 = 1024;
            if ( (v15 & 4) != 0 && (v41 & 0x1001) == 0x1000 )
            {
              v41 |= 0x400u;
              LODWORD(v101) = v41;
              if ( (v15 & 1) != 0 )
              {
                v41 |= 0x800u;
                LODWORD(v101) = v41;
              }
            }
          }
          v68 = v116;
          v14 = v98;
          *(_OWORD *)(v11 + 220) = v101;
          v69 = v103;
          *(__m128i *)(v11 + 196) = v42;
          *(_QWORD *)(v11 + 212) = v68;
          *(_OWORD *)(v11 + 236) = v102;
          v70 = *(_OWORD *)v104.m256i_i8;
          *(_OWORD *)(v11 + 252) = v69;
          v71 = *(_OWORD *)&v104.m256i_u64[2];
          *(_OWORD *)(v11 + 268) = v70;
          v72 = v105;
          *(_OWORD *)(v11 + 284) = v71;
          v73 = v106;
          *(_OWORD *)(v11 + 300) = v72;
          v74 = v107;
          *(_OWORD *)(v11 + 316) = v73;
          v75 = v108;
          *(_OWORD *)(v11 + 332) = v74;
          v76 = v109;
          *(_OWORD *)(v11 + 348) = v75;
          v77 = v110;
          *(_OWORD *)(v11 + 364) = v76;
          v78 = v111;
          *(_OWORD *)(v11 + 380) = v77;
          v79 = v112;
          *(_OWORD *)(v11 + 396) = v78;
          v80 = v113;
          v81 = v114;
          *(_OWORD *)(v11 + 412) = v79;
          *(_OWORD *)(v11 + 428) = v80;
          *(_DWORD *)(v11 + 444) = v81;
        }
        else
        {
          v41 = v101;
          v42 = (__m128i)v115;
        }
        v43 = v41 & 0x3DB4BFFF;
        LODWORD(v101) = v43;
        if ( (v43 & 0x97FE) == 0 )
        {
          v43 |= 0x80000000;
          LODWORD(v101) = v43;
        }
        if ( (v43 & 0x84C0) == 0 || (v43 & 0x2000) != 0 )
        {
          v43 |= 0x40000000u;
          LODWORD(v101) = v43;
        }
        if ( (v15 & 0x1000) != 0 || (v12 & 0x20) != 0 )
        {
          v43 |= 0x80000u;
          LODWORD(v101) = v43;
        }
        if ( (v12 & 0x80u) == 0 )
        {
LABEL_60:
          if ( (v12 & 4) != 0 )
          {
            v43 |= 0x4000u;
            LODWORD(v101) = v43;
          }
          HIDWORD(v97) = 1000000;
          v117 = 0uLL;
          v118 = 0LL;
          LODWORD(v96) = 67372032;
          BYTE4(v96) = 3;
          if ( (v43 & 0x2000) != 0 )
          {
            v43 |= 0x40000u;
            LOBYTE(v96) = 1;
            LODWORD(v101) = v43;
            v44 = 0xFFFF;
            DWORD1(v97) = 0;
          }
          else
          {
            DWORD1(v97) = 4096;
            v44 = 4095;
          }
          DWORD2(v96) = v44;
          HIDWORD(v96) = v44;
          LODWORD(v97) = v44;
          switch ( HIBYTE(a6) )
          {
            case 1u:
              BYTE6(v96) = 0;
              goto LABEL_69;
            case 2u:
LABEL_139:
              BYTE3(v96) = 6;
              *(_QWORD *)&v117 = 0x20000000100000LL;
              *((_QWORD *)&v117 + 1) = 0x1000000400000LL;
              v118 = 0x4000000020000LL;
              *(_WORD *)((char *)&v96 + 1) = 1284;
              DWORD1(v97) = 0;
              goto LABEL_69;
            case 5u:
            case 6u:
              *(_QWORD *)&v97 = 255LL;
              *((_QWORD *)&v96 + 1) = 0xFF000000FFLL;
              WORD1(v96) = 0;
              BYTE1(v96) = 0;
              *(_QWORD *)&v117 = 0x100000000LL;
              DWORD2(v117) = 2;
LABEL_69:
              *(__m128i *)v14 = v42;
              v45 = DstOrderTable[BYTE6(v96)];
              *(_OWORD *)(v14 + 24) = v96;
              DWORD2(v97) = v45;
              *(_OWORD *)(v14 + 40) = v97;
              v46 = *((_DWORD *)&v117 + BYTE1(v45));
              *((_QWORD *)v14 + 2) = v116;
              v100[3] = v46;
              v100[2] = *((_DWORD *)&v117 + BYTE2(v45));
              v100[1] = *((_DWORD *)&v117 + HIBYTE(v45));
              v100[6] = *((_DWORD *)&v117 + BYTE1(v45) + 3);
              v100[5] = *((_DWORD *)&v117 + BYTE2(v45) + 3);
              v100[4] = *((_DWORD *)&v117 + HIBYTE(v45) + 3);
              v47 = v102;
              *(_OWORD *)(v14 + 56) = v101;
              v48 = v103;
              *(_OWORD *)(v14 + 72) = v47;
              v49 = *(_OWORD *)v104.m256i_i8;
              *(_OWORD *)(v14 + 88) = v48;
              v50 = *(_OWORD *)&v104.m256i_u64[2];
              *(_OWORD *)(v14 + 104) = v49;
              v51 = v105;
              *(_OWORD *)(v14 + 120) = v50;
              v52 = v106;
              *(_OWORD *)(v14 + 136) = v51;
              v53 = v107;
              *(_OWORD *)(v14 + 152) = v52;
              *(_OWORD *)(v14 + 168) = v53;
              v54 = v109;
              *(_OWORD *)(v14 + 184) = v108;
              v55 = v110;
              *(_OWORD *)(v14 + 200) = v54;
              v56 = v111;
              *(_OWORD *)(v14 + 216) = v55;
              v57 = v112;
              *(_OWORD *)(v14 + 232) = v56;
              v58 = v113;
              v59 = v114;
              *(_OWORD *)(v14 + 248) = v57;
              *(_OWORD *)(v14 + 264) = v58;
              *((_DWORD *)v14 + 70) = v59;
              *((_QWORD *)v14 + 36) = v11 + 32;
              *((_QWORD *)v14 + 37) = v11 + 808;
              *((_QWORD *)v14 + 38) = v11 + 832;
              return v11;
            case 0xFCu:
              if ( BYTE2(a6) )
              {
                v95 = BYTE2(a6);
                if ( BYTE2(a6) != 4 )
                  v95 = 0;
                BYTE6(v96) = v95;
              }
              LODWORD(v97) = 126975;
              *((_QWORD *)&v96 + 1) = 0x3EFFF0001EFFFLL;
              v118 = -1LL;
              *(_QWORD *)&v117 = 0x7E00000001F0000LL;
              *((_QWORD *)&v117 + 1) = -134217728LL;
              *(_WORD *)((char *)&v96 + 1) = 2308;
              BYTE3(v96) = 15;
              goto LABEL_69;
            case 0xFDu:
              *(_QWORD *)&v117 = 0x3E00000001F0000LL;
              LODWORD(v97) = 126975;
              *((_QWORD *)&v96 + 1) = 0x1EFFF0001EFFFLL;
              v118 = 0x7FFF7FFF7FFF7FFFLL;
              *((_QWORD *)&v117 + 1) = 0x7FFF7FFF7C000000LL;
              *(_WORD *)((char *)&v96 + 1) = 2308;
              BYTE3(v96) = 14;
              goto LABEL_69;
          }
          if ( HIBYTE(a6) != 254 )
          {
            if ( HIBYTE(a6) != 255 )
              goto LABEL_69;
            BYTE6(v96) = 4;
            LODWORD(v101) = v43 | 0x4000;
            goto LABEL_139;
          }
          if ( (v15 & 0x100) == 0 )
          {
            *(_QWORD *)&v117 = 0x38000000070000LL;
            LODWORD(v97) = 20479;
            *((_QWORD *)&v96 + 1) = 0x4FFF00004FFFLL;
            BYTE3(v96) = 10;
            LODWORD(v101) = v43 & 0xFFFEFFFF;
            DWORD2(v117) = 29360128;
            *(_WORD *)((char *)&v96 + 1) = 1796;
            BYTE6(v96) = 4;
            goto LABEL_69;
          }
          v85 = v43 | 0x10000;
          LOBYTE(v99) = 0;
          LODWORD(v101) = v85;
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
            LOWORD(v99) = -254;
            v86 = -1;
          }
          else
          {
            v38 = 0;
            v86 = 0;
            BYTE1(v99) = 0;
          }
          HIBYTE(v99) = v86;
          BYTE2(v99) = v86 ^ *(_BYTE *)(v11 + 452);
          if ( (v15 & 0x200) != 0 )
          {
            WORD3(v96) = -1280;
            *(_QWORD *)((char *)&v117 + 4) = 0xFF000000FF0000LL;
            LODWORD(v117) = 16711680;
LABEL_164:
            HIDWORD(v118) = v99;
            LODWORD(v118) = v99;
            HIDWORD(v117) = v99;
            goto LABEL_69;
          }
          v87 = 10;
          v88 = *(_BYTE *)(v11 + 453);
          v89 = 7;
          *(_WORD *)((char *)&v96 + 1) = 1796;
          DWORD2(v96) = (*(unsigned __int8 *)(v11 + 450) << 12) - 1;
          BYTE3(v96) = 10;
          HIDWORD(v96) = (*(unsigned __int8 *)(v11 + 449) << 12) - 1;
          LODWORD(v97) = (*(unsigned __int8 *)(v11 + 448) << 12) - 1;
          LODWORD(v117) = *(unsigned __int16 *)(v11 + 458);
          DWORD1(v117) = *(unsigned __int16 *)(v11 + 456);
          DWORD2(v117) = *(unsigned __int16 *)(v11 + 454);
          if ( (unsigned __int8)(v88 - 4) > 1u )
          {
            WORD1(v96) = 2310;
            v90 = -6;
            BYTE7(v96) = -6;
            v89 = 6;
            v87 = 9;
            if ( (v15 & 0x2000) == 0 )
            {
LABEL_156:
              v94 = *(_DWORD *)(v11 + 472);
              if ( v94 )
              {
                LODWORD(v101) = v85 | 0x20000;
                HIDWORD(v97) = v94;
                BYTE1(v96) = 0;
                BYTE2(v96) = v89 - 4;
                BYTE3(v96) = v87 - 4;
                switch ( v90 )
                {
                  case 0xF8u:
                    BYTE7(v96) = -11;
                    break;
                  case 0xF9u:
                    BYTE7(v96) = -10;
                    break;
                  case 0xFAu:
                    BYTE7(v96) = -9;
                    break;
                }
              }
              BYTE6(v96) = 0;
              goto LABEL_164;
            }
            v85 |= 0x2000000u;
            BYTE2(v99) = *(_BYTE *)(v11 + 803);
            v93 = *(_BYTE *)(v11 + 548);
          }
          else
          {
            if ( v88 == 4 )
            {
              v90 = -7;
              v91 = 292;
            }
            else
            {
              v90 = -8;
              v38 |= 1u;
              v91 = 365;
            }
            v85 |= 0x400000u;
            BYTE7(v96) = v90;
            LOBYTE(v99) = v38 & 3;
            v92 = (char *)*(&p8BPPXlate + (v38 & 3));
            v93 = *v92;
            BYTE2(v99) = v92[v91];
          }
          HIBYTE(v99) = v93;
          LODWORD(v101) = v85;
          goto LABEL_156;
        }
        v43 |= 0x100000u;
        LODWORD(v101) = v43;
        if ( (v12 & 0x100) != 0 )
        {
          v43 |= 0x200000u;
        }
        else
        {
          if ( (v12 & 0x200) != 0 )
          {
            v43 |= 0x800000u;
            LODWORD(v101) = v43;
          }
          if ( ((unsigned __int16)v12 & (unsigned __int16)v40) == 0 )
            goto LABEL_60;
          v43 |= 0x1000000u;
        }
        LODWORD(v101) = v43;
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
