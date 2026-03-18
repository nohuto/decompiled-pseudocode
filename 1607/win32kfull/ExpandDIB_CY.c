/*
 * XREFs of ExpandDIB_CY @ 0x1C0252030
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C00F7288 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0250C08 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0255E58 (MappingBGRF.c)
 */

__int64 __fastcall ExpandDIB_CY(_OWORD *a1)
{
  __int64 v1; // rax
  int *v2; // rdx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  unsigned __int64 v15; // r14
  unsigned __int8 *v16; // rdi
  int v17; // ecx
  __int64 v18; // r13
  __int64 v19; // rsi
  char *v20; // r12
  unsigned __int8 *v21; // r15
  void *FixupScan; // rax
  void *v23; // rax
  __int64 v24; // rax
  int v25; // r12d
  int v26; // ebx
  int v27; // r12d
  int v28; // ebx
  int v29; // eax
  __int128 v30; // xmm1
  unsigned __int8 *v31; // r13
  unsigned __int8 *v32; // r15
  void *v33; // rax
  unsigned __int8 *v34; // rdx
  char *v35; // r15
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  __int64 *v39; // rcx
  int v40; // eax
  unsigned __int16 v41; // bx
  __int128 v42; // xmm1
  unsigned __int64 v43; // r15
  void *v44; // rax
  unsigned __int8 *v45; // r9
  __int64 v46; // r8
  unsigned __int8 *v47; // rdi
  unsigned __int8 *v48; // rdx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  unsigned __int64 v52; // r8
  _BYTE *v53; // r9
  int v54; // edx
  int v55; // ecx
  int v56; // r10d
  int *v57; // r8
  int v58; // ebx
  unsigned __int8 *v59; // r15
  __int64 v60; // r10
  unsigned __int8 *v61; // r11
  __int64 v62; // rbx
  int v63; // r8d
  int v64; // eax
  int *v65; // r8
  int v66; // r10d
  unsigned __int8 *v67; // r10
  __int64 v68; // r11
  __int64 v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // rcx
  int v72; // eax
  int *v73; // rdx
  int v74; // r8d
  unsigned __int8 *v75; // r8
  __int64 v76; // r10
  __int64 v77; // rdx
  int v78; // eax
  int v79; // eax
  unsigned __int8 *v80; // rdx
  int v81; // eax
  __int16 v82; // ax
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v86; // [rsp+58h] [rbp-B0h]
  _BYTE v87[40]; // [rsp+60h] [rbp-A8h]
  unsigned __int8 *v88; // [rsp+88h] [rbp-80h]
  size_t Size; // [rsp+90h] [rbp-78h]
  int v90; // [rsp+9Ch] [rbp-6Ch]
  int v91; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v92; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v93; // [rsp+B0h] [rbp-58h]
  __int64 *v94; // [rsp+B8h] [rbp-50h]
  int v95[34]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v96; // [rsp+150h] [rbp+48h]
  int v97; // [rsp+158h] [rbp+50h]
  unsigned int v98; // [rsp+15Ch] [rbp+54h]
  int v99; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v100)(int *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v101)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v102; // [rsp+1E0h] [rbp+D8h]
  void (__fastcall *v103)(__int64, void *, char *, char *, int); // [rsp+1E8h] [rbp+E0h]
  __int64 v104; // [rsp+1F8h] [rbp+F0h]
  __int64 v105; // [rsp+200h] [rbp+F8h]
  __int64 v106; // [rsp+248h] [rbp+140h]
  __int64 v107; // [rsp+250h] [rbp+148h]
  __int64 v108; // [rsp+260h] [rbp+158h]
  __int64 v109; // [rsp+268h] [rbp+160h]
  __int64 v110; // [rsp+270h] [rbp+168h]
  int v111; // [rsp+278h] [rbp+170h]
  int v112; // [rsp+27Ch] [rbp+174h]
  int v113; // [rsp+280h] [rbp+178h]
  __int64 v114; // [rsp+288h] [rbp+180h]
  __int64 v115; // [rsp+290h] [rbp+188h]
  __int64 v116; // [rsp+298h] [rbp+190h]
  int v117; // [rsp+2A0h] [rbp+198h]
  void *v118; // [rsp+2E0h] [rbp+1D8h]
  __int64 v119; // [rsp+2E8h] [rbp+1E0h]
  __int64 v120; // [rsp+2F0h] [rbp+1E8h]
  __int64 v121; // [rsp+2F8h] [rbp+1F0h]
  __int64 v122; // [rsp+300h] [rbp+1F8h]
  _BYTE *v123; // [rsp+308h] [rbp+200h]
  _BYTE *v124; // [rsp+310h] [rbp+208h]
  int v125; // [rsp+318h] [rbp+210h]

  v1 = 4LL;
  v2 = v95;
  do
  {
    v3 = a1[1];
    *(_OWORD *)v2 = *a1;
    v4 = a1[2];
    *((_OWORD *)v2 + 1) = v3;
    v5 = a1[3];
    *((_OWORD *)v2 + 2) = v4;
    v6 = a1[4];
    *((_OWORD *)v2 + 3) = v5;
    v7 = a1[5];
    *((_OWORD *)v2 + 4) = v6;
    v8 = a1[6];
    *((_OWORD *)v2 + 5) = v7;
    v9 = a1[7];
    a1 += 8;
    *((_OWORD *)v2 + 6) = v8;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v9;
    --v1;
  }
  while ( v1 );
  v10 = *((_QWORD *)a1 + 10);
  v11 = a1[1];
  *(_OWORD *)v2 = *a1;
  v12 = a1[2];
  *((_OWORD *)v2 + 1) = v11;
  v13 = a1[3];
  *((_OWORD *)v2 + 2) = v12;
  v14 = a1[4];
  *((_OWORD *)v2 + 3) = v13;
  *((_OWORD *)v2 + 4) = v14;
  *((_QWORD *)v2 + 10) = v10;
  v15 = *(_QWORD *)(v105 + 32);
  v92 = v15;
  v93 = v15 + 1024;
  v16 = (unsigned __int8 *)(v15 + 4105);
  v17 = 3 * (v97 + 6);
  v18 = v17 + v15 + 4105 + v17;
  *(_QWORD *)&v87[8] = v17 + v15 + 4105;
  v19 = v17 + v18;
  v20 = (char *)(v19 + v17);
  *(_QWORD *)&v87[16] = v18;
  v21 = (unsigned __int8 *)&v20[v17];
  *(_QWORD *)&v87[24] = v19;
  *(_QWORD *)&v87[32] = v20;
  v88 = v21;
  Size = v17 - 18;
  FixupScan = GetFixupScan((__int64)v95, v118);
  v103(v104, FixupScan, v20, &v20[Size], 3);
  if ( (*(_BYTE *)(v105 + 8) & 1) != 0 )
  {
    v23 = GetFixupScan((__int64)v95, v118);
    v103(v104, v23, (char *)v21, (char *)&v21[Size], 3);
  }
  else
  {
    memmove(v21, v20, Size);
  }
  v24 = v105;
  v25 = *(unsigned __int16 *)(v105 + 12);
  v26 = v25 & 0xF;
  v27 = v25 >> 4;
  v28 = v27 + v26;
  if ( v28 )
  {
    do
    {
      v29 = v27;
      --v28;
      v30 = *(_OWORD *)&v87[24];
      --v27;
      v31 = &v16[Size];
      *(_OWORD *)v87 = *(_OWORD *)&v87[8];
      *(_QWORD *)&v87[32] = v88;
      v32 = v88;
      v88 = v16;
      *(_OWORD *)&v87[16] = v30;
      if ( v29 <= 0 )
      {
        v33 = GetFixupScan((__int64)v95, v118);
        v103(v104, v33, (char *)v16, (char *)&v16[Size], 3);
      }
      else
      {
        memmove(v16, v32, Size);
      }
      v19 = *((_QWORD *)&v30 + 1);
      if ( (v95[0] & 0x200) != 0 )
      {
        memmove(*((void **)&v30 + 1), v32, Size);
      }
      else
      {
        v34 = (unsigned __int8 *)(*((_QWORD *)&v30 + 1) + 1LL);
        v35 = (char *)&v32[-*((_QWORD *)&v30 + 1)];
        do
        {
          v36 = (6 * v34[(_QWORD)v35 - 1] - *v16 - *(v34 - 1)) >> 2;
          if ( (v36 & 0xFF00) != 0 )
            LOBYTE(v36) = ~HIBYTE(v36);
          *(v34 - 1) = v36;
          v37 = (6 * v34[(_QWORD)v35] - v16[1] - *v34) >> 2;
          if ( (v37 & 0xFF00) != 0 )
            LOBYTE(v37) = ~HIBYTE(v37);
          *v34 = v37;
          v38 = (6 * v34[(_QWORD)v35 + 1] - v34[1] - v16[2]) >> 2;
          if ( (v38 & 0xFF00) != 0 )
            LOBYTE(v38) = ~HIBYTE(v38);
          v34[1] = v38;
          v16 += 3;
          v34 += 3;
        }
        while ( v16 < v31 );
      }
      v16 = *(unsigned __int8 **)v87;
    }
    while ( v28 );
    v24 = v105;
    v18 = v30;
  }
  v39 = *(__int64 **)(v24 + 40);
  v40 = *(_DWORD *)(v24 + 16);
  while ( v40 )
  {
    v91 = v40 - 1;
    v41 = *v39;
    v86 = *v39;
    v94 = v39 + 1;
    if ( (v41 & 0x8000u) != 0 )
    {
      v42 = *(_OWORD *)&v87[24];
      *(_OWORD *)v87 = *(_OWORD *)&v87[8];
      v43 = (unsigned __int64)&v16[Size];
      *(_QWORD *)&v87[32] = v88;
      *(_OWORD *)&v87[16] = v42;
      v88 = v16;
      v44 = GetFixupScan((__int64)v95, v118);
      v103(v104, v44, (char *)v16, (char *)&v16[Size], 3);
      if ( (v95[0] & 0x200) != 0 )
      {
        v19 = *((_QWORD *)&v42 + 1);
        memmove(*((void **)&v42 + 1), *(const void **)&v87[32], Size);
      }
      else
      {
        v19 = *((_QWORD *)&v42 + 1);
        v45 = v16 + 2;
        v46 = *(_QWORD *)&v87[32] - *((_QWORD *)&v42 + 1);
        v47 = &v16[-*((_QWORD *)&v42 + 1)];
        v48 = (unsigned __int8 *)(*((_QWORD *)&v42 + 1) + 1LL);
        do
        {
          v49 = (6 * v48[v46 - 1] - v48[(_QWORD)v47 - 1] - *(v48 - 1)) >> 2;
          if ( (v49 & 0xFF00) != 0 )
            LOBYTE(v49) = ~HIBYTE(v49);
          *(v48 - 1) = v49;
          v50 = (6 * v48[v46] - *(v45 - 1) - *v48) >> 2;
          if ( (v50 & 0xFF00) != 0 )
            LOBYTE(v50) = ~HIBYTE(v50);
          *v48 = v50;
          v51 = (6 * v48[v46 + 1] - v48[1] - *v45) >> 2;
          if ( (v51 & 0xFF00) != 0 )
            LOBYTE(v51) = ~HIBYTE(v51);
          v48[1] = v51;
          v45 += 3;
          v48 += 3;
        }
        while ( &v48[(_QWORD)v47 - 1] < (unsigned __int8 *)v43 );
      }
      v18 = v42;
      v16 = *(unsigned __int8 **)v87;
      v41 &= 0x3FFFu;
    }
    v52 = v15;
    v53 = v123;
    v54 = -WORD1(v86);
    v55 = -WORD2(v86);
    v90 = v41;
    v56 = -v41;
    if ( v41 )
    {
      v57 = (int *)(v15 + 2048);
      v58 = 4096 - HIWORD(v86);
      do
      {
        v56 += v90;
        v54 += WORD1(v86);
        v55 += WORD2(v86);
        *(v57 - 512) = v56;
        v58 += HIWORD(v86);
        *(v57 - 256) = v54;
        *v57 = v55;
        v57[256] = v58;
        ++v57;
      }
      while ( (unsigned __int64)(v57 - 512) < v93 );
      v59 = (unsigned __int8 *)(v19 + 2);
      v15 = v92;
      v60 = v18 - v19;
      v61 = &v16[-v19];
      v62 = *(_QWORD *)&v87[8] - v19;
      do
      {
        v63 = *(_DWORD *)(v92 + 4LL * v59[(_QWORD)v61])
            + *(_DWORD *)(v92 + 4LL * (v59[v60] + 512))
            + *(_DWORD *)(v92 + 4LL * (v59[v62] + 256));
        v64 = *v59;
        v59 += 3;
        v53[2] = (*(_DWORD *)(v92 + 4LL * (v64 + 768)) + v63) >> 13;
        v53[1] = (*(_DWORD *)(v92 + 4LL * v59[(_QWORD)v61 - 4])
                + *(_DWORD *)(v92 + 4LL * (*(v59 - 4) + 768))
                + *(_DWORD *)(v92 + 4LL * (v59[v60 - 4] + 512))
                + *(_DWORD *)(v92 + 4LL * (v59[v62 - 4] + 256))) >> 13;
        *v53 = (*(_DWORD *)(v92 + 4LL * v61[(_QWORD)v59 - 5])
              + *(_DWORD *)(v92 + 4LL * (*(v59 - 5) + 768))
              + *(_DWORD *)(v92 + 4LL * (v59[v60 - 5] + 512))
              + *(_DWORD *)(v92 + 4LL * (v59[v62 - 5] + 256))) >> 13;
        v53 += v125;
      }
      while ( v53 != v124 );
    }
    else if ( WORD1(v86) )
    {
      v65 = (int *)(v15 + 2048);
      v66 = 4096 - HIWORD(v86);
      do
      {
        v54 += WORD1(v86);
        v55 += WORD2(v86);
        v66 += HIWORD(v86);
        *(v65 - 256) = v54;
        *v65 = v55;
        v65[256] = v66;
        ++v65;
      }
      while ( (unsigned __int64)(v65 - 512) < v15 + 1024 );
      v67 = (unsigned __int8 *)(v19 + 2);
      v68 = *(_QWORD *)&v87[8] - v19;
      v69 = v18 - v19;
      do
      {
        v70 = v67[v68] + 256;
        v71 = v67[v69] + 512;
        v72 = *v67;
        v67 += 3;
        v53[2] = (*(_DWORD *)(v15 + 4LL * (v72 + 768)) + *(_DWORD *)(v15 + 4 * v71) + *(_DWORD *)(v15 + 4 * v70)) >> 13;
        v53[1] = (*(_DWORD *)(v15 + 4LL * (*(v67 - 4) + 768))
                + *(_DWORD *)(v15 + 4LL * (v67[v69 - 4] + 512))
                + *(_DWORD *)(v15 + 4LL * (v67[v68 - 4] + 256))) >> 13;
        *v53 = (*(_DWORD *)(v15 + 4LL * (*(v67 - 5) + 768))
              + *(_DWORD *)(v15 + 4LL * (v67[v69 - 5] + 512))
              + *(_DWORD *)(v15 + 4LL * (v67[v68 - 5] + 256))) >> 13;
        v53 += v125;
      }
      while ( v53 != v124 );
    }
    else if ( WORD2(v86) )
    {
      v73 = (int *)(v15 + 3072);
      v74 = 4096 - HIWORD(v86);
      do
      {
        v55 += WORD2(v86);
        v74 += HIWORD(v86);
        *(v73 - 256) = v55;
        *v73++ = v74;
      }
      while ( (unsigned __int64)(v73 - 768) < v15 + 1024 );
      v75 = (unsigned __int8 *)(v18 + 1);
      v76 = v19 - v18;
      do
      {
        v53[2] = (*(_DWORD *)(v15 + 4LL * (v75[1] + 512)) + *(_DWORD *)(v15 + 4LL * (v75[v76 + 1] + 768))) >> 13;
        v77 = v75[v76] + 768;
        v78 = *v75;
        v75 += 3;
        v53[1] = (*(_DWORD *)(v15 + 4LL * (v78 + 512)) + *(_DWORD *)(v15 + 4 * v77)) >> 13;
        *v53 = (*(_DWORD *)(v15 + 4LL * (*(v75 - 4) + 512)) + *(_DWORD *)(v15 + 4LL * (v75[v76 - 4] + 768))) >> 13;
        v53 += v125;
      }
      while ( v53 != v124 );
    }
    else
    {
      v79 = 4096 - HIWORD(v86);
      do
      {
        v79 += HIWORD(v86);
        *(_DWORD *)(v52 + 3072) = v79;
        v52 += 4LL;
      }
      while ( v52 < v15 + 1024 );
      v80 = (unsigned __int8 *)(v19 + 1);
      do
      {
        v53[2] = *(int *)(v15 + 4LL * (v80[1] + 768)) >> 13;
        v81 = *v80;
        v80 += 3;
        v53[1] = *(int *)(v15 + 4LL * (v81 + 768)) >> 13;
        *v53 = *(int *)(v15 + 4LL * (*(v80 - 4) + 768)) >> 13;
        v53 += v125;
      }
      while ( v53 != v124 );
    }
    v82 = v95[0];
    if ( SLOBYTE(v95[0]) < 0 )
    {
      v100(v95);
      v82 = v95[0];
    }
    if ( (v82 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v95);
      LOBYTE(v82) = v95[0];
    }
    if ( (v82 & 0x10) != 0 )
    {
      MappingBGRF(v119, v120, v107, v114);
      v83 = v117 + v114;
      if ( v83 == v115 )
        v83 = v116;
      v114 = v83;
    }
    v101(v95, v121, v122, v96, v106, v108, v108 + v112, v113, v102);
    v84 = v111 + v108;
    if ( v84 == v109 )
      v84 = v110;
    v96 += v99;
    v40 = v91;
    v108 = v84;
    v39 = v94;
  }
  return v98;
}
