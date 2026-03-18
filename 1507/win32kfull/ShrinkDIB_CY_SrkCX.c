/*
 * XREFs of ShrinkDIB_CY_SrkCX @ 0x1C0259B60
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C0009D98 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0253DB8 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0258E78 (MappingBGRF.c)
 *     SrkYDIB_SrkCX @ 0x1C025A7B8 (SrkYDIB_SrkCX.c)
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
  _DWORD *v17; // rsi
  int v18; // r12d
  char *v19; // rdi
  int v20; // r13d
  __int64 v21; // rcx
  int v22; // r13d
  char *v23; // rax
  char *v24; // r15
  _DWORD *v25; // rbx
  char *v26; // r14
  void *FixupScan; // rax
  int v28; // eax
  int *v29; // rcx
  unsigned __int8 *v30; // r8
  char *v31; // rdx
  __int64 v32; // rax
  int v33; // r12d
  unsigned __int16 *v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // r14d
  char *v37; // r13
  void *v38; // rax
  unsigned int v39; // eax
  int *v40; // rcx
  int v41; // r14d
  int v42; // r8d
  int v43; // edx
  int v44; // eax
  unsigned __int8 *v45; // r8
  char *v46; // r9
  _DWORD *v47; // rdx
  signed __int64 v48; // rdi
  __int64 v49; // rax
  _DWORD *v50; // r8
  unsigned __int8 *v51; // r9
  __int64 v52; // rdx
  __int64 v53; // rax
  unsigned __int16 *v54; // rax
  unsigned int v55; // r14d
  __int64 v56; // rcx
  char *v57; // r12
  char *v58; // r13
  void *v59; // rax
  unsigned int v60; // eax
  int *v61; // rcx
  int v62; // r14d
  int v63; // r8d
  int v64; // edx
  int v65; // eax
  _DWORD *v66; // r8
  int v67; // eax
  _BYTE *v68; // r9
  __int64 v69; // rax
  int v70; // eax
  unsigned __int64 v71; // r8
  __int16 v72; // ax
  __int64 v73; // r10
  int v74; // edx
  __int64 v75; // rdx
  int v76; // ecx
  int v77; // ecx
  __int64 v78; // rcx
  __int16 v79; // ax
  unsigned __int8 *v80; // rax
  __int64 v81; // rcx
  _DWORD *v82; // r8
  unsigned __int8 *v83; // r9
  __int64 v84; // rdx
  __int64 v85; // rax
  int v86; // eax
  int v87; // eax
  _BYTE *v88; // rdx
  _DWORD *v89; // r8
  char *v90; // rcx
  signed __int64 v91; // rbx
  int v92; // eax
  int v93; // eax
  int v94; // eax
  __int16 v95; // ax
  unsigned __int8 *v96; // rax
  __int16 v97; // [rsp+58h] [rbp-B0h]
  unsigned int v98; // [rsp+5Ch] [rbp-ACh]
  unsigned __int16 *v99; // [rsp+60h] [rbp-A8h]
  unsigned __int16 *v100; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v101; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v102; // [rsp+68h] [rbp-A0h]
  unsigned int v103; // [rsp+70h] [rbp-98h]
  int v104; // [rsp+74h] [rbp-94h]
  __int64 v105; // [rsp+78h] [rbp-90h]
  __int64 v106; // [rsp+78h] [rbp-90h]
  __int64 v107; // [rsp+80h] [rbp-88h]
  char *v108; // [rsp+88h] [rbp-80h]
  int v109[34]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v110; // [rsp+120h] [rbp+18h]
  int v111; // [rsp+134h] [rbp+2Ch]
  void (__fastcall *v112)(int *, __int64, unsigned __int64); // [rsp+158h] [rbp+50h]
  void (__fastcall *v113)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1A8h] [rbp+A0h]
  __int64 v114; // [rsp+1B0h] [rbp+A8h]
  __int64 v115; // [rsp+1C8h] [rbp+C0h]
  __int64 v116; // [rsp+1D0h] [rbp+C8h]
  __int64 v117; // [rsp+1D8h] [rbp+D0h]
  __int64 v118; // [rsp+218h] [rbp+110h]
  __int64 v119; // [rsp+220h] [rbp+118h]
  __int64 v120; // [rsp+230h] [rbp+128h]
  __int64 v121; // [rsp+238h] [rbp+130h]
  __int64 v122; // [rsp+240h] [rbp+138h]
  int v123; // [rsp+248h] [rbp+140h]
  int v124; // [rsp+24Ch] [rbp+144h]
  int v125; // [rsp+250h] [rbp+148h]
  unsigned __int8 *v126; // [rsp+258h] [rbp+150h]
  unsigned __int8 *v127; // [rsp+260h] [rbp+158h]
  unsigned __int8 *v128; // [rsp+268h] [rbp+160h]
  int v129; // [rsp+270h] [rbp+168h]
  char *v130; // [rsp+2B0h] [rbp+1A8h]
  unsigned __int8 *v131; // [rsp+2B8h] [rbp+1B0h]
  unsigned __int64 v132; // [rsp+2C0h] [rbp+1B8h]
  __int64 v133; // [rsp+2C8h] [rbp+1C0h]
  __int64 v134; // [rsp+2D0h] [rbp+1C8h]
  _BYTE *v135; // [rsp+2D8h] [rbp+1D0h]
  _BYTE *v136; // [rsp+2E0h] [rbp+1D8h]
  int v137; // [rsp+2E8h] [rbp+1E0h]

  if ( *(_WORD *)(*(_QWORD *)(a1 + 312) + 14LL) && !*(_QWORD *)(a1 + 536) )
    return 0LL;
  v2 = 4LL;
  v3 = v109;
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
  v16 = v116;
  v17 = *(_DWORD **)(v116 + 32);
  v18 = *(unsigned __int16 *)(v116 + 14);
  v107 = *(_QWORD *)(v116 + 24);
  v19 = (char *)(v17 + 515);
  v20 = 12 * (*(_DWORD *)(v115 + 20) + 2);
  v21 = v20;
  v22 = v20 - 24;
  v23 = (char *)v17 + v21 + 2048;
  v104 = v22;
  v24 = &v23[v21 + 12];
  v25 = v23 + 12;
  v103 = *(unsigned __int16 *)(v115 + 12) - 1;
  if ( *(_WORD *)(v116 + 14) )
  {
    v26 = v130;
    FixupScan = GetFixupScan((__int64)v109, v130);
    SrkYDIB_SrkCX(v115, FixupScan, v26);
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
    v16 = v116;
    if ( !*(_WORD *)(v116 + 10) )
      v109[0] |= 0x20u;
  }
  v33 = *(unsigned __int16 *)(v16 + 12);
  v34 = *(unsigned __int16 **)(v16 + 40);
  v99 = v34;
  v98 = 0;
  if ( *(_WORD *)(v16 + 12) )
  {
    v35 = v22;
    v105 = v22;
    do
    {
      v36 = *v34;
      v37 = v130;
      v99 = v34 + 1;
      v101 = (unsigned __int64)&v24[v35];
      v38 = GetFixupScan((__int64)v109, v130);
      SrkYDIB_SrkCX(v115, v38, v37);
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
        v45 = (unsigned __int8 *)(v37 + 1);
        v46 = v19;
        v47 = v24 + 4;
        v48 = v19 - v24;
        do
        {
          *(v47 - 1) += v17[v45[1]];
          *v47 += v17[*v45];
          v47[1] += v17[*(v45 - 1)];
          *(_DWORD *)((char *)v47 + v48 - 4) = v17[v45[1] + 256];
          v49 = *v45;
          v45 += 3;
          *(_DWORD *)((char *)v47 + v48) = v17[v49 + 256];
          v47 += 3;
          *(_DWORD *)((char *)v47 + v48 - 8) = v17[*(v45 - 4) + 256];
        }
        while ( (unsigned __int64)(v47 - 1) < v101 );
        v19 = (char *)v25;
        --v33;
        v25 = v24;
        v24 = v46;
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
        while ( (unsigned __int64)(v50 - 2) < v101 );
      }
      v34 = v99;
      v35 = v105;
    }
    while ( v33 );
    v16 = v116;
    v22 = v104;
  }
  if ( *(_WORD *)(v16 + 12) == 1 )
    memmove(v19, v25, v22);
  v54 = v99;
  v55 = *v99;
  if ( *v99 )
  {
    v56 = v22;
    v106 = v22;
    do
    {
      v57 = v130;
      v100 = v54 + 1;
      v58 = v24;
      v102 = (unsigned __int64)&v24[v56];
      v59 = GetFixupScan((__int64)v109, v130);
      SrkYDIB_SrkCX(v115, v59, v57);
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
        v66 = v25;
        v108 = v19;
        v67 = *(_DWORD *)((char *)v25 + v106 - 4);
        *(_QWORD *)((char *)v25 + v106) = *(_QWORD *)((char *)v25 + v106 - 12);
        *(_DWORD *)((char *)v25 + v106 + 8) = v67;
        v68 = v135;
        if ( v103 )
        {
          v58 = v24 + 12;
          v97 = *(_WORD *)v57;
          v69 = (unsigned __int8)v57[2];
          v57 += 3;
          *(_DWORD *)v24 += v17[v69];
          *((_DWORD *)v24 + 1) += v17[HIBYTE(v97)];
          *((_DWORD *)v24 + 2) += v17[(unsigned __int8)v97];
          v66 = v25 + 3;
          *(_DWORD *)v19 = v17[(unsigned int)v69 + 256];
          *((_DWORD *)v19 + 1) = v17[HIBYTE(v97) + 256];
          *((_DWORD *)v19 + 2) = v17[(unsigned __int8)v97 + 256];
          v19 += 12;
        }
        else
        {
          v70 = v25[2];
          *(_QWORD *)(v25 - 3) = *(_QWORD *)v25;
          *(v25 - 1) = v70;
        }
        v71 = (unsigned __int64)(v66 + 5);
        do
        {
          v72 = *(_WORD *)v57;
          v57 += 3;
          v73 = (unsigned __int8)*(v57 - 1);
          *(_DWORD *)v58 += v17[v73];
          *((_DWORD *)v58 + 1) += v17[HIBYTE(v72)];
          *((_DWORD *)v58 + 2) += v17[(unsigned __int8)v72];
          v74 = (12 * *(_DWORD *)(v71 - 12)
               - *(_DWORD *)(v71 - 24)
               - *(_DWORD *)v71
               - *((_DWORD *)v58 + 2)
               - *((_DWORD *)v19 + 2)) >> 16;
          if ( (v74 & 0xFF00) != 0 )
            LOBYTE(v74) = ~HIBYTE(v74);
          *v68 = v74;
          v75 = 65280LL;
          v76 = (12 * *(_DWORD *)(v71 - 16)
               - *(_DWORD *)(v71 - 28)
               - *(_DWORD *)(v71 - 4)
               - *((_DWORD *)v58 + 1)
               - *((_DWORD *)v19 + 1)) >> 16;
          if ( (v76 & 0xFF00) != 0 )
            LOBYTE(v76) = ~HIBYTE(v76);
          v68[1] = v76;
          v77 = (12 * *(_DWORD *)(v71 - 20)
               - *(_DWORD *)(v71 - 32)
               - *(_DWORD *)(v71 - 8)
               - *(_DWORD *)v58
               - *(_DWORD *)v19) >> 16;
          if ( (v77 & 0xFF00) != 0 )
            LOBYTE(v77) = ~HIBYTE(v77);
          v68[2] = v77;
          v71 += 12LL;
          v58 += 12;
          *(_DWORD *)v19 = v17[v73 + 256];
          *((_DWORD *)v19 + 1) = v17[HIBYTE(v72) + 256];
          *((_DWORD *)v19 + 2) = v17[(unsigned __int8)v72 + 256];
          v19 += 12;
          v68 += v137;
        }
        while ( v68 != v136 );
        if ( (unsigned __int64)v58 < v102 )
        {
          v75 = (unsigned __int8)HIBYTE(*(_WORD *)v57);
          v71 = (unsigned __int8)v57[2];
          v78 = (unsigned __int8)*(_WORD *)v57;
          *(_DWORD *)v58 += v17[v71];
          *((_DWORD *)v58 + 1) += v17[v75];
          *((_DWORD *)v58 + 2) += v17[v78];
          *(_DWORD *)v19 = v17[v71 + 256];
          *((_DWORD *)v19 + 1) = v17[v75 + 256];
          *((_DWORD *)v19 + 2) = v17[v78 + 256];
        }
        v79 = v109[0];
        v19 = (char *)v25;
        v25 = v24;
        v24 = v108;
        if ( SLOBYTE(v109[0]) < 0 )
        {
          v112(v109, v75, v71);
          v79 = v109[0];
        }
        if ( (v79 & 0x800) != 0 )
        {
          AlphaBlendBGRF(v109);
          LOBYTE(v79) = v109[0];
        }
        if ( (v79 & 0x10) != 0 )
        {
          MappingBGRF(v131, v132, v119, v126);
          v80 = &v126[v129];
          if ( v80 == v127 )
            v80 = v128;
          v126 = v80;
        }
        v113(v109, v133, v134, v110, v118, v120, v120 + v124, v125, v114);
        v81 = v123 + v120;
        if ( v81 == v121 )
          v81 = v122;
        v110 += v111;
        ++v98;
        v120 = v81;
      }
      else
      {
        v82 = v24 + 8;
        v83 = (unsigned __int8 *)(v57 + 1);
        v84 = v107 + ((v55 >> 5) & 0x400);
        do
        {
          *(v82 - 2) += *(_DWORD *)(v84 + 4LL * v83[1]);
          v85 = *v83;
          v83 += 3;
          *(v82 - 1) += *(_DWORD *)(v84 + 4 * v85);
          *v82 += *(_DWORD *)(v84 + 4LL * *(v83 - 4));
          v82 += 3;
        }
        while ( (unsigned __int64)(v82 - 2) < v102 );
      }
      v54 = v100;
      v56 = v106;
      v55 = *v100;
    }
    while ( *v100 );
  }
  if ( v110 == v117 )
    return v98;
  v86 = *(_DWORD *)((char *)v25 + v104 - 4);
  *(_QWORD *)((char *)v25 + v104) = *(_QWORD *)((char *)v25 + v104 - 12);
  *(_DWORD *)((char *)v25 + v104 + 8) = v86;
  v87 = v25[2];
  v88 = v135;
  *(_QWORD *)(v25 - 3) = *(_QWORD *)v25;
  *(v25 - 1) = v87;
  v89 = &v25[3 * v103];
  v90 = &v19[12 * v103 + 4];
  v91 = (char *)v25 - v19;
  do
  {
    v92 = (11 * *(_DWORD *)&v90[v91 + 4] - *(_DWORD *)&v90[v91 + 16] - *(_DWORD *)&v90[v91 - 8] - *((_DWORD *)v90 + 1)) >> 16;
    if ( (v92 & 0xFF00) != 0 )
      LOBYTE(v92) = ~HIBYTE(v92);
    *v88 = v92;
    v93 = (11 * *(_DWORD *)&v90[v91] - *(_DWORD *)&v90[v91 - 12] - *(_DWORD *)&v90[v91 + 12] - *(_DWORD *)v90) >> 16;
    if ( (v93 & 0xFF00) != 0 )
      LOBYTE(v93) = ~HIBYTE(v93);
    v88[1] = v93;
    v94 = (11 * *v89 - *(_DWORD *)&v90[v91 + 8] - *(_DWORD *)&v90[v91 - 16] - *((_DWORD *)v90 - 1)) >> 16;
    if ( (v94 & 0xFF00) != 0 )
      LOBYTE(v94) = ~HIBYTE(v94);
    v88[2] = v94;
    v89 += 3;
    v90 += 12;
    v88 += v137;
  }
  while ( v88 != v136 );
  v95 = v109[0];
  if ( SLOBYTE(v109[0]) < 0 )
  {
    ((void (__fastcall *)(int *, _BYTE *, _DWORD *, __int64))v112)(v109, v88, v89, 65280LL);
    v95 = v109[0];
  }
  if ( (v95 & 0x800) != 0 )
  {
    AlphaBlendBGRF(v109);
    LOBYTE(v95) = v109[0];
  }
  if ( (v95 & 0x10) != 0 )
  {
    MappingBGRF(v131, v132, v119, v126);
    v96 = &v126[v129];
    if ( v96 == v127 )
      v96 = v128;
    v126 = v96;
  }
  v113(v109, v133, v134, v110, v118, v120, v120 + v124, v125, v114);
  return v98 + 1;
}
