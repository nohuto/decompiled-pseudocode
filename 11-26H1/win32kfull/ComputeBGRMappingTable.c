/*
 * XREFs of ComputeBGRMappingTable @ 0x140304568
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1401441D4 (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x140305660 (CreateHalftoneBrushPat.c)
 * Callees:
 *     MulFD6 @ 0x140146A98 (MulFD6.c)
 *     RaisePower @ 0x140146BD0 (RaisePower.c)
 *     DivFD6 @ 0x140146D00 (DivFD6.c)
 *     MulDivFD6Pairs @ 0x140147938 (MulDivFD6Pairs.c)
 *     FD6DivL @ 0x1401E6950 (FD6DivL.c)
 *     CacheRGBToXYZ @ 0x140304478 (CacheRGBToXYZ.c)
 *     ScaleRGB @ 0x14030534C (ScaleRGB.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall ComputeBGRMappingTable(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  char *v5; // r12
  __m128i v6; // xmm2
  unsigned __int64 *v7; // r14
  int v8; // ebx
  unsigned __int8 v9; // al
  unsigned __int8 v10; // r15
  char v11; // r8
  char v12; // cl
  unsigned int v13; // edx
  __int64 v15; // r13
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rax
  char v20; // cl
  int v21; // eax
  unsigned __int16 v22; // bx
  __int16 v23; // r15
  int v24; // r14d
  int v25; // r12d
  int v26; // ebx
  int v27; // eax
  int v28; // eax
  char *v29; // rax
  __int64 v30; // rbx
  int v31; // edx
  int v32; // r8d
  unsigned int v33; // ebx
  int v34; // r9d
  int v35; // ecx
  _DWORD *v36; // r13
  int v37; // r10d
  __int64 v38; // r11
  int v39; // eax
  int v40; // esi
  int v41; // ebx
  int v42; // r14d
  int v43; // edx
  int v44; // eax
  int v45; // r12d
  int v46; // r15d
  int v47; // ebx
  int v48; // edx
  int v49; // esi
  int v50; // r14d
  int v51; // edx
  int v52; // ecx
  int v53; // esi
  int v54; // eax
  int v55; // ebx
  int v56; // esi
  int v57; // r14d
  int v58; // eax
  int v59; // eax
  int v60; // ebx
  int v61; // esi
  int v62; // eax
  int v63; // esi
  int v64; // ebx
  int v65; // eax
  int v66; // eax
  int v67; // edx
  int v68; // esi
  int v69; // eax
  int v70; // eax
  int v71; // edx
  int v72; // ecx
  int v73; // eax
  int v74; // edx
  int v75; // ebx
  int v76; // edx
  int v77; // eax
  int v78; // eax
  int v79; // r15d
  int v80; // ecx
  _DWORD *v81; // rbx
  int v82; // r15d
  char v83; // al
  _BYTE *v84; // r15
  char v85; // al
  PVOID v86; // rax
  size_t v87; // r8
  char v88; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v89; // [rsp+24h] [rbp-DCh]
  int v90; // [rsp+24h] [rbp-DCh]
  int v91; // [rsp+28h] [rbp-D8h]
  int v92; // [rsp+28h] [rbp-D8h]
  int v93; // [rsp+2Ch] [rbp-D4h]
  int v94; // [rsp+2Ch] [rbp-D4h]
  int v95; // [rsp+30h] [rbp-D0h]
  int v96; // [rsp+34h] [rbp-CCh]
  __int16 v97; // [rsp+3Ch] [rbp-C4h]
  int v98; // [rsp+40h] [rbp-C0h]
  int v99; // [rsp+44h] [rbp-BCh]
  int v100; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 *v101; // [rsp+50h] [rbp-B0h]
  _DWORD *v102; // [rsp+58h] [rbp-A8h]
  _DWORD *v103; // [rsp+60h] [rbp-A0h]
  _DWORD *v104; // [rsp+68h] [rbp-98h]
  char *v105; // [rsp+70h] [rbp-90h]
  _BYTE *v106; // [rsp+78h] [rbp-88h]
  int v107; // [rsp+80h] [rbp-80h]
  _DWORD *v108; // [rsp+88h] [rbp-78h]
  __int64 v109; // [rsp+90h] [rbp-70h]
  char *v110; // [rsp+98h] [rbp-68h]
  char *v111; // [rsp+A0h] [rbp-60h]
  __int64 v112; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v113; // [rsp+B0h] [rbp-50h] BYREF
  int v114; // [rsp+B8h] [rbp-48h]
  int v115; // [rsp+C0h] [rbp-40h] BYREF
  int v116; // [rsp+C8h] [rbp-38h]
  int v117; // [rsp+CCh] [rbp-34h]
  int v118; // [rsp+D0h] [rbp-30h]
  int v119; // [rsp+D4h] [rbp-2Ch]
  int v120; // [rsp+D8h] [rbp-28h]
  int v121; // [rsp+DCh] [rbp-24h]
  unsigned __int16 v122[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v123; // [rsp+E4h] [rbp-1Ch]
  int v124; // [rsp+E8h] [rbp-18h]
  int v125; // [rsp+ECh] [rbp-14h]
  unsigned __int64 *v126; // [rsp+F0h] [rbp-10h]
  unsigned __int16 v127[2]; // [rsp+F8h] [rbp-8h] BYREF
  int v128; // [rsp+FCh] [rbp-4h]
  int v129; // [rsp+100h] [rbp+0h]
  int v130; // [rsp+104h] [rbp+4h]
  int v131; // [rsp+108h] [rbp+8h]
  int v132; // [rsp+10Ch] [rbp+Ch]

  v106 = a4;
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v5 = 0LL;
  v105 = 0LL;
  v111 = 0LL;
  v110 = 0LL;
  v108 = 0LL;
  v100 = 0;
  v113 = 0LL;
  v114 = 0;
  v96 = 0;
  if ( a3 )
  {
    v6 = *(__m128i *)a3;
    v126 = *(unsigned __int64 **)(a3 + 16);
    v7 = v126;
    v98 = _mm_cvtsi128_si32(_mm_loadl_epi64((const __m128i *)(a3 + 8)));
    v8 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 4));
    v9 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 3));
    v10 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 2));
    v11 = _mm_cvtsi128_si32(_mm_srli_si128(v6, 1));
    v12 = _mm_cvtsi128_si32(v6);
  }
  else
  {
    v12 = 0;
    v98 = 0x8000;
    v11 = 0;
    v7 = &v113;
    v10 = 0;
    v9 = 0;
    v8 = 255;
  }
  v101 = v7;
  v93 = v8;
  v89 = v10;
  if ( v12 )
    return 4294967267LL;
  v13 = *(_DWORD *)(a2 + 56);
  v97 = v13;
  if ( !a4 )
    return 4294967267LL;
  if ( !v7 )
    return 4294967278LL;
  v109 = 0LL;
  v15 = 0LL;
  if ( v11 )
  {
    if ( v9 > 5u )
      return 4294967273LL;
    v16 = SrcOrderTable[v9];
    v17 = v16 >> 8;
    if ( BYTE1(v16) >= 3u )
      return 4294967273LL;
    v13 = HIWORD(v16);
    if ( BYTE2(v16) >= 3u )
      return 4294967273LL;
    v18 = HIBYTE(v16);
    if ( (unsigned __int8)v18 >= 3u )
      return 4294967273LL;
    v102 = (_DWORD *)&v113 + (unsigned __int8)v17;
    v19 = (unsigned __int8)v13;
    LOWORD(v13) = v97;
    v103 = (_DWORD *)&v113 + v19;
    v104 = (_DWORD *)&v113 + (unsigned __int8)v18;
  }
  if ( v11 )
  {
    switch ( v11 )
    {
      case 1:
        v95 = 1;
        break;
      case 2:
        v95 = 2;
        break;
      case 4:
        v95 = 3;
        break;
      default:
        return 4294957292LL;
    }
  }
  else
  {
    v15 = *(_QWORD *)(a2 + 304);
    v10 = 0;
    v8 = 31;
    v89 = 0;
    v93 = 31;
    v109 = v15;
    v95 = 0;
  }
  if ( (v13 & 0x400) != 0 )
    v108 = (_DWORD *)(*(_QWORD *)(a2 + 288) + 76LL);
  v20 = *(_BYTE *)(*(_QWORD *)(a2 + 288) + 1LL);
  v88 = v20;
  if ( !v20 && (*(_DWORD *)(a2 + 192) != *(_DWORD *)(a2 + 272) || *(_DWORD *)(a2 + 196) != *(_DWORD *)(a2 + 276))
    || (v13 & 0x80C0) != 0 )
  {
    v21 = 1000000;
    v22 = 1;
    v23 = v20 == 0;
    v91 = 1000000;
    if ( (v13 & 0x40) != 0 )
      v24 = *(_DWORD *)(a2 + 92);
    else
      v24 = 1000000;
    v25 = v24;
    if ( (v13 & 0x80u) != 0 )
    {
      if ( v20 == 1 )
      {
        v25 = 500 * v24;
        v24 *= 200;
      }
      v23 = 1;
      v26 = *(_DWORD *)(a2 + 96);
      v131 = MulFD6(v24, -v26);
      v27 = MulFD6(v25, v26);
      v22 = 2;
      LODWORD(v126) = v27;
      v21 = *(_DWORD *)(a2 + 100);
      v91 = v21;
      v128 = 500000000;
      v123 = 200000000;
    }
    v129 = MulFD6(v25, v21);
    v28 = MulFD6(v24, v91);
    v7 = v101;
    v127[0] = v22;
    v5 = 0LL;
    v127[1] = v23;
    v122[0] = v22;
    v8 = v93;
    v122[1] = v23;
    v10 = v89;
    v124 = v28;
  }
  if ( v15 )
  {
    v29 = (char *)EngAllocMem(0, *(unsigned __int16 *)(v15 + 18), 0x31355448u);
    v105 = v29;
    v5 = v29;
    if ( v29 )
    {
      v30 = *(unsigned __int16 *)(v15 + 16);
      v109 = CacheRGBToXYZ(v15, v29, (__int64)&v100, a2);
      v15 = v109;
      v111 = &v5[12 * v30 + 12];
      v110 = &v111[12 * v30 + 12];
      v8 = 0;
    }
  }
  v115 = 3;
  v31 = 0;
  v90 = 0;
  if ( v8 == 1000000 )
    v8 = 0;
  v99 = 0;
  v94 = v8;
  v32 = 0;
  v33 = v98;
  v34 = 0;
  v92 = 0;
  v35 = v98;
  if ( v98 )
  {
    v36 = (_DWORD *)v7 + 1;
    v37 = v97 & 0x80C0;
    v107 = v97 & 0x400;
    v38 = v10;
    ++v106;
    v112 = v10;
    while ( 1 )
    {
      LODWORD(v101) = v35 - 1;
      if ( v95 )
      {
        if ( v95 == 1 )
        {
          *v102 = *((unsigned __int8 *)v36 - 4);
          *v103 = *((unsigned __int8 *)v36 - 3);
          v39 = *((unsigned __int8 *)v36 - 2);
        }
        else if ( v95 == 2 )
        {
          *v102 = *((__int16 *)v36 - 2);
          *v103 = *((__int16 *)v36 - 1);
          v39 = *(__int16 *)v36;
        }
        else
        {
          *v102 = *(v36 - 1);
          *v103 = *v36;
          v39 = v36[1];
        }
        *v104 = v39;
        v40 = v114;
        v41 = HIDWORD(v113);
        v42 = v113;
      }
      else
      {
        v42 = v34;
        v113 = __PAIR64__(v32, v34);
        v114 = v31;
        v92 = v34 + 1;
        v41 = v32;
        v40 = v31;
        if ( v34 + 1 >= 32 )
        {
          v92 = 0;
          v90 = v32 + 1;
          if ( v32 + 1 >= 32 )
          {
            v43 = v31 + 1;
            v90 = 0;
            if ( v43 >= 32 )
              v43 = 0;
            v99 = v43;
          }
        }
      }
      v36 = (_DWORD *)((char *)v36 + v38);
      if ( v94 )
      {
        LODWORD(v113) = DivFD6(v42, v94);
        v42 = v113;
        HIDWORD(v113) = DivFD6(v41, v94);
        v41 = HIDWORD(v113);
        v44 = DivFD6(v40, v94);
        v37 = v97 & 0x80C0;
        v40 = v44;
        v114 = v44;
      }
      if ( !v37 )
        goto LABEL_102;
      if ( v5 )
      {
        v45 = *(_DWORD *)&v105[12 * v42] + *(_DWORD *)&v111[12 * v41] + *(_DWORD *)&v110[12 * v40];
        v46 = *(_DWORD *)&v110[12 * v40 + 4] + *(_DWORD *)&v111[12 * v41 + 4] + *(_DWORD *)&v105[12 * v42 + 4];
        v47 = *(_DWORD *)&v110[12 * v40 + 8] + *(_DWORD *)&v111[12 * v41 + 8] + *(_DWORD *)&v105[12 * v42 + 8];
      }
      else
      {
        v116 = *(_DWORD *)(a2 + 124);
        v118 = *(_DWORD *)(a2 + 128);
        v120 = *(_DWORD *)(a2 + 132);
        HIWORD(v115) = 0;
        v117 = v42;
        v119 = v41;
        v121 = v40;
        v45 = MulDivFD6Pairs((unsigned __int16 *)&v115);
        v117 = v42;
        v116 = *(_DWORD *)(a2 + 136);
        v118 = *(_DWORD *)(a2 + 140);
        v120 = *(_DWORD *)(a2 + 144);
        v119 = v41;
        v121 = v40;
        v46 = MulDivFD6Pairs((unsigned __int16 *)&v115);
        v116 = *(_DWORD *)(a2 + 148);
        v118 = *(_DWORD *)(a2 + 152);
        v120 = *(_DWORD *)(a2 + 156);
        v117 = v42;
        v119 = v41;
        v121 = v40;
        v47 = MulDivFD6Pairs((unsigned __int16 *)&v115);
      }
      if ( v88 )
      {
        v48 = *(_DWORD *)(a2 + 160);
        if ( v48 != 1000000 )
          v45 = DivFD6(v45, v48);
        if ( v45 < 8856 )
          v49 = MulFD6(v45, 7787000) + 137931;
        else
          v49 = RaisePower(v45, 3LL, 3LL);
        if ( v46 < 8856 )
          v50 = MulFD6(v46, 7787000) + 137931;
        else
          v50 = RaisePower(v46, 3LL, 3LL);
        v51 = *(_DWORD *)(a2 + 168);
        v96 = v50;
        if ( v51 != 1000000 )
          v47 = DivFD6(v47, v51);
        if ( v47 < 8856 )
          v52 = MulFD6(v47, 7787000) + 137931;
        else
          v52 = RaisePower(v47, 3LL, 3LL);
        v53 = v49 - v50;
        v54 = v50 - v52;
      }
      else
      {
        v55 = v46 + v47 + 4 * v46 + v45 + 2 * (v46 + v47 + 4 * v46);
        v56 = DivFD6(4 * v45, v55) - *(_DWORD *)(a2 + 184);
        v57 = DivFD6(9 * v46, v55) - *(_DWORD *)(a2 + 188);
        if ( v46 <= 8856 )
        {
          v59 = MulFD6(v46, 9033000);
        }
        else
        {
          v58 = RaisePower(v46, 3LL, 3LL);
          v59 = MulFD6(v58, 1160000) - 160000;
        }
        v60 = 13 * v59;
        v53 = MulFD6(13 * v59, v56);
        v54 = MulFD6(v60, v57);
        v50 = v96;
        v128 = v60;
        v123 = v60;
      }
      HIDWORD(v126) = v53;
      v130 = v53;
      v125 = v54;
      v132 = v54;
      v61 = MulDivFD6Pairs(v127);
      v62 = MulDivFD6Pairs(v122);
      if ( v88 )
      {
        v63 = v50 + v61;
        v64 = v50 - v62;
        if ( v63 <= 206893 )
        {
          v66 = DivFD6(v63 - 137931, 7787000);
        }
        else
        {
          v65 = MulFD6(v63, v63);
          v66 = MulFD6(v63, v65);
        }
        v67 = *(_DWORD *)(a2 + 240);
        v68 = v66;
        if ( v67 != 1000000 )
          v68 = MulFD6(v66, v67);
        if ( v64 <= 206893 )
        {
          v70 = DivFD6(v64 - 137931, 7787000);
        }
        else
        {
          v69 = MulFD6(v64, v64);
          v70 = MulFD6(v64, v69);
        }
        v71 = *(_DWORD *)(a2 + 248);
        v72 = v70;
        if ( v71 == 1000000 )
          goto LABEL_101;
        v73 = MulFD6(v70, v71);
      }
      else
      {
        v74 = v62 + *(_DWORD *)(a2 + 268);
        if ( v74 < 0 || (v75 = DivFD6(9 * v46, v74), v75 < 0) )
          v75 = 2147000000;
        v76 = v61 + *(_DWORD *)(a2 + 264);
        if ( v76 >= 0 )
        {
          v77 = MulFD6(v75, v76);
          v68 = FD6DivL(v77, 4);
        }
        else
        {
          v68 = 0;
        }
        v73 = FD6DivL(v75 - 15 * v46 - v68, 3);
      }
      v72 = v73;
LABEL_101:
      v116 = *(_DWORD *)(a2 + 204);
      v118 = *(_DWORD *)(a2 + 208);
      v78 = *(_DWORD *)(a2 + 212);
      v121 = v72;
      v120 = v78;
      HIWORD(v115) = 0;
      v117 = v68;
      v119 = v46;
      LODWORD(v113) = MulDivFD6Pairs((unsigned __int16 *)&v115);
      v116 = *(_DWORD *)(a2 + 216);
      v118 = *(_DWORD *)(a2 + 220);
      v120 = *(_DWORD *)(a2 + 224);
      HIDWORD(v113) = MulDivFD6Pairs((unsigned __int16 *)&v115);
      v116 = *(_DWORD *)(a2 + 228);
      v118 = *(_DWORD *)(a2 + 232);
      v120 = *(_DWORD *)(a2 + 236);
      v114 = MulDivFD6Pairs((unsigned __int16 *)&v115);
      ScaleRGB(&v113);
      v40 = v114;
      v41 = HIDWORD(v113);
      v42 = v113;
      v5 = v105;
LABEL_102:
      if ( v107 )
      {
        if ( (v97 & 0x800) != 0 )
        {
          v79 = v41;
          if ( v42 > v41 )
            v79 = v42;
          if ( v40 > v79 )
            v79 = v40;
        }
        else
        {
          v79 = 1000000;
        }
        HIWORD(v115) = 0;
        v80 = v79 - v41;
        v81 = v108;
        v96 = v80;
        v119 = v80;
        v116 = *v108;
        v117 = v79 - v42;
        v118 = v108[1];
        v120 = v108[2];
        v121 = v79 - v40;
        v42 = v79 - MulDivFD6Pairs((unsigned __int16 *)&v115);
        LODWORD(v113) = v42;
        v116 = v81[3];
        v118 = v81[4];
        v120 = v81[5];
        v41 = v79 - MulDivFD6Pairs((unsigned __int16 *)&v115);
        HIDWORD(v113) = v41;
        v116 = v108[6];
        v118 = v108[7];
        v120 = v108[8];
        v82 = v79 - MulDivFD6Pairs((unsigned __int16 *)&v115);
        v114 = v82;
        v40 = v82;
        if ( v42 >= 0 )
        {
          if ( v42 > 1000000 )
          {
            v42 = 1000000;
            LODWORD(v113) = 1000000;
          }
        }
        else
        {
          v42 = 0;
          LODWORD(v113) = 0;
        }
        if ( v41 >= 0 )
        {
          if ( v41 > 1000000 )
          {
            v41 = 1000000;
            HIDWORD(v113) = 1000000;
          }
        }
        else
        {
          v41 = 0;
          HIDWORD(v113) = 0;
        }
        if ( v82 >= 0 )
        {
          if ( v82 > 1000000 )
          {
            v40 = 1000000;
            v114 = 1000000;
          }
        }
        else
        {
          v40 = 0;
          v114 = 0;
        }
      }
      v83 = MulFD6(v42, 255);
      v84 = v106;
      v106[1] = v83;
      *v84 = MulFD6(v41, 255);
      v85 = MulFD6(v40, 255);
      v35 = (int)v101;
      v31 = v99;
      v32 = v90;
      v34 = v92;
      v37 = v97 & 0x80C0;
      v38 = v112;
      *(v84 - 1) = v85;
      v106 = v84 + 3;
      if ( !v35 )
      {
        v15 = v109;
        v33 = v98;
        break;
      }
    }
  }
  if ( v5 )
  {
    if ( v15 )
    {
      v86 = *(PVOID *)(v15 + 8);
      if ( v86
        || (v86 = EngAllocMem(0, *(unsigned __int16 *)(v15 + 18), 0x32345448u), (*(_QWORD *)(v15 + 8) = v86) != 0LL) )
      {
        v87 = *(unsigned __int16 *)(v15 + 18);
        *(_DWORD *)v15 = v100;
        memmove(v86, v5, v87);
      }
    }
    EngFreeMem(v5);
  }
  return v33;
}
