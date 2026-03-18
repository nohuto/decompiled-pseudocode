/*
 * XREFs of ComputeBGRMappingTable @ 0x1C024E430
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C00A5548 (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1C024F4A4 (CreateHalftoneBrushPat.c)
 * Callees:
 *     MulFD6 @ 0x1C00A7520 (MulFD6.c)
 *     DivFD6 @ 0x1C00A7640 (DivFD6.c)
 *     RaisePower @ 0x1C00A7894 (RaisePower.c)
 *     FD6DivL @ 0x1C00A7B80 (FD6DivL.c)
 *     MulDivFD6Pairs @ 0x1C00A7BF8 (MulDivFD6Pairs.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     CacheRGBToXYZ @ 0x1C024E33C (CacheRGBToXYZ.c)
 *     ScaleRGB @ 0x1C024F1BC (ScaleRGB.c)
 */

__int64 __fastcall ComputeBGRMappingTable(__int64 a1, __int64 a2, __int128 *a3, _BYTE *a4)
{
  int v4; // r10d
  unsigned __int8 v5; // al
  char v6; // cl
  int v8; // r12d
  unsigned __int8 v9; // r15
  _QWORD *v10; // xmm1_8
  int v11; // r13d
  char v12; // r8
  _QWORD *v13; // rdi
  unsigned int v14; // edx
  __int64 v16; // r14
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // rcx
  int v21; // r13d
  char v22; // r8
  int v23; // ecx
  __int16 v24; // bx
  __int16 v25; // r15
  int v26; // edi
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // eax
  int v32; // eax
  char *v33; // rax
  char *v34; // rbx
  unsigned int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // rdx
  int v38; // r8d
  unsigned int v39; // r14d
  int v40; // r9d
  int v41; // r11d
  int v42; // ecx
  int v43; // r14d
  __int64 v44; // rax
  int v45; // r15d
  _DWORD *v46; // rdx
  int v47; // eax
  int v48; // r9d
  int v49; // r13d
  int v50; // edi
  int v51; // ebx
  int v52; // edx
  int v53; // r14d
  int v54; // r15d
  int v55; // edx
  int v56; // ecx
  int v57; // r14d
  int v58; // eax
  int v59; // ebx
  int v60; // r14d
  int v61; // r15d
  int v62; // eax
  int v63; // eax
  int v64; // ebx
  int v65; // r14d
  int v66; // eax
  int v67; // r14d
  int v68; // ebx
  int v69; // eax
  int v70; // eax
  int v71; // edx
  int v72; // r14d
  int v73; // eax
  int v74; // eax
  int v75; // edx
  int v76; // ebx
  int v77; // eax
  int v78; // edx
  int v79; // ebx
  int v80; // edx
  int v81; // eax
  int v82; // r13d
  int v83; // ecx
  _DWORD *v84; // r14
  int v85; // ebx
  int v86; // eax
  char v87; // al
  _BYTE *v88; // r13
  char v89; // al
  __int64 v90; // rbx
  void *v91; // rcx
  size_t v92; // r8
  unsigned __int8 v93; // [rsp+20h] [rbp-E0h]
  int v94; // [rsp+24h] [rbp-DCh]
  int v95; // [rsp+24h] [rbp-DCh]
  char v96; // [rsp+28h] [rbp-D8h]
  int v97; // [rsp+2Ch] [rbp-D4h]
  int v98; // [rsp+30h] [rbp-D0h]
  int v99; // [rsp+30h] [rbp-D0h]
  int v100; // [rsp+34h] [rbp-CCh]
  int v101; // [rsp+34h] [rbp-CCh]
  int v102; // [rsp+38h] [rbp-C8h]
  int v103; // [rsp+40h] [rbp-C0h]
  char *Src; // [rsp+48h] [rbp-B8h]
  __int128 v105; // [rsp+50h] [rbp-B0h]
  __int64 v106; // [rsp+50h] [rbp-B0h]
  int v107; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v108; // [rsp+70h] [rbp-90h]
  _BYTE *v109; // [rsp+78h] [rbp-88h]
  _QWORD *v110; // [rsp+80h] [rbp-80h]
  _DWORD *v111; // [rsp+88h] [rbp-78h]
  _DWORD *v112; // [rsp+90h] [rbp-70h]
  __int64 v113; // [rsp+98h] [rbp-68h]
  int v114; // [rsp+A0h] [rbp-60h]
  _DWORD *v115; // [rsp+A8h] [rbp-58h]
  char *v116; // [rsp+B0h] [rbp-50h]
  char *v117; // [rsp+B8h] [rbp-48h]
  __int64 v118; // [rsp+C0h] [rbp-40h]
  _DWORD *v119; // [rsp+C8h] [rbp-38h]
  _QWORD v120[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v121; // [rsp+E0h] [rbp-20h] BYREF
  int v122; // [rsp+E8h] [rbp-18h]
  int v123; // [rsp+ECh] [rbp-14h]
  int v124; // [rsp+F0h] [rbp-10h]
  int v125; // [rsp+F4h] [rbp-Ch]
  int v126; // [rsp+F8h] [rbp-8h]
  int v127; // [rsp+FCh] [rbp-4h]
  int v128; // [rsp+100h] [rbp+0h] BYREF
  int v129; // [rsp+104h] [rbp+4h]
  int v130; // [rsp+108h] [rbp+8h]
  int v131; // [rsp+10Ch] [rbp+Ch]
  int v132; // [rsp+110h] [rbp+10h]
  int v133; // [rsp+114h] [rbp+14h]
  int v134; // [rsp+118h] [rbp+18h] BYREF
  int v135; // [rsp+11Ch] [rbp+1Ch]
  int v136; // [rsp+120h] [rbp+20h]
  int v137; // [rsp+124h] [rbp+24h]
  int v138; // [rsp+128h] [rbp+28h]
  int v139; // [rsp+12Ch] [rbp+2Ch]

  v4 = 0;
  v109 = a4;
  v5 = 0;
  v108 = 0LL;
  v111 = 0LL;
  v6 = 0;
  v115 = 0LL;
  v112 = 0LL;
  v8 = 0;
  Src = 0LL;
  v9 = 0;
  v117 = 0LL;
  v116 = 0LL;
  v107 = 0;
  memset(v120, 0, 12);
  v97 = 0;
  if ( a3 )
  {
    v10 = (_QWORD *)*((_QWORD *)a3 + 2);
    v105 = *a3;
    v9 = BYTE2(*a3);
    v11 = HIDWORD(*(_QWORD *)a3);
    v5 = BYTE3(*a3);
    v12 = BYTE1(*a3);
    v6 = v105;
    v13 = v10;
    v93 = BYTE2(v105);
    v103 = DWORD2(v105);
  }
  else
  {
    v12 = 0;
    v93 = 0;
    v11 = 255;
    v103 = 0x8000;
    v13 = v120;
  }
  v110 = v13;
  v94 = v11;
  if ( v6 )
    return 4294967267LL;
  v14 = *(_DWORD *)(a2 + 56);
  v102 = *(_DWORD *)(a2 + 56);
  if ( !a4 )
    return 4294967267LL;
  if ( !v13 )
    return 4294967278LL;
  v113 = 0LL;
  v16 = 0LL;
  if ( v12 )
  {
    if ( v5 > 5u )
      return 4294967273LL;
    v17 = *(_DWORD *)&SrcOrderTable[4 * v5];
    v18 = v17 >> 8;
    if ( BYTE1(v17) >= 3u )
      return 4294967273LL;
    v14 = HIWORD(v17);
    if ( BYTE2(v17) >= 3u )
      return 4294967273LL;
    v19 = HIBYTE(v17);
    if ( (unsigned __int8)v19 >= 3u )
      return 4294967273LL;
    v108 = (_DWORD *)v120 + (unsigned __int8)v18;
    v20 = (unsigned __int8)v14;
    LOWORD(v14) = v102;
    v111 = (_DWORD *)v120 + v20;
    v112 = (_DWORD *)v120 + (unsigned __int8)v19;
  }
  if ( v12 )
  {
    switch ( v12 )
    {
      case 1:
        LOBYTE(v21) = 1;
        break;
      case 2:
        LOBYTE(v21) = 2;
        break;
      case 4:
        LOBYTE(v21) = 3;
        break;
      default:
        return 4294957292LL;
    }
  }
  else
  {
    v16 = *(_QWORD *)(a2 + 304);
    v9 = 0;
    v113 = v16;
    LOBYTE(v21) = 0;
    v93 = 0;
    v94 = 31;
  }
  v114 = v14 & 0x400;
  if ( (v14 & 0x400) != 0 )
    v115 = (_DWORD *)(*(_QWORD *)(a2 + 288) + 76LL);
  v22 = *(_BYTE *)(*(_QWORD *)(a2 + 288) + 1LL);
  v96 = v22;
  if ( !v22 && (*(_DWORD *)(a2 + 192) != *(_DWORD *)(a2 + 272) || *(_DWORD *)(a2 + 196) != *(_DWORD *)(a2 + 276))
    || (v14 & 0x80C0) != 0 )
  {
    v23 = 1000000;
    v24 = 1;
    v25 = v22 == 0;
    v100 = 1000000;
    if ( (v14 & 0x40) != 0 )
      v26 = *(_DWORD *)(a2 + 92);
    else
      v26 = 1000000;
    v27 = v26;
    v98 = v26;
    if ( (v14 & 0x80u) != 0 )
    {
      if ( v22 == 1 )
      {
        v28 = 500 * v26;
        v26 *= 200;
        v98 = v28;
      }
      v25 = 1;
      v29 = MulFD6(v26, -*(_DWORD *)(a2 + 96));
      v30 = *(_DWORD *)(a2 + 96);
      v132 = v29;
      v31 = MulFD6(v98, v30);
      v23 = *(_DWORD *)(a2 + 100);
      v24 = 2;
      v138 = v31;
      v27 = v98;
      v100 = v23;
      v129 = 500000000;
      v135 = 200000000;
    }
    v130 = MulFD6(v27, v23);
    v32 = MulFD6(v26, v100);
    v13 = v110;
    v4 = 0;
    HIWORD(v128) = v25;
    HIWORD(v134) = v25;
    v9 = v93;
    v136 = v32;
    LOWORD(v128) = v24;
    LOWORD(v134) = v24;
  }
  if ( !v16 )
  {
    v34 = 0LL;
    goto LABEL_42;
  }
  v33 = (char *)EngAllocMem(0, *(unsigned __int16 *)(v16 + 18), 0x31355448u);
  v4 = 0;
  Src = v33;
  v34 = v33;
  if ( !v33 )
  {
LABEL_42:
    v38 = v94;
    goto LABEL_43;
  }
  v35 = *(unsigned __int16 *)(v16 + 16) + 1;
  v36 = CacheRGBToXYZ(v16, v33, (__int64)&v107, a2);
  v37 = 3LL * v35;
  v113 = v36;
  v34 = Src;
  v4 = 0;
  v38 = 0;
  v117 = &Src[4 * v37];
  v116 = &v117[4 * v37];
LABEL_43:
  v39 = v103;
  v121 = 3;
  v40 = 0;
  if ( v38 == 1000000 )
    v38 = 0;
  v101 = 0;
  v95 = v38;
  v106 = 0LL;
  v41 = 0;
  v42 = v103;
  if ( v103 )
  {
    v43 = HIDWORD(v120[0]);
    v44 = v9;
    v45 = v120[1];
    v118 = v44;
    v21 = (unsigned __int8)v21;
    HIWORD(v121) = 0;
    v46 = (_DWORD *)v13 + 1;
    ++v109;
    LODWORD(v110) = (unsigned __int8)v21;
    while ( 1 )
    {
      v99 = v42 - 1;
      if ( v21 )
      {
        switch ( v21 )
        {
          case 1:
            *v108 = *((unsigned __int8 *)v46 - 4);
            *v111 = *((unsigned __int8 *)v46 - 3);
            v47 = *((unsigned __int8 *)v46 - 2);
            break;
          case 2:
            *v108 = *((__int16 *)v46 - 2);
            *v111 = *((__int16 *)v46 - 1);
            v47 = *(__int16 *)v46;
            break;
          case 3:
            *v108 = *(v46 - 1);
            *v111 = *v46;
            v47 = v46[1];
            break;
          default:
            goto LABEL_61;
        }
        *v112 = v47;
        v45 = v120[1];
      }
      else
      {
        v120[0] = v106;
        v45 = v40;
        LODWORD(v120[1]) = v40;
        LODWORD(v106) = v4 + 1;
        if ( v4 + 1 >= 32 )
        {
          LODWORD(v106) = 0;
          HIDWORD(v106) = v41 + 1;
          if ( v41 + 1 >= 32 )
          {
            v48 = v40 + 1;
            HIDWORD(v106) = 0;
            if ( v48 >= 32 )
              v48 = 0;
            v101 = v48;
          }
        }
      }
      v43 = HIDWORD(v120[0]);
      v8 = v120[0];
LABEL_61:
      v119 = (_DWORD *)((char *)v46 + v118);
      if ( v38 )
      {
        v8 = DivFD6(v8, v38);
        LODWORD(v120[0]) = v8;
        v43 = DivFD6(v43, v95);
        HIDWORD(v120[0]) = v43;
        v45 = DivFD6(v45, v95);
        LODWORD(v120[1]) = v45;
      }
      if ( (v102 & 0x80C0) == 0 )
        goto LABEL_106;
      if ( v34 )
      {
        v49 = *(_DWORD *)&v34[12 * v8] + *(_DWORD *)&v117[12 * v43] + *(_DWORD *)&v116[12 * v45];
        v50 = *(_DWORD *)&v116[12 * v45 + 4] + *(_DWORD *)&v117[12 * v43 + 4] + *(_DWORD *)&v34[12 * v8 + 4];
        v51 = *(_DWORD *)&v116[12 * v45 + 8] + *(_DWORD *)&v117[12 * v43 + 8] + *(_DWORD *)&v34[12 * v8 + 8];
      }
      else
      {
        v122 = *(_DWORD *)(a2 + 124);
        v124 = *(_DWORD *)(a2 + 128);
        v126 = *(_DWORD *)(a2 + 132);
        v123 = v8;
        v125 = v43;
        v127 = v45;
        v49 = MulDivFD6Pairs(&v121);
        v123 = v8;
        v122 = *(_DWORD *)(a2 + 136);
        v124 = *(_DWORD *)(a2 + 140);
        v126 = *(_DWORD *)(a2 + 144);
        v125 = v43;
        v127 = v45;
        v50 = MulDivFD6Pairs(&v121);
        v122 = *(_DWORD *)(a2 + 148);
        v124 = *(_DWORD *)(a2 + 152);
        v126 = *(_DWORD *)(a2 + 156);
        v123 = v8;
        v125 = v43;
        v127 = v45;
        v51 = MulDivFD6Pairs(&v121);
      }
      if ( v96 )
      {
        v52 = *(_DWORD *)(a2 + 160);
        if ( v52 != 1000000 )
          v49 = DivFD6(v49, v52);
        if ( v49 < 8856 )
          v53 = MulFD6(v49, 7787000) + 137931;
        else
          v53 = RaisePower(v49, 3, 3);
        if ( v50 < 8856 )
          v54 = MulFD6(v50, 7787000) + 137931;
        else
          v54 = RaisePower(v50, 3, 3);
        v55 = *(_DWORD *)(a2 + 168);
        v97 = v54;
        if ( v55 != 1000000 )
          v51 = DivFD6(v51, v55);
        if ( v51 < 8856 )
          v56 = MulFD6(v51, 7787000) + 137931;
        else
          v56 = RaisePower(v51, 3, 3);
        v57 = v53 - v54;
        v58 = v54 - v56;
      }
      else
      {
        v59 = v49 + 2 * (v50 + v51 + 4 * v50) + v50 + v51 + 4 * v50;
        v60 = DivFD6(4 * v49, v59) - *(_DWORD *)(a2 + 184);
        v61 = DivFD6(9 * v50, v59) - *(_DWORD *)(a2 + 188);
        if ( v50 <= 8856 )
        {
          v63 = MulFD6(v50, 9033000);
        }
        else
        {
          v62 = RaisePower(v50, 3, 3);
          v63 = MulFD6(v62, 1160000) - 160000;
        }
        v64 = 13 * v63;
        v57 = MulFD6(13 * v63, v60);
        v58 = MulFD6(v64, v61);
        v54 = v97;
        v129 = v64;
        v135 = v64;
      }
      v139 = v57;
      v131 = v57;
      v137 = v58;
      v133 = v58;
      v65 = MulDivFD6Pairs(&v128);
      v66 = MulDivFD6Pairs(&v134);
      if ( v96 )
      {
        v67 = v54 + v65;
        v68 = v54 - v66;
        if ( v67 <= 206893 )
        {
          v70 = DivFD6(v67 - 137931, 7787000);
        }
        else
        {
          v69 = MulFD6(v67, v67);
          v70 = MulFD6(v67, v69);
        }
        v71 = *(_DWORD *)(a2 + 240);
        v72 = v70;
        if ( v71 != 1000000 )
          v72 = MulFD6(v70, v71);
        if ( v68 <= 206893 )
        {
          v74 = DivFD6(v68 - 137931, 7787000);
        }
        else
        {
          v73 = MulFD6(v68, v68);
          v74 = MulFD6(v68, v73);
        }
        v75 = *(_DWORD *)(a2 + 248);
        v76 = v74;
        if ( v75 == 1000000 )
          goto LABEL_105;
        v77 = MulFD6(v74, v75);
      }
      else
      {
        v78 = v66 + *(_DWORD *)(a2 + 268);
        if ( v78 < 0 || (v79 = DivFD6(9 * v50, v78), v79 < 0) )
          v79 = 2147000000;
        v80 = v65 + *(_DWORD *)(a2 + 264);
        if ( v80 >= 0 )
        {
          v81 = MulFD6(v79, v80);
          v72 = FD6DivL(v81, 4);
        }
        else
        {
          v72 = 0;
        }
        v77 = FD6DivL(v79 - 15 * v50 - v72, 3);
      }
      v76 = v77;
LABEL_105:
      v122 = *(_DWORD *)(a2 + 204);
      v124 = *(_DWORD *)(a2 + 208);
      v126 = *(_DWORD *)(a2 + 212);
      v123 = v72;
      v125 = v50;
      v127 = v76;
      LODWORD(v120[0]) = MulDivFD6Pairs(&v121);
      v122 = *(_DWORD *)(a2 + 216);
      v124 = *(_DWORD *)(a2 + 220);
      v126 = *(_DWORD *)(a2 + 224);
      v123 = v72;
      v125 = v50;
      v127 = v76;
      HIDWORD(v120[0]) = MulDivFD6Pairs(&v121);
      v122 = *(_DWORD *)(a2 + 228);
      v124 = *(_DWORD *)(a2 + 232);
      v126 = *(_DWORD *)(a2 + 236);
      v123 = v72;
      v125 = v50;
      v127 = v76;
      LODWORD(v120[1]) = MulDivFD6Pairs(&v121);
      ScaleRGB(v120);
      v45 = v120[1];
      v43 = HIDWORD(v120[0]);
      v8 = v120[0];
LABEL_106:
      if ( v114 )
      {
        if ( (v102 & 0x800) != 0 )
        {
          v82 = v43;
          if ( v8 > v43 )
            v82 = v8;
          if ( v45 > v82 )
            v82 = v45;
        }
        else
        {
          v82 = 1000000;
        }
        v83 = v82 - v43;
        v84 = v115;
        v85 = v82 - v8;
        v97 = v83;
        v125 = v83;
        v123 = v82 - v8;
        v122 = *v115;
        v124 = v115[1];
        v126 = v115[2];
        v127 = v82 - v45;
        v86 = MulDivFD6Pairs(&v121);
        v123 = v82 - v8;
        v8 = v82 - v86;
        v125 = v97;
        v122 = v84[3];
        v124 = v84[4];
        v126 = v84[5];
        v127 = v82 - v45;
        v43 = v82 - MulDivFD6Pairs(&v121);
        v123 = v85;
        v125 = v97;
        v127 = v82 - v45;
        v122 = v115[6];
        v124 = v115[7];
        v126 = v115[8];
        v45 = v82 - MulDivFD6Pairs(&v121);
        if ( v8 >= 0 )
        {
          if ( v8 > 1000000 )
            v8 = 1000000;
          LODWORD(v120[0]) = v8;
        }
        else
        {
          v8 = 0;
          LODWORD(v120[0]) = 0;
        }
        if ( v43 >= 0 )
        {
          if ( v43 > 1000000 )
            v43 = 1000000;
          HIDWORD(v120[0]) = v43;
        }
        else
        {
          v43 = 0;
          HIDWORD(v120[0]) = 0;
        }
        if ( v45 >= 0 )
        {
          if ( v45 > 1000000 )
            v45 = 1000000;
          LODWORD(v120[1]) = v45;
        }
        else
        {
          v45 = 0;
          LODWORD(v120[1]) = 0;
        }
      }
      v87 = MulFD6(v8, 255);
      v88 = v109;
      v109[1] = v87;
      *v88 = MulFD6(v43, 255);
      v89 = MulFD6(v45, 255);
      v42 = v99;
      v46 = v119;
      v34 = Src;
      v38 = v95;
      v40 = v101;
      v4 = v106;
      v41 = HIDWORD(v106);
      *(v88 - 1) = v89;
      v109 = v88 + 3;
      v21 = (int)v110;
      if ( !v99 )
      {
        v39 = v103;
        break;
      }
    }
  }
  if ( Src )
  {
    v90 = v113;
    if ( v113 )
    {
      if ( !*(_QWORD *)(v113 + 8) )
        *(_QWORD *)(v90 + 8) = EngAllocMem(0, *(unsigned __int16 *)(v113 + 18), 0x32345448u);
      v91 = *(void **)(v90 + 8);
      if ( v91 )
      {
        v92 = *(unsigned __int16 *)(v90 + 18);
        *(_DWORD *)v90 = v107;
        memmove(v91, Src, v92);
      }
    }
    EngFreeMem(Src);
  }
  return v39;
}
