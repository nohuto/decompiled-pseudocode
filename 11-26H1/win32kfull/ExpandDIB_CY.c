/*
 * XREFs of ExpandDIB_CY @ 0x140199E90
 * Callers:
 *     <none>
 * Callees:
 *     MappingBGRF @ 0x1400F03F4 (MappingBGRF.c)
 *     AlphaBlendBGRF @ 0x1400F1A88 (AlphaBlendBGRF.c)
 *     GetFixupScan @ 0x1400F27B8 (GetFixupScan.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14034FF00 (memmove.c)
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
  int *v15; // r14
  unsigned __int8 *v16; // rdi
  int v17; // ecx
  __int64 v18; // rbx
  __int64 v19; // r13
  char *v20; // r12
  unsigned __int8 *v21; // r15
  __int64 v22; // rsi
  __int64 FixupScan; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // r15d
  int v27; // eax
  unsigned int v28; // r15d
  unsigned int v29; // r12d
  int v30; // eax
  __int128 v31; // xmm1
  unsigned __int64 v32; // r13
  unsigned __int8 *v33; // rbx
  char *v34; // rbx
  unsigned __int8 *v35; // r9
  unsigned __int8 *v36; // rdi
  unsigned __int8 *v37; // r8
  int v38; // ecx
  int v39; // edx
  int v40; // ecx
  __int64 *v41; // rdx
  int v42; // eax
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  unsigned __int8 *v46; // r9
  unsigned __int8 *v47; // rdx
  __int64 v48; // rbx
  unsigned __int64 v49; // r9
  _BYTE *v50; // r8
  int v51; // ecx
  int v52; // r15d
  int v53; // r10d
  int *v54; // r9
  int v55; // r11d
  unsigned __int8 *v56; // rbx
  __int64 v57; // r9
  unsigned __int8 *v58; // r10
  __int64 v59; // r11
  int v60; // edx
  __int64 v61; // rax
  __int16 v62; // ax
  __int64 v63; // rcx
  __int128 v64; // xmm1
  unsigned __int64 v65; // r15
  __int64 v66; // rax
  __int64 v67; // r8
  unsigned __int8 *v68; // rdi
  int *v69; // r9
  int v70; // r11d
  unsigned __int8 *v71; // r9
  __int64 v72; // r10
  __int64 v73; // r11
  int v74; // edx
  __int64 v75; // rax
  __int64 v77; // rax
  int *v78; // r10
  int v79; // r9d
  unsigned __int8 *v80; // r9
  __int64 v81; // r10
  __int64 v82; // rax
  __int64 v83; // rcx
  int v84; // eax
  unsigned __int8 *v85; // rdx
  __int64 v86; // rax
  unsigned __int8 *v87; // rax
  __int64 v88; // [rsp+58h] [rbp-B0h]
  _BYTE v89[40]; // [rsp+68h] [rbp-A0h]
  unsigned __int8 *v90; // [rsp+90h] [rbp-78h]
  int v91; // [rsp+A0h] [rbp-68h]
  size_t Size; // [rsp+A8h] [rbp-60h]
  __int64 *v93; // [rsp+B8h] [rbp-50h]
  int v94[34]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v95; // [rsp+150h] [rbp+48h]
  int v96; // [rsp+158h] [rbp+50h]
  unsigned int v97; // [rsp+15Ch] [rbp+54h]
  int v98; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v99)(int *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v100)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v101; // [rsp+1E0h] [rbp+D8h]
  void (__fastcall *v102)(__int64, __int64, char *, char *, int); // [rsp+1E8h] [rbp+E0h]
  __int64 v103; // [rsp+1F8h] [rbp+F0h]
  __int64 v104; // [rsp+200h] [rbp+F8h]
  __int64 v105; // [rsp+248h] [rbp+140h]
  __int64 v106; // [rsp+250h] [rbp+148h]
  __int64 v107; // [rsp+260h] [rbp+158h]
  __int64 v108; // [rsp+268h] [rbp+160h]
  __int64 v109; // [rsp+270h] [rbp+168h]
  int v110; // [rsp+278h] [rbp+170h]
  int v111; // [rsp+27Ch] [rbp+174h]
  int v112; // [rsp+280h] [rbp+178h]
  unsigned __int8 *v113; // [rsp+288h] [rbp+180h]
  unsigned __int8 *v114; // [rsp+290h] [rbp+188h]
  unsigned __int8 *v115; // [rsp+298h] [rbp+190h]
  int v116; // [rsp+2A0h] [rbp+198h]
  __int64 v117; // [rsp+2E0h] [rbp+1D8h]
  unsigned __int8 *v118; // [rsp+2E8h] [rbp+1E0h]
  unsigned __int64 v119; // [rsp+2F0h] [rbp+1E8h]
  __int64 v120; // [rsp+2F8h] [rbp+1F0h]
  __int64 v121; // [rsp+300h] [rbp+1F8h]
  _BYTE *v122; // [rsp+308h] [rbp+200h]
  _BYTE *v123; // [rsp+310h] [rbp+208h]
  int v124; // [rsp+318h] [rbp+210h]

  v1 = 4LL;
  v2 = v94;
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
  v15 = *(int **)(v104 + 32);
  v16 = (unsigned __int8 *)v15 + 4105;
  v17 = 3 * (v96 + 6);
  v18 = v17;
  v19 = (__int64)v15 + v17 + 4105;
  *(_QWORD *)&v89[8] = v19;
  *(_QWORD *)&v89[16] = (char *)v15 + 2 * v17 + 4105;
  v20 = (char *)&v15[v17 + 1026] + 1;
  *(_QWORD *)&v89[32] = v20;
  Size = v17 - 18;
  v21 = (unsigned __int8 *)&v20[v17];
  v90 = v21;
  v22 = v17 + *(_QWORD *)&v89[16];
  *(_QWORD *)&v89[24] = v22;
  FixupScan = GetFixupScan((unsigned int *)v94, v117);
  v102(v103, FixupScan, v20, &v20[Size], 3);
  if ( (*(_BYTE *)(v104 + 8) & 1) != 0 )
  {
    v24 = GetFixupScan((unsigned int *)v94, v117);
    v102(v103, v24, (char *)v21, &v20[Size + v18], 3);
  }
  else
  {
    memmove(v21, v20, Size);
  }
  v25 = v104;
  v26 = *(unsigned __int16 *)(v104 + 12);
  v27 = v26 & 0xF;
  v28 = v26 >> 4;
  v29 = v27 + v28;
  if ( v27 + v28 )
  {
    do
    {
      v30 = v28;
      --v29;
      v31 = *(_OWORD *)&v89[24];
      --v28;
      v32 = (unsigned __int64)&v16[Size];
      *(_OWORD *)v89 = *(_OWORD *)&v89[8];
      *(_QWORD *)&v89[32] = v90;
      v33 = v90;
      v90 = v16;
      *(_OWORD *)&v89[16] = v31;
      if ( v30 <= 0 )
      {
        v77 = GetFixupScan((unsigned int *)v94, v117);
        v102(v103, v77, (char *)v16, (char *)&v16[Size], 3);
      }
      else
      {
        memmove(v16, v33, Size);
      }
      v22 = *((_QWORD *)&v31 + 1);
      if ( (v94[0] & 0x200) != 0 )
      {
        memmove(*((void **)&v31 + 1), v33, Size);
      }
      else
      {
        v34 = (char *)&v33[-*((_QWORD *)&v31 + 1)];
        v35 = v16 + 2;
        v36 = &v16[-*((_QWORD *)&v31 + 1)];
        v37 = (unsigned __int8 *)(*((_QWORD *)&v31 + 1) + 1LL);
        do
        {
          v38 = (6 * v37[(_QWORD)v34 - 1] - v37[(_QWORD)v36 - 1] - *(v37 - 1)) >> 2;
          if ( (v38 & 0xFF00) != 0 )
            LOBYTE(v38) = ~HIBYTE(v38);
          *(v37 - 1) = v38;
          v39 = (6 * v37[(_QWORD)v34] - *(v35 - 1) - *v37) >> 2;
          if ( (v39 & 0xFF00) != 0 )
            LOBYTE(v39) = ~HIBYTE(v39);
          *v37 = v39;
          v40 = (6 * v37[(_QWORD)v34 + 1] - *v35 - v37[1]) >> 2;
          if ( (v40 & 0xFF00) != 0 )
            LOBYTE(v40) = ~HIBYTE(v40);
          v37[1] = v40;
          v35 += 3;
          v37 += 3;
        }
        while ( &v37[(_QWORD)v36 - 1] < (unsigned __int8 *)v32 );
      }
      v16 = *(unsigned __int8 **)v89;
    }
    while ( v29 );
    v25 = v104;
    v19 = *(_QWORD *)&v89[8];
  }
  v41 = *(__int64 **)(v25 + 40);
  v42 = *(_DWORD *)(v25 + 16);
  while ( v42 )
  {
    v48 = *v41;
    v91 = v42 - 1;
    v88 = *v41;
    v93 = v41 + 1;
    if ( (*v41 & 0x8000u) != 0LL )
    {
      v64 = *(_OWORD *)&v89[24];
      *(_OWORD *)v89 = *(_OWORD *)&v89[8];
      v65 = (unsigned __int64)&v16[Size];
      *(_QWORD *)&v89[32] = v90;
      *(_OWORD *)&v89[16] = v64;
      v90 = v16;
      v66 = GetFixupScan((unsigned int *)v94, v117);
      v102(v103, v66, (char *)v16, (char *)&v16[Size], 3);
      if ( (v94[0] & 0x200) != 0 )
      {
        v22 = *((_QWORD *)&v64 + 1);
        memmove(*((void **)&v64 + 1), *(const void **)&v89[32], Size);
      }
      else
      {
        v22 = *((_QWORD *)&v64 + 1);
        v46 = v16 + 2;
        v67 = *(_QWORD *)&v89[32] - *((_QWORD *)&v64 + 1);
        v68 = &v16[-*((_QWORD *)&v64 + 1)];
        v47 = (unsigned __int8 *)(*((_QWORD *)&v64 + 1) + 1LL);
        do
        {
          v43 = (6 * v47[v67 - 1] - v68[(_QWORD)v47 - 1] - *(v47 - 1)) >> 2;
          if ( (v43 & 0xFF00) != 0 )
            LOBYTE(v43) = ~HIBYTE(v43);
          *(v47 - 1) = v43;
          v44 = (6 * v47[v67] - *(v46 - 1) - *v47) >> 2;
          if ( (v44 & 0xFF00) != 0 )
            LOBYTE(v44) = ~HIBYTE(v44);
          *v47 = v44;
          v45 = (6 * v47[v67 + 1] - *v46 - v47[1]) >> 2;
          if ( (v45 & 0xFF00) != 0 )
            LOBYTE(v45) = ~HIBYTE(v45);
          v47[1] = v45;
          v46 += 3;
          v47 += 3;
        }
        while ( &v47[(_QWORD)v68 - 1] < (unsigned __int8 *)v65 );
      }
      v19 = *(_QWORD *)&v89[8];
      v16 = *(unsigned __int8 **)v89;
      LOWORD(v48) = v48 & 0x3FFF;
    }
    v49 = (unsigned __int64)v15;
    v50 = v122;
    v51 = -WORD2(v88);
    v52 = -(unsigned __int16)v48;
    v53 = -WORD1(v88);
    if ( (_WORD)v48 )
    {
      v54 = v15 + 512;
      v55 = 4096 - HIWORD(v88);
      do
      {
        v52 += (unsigned __int16)v48;
        v53 += WORD1(v88);
        v51 += WORD2(v88);
        *(v54 - 512) = v52;
        v55 += HIWORD(v88);
        *(v54 - 256) = v53;
        *v54 = v51;
        v54[256] = v55;
        ++v54;
      }
      while ( v54 - 512 < v15 + 256 );
      v22 = *(_QWORD *)&v89[24];
      v56 = (unsigned __int8 *)(v19 + 2);
      v57 = *(_QWORD *)&v89[24] - v19;
      v58 = &v16[-v19];
      v59 = *(_QWORD *)&v89[16] - v19;
      do
      {
        v60 = v15[*v56 + 256] + v15[v56[v57] + 768] + v15[v56[v59] + 512];
        v61 = v56[(_QWORD)v58];
        v56 += 3;
        v50[2] = (v15[v61] + v60) >> 13;
        v50[1] = (v15[v56[(_QWORD)v58 - 4]] + v15[*(v56 - 4) + 256] + v15[v56[v59 - 4] + 512] + v15[v56[v57 - 4] + 768]) >> 13;
        *v50 = (v15[v56[(_QWORD)v58 - 5]] + v15[*(v56 - 5) + 256] + v15[v56[v59 - 5] + 512] + v15[v56[v57 - 5] + 768]) >> 13;
        v50 += v124;
      }
      while ( v50 != v123 );
    }
    else if ( WORD1(v88) )
    {
      v69 = v15 + 512;
      v70 = 4096 - HIWORD(v88);
      do
      {
        v53 += WORD1(v88);
        v51 += WORD2(v88);
        v70 += HIWORD(v88);
        *(v69 - 256) = v53;
        *v69 = v51;
        v69[256] = v70;
        ++v69;
      }
      while ( v69 - 512 < v15 + 256 );
      v22 = *(_QWORD *)&v89[24];
      v71 = (unsigned __int8 *)(v19 + 2);
      v72 = *(_QWORD *)&v89[24] - v19;
      v73 = *(_QWORD *)&v89[16] - v19;
      do
      {
        v74 = v15[*v71 + 256] + v15[v71[v73] + 512];
        v75 = v71[v72];
        v71 += 3;
        v50[2] = (v15[v75 + 768] + v74) >> 13;
        v50[1] = (v15[v71[v73 - 4] + 512] + v15[v71[v72 - 4] + 768] + v15[*(v71 - 4) + 256]) >> 13;
        *v50 = (v15[v71[v73 - 5] + 512] + v15[v71[v72 - 5] + 768] + v15[*(v71 - 5) + 256]) >> 13;
        v50 += v124;
      }
      while ( v50 != v123 );
    }
    else if ( WORD2(v88) )
    {
      v78 = v15 + 768;
      v79 = 4096 - HIWORD(v88);
      do
      {
        v51 += WORD2(v88);
        v79 += HIWORD(v88);
        *(v78 - 256) = v51;
        *v78++ = v79;
      }
      while ( v78 - 768 < v15 + 256 );
      v80 = (unsigned __int8 *)(v22 + 1);
      v81 = *(_QWORD *)&v89[16] - v22;
      do
      {
        v50[2] = (v15[v80[1] + 768] + v15[v80[v81 + 1] + 512]) >> 13;
        v82 = v80[v81];
        v83 = *v80;
        v80 += 3;
        v50[1] = (v15[v83 + 768] + v15[v82 + 512]) >> 13;
        *v50 = (v15[*(v80 - 4) + 768] + v15[v80[v81 - 4] + 512]) >> 13;
        v50 += v124;
      }
      while ( v50 != v123 );
    }
    else
    {
      v84 = 4096 - HIWORD(v88);
      do
      {
        v84 += HIWORD(v88);
        *(_DWORD *)(v49 + 3072) = v84;
        v49 += 4LL;
      }
      while ( v49 < (unsigned __int64)(v15 + 256) );
      v85 = (unsigned __int8 *)(v22 + 1);
      do
      {
        v50[2] = v15[v85[1] + 768] >> 13;
        v86 = *v85;
        v85 += 3;
        v50[1] = v15[v86 + 768] >> 13;
        *v50 = v15[*(v85 - 4) + 768] >> 13;
        v50 += v124;
      }
      while ( v50 != v123 );
    }
    v62 = v94[0];
    if ( SLOBYTE(v94[0]) < 0 )
    {
      v99(v94);
      v62 = v94[0];
    }
    if ( (v62 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v94);
      LOBYTE(v62) = v94[0];
    }
    if ( (v62 & 0x10) != 0 )
    {
      MappingBGRF(v118, v119, v106, v113);
      v87 = &v113[v116];
      if ( v87 == v114 )
        v87 = v115;
      v113 = v87;
    }
    v100(v94, v120, v121, v95, v105, v107, v107 + v111, v112, v101);
    v41 = v93;
    v63 = v110 + v107;
    if ( v63 == v108 )
      v63 = v109;
    v95 += v98;
    v42 = v91;
    v107 = v63;
  }
  return v97;
}
