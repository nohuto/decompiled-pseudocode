/*
 * XREFs of ShrinkDIB_CY_SrkCX @ 0x1400F09B0
 * Callers:
 *     <none>
 * Callees:
 *     MappingBGRF @ 0x1400F03F4 (MappingBGRF.c)
 *     SrkYDIB_SrkCX @ 0x1400F1580 (SrkYDIB_SrkCX.c)
 *     AlphaBlendBGRF @ 0x1400F1A88 (AlphaBlendBGRF.c)
 *     GetFixupScan @ 0x1400F27B8 (GetFixupScan.c)
 *     FixupGrayScan @ 0x1400F28F4 (FixupGrayScan.c)
 *     FixupColorScan @ 0x1400F2CA4 (FixupColorScan.c)
 *     MappingBGR @ 0x14030A2A0 (MappingBGR.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall ShrinkDIB_CY_SrkCX(__int128 *a1)
{
  int *v2; // rcx
  __int64 v3; // rax
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // r8
  _DWORD *v18; // rsi
  int v19; // edi
  unsigned __int64 v20; // r13
  char *v21; // rbx
  int v22; // r10d
  __int64 v23; // rcx
  char *v24; // rax
  char *v25; // r12
  int v26; // r15d
  _WORD *v27; // rdi
  unsigned int v28; // r14d
  __int64 v29; // rax
  __int16 *v30; // r15
  char *v31; // rdi
  unsigned __int64 v32; // r12
  int v33; // ecx
  __int64 v34; // rdx
  char v35; // al
  __int64 v36; // r8
  __int64 v37; // r9
  _DWORD *v38; // rdx
  __int64 v39; // rax
  char *v40; // rcx
  int v41; // eax
  int v42; // eax
  char *v43; // rdx
  char *v44; // r8
  char *v45; // rcx
  signed __int64 v46; // r9
  int v47; // eax
  int v48; // eax
  int v49; // eax
  __int16 v50; // ax
  unsigned int v52; // ecx
  int v53; // r14d
  int *v54; // rdx
  int v55; // r8d
  int v56; // r9d
  int v57; // eax
  char *v58; // r8
  int v59; // eax
  char *v60; // r10
  int v61; // eax
  unsigned __int64 v62; // r8
  unsigned __int16 v63; // r9
  __int64 v64; // r11
  int v65; // edx
  int v66; // ecx
  int v67; // eax
  unsigned __int16 v68; // r9
  __int64 v69; // rdx
  char *v70; // rdx
  __int16 v71; // ax
  __int64 v72; // rcx
  unsigned __int16 v73; // r9
  __int64 v74; // r8
  int v75; // ecx
  char *v76; // rax
  __int64 v77; // r12
  unsigned int v78; // r14d
  __int16 *v79; // r13
  unsigned __int64 v80; // rdi
  __int64 v81; // rax
  __int64 v82; // r9
  _DWORD *v83; // rdx
  __int64 v84; // rax
  int *v85; // rax
  int v86; // r8d
  int v87; // ecx
  int v88; // r14d
  int v89; // edx
  char *v90; // r10
  char *v91; // r9
  signed __int64 v92; // rbx
  _DWORD *v93; // rdx
  __int64 v94; // rax
  __int16 *v95; // r14
  __int64 FixupScan; // rax
  int *v97; // rax
  int v98; // ecx
  __int64 v99; // r8
  char *v100; // rdx
  __int64 v101; // rax
  unsigned __int8 *v102; // rcx
  unsigned __int8 *v103; // rax
  unsigned __int8 *v104; // rax
  char *v105; // [rsp+58h] [rbp-A8h]
  int v106; // [rsp+60h] [rbp-A0h]
  unsigned int v107; // [rsp+64h] [rbp-9Ch]
  char *Src; // [rsp+68h] [rbp-98h]
  unsigned int v109; // [rsp+70h] [rbp-90h]
  __int64 v110; // [rsp+78h] [rbp-88h]
  _WORD *v111; // [rsp+80h] [rbp-80h]
  _WORD *v112; // [rsp+80h] [rbp-80h]
  char *v113; // [rsp+88h] [rbp-78h]
  int v114; // [rsp+A0h] [rbp-60h] BYREF
  char v115[16]; // [rsp+A8h] [rbp-58h] BYREF
  void (__fastcall *v116)(char *, __int16 *, _QWORD, __int64); // [rsp+B8h] [rbp-48h]
  __int64 v117; // [rsp+C0h] [rbp-40h]
  unsigned int v118; // [rsp+C8h] [rbp-38h]
  __int64 v119; // [rsp+D0h] [rbp-30h]
  unsigned int v120; // [rsp+D8h] [rbp-28h]
  unsigned int v121; // [rsp+DCh] [rbp-24h]
  int v122; // [rsp+E4h] [rbp-1Ch]
  __int64 v123; // [rsp+128h] [rbp+28h]
  int v124; // [rsp+13Ch] [rbp+3Ch]
  void (__fastcall *v125)(int *, char *, unsigned __int64); // [rsp+160h] [rbp+60h]
  void (__fastcall *v126)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1B0h] [rbp+B0h]
  __int64 v127; // [rsp+1B8h] [rbp+B8h]
  __int64 v128; // [rsp+1D0h] [rbp+D0h]
  __int64 v129; // [rsp+1D8h] [rbp+D8h]
  __int64 v130; // [rsp+1E0h] [rbp+E0h]
  __int64 v131; // [rsp+220h] [rbp+120h]
  __int64 v132; // [rsp+228h] [rbp+128h]
  __int64 v133; // [rsp+238h] [rbp+138h]
  __int64 v134; // [rsp+240h] [rbp+140h]
  __int64 v135; // [rsp+248h] [rbp+148h]
  int v136; // [rsp+250h] [rbp+150h]
  int v137; // [rsp+254h] [rbp+154h]
  int v138; // [rsp+258h] [rbp+158h]
  unsigned __int8 *v139; // [rsp+260h] [rbp+160h]
  unsigned __int8 *v140; // [rsp+268h] [rbp+168h]
  unsigned __int8 *v141; // [rsp+270h] [rbp+170h]
  int v142; // [rsp+278h] [rbp+178h]
  __int16 *v143; // [rsp+2B8h] [rbp+1B8h]
  unsigned __int8 *v144; // [rsp+2C0h] [rbp+1C0h]
  unsigned __int64 v145; // [rsp+2C8h] [rbp+1C8h]
  __int64 v146; // [rsp+2D0h] [rbp+1D0h]
  __int64 v147; // [rsp+2D8h] [rbp+1D8h]
  char *v148; // [rsp+2E0h] [rbp+1E0h]
  char *v149; // [rsp+2E8h] [rbp+1E8h]
  int v150; // [rsp+2F0h] [rbp+1F0h]

  memset_0(&v114, 0, 0x258uLL);
  if ( *(_WORD *)(*((_QWORD *)a1 + 39) + 14LL) && !*((_QWORD *)a1 + 67) )
    return 0LL;
  v2 = &v114;
  v3 = 4LL;
  do
  {
    v2 += 32;
    v4 = *a1;
    v5 = a1[1];
    a1 += 8;
    *((_OWORD *)v2 - 8) = v4;
    v6 = *(a1 - 6);
    *((_OWORD *)v2 - 7) = v5;
    v7 = *(a1 - 5);
    *((_OWORD *)v2 - 6) = v6;
    v8 = *(a1 - 4);
    *((_OWORD *)v2 - 5) = v7;
    v9 = *(a1 - 3);
    *((_OWORD *)v2 - 4) = v8;
    v10 = *(a1 - 2);
    *((_OWORD *)v2 - 3) = v9;
    v11 = *(a1 - 1);
    *((_OWORD *)v2 - 2) = v10;
    *((_OWORD *)v2 - 1) = v11;
    --v3;
  }
  while ( v3 );
  v12 = *((_QWORD *)a1 + 10);
  v13 = a1[1];
  *(_OWORD *)v2 = *a1;
  v14 = a1[2];
  *((_OWORD *)v2 + 1) = v13;
  v15 = a1[3];
  *((_OWORD *)v2 + 2) = v14;
  v16 = a1[4];
  *((_OWORD *)v2 + 3) = v15;
  *((_OWORD *)v2 + 4) = v16;
  *((_QWORD *)v2 + 10) = v12;
  v17 = v129;
  v18 = *(_DWORD **)(v129 + 32);
  v19 = *(unsigned __int16 *)(v129 + 14);
  v110 = *(_QWORD *)(v129 + 24);
  v20 = (unsigned __int64)(v18 + 256);
  v21 = (char *)(v18 + 515);
  v106 = 12 * *(_DWORD *)(v128 + 20);
  v22 = v106;
  v23 = v106 + 24;
  v24 = (char *)v18 + v23 + 2048;
  v25 = &v24[v23 + 12];
  Src = v24 + 12;
  v105 = v25;
  v109 = *(unsigned __int16 *)(v128 + 12) - 1;
  if ( *(_WORD *)(v129 + 14) )
  {
    v95 = v143;
    FixupScan = GetFixupScan(&v114, v143, v129);
    SrkYDIB_SrkCX(v128, FixupScan, v95);
    v97 = v18;
    v98 = -v19;
    do
    {
      v98 += v19;
      *v97++ = v98;
    }
    while ( (unsigned __int64)v97 < v20 );
    v22 = v106;
    v99 = (__int64)v95 + 1;
    v100 = v25;
    do
    {
      v101 = *(unsigned __int8 *)(v99 + 1);
      v99 += 3LL;
      *(_DWORD *)v100 = v18[v101];
      *((_DWORD *)v100 + 1) = v18[*(unsigned __int8 *)(v99 - 3)];
      *((_DWORD *)v100 + 2) = v18[*(unsigned __int8 *)(v99 - 4)];
      v100 += 12;
    }
    while ( v100 < &v25[v106] );
    v17 = v129;
    if ( !*(_WORD *)(v129 + 10) )
      v114 |= 0x20u;
  }
  v26 = *(unsigned __int16 *)(v17 + 12);
  v27 = *(_WORD **)(v17 + 40);
  v107 = 0;
  if ( *(_WORD *)(v17 + 12) )
  {
    v76 = v25;
    v77 = v22;
    do
    {
      v78 = (unsigned __int16)*v27;
      v79 = v143;
      v112 = v27 + 1;
      v80 = (unsigned __int64)&v76[v77];
      v81 = GetFixupScan(&v114, v143, v17);
      SrkYDIB_SrkCX(v128, v81, v79);
      if ( (v78 & 0x4000) != 0 )
      {
        v85 = v18;
        v86 = v78 & 0x3FFF;
        v87 = -v86;
        v88 = *(_DWORD *)(v110 + 4) + (v78 >> 15) - v86;
        v89 = -v88;
        do
        {
          v87 += v86;
          v89 += v88;
          *v85 = v87;
          v85[256] = v89;
          ++v85;
        }
        while ( v85 < v18 + 256 );
        v90 = v105;
        v17 = (__int64)v79 + 1;
        v91 = v21;
        v92 = v21 - v105;
        v93 = v105 + 4;
        do
        {
          v94 = *(unsigned __int8 *)(v17 + 1);
          v93 += 3;
          v17 += 3LL;
          *(v93 - 4) += v18[v94];
          *(v93 - 3) += v18[*(unsigned __int8 *)(v17 - 3)];
          *(v93 - 2) += v18[*(unsigned __int8 *)(v17 - 4)];
          *(_DWORD *)((char *)v93 + v92 - 16) = v18[*(unsigned __int8 *)(v17 - 2) + 256];
          *(_DWORD *)((char *)v93 + v92 - 12) = v18[*(unsigned __int8 *)(v17 - 3) + 256];
          *(_DWORD *)((char *)v93 + v92 - 8) = v18[*(unsigned __int8 *)(v17 - 4) + 256];
        }
        while ( (unsigned __int64)(v93 - 1) < v80 );
        v21 = Src;
        v76 = v91;
        v105 = v91;
        --v26;
        Src = v90;
      }
      else
      {
        v17 = (__int64)v79 + 1;
        v82 = v110 + ((v78 >> 5) & 0x400);
        v83 = v105 + 8;
        do
        {
          v84 = *(unsigned __int8 *)(v17 + 1);
          v83 += 3;
          v17 += 3LL;
          *(v83 - 5) += *(_DWORD *)(v82 + 4 * v84);
          *(v83 - 4) += *(_DWORD *)(v82 + 4LL * *(unsigned __int8 *)(v17 - 3));
          *(v83 - 3) += *(_DWORD *)(v82 + 4LL * *(unsigned __int8 *)(v17 - 4));
        }
        while ( (unsigned __int64)(v83 - 2) < v80 );
        v76 = v105;
      }
      v27 = v112;
    }
    while ( v26 );
    v17 = v129;
    v20 = (unsigned __int64)(v18 + 256);
    v25 = v105;
  }
  if ( *(_WORD *)(v17 + 12) == 1 )
    memmove(v21, Src, v106);
  v28 = (unsigned __int16)*v27;
  if ( *v27 )
  {
    v29 = v106;
    do
    {
      v30 = v143;
      v111 = v27 + 1;
      v31 = v25;
      v32 = (unsigned __int64)&v25[v29];
      if ( (v114 & 0x40) != 0 )
      {
        if ( (v115[0] & 4) != 0 )
          FixupGrayScan(&v114, v143);
        else
          FixupColorScan(&v114, v143);
      }
      else
      {
        v33 = v121;
        if ( (v114 & 0x20) != 0 )
        {
          v33 = v121 + 1;
          v121 = v33;
          if ( v33 > (int)v118 )
          {
            v33 = v118;
            v121 = v118;
          }
          v34 = v117 + (int)(v122 * (v118 - v33));
          v35 = v115[0] | 2;
          v119 = v34;
          v114 &= ~0x20u;
          v115[0] |= 2u;
        }
        else
        {
          v34 = v119;
          v35 = v115[0];
        }
        if ( v143 )
        {
          v116(v115, v143, v118, v117);
        }
        else if ( (v35 & 2) != 0 )
        {
          if ( !v33 || (v121 = v33 - 1, v33 == 1) )
          {
            if ( (v35 & 1) != 0 )
            {
              v119 = v117;
              v121 = v118;
            }
            else
            {
              v115[0] = v35 & 0xFD;
            }
          }
          else
          {
            v119 = v122 + v34;
          }
        }
      }
      if ( (v114 & 8) != 0 && v30 )
      {
        MappingBGR(v30, v120, v132, v139);
        v102 = &v139[v142];
        if ( v102 == v140 )
          v102 = v141;
        v139 = v102;
      }
      SrkYDIB_SrkCX(v128, v30, v30);
      if ( (v28 & 0x4000) != 0 )
      {
        v52 = v28;
        v53 = v28 & 0x3FFF;
        v54 = v18;
        v55 = -v53;
        v56 = (v52 >> 15) + *(_DWORD *)(v110 + 4) - v53;
        v57 = -v56;
        do
        {
          v55 += v53;
          v57 += v56;
          *v54 = v55;
          v54[256] = v57;
          ++v54;
        }
        while ( (unsigned __int64)v54 < v20 );
        v58 = Src;
        v113 = v21;
        v59 = *(_DWORD *)&Src[v106 - 4];
        *(_QWORD *)&Src[v106] = *(_QWORD *)&Src[v106 - 12];
        *(_DWORD *)&Src[v106 + 8] = v59;
        v60 = v148;
        if ( v109 )
        {
          v73 = *v30;
          v74 = *((unsigned __int8 *)v30 + 2);
          v30 = (__int16 *)((char *)v30 + 3);
          *(_DWORD *)v105 += v18[v74];
          v31 = v105 + 12;
          *((_DWORD *)v105 + 1) += v18[HIBYTE(v73)];
          *((_DWORD *)v105 + 2) += v18[(unsigned __int8)v73];
          v75 = v18[v74 + 256];
          v58 = Src + 12;
          *(_DWORD *)v21 = v75;
          *((_DWORD *)v21 + 1) = v18[HIBYTE(v73) + 256];
          *((_DWORD *)v21 + 2) = v18[(unsigned __int8)v73 + 256];
          v21 += 12;
        }
        else
        {
          v61 = *((_DWORD *)Src + 2);
          *(_QWORD *)(Src - 12) = *(_QWORD *)Src;
          *((_DWORD *)Src - 1) = v61;
        }
        v62 = (unsigned __int64)(v58 + 20);
        do
        {
          v63 = *v30;
          v64 = *((unsigned __int8 *)v30 + 2);
          v30 = (__int16 *)((char *)v30 + 3);
          *(_DWORD *)v31 += v18[v64];
          *((_DWORD *)v31 + 1) += v18[HIBYTE(v63)];
          *((_DWORD *)v31 + 2) += v18[(unsigned __int8)v63];
          v65 = (12 * *(_DWORD *)(v62 - 12)
               - *(_DWORD *)(v62 - 24)
               - *((_DWORD *)v31 + 2)
               - *((_DWORD *)v21 + 2)
               - *(_DWORD *)v62) >> 16;
          if ( (v65 & 0xFF00) != 0 )
            LOBYTE(v65) = ~HIBYTE(v65);
          *v60 = v65;
          v66 = (12 * *(_DWORD *)(v62 - 16)
               - *(_DWORD *)(v62 - 28)
               - *(_DWORD *)(v62 - 4)
               - *((_DWORD *)v31 + 1)
               - *((_DWORD *)v21 + 1)) >> 16;
          if ( (v66 & 0xFF00) != 0 )
            LOBYTE(v66) = ~HIBYTE(v66);
          v60[1] = v66;
          v67 = (12 * *(_DWORD *)(v62 - 20)
               - *(_DWORD *)(v62 - 32)
               - *(_DWORD *)(v62 - 8)
               - *(_DWORD *)v31
               - *(_DWORD *)v21) >> 16;
          if ( (v67 & 0xFF00) != 0 )
            LOBYTE(v67) = ~HIBYTE(v67);
          v60[2] = v67;
          v31 += 12;
          v62 += 12LL;
          *(_DWORD *)v21 = v18[v64 + 256];
          *((_DWORD *)v21 + 1) = v18[HIBYTE(v63) + 256];
          *((_DWORD *)v21 + 2) = v18[(unsigned __int8)v63 + 256];
          v21 += 12;
          v60 += v150;
        }
        while ( v60 != v149 );
        if ( (unsigned __int64)v31 < v32 )
        {
          v62 = *((unsigned __int8 *)v30 + 2);
          v68 = *v30;
          v69 = (unsigned __int8)HIBYTE(*v30);
          *(_DWORD *)v31 += v18[v62];
          *((_DWORD *)v31 + 1) += v18[v69];
          *((_DWORD *)v31 + 2) += v18[(unsigned __int8)v68];
          *(_DWORD *)v21 = v18[v62 + 256];
          *((_DWORD *)v21 + 1) = v18[v69 + 256];
          *((_DWORD *)v21 + 2) = v18[(unsigned __int8)v68 + 256];
        }
        v70 = v105;
        v25 = v113;
        v71 = v114;
        v21 = Src;
        Src = v105;
        v105 = v113;
        if ( (v114 & 0x80u) != 0 )
        {
          v125(&v114, v70, v62);
          v71 = v114;
        }
        if ( (v71 & 0x800) != 0 )
        {
          AlphaBlendBGRF(&v114, v70, v62);
          LOBYTE(v71) = v114;
        }
        if ( (v71 & 0x10) != 0 )
        {
          MappingBGRF(v144, v145, v132, v139);
          v103 = &v139[v142];
          if ( v103 == v140 )
            v103 = v141;
          v139 = v103;
        }
        v126(&v114, v146, v147, v123, v131, v133, v133 + v137, v138, v127);
        v72 = v136 + v133;
        if ( v72 == v134 )
          v72 = v135;
        v123 += v124;
        ++v107;
        v133 = v72;
      }
      else
      {
        v36 = (__int64)v30 + 1;
        v37 = v110 + ((v28 >> 5) & 0x400);
        v38 = v105 + 8;
        do
        {
          v39 = *(unsigned __int8 *)(v36 + 1);
          v38 += 3;
          v36 += 3LL;
          *(v38 - 5) += *(_DWORD *)(v37 + 4 * v39);
          *(v38 - 4) += *(_DWORD *)(v37 + 4LL * *(unsigned __int8 *)(v36 - 3));
          *(v38 - 3) += *(_DWORD *)(v37 + 4LL * *(unsigned __int8 *)(v36 - 4));
        }
        while ( (unsigned __int64)(v38 - 2) < v32 );
        v25 = v105;
      }
      v27 = v111;
      v29 = v106;
      v28 = (unsigned __int16)*v111;
    }
    while ( *v111 );
  }
  if ( v123 == v130 )
    return v107;
  v40 = &Src[v106];
  v41 = *((_DWORD *)v40 - 1);
  *(_QWORD *)v40 = *(_QWORD *)(v40 - 12);
  *((_DWORD *)v40 + 2) = v41;
  v42 = *((_DWORD *)Src + 2);
  v43 = v148;
  *(_QWORD *)(Src - 12) = *(_QWORD *)Src;
  *((_DWORD *)Src - 1) = v42;
  v44 = &Src[12 * v109];
  v45 = &v21[12 * v109 + 4];
  v46 = Src - v21;
  do
  {
    v47 = (11 * *(_DWORD *)&v45[v46 + 4] - *((_DWORD *)v45 + 1) - *(_DWORD *)&v45[v46 + 16] - *(_DWORD *)&v45[v46 - 8]) >> 16;
    if ( (v47 & 0xFF00) != 0 )
      LOBYTE(v47) = ~HIBYTE(v47);
    *v43 = v47;
    v48 = (11 * *(_DWORD *)&v45[v46] - *(_DWORD *)&v45[v46 - 12] - *(_DWORD *)&v45[v46 + 12] - *(_DWORD *)v45) >> 16;
    if ( (v48 & 0xFF00) != 0 )
      LOBYTE(v48) = ~HIBYTE(v48);
    v43[1] = v48;
    v49 = (11 * *(_DWORD *)v44 - *(_DWORD *)&v45[v46 - 16] - *(_DWORD *)&v45[v46 + 8] - *((_DWORD *)v45 - 1)) >> 16;
    if ( (v49 & 0xFF00) != 0 )
      LOBYTE(v49) = ~HIBYTE(v49);
    v43[2] = v49;
    v44 += 12;
    v45 += 12;
    v43 += v150;
  }
  while ( v43 != v149 );
  v50 = v114;
  if ( (v114 & 0x80u) != 0 )
  {
    v125(&v114, v43, (unsigned __int64)v44);
    v50 = v114;
  }
  if ( (v50 & 0x800) != 0 )
  {
    AlphaBlendBGRF(&v114, v43, v44);
    LOBYTE(v50) = v114;
  }
  if ( (v50 & 0x10) != 0 )
  {
    MappingBGRF(v144, v145, v132, v139);
    v104 = &v139[v142];
    if ( v104 == v140 )
      v104 = v141;
    v139 = v104;
  }
  v126(&v114, v146, v147, v123, v131, v133, v133 + v137, v138, v127);
  return v107 + 1;
}
