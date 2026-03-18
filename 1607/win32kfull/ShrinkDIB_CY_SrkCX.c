/*
 * XREFs of ShrinkDIB_CY_SrkCX @ 0x1C0256B50
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C00F7288 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0250C08 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0255E58 (MappingBGRF.c)
 *     SrkYDIB_SrkCX @ 0x1C02577D8 (SrkYDIB_SrkCX.c)
 */

__int64 __fastcall ShrinkDIB_CY_SrkCX(__int64 a1)
{
  __int64 v2; // rax
  int *v3; // rdx
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // r8
  _DWORD *v17; // r14
  int v18; // r12d
  char *v19; // rsi
  int v20; // r13d
  __int64 v21; // rcx
  int v22; // r13d
  char *v23; // rax
  char *v24; // r15
  _DWORD *v25; // rbx
  char *v26; // rdi
  void *FixupScan; // rax
  int v28; // eax
  int *v29; // rcx
  unsigned __int8 *v30; // r8
  char *v31; // rdx
  __int64 v32; // rax
  int v33; // r12d
  unsigned __int16 *v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // edi
  char *v37; // r13
  void *v38; // rax
  unsigned int v39; // eax
  int *v40; // rcx
  int v41; // edi
  int v42; // r8d
  int v43; // edx
  int v44; // eax
  _DWORD *v45; // rdx
  unsigned __int8 *v46; // r13
  char *v47; // r8
  signed __int64 v48; // rsi
  int v49; // eax
  _DWORD *v50; // r8
  unsigned __int8 *v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rax
  unsigned __int16 *v54; // rax
  unsigned int v55; // edi
  __int64 v56; // rcx
  char *v57; // r12
  char *v58; // r13
  void *v59; // rax
  unsigned int v60; // eax
  int *v61; // rcx
  int v62; // edi
  int v63; // r8d
  int v64; // edx
  int v65; // eax
  char *v66; // r11
  _DWORD *v67; // r8
  int v68; // eax
  _BYTE *v69; // r9
  __int64 v70; // rdx
  int v71; // eax
  _DWORD *v72; // r8
  __int16 v73; // ax
  __int64 v74; // r10
  int v75; // edx
  int v76; // ecx
  int v77; // ecx
  __int64 v78; // rdx
  __int64 v79; // rax
  __int16 v80; // ax
  unsigned __int8 *v81; // rax
  __int64 v82; // rcx
  _DWORD *v83; // r8
  unsigned __int8 *v84; // r9
  __int64 v85; // rdx
  __int64 v86; // rax
  int v87; // eax
  int v88; // eax
  _BYTE *v89; // rdx
  _DWORD *v90; // r8
  char *v91; // rcx
  signed __int64 v92; // rbx
  int v93; // eax
  int v94; // eax
  int v95; // eax
  __int16 v96; // ax
  unsigned __int8 *v97; // rax
  __int16 v98; // [rsp+58h] [rbp-B0h]
  __int16 v99; // [rsp+58h] [rbp-B0h]
  unsigned int v100; // [rsp+5Ch] [rbp-ACh]
  int v101; // [rsp+60h] [rbp-A8h]
  unsigned int v102; // [rsp+64h] [rbp-A4h]
  unsigned __int16 *v103; // [rsp+68h] [rbp-A0h]
  unsigned __int16 *v104; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v105; // [rsp+70h] [rbp-98h]
  unsigned __int64 v106; // [rsp+70h] [rbp-98h]
  __int64 v107; // [rsp+78h] [rbp-90h]
  __int64 v108; // [rsp+80h] [rbp-88h]
  __int64 v109; // [rsp+80h] [rbp-88h]
  int v110[34]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v111; // [rsp+110h] [rbp+8h]
  int v112; // [rsp+124h] [rbp+1Ch]
  void (__fastcall *v113)(int *, __int64, _DWORD *); // [rsp+148h] [rbp+40h]
  void (__fastcall *v114)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+198h] [rbp+90h]
  __int64 v115; // [rsp+1A0h] [rbp+98h]
  __int64 v116; // [rsp+1B8h] [rbp+B0h]
  __int64 v117; // [rsp+1C0h] [rbp+B8h]
  __int64 v118; // [rsp+1C8h] [rbp+C0h]
  __int64 v119; // [rsp+208h] [rbp+100h]
  __int64 v120; // [rsp+210h] [rbp+108h]
  __int64 v121; // [rsp+220h] [rbp+118h]
  __int64 v122; // [rsp+228h] [rbp+120h]
  __int64 v123; // [rsp+230h] [rbp+128h]
  int v124; // [rsp+238h] [rbp+130h]
  int v125; // [rsp+23Ch] [rbp+134h]
  int v126; // [rsp+240h] [rbp+138h]
  unsigned __int8 *v127; // [rsp+248h] [rbp+140h]
  unsigned __int8 *v128; // [rsp+250h] [rbp+148h]
  unsigned __int8 *v129; // [rsp+258h] [rbp+150h]
  int v130; // [rsp+260h] [rbp+158h]
  char *v131; // [rsp+2A0h] [rbp+198h]
  unsigned __int8 *v132; // [rsp+2A8h] [rbp+1A0h]
  unsigned __int64 v133; // [rsp+2B0h] [rbp+1A8h]
  __int64 v134; // [rsp+2B8h] [rbp+1B0h]
  __int64 v135; // [rsp+2C0h] [rbp+1B8h]
  _BYTE *v136; // [rsp+2C8h] [rbp+1C0h]
  _BYTE *v137; // [rsp+2D0h] [rbp+1C8h]
  int v138; // [rsp+2D8h] [rbp+1D0h]

  if ( *(_WORD *)(*(_QWORD *)(a1 + 312) + 14LL) && !*(_QWORD *)(a1 + 536) )
    return 0LL;
  v2 = 4LL;
  v3 = v110;
  do
  {
    v4 = *(_OWORD *)(a1 + 16);
    *(_OWORD *)v3 = *(_OWORD *)a1;
    v5 = *(_OWORD *)(a1 + 32);
    *((_OWORD *)v3 + 1) = v4;
    v6 = *(_OWORD *)(a1 + 48);
    *((_OWORD *)v3 + 2) = v5;
    v7 = *(_OWORD *)(a1 + 64);
    *((_OWORD *)v3 + 3) = v6;
    v8 = *(_OWORD *)(a1 + 80);
    *((_OWORD *)v3 + 4) = v7;
    v9 = *(_OWORD *)(a1 + 96);
    *((_OWORD *)v3 + 5) = v8;
    v10 = *(_OWORD *)(a1 + 112);
    a1 += 128LL;
    *((_OWORD *)v3 + 6) = v9;
    v3 += 32;
    *((_OWORD *)v3 - 1) = v10;
    --v2;
  }
  while ( v2 );
  v11 = *(_QWORD *)(a1 + 80);
  v12 = *(_OWORD *)(a1 + 16);
  *(_OWORD *)v3 = *(_OWORD *)a1;
  v13 = *(_OWORD *)(a1 + 32);
  *((_OWORD *)v3 + 1) = v12;
  v14 = *(_OWORD *)(a1 + 48);
  *((_OWORD *)v3 + 2) = v13;
  v15 = *(_OWORD *)(a1 + 64);
  *((_OWORD *)v3 + 3) = v14;
  *((_OWORD *)v3 + 4) = v15;
  *((_QWORD *)v3 + 10) = v11;
  v16 = v117;
  v17 = *(_DWORD **)(v117 + 32);
  v18 = *(unsigned __int16 *)(v117 + 14);
  v107 = *(_QWORD *)(v117 + 24);
  v19 = (char *)(v17 + 515);
  v20 = 12 * (*(_DWORD *)(v116 + 20) + 2);
  v21 = v20;
  v22 = v20 - 24;
  v23 = (char *)v17 + v21 + 2048;
  v101 = v22;
  v24 = &v23[v21 + 12];
  v25 = v23 + 12;
  v102 = *(unsigned __int16 *)(v116 + 12) - 1;
  if ( *(_WORD *)(v117 + 14) )
  {
    v26 = v131;
    FixupScan = GetFixupScan((__int64)v110, v131);
    SrkYDIB_SrkCX(v116, FixupScan, v26);
    v28 = -v18;
    v29 = v17;
    do
    {
      v28 += v18;
      *v29++ = v28;
    }
    while ( v29 < v17 + 256 );
    v30 = (unsigned __int8 *)(v26 + 1);
    v31 = v24;
    do
    {
      *(_DWORD *)v31 = v17[v30[1]];
      v32 = *v30;
      v30 += 3;
      *((_DWORD *)v31 + 1) = v17[v32];
      *((_DWORD *)v31 + 2) = v17[*(v30 - 4)];
      v31 += 12;
    }
    while ( v31 < &v24[v22] );
    v16 = v117;
    if ( !*(_WORD *)(v117 + 10) )
      v110[0] |= 0x20u;
  }
  v33 = *(unsigned __int16 *)(v16 + 12);
  v34 = *(unsigned __int16 **)(v16 + 40);
  v103 = v34;
  v100 = 0;
  if ( *(_WORD *)(v16 + 12) )
  {
    v35 = v22;
    v108 = v22;
    do
    {
      v36 = *v34;
      v37 = v131;
      v103 = v34 + 1;
      v105 = (unsigned __int64)&v24[v35];
      v38 = GetFixupScan((__int64)v110, v131);
      SrkYDIB_SrkCX(v116, v38, v37);
      if ( (v36 & 0x4000) != 0 )
      {
        v39 = v36;
        v40 = v17;
        v41 = v36 & 0x3FFF;
        v42 = -v41;
        v43 = (v39 >> 15) + *(_DWORD *)(v107 + 4) - v41;
        v44 = -v43;
        do
        {
          v42 += v41;
          v44 += v43;
          *v40 = v42;
          v40[256] = v44;
          ++v40;
        }
        while ( v40 < v17 + 256 );
        v45 = v24 + 4;
        v46 = (unsigned __int8 *)(v37 + 1);
        v47 = v19;
        v48 = v19 - v24;
        do
        {
          *(v45 - 1) += v17[v46[1]];
          *v45 += v17[*v46];
          v45[1] += v17[*(v46 - 1)];
          *(_DWORD *)((char *)v45 + v48 - 4) = v17[v46[1] + 256];
          v49 = *v46;
          v46 += 3;
          *(_DWORD *)((char *)v45 + v48) = v17[v49 + 256];
          v45 += 3;
          *(_DWORD *)((char *)v45 + v48 - 8) = v17[*(v46 - 4) + 256];
        }
        while ( (unsigned __int64)(v45 - 1) < v105 );
        v19 = (char *)v25;
        --v33;
        v25 = v24;
        v24 = v47;
      }
      else
      {
        v50 = v24 + 8;
        v51 = (unsigned __int8 *)(v37 + 1);
        v52 = v107 + ((v36 >> 5) & 0x400);
        do
        {
          *(v50 - 2) += *(_DWORD *)(v52 + 4LL * v51[1]);
          v53 = *v51;
          v51 += 3;
          *(v50 - 1) += *(_DWORD *)(v52 + 4 * v53);
          *v50 += *(_DWORD *)(v52 + 4LL * *(v51 - 4));
          v50 += 3;
        }
        while ( (unsigned __int64)(v50 - 2) < v105 );
      }
      v34 = v103;
      v35 = v108;
    }
    while ( v33 );
    v16 = v117;
    v22 = v101;
  }
  if ( *(_WORD *)(v16 + 12) == 1 )
    memmove(v19, v25, v22);
  v54 = v103;
  v55 = *v103;
  if ( *v103 )
  {
    v56 = v22;
    v109 = v22;
    do
    {
      v57 = v131;
      v104 = v54 + 1;
      v58 = v24;
      v106 = (unsigned __int64)&v24[v56];
      v59 = GetFixupScan((__int64)v110, v131);
      SrkYDIB_SrkCX(v116, v59, v57);
      if ( (v55 & 0x4000) != 0 )
      {
        v60 = v55;
        v61 = v17;
        v62 = v55 & 0x3FFF;
        v63 = -v62;
        v64 = (v60 >> 15) + *(_DWORD *)(v107 + 4) - v62;
        v65 = -v64;
        do
        {
          v63 += v62;
          v65 += v64;
          *v61 = v63;
          v61[256] = v65;
          ++v61;
        }
        while ( v61 < v17 + 256 );
        v66 = v19;
        v67 = v25;
        v68 = *(_DWORD *)((char *)v25 + v109 - 4);
        *(_QWORD *)((char *)v25 + v109) = *(_QWORD *)((char *)v25 + v109 - 12);
        *(_DWORD *)((char *)v25 + v109 + 8) = v68;
        v69 = v136;
        if ( v102 )
        {
          v70 = (unsigned __int8)v57[2];
          v58 = v24 + 12;
          v67 = v25 + 3;
          v98 = *(_WORD *)v57;
          v57 += 3;
          *(_DWORD *)v24 += v17[v70];
          *((_DWORD *)v24 + 1) += v17[HIBYTE(v98)];
          *((_DWORD *)v24 + 2) += v17[(unsigned __int8)v98];
          *(_DWORD *)v19 = v17[(int)v70 + 256];
          *((_DWORD *)v19 + 1) = v17[HIBYTE(v98) + 256];
          *((_DWORD *)v19 + 2) = v17[(unsigned __int8)v98 + 256];
          v19 += 12;
        }
        else
        {
          v71 = v25[2];
          *(_QWORD *)(v25 - 3) = *(_QWORD *)v25;
          *(v25 - 1) = v71;
        }
        v72 = v67 + 5;
        do
        {
          v73 = *(_WORD *)v57;
          v74 = (unsigned __int8)v57[2];
          v57 += 3;
          *(_DWORD *)v58 += v17[v74];
          *((_DWORD *)v58 + 1) += v17[HIBYTE(v73)];
          *((_DWORD *)v58 + 2) += v17[(unsigned __int8)v73];
          v75 = (12 * *(v72 - 3) - *(v72 - 6) - *((_DWORD *)v19 + 2) - *v72 - *((_DWORD *)v58 + 2)) >> 16;
          if ( (v75 & 0xFF00) != 0 )
            LOBYTE(v75) = ~HIBYTE(v75);
          *v69 = v75;
          v76 = (12 * *(v72 - 4) - *(v72 - 7) - *(v72 - 1) - *((_DWORD *)v58 + 1) - *((_DWORD *)v19 + 1)) >> 16;
          if ( (v76 & 0xFF00) != 0 )
            LOBYTE(v76) = ~HIBYTE(v76);
          v69[1] = v76;
          v77 = (12 * *(v72 - 5) - *(v72 - 8) - *(v72 - 2) - *(_DWORD *)v58 - *(_DWORD *)v19) >> 16;
          if ( (v77 & 0xFF00) != 0 )
            LOBYTE(v77) = ~HIBYTE(v77);
          v69[2] = v77;
          v72 += 3;
          v58 += 12;
          *(_DWORD *)v19 = v17[(unsigned __int8)v74 + 256];
          *((_DWORD *)v19 + 1) = v17[HIBYTE(v73) + 256];
          *((_DWORD *)v19 + 2) = v17[(unsigned __int8)v73 + 256];
          v19 += 12;
          v69 += v138;
        }
        while ( v69 != v137 );
        if ( (unsigned __int64)v58 < v106 )
        {
          v78 = (unsigned __int8)v57[2];
          v99 = *(_WORD *)v57;
          v79 = (unsigned __int8)HIBYTE(*(_WORD *)v57);
          *(_DWORD *)v58 += v17[v78];
          *((_DWORD *)v58 + 1) += v17[v79];
          *((_DWORD *)v58 + 2) += v17[(unsigned __int8)v99];
          *(_DWORD *)v19 = v17[(int)v78 + 256];
          *((_DWORD *)v19 + 1) = v17[HIBYTE(v99) + 256];
          *((_DWORD *)v19 + 2) = v17[(unsigned __int8)v99 + 256];
        }
        v80 = v110[0];
        v19 = (char *)v25;
        v25 = v24;
        v24 = v66;
        if ( SLOBYTE(v110[0]) < 0 )
        {
          v113(v110, 256LL, v72);
          v80 = v110[0];
        }
        if ( (v80 & 0x800) != 0 )
        {
          AlphaBlendBGRF(v110);
          LOBYTE(v80) = v110[0];
        }
        if ( (v80 & 0x10) != 0 )
        {
          MappingBGRF(v132, v133, v120, v127);
          v81 = &v127[v130];
          if ( v81 == v128 )
            v81 = v129;
          v127 = v81;
        }
        v114(v110, v134, v135, v111, v119, v121, v121 + v125, v126, v115);
        v82 = v124 + v121;
        if ( v82 == v122 )
          v82 = v123;
        v111 += v112;
        ++v100;
        v121 = v82;
      }
      else
      {
        v83 = v24 + 8;
        v84 = (unsigned __int8 *)(v57 + 1);
        v85 = v107 + ((v55 >> 5) & 0x400);
        do
        {
          *(v83 - 2) += *(_DWORD *)(v85 + 4LL * v84[1]);
          v86 = *v84;
          v84 += 3;
          *(v83 - 1) += *(_DWORD *)(v85 + 4 * v86);
          *v83 += *(_DWORD *)(v85 + 4LL * *(v84 - 4));
          v83 += 3;
        }
        while ( (unsigned __int64)(v83 - 2) < v106 );
      }
      v54 = v104;
      v56 = v109;
      v55 = *v104;
    }
    while ( *v104 );
  }
  if ( v111 == v118 )
    return v100;
  v87 = *(_DWORD *)((char *)v25 + v101 - 4);
  *(_QWORD *)((char *)v25 + v101) = *(_QWORD *)((char *)v25 + v101 - 12);
  *(_DWORD *)((char *)v25 + v101 + 8) = v87;
  v88 = v25[2];
  v89 = v136;
  *(_QWORD *)(v25 - 3) = *(_QWORD *)v25;
  *(v25 - 1) = v88;
  v90 = &v25[3 * v102];
  v91 = &v19[12 * v102 + 4];
  v92 = (char *)v25 - v19;
  do
  {
    v93 = (11 * *(_DWORD *)&v91[v92 + 4] - *(_DWORD *)&v91[v92 + 16] - *(_DWORD *)&v91[v92 - 8] - *((_DWORD *)v91 + 1)) >> 16;
    if ( (v93 & 0xFF00) != 0 )
      LOBYTE(v93) = ~HIBYTE(v93);
    *v89 = v93;
    v94 = (11 * *(_DWORD *)&v91[v92] - *(_DWORD *)&v91[v92 - 12] - *(_DWORD *)&v91[v92 + 12] - *(_DWORD *)v91) >> 16;
    if ( (v94 & 0xFF00) != 0 )
      LOBYTE(v94) = ~HIBYTE(v94);
    v89[1] = v94;
    v95 = (11 * *v90 - *(_DWORD *)&v91[v92 + 8] - *(_DWORD *)&v91[v92 - 16] - *((_DWORD *)v91 - 1)) >> 16;
    if ( (v95 & 0xFF00) != 0 )
      LOBYTE(v95) = ~HIBYTE(v95);
    v89[2] = v95;
    v90 += 3;
    v91 += 12;
    v89 += v138;
  }
  while ( v89 != v137 );
  v96 = v110[0];
  if ( SLOBYTE(v110[0]) < 0 )
  {
    ((void (__fastcall *)(int *, _BYTE *, _DWORD *, __int64))v113)(v110, v89, v90, 65280LL);
    v96 = v110[0];
  }
  if ( (v96 & 0x800) != 0 )
  {
    AlphaBlendBGRF(v110);
    LOBYTE(v96) = v110[0];
  }
  if ( (v96 & 0x10) != 0 )
  {
    MappingBGRF(v132, v133, v120, v127);
    v97 = &v127[v130];
    if ( v97 == v128 )
      v97 = v129;
    v127 = v97;
  }
  v114(v110, v134, v135, v111, v119, v121, v121 + v125, v126, v115);
  return v100 + 1;
}
