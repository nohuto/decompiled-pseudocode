/*
 * XREFs of GrayExpandDIB_CY @ 0x1C0254320
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

__int64 __fastcall GrayExpandDIB_CY(_OWORD *a1)
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
  unsigned __int64 v15; // r13
  unsigned __int8 *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned __int8 *v19; // r14
  char *v20; // r12
  char *v21; // rsi
  char *v22; // rbx
  void *FixupScan; // rax
  void *v24; // rax
  __int64 v25; // rax
  int v26; // esi
  int v27; // ebx
  int v28; // esi
  int v29; // ebx
  __int128 v30; // xmm0
  unsigned __int8 *v31; // xmm1_8
  int v32; // eax
  unsigned __int8 *v33; // r12
  const void *v34; // r15
  unsigned __int8 *v35; // r13
  void *v36; // rax
  signed __int64 v37; // r15
  int v38; // ecx
  __int64 *v39; // rcx
  int v40; // eax
  unsigned __int16 v41; // si
  __int64 v42; // xmm0_8
  unsigned __int8 *v43; // r15
  unsigned __int8 *v44; // xmm1_8
  unsigned __int8 *v45; // rbx
  void *v46; // rax
  int v47; // ecx
  unsigned __int64 v48; // rdx
  _WORD *v49; // r9
  int v50; // ecx
  unsigned __int8 *v51; // r10
  int v52; // r11d
  int v53; // r8d
  int *v54; // rdx
  int v55; // r10d
  unsigned __int8 *v56; // r10
  int v57; // r8d
  __int64 v58; // rcx
  __int64 v59; // rax
  int *v60; // rdx
  int v61; // r10d
  unsigned __int8 *v62; // r10
  __int64 v63; // rdx
  __int64 v64; // rcx
  int v65; // eax
  int *v66; // rdx
  int v67; // r8d
  __int64 v68; // rdx
  int v69; // eax
  int v70; // eax
  int v71; // eax
  __int16 v72; // ax
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v76; // [rsp+58h] [rbp-B0h]
  size_t Size; // [rsp+68h] [rbp-A0h]
  __m256i v78; // [rsp+78h] [rbp-90h]
  __int64 v79; // [rsp+98h] [rbp-70h]
  int v80; // [rsp+A8h] [rbp-60h]
  unsigned __int64 v81; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v82; // [rsp+B8h] [rbp-50h]
  __int64 *v83; // [rsp+C0h] [rbp-48h]
  int v84[34]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v85; // [rsp+150h] [rbp+48h]
  int v86; // [rsp+158h] [rbp+50h]
  unsigned int v87; // [rsp+15Ch] [rbp+54h]
  int v88; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v89)(int *); // [rsp+188h] [rbp+80h]
  void (__fastcall *v90)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v91; // [rsp+1E0h] [rbp+D8h]
  void (__fastcall *v92)(__int64, void *, char *, char *, int); // [rsp+1E8h] [rbp+E0h]
  __int64 v93; // [rsp+1F8h] [rbp+F0h]
  __int64 v94; // [rsp+200h] [rbp+F8h]
  __int64 v95; // [rsp+248h] [rbp+140h]
  __int64 v96; // [rsp+250h] [rbp+148h]
  __int64 v97; // [rsp+260h] [rbp+158h]
  __int64 v98; // [rsp+268h] [rbp+160h]
  __int64 v99; // [rsp+270h] [rbp+168h]
  int v100; // [rsp+278h] [rbp+170h]
  int v101; // [rsp+27Ch] [rbp+174h]
  int v102; // [rsp+280h] [rbp+178h]
  __int64 v103; // [rsp+288h] [rbp+180h]
  __int64 v104; // [rsp+290h] [rbp+188h]
  __int64 v105; // [rsp+298h] [rbp+190h]
  int v106; // [rsp+2A0h] [rbp+198h]
  void *v107; // [rsp+2E0h] [rbp+1D8h]
  __int64 v108; // [rsp+2E8h] [rbp+1E0h]
  __int64 v109; // [rsp+2F0h] [rbp+1E8h]
  __int64 v110; // [rsp+2F8h] [rbp+1F0h]
  __int64 v111; // [rsp+300h] [rbp+1F8h]
  _WORD *v112; // [rsp+308h] [rbp+200h]
  _WORD *v113; // [rsp+310h] [rbp+208h]
  int v114; // [rsp+318h] [rbp+210h]

  v1 = 4LL;
  v2 = v84;
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
  v15 = *(_QWORD *)(v94 + 32);
  v81 = v15;
  v82 = v15 + 1024;
  v16 = (unsigned __int8 *)(v15 + 4099);
  v17 = v86 + 6;
  v18 = v17 + v17 + v15 + 4099;
  v78.m256i_i64[0] = v17 + v15 + 4099;
  v19 = (unsigned __int8 *)(v17 + v18);
  v20 = (char *)(v17 + v17 + v18);
  v78.m256i_i64[1] = v18;
  v21 = &v20[v17];
  v78.m256i_i64[2] = v17 + v18;
  v78.m256i_i64[3] = (__int64)v20;
  v79 = (__int64)&v20[v17];
  Size = v86;
  v22 = &v20[v86];
  FixupScan = GetFixupScan((__int64)v84, v107);
  v92(v93, FixupScan, v20, v22, 1);
  if ( (*(_BYTE *)(v94 + 8) & 1) != 0 )
  {
    v24 = GetFixupScan((__int64)v84, v107);
    v92(v93, v24, v21, &v21[Size], 1);
  }
  else
  {
    memmove(v21, v20, Size);
  }
  v25 = v94;
  v26 = *(unsigned __int16 *)(v94 + 12);
  v27 = v26 & 0xF;
  v28 = v26 >> 4;
  v29 = v28 + v27;
  if ( v29 )
  {
    do
    {
      --v29;
      v30 = *(_OWORD *)v78.m256i_i8;
      v78.m256i_i64[1] = v78.m256i_i64[2];
      v31 = (unsigned __int8 *)_mm_srli_si128(*(__m128i *)&v78.m256i_u64[2], 8).m128i_u64[0];
      v19 = v31;
      v32 = v28;
      v78.m256i_i64[2] = (__int64)v31;
      v78.m256i_i64[0] = *((_QWORD *)&v30 + 1);
      --v28;
      v33 = v31;
      v78.m256i_i64[3] = v79;
      v34 = (const void *)v79;
      v79 = (__int64)v16;
      if ( v32 <= 0 )
      {
        v36 = GetFixupScan((__int64)v84, v107);
        v35 = &v16[Size];
        v92(v93, v36, (char *)v16, (char *)&v16[Size], 1);
      }
      else
      {
        memmove(v16, v34, Size);
        v35 = &v16[Size];
      }
      if ( (v84[0] & 0x200) != 0 )
      {
        memmove(v31, v34, Size);
      }
      else
      {
        v37 = (_BYTE *)v34 - v31;
        do
        {
          v38 = (6 * v33[v37] - *v33 - *v16) >> 2;
          if ( (v38 & 0xFF00) != 0 )
            LOBYTE(v38) = ~HIBYTE(v38);
          *v33 = v38;
          ++v16;
          ++v33;
        }
        while ( v16 < v35 );
      }
      v16 = (unsigned __int8 *)v30;
    }
    while ( v29 );
    v25 = v94;
    v18 = v78.m256i_i64[1];
    v15 = v81;
  }
  v39 = *(__int64 **)(v25 + 40);
  v40 = *(_DWORD *)(v25 + 16);
  while ( v40 )
  {
    v80 = v40 - 1;
    v41 = *v39;
    v76 = *v39;
    v83 = v39 + 1;
    if ( (v41 & 0x8000u) != 0 )
    {
      v42 = v78.m256i_i64[0];
      v43 = &v16[Size];
      v44 = (unsigned __int8 *)_mm_srli_si128(*(__m128i *)&v78.m256i_u64[2], 8).m128i_u64[0];
      v19 = v44;
      *(_OWORD *)v78.m256i_i8 = *(_OWORD *)&v78.m256i_u64[1];
      v45 = v44;
      v78.m256i_i64[2] = (__int64)v44;
      v78.m256i_i64[3] = v79;
      v79 = (__int64)v16;
      v46 = GetFixupScan((__int64)v84, v107);
      v92(v93, v46, (char *)v16, (char *)&v16[Size], 1);
      if ( (v84[0] & 0x200) != 0 )
      {
        memmove(v44, (const void *)v78.m256i_i64[3], Size);
      }
      else
      {
        do
        {
          v47 = (6 * v45[v78.m256i_i64[3] - (_QWORD)v44] - *v45 - *v16) >> 2;
          if ( (v47 & 0xFF00) != 0 )
            LOBYTE(v47) = ~HIBYTE(v47);
          *v45 = v47;
          ++v16;
          ++v45;
        }
        while ( v16 < v43 );
      }
      v18 = v78.m256i_i64[1];
      v16 = (unsigned __int8 *)v42;
      v41 &= 0x3FFFu;
    }
    v48 = v15;
    v49 = v112;
    v50 = -WORD2(v76);
    v51 = v19;
    v52 = -v41;
    v53 = -WORD1(v76);
    if ( v41 )
    {
      v54 = (int *)(v15 + 2048);
      v55 = 256 - HIWORD(v76);
      do
      {
        v52 += v41;
        v53 += WORD1(v76);
        v50 += WORD2(v76);
        *(v54 - 512) = v52;
        v55 += HIWORD(v76);
        *(v54 - 256) = v53;
        *v54 = v50;
        v54[256] = v55;
        ++v54;
      }
      while ( (unsigned __int64)(v54 - 512) < v82 );
      v15 = v81;
      v56 = (unsigned __int8 *)v18;
      do
      {
        v57 = *(_DWORD *)(v81 + 4LL * (v56[v78.m256i_i64[0] - v18] + 256))
            + *(_DWORD *)(v81 + 4LL * (v19[(_QWORD)v56 - v18] + 768));
        v58 = *v56 + 512;
        v59 = v16[(_QWORD)v56++ - v18];
        *v49 = (*(_DWORD *)(v81 + 4 * v59) + *(_DWORD *)(v81 + 4 * v58) + v57) >> 5;
        v49 = (_WORD *)((char *)v49 + v114);
      }
      while ( v49 != v113 );
    }
    else if ( WORD1(v76) )
    {
      v60 = (int *)(v15 + 2048);
      v61 = 256 - HIWORD(v76);
      do
      {
        v53 += WORD1(v76);
        v50 += WORD2(v76);
        v61 += HIWORD(v76);
        *(v60 - 256) = v53;
        *v60 = v50;
        v60[256] = v61;
        ++v60;
      }
      while ( (unsigned __int64)(v60 - 512) < v15 + 1024 );
      v62 = (unsigned __int8 *)v78.m256i_i64[0];
      do
      {
        v63 = v19[(_QWORD)v62 - v78.m256i_i64[0]] + 768;
        v64 = v62[v18 - v78.m256i_i64[0]] + 512;
        v65 = *v62++;
        *v49 = (*(_DWORD *)(v15 + 4LL * (v65 + 256)) + *(_DWORD *)(v15 + 4 * v64) + *(_DWORD *)(v15 + 4 * v63)) >> 5;
        v49 = (_WORD *)((char *)v49 + v114);
      }
      while ( v49 != v113 );
    }
    else if ( WORD2(v76) )
    {
      v66 = (int *)(v15 + 3072);
      v67 = 256 - HIWORD(v76);
      do
      {
        v50 += WORD2(v76);
        v67 += HIWORD(v76);
        *(v66 - 256) = v50;
        *v66++ = v67;
      }
      while ( (unsigned __int64)(v66 - 768) < v15 + 1024 );
      do
      {
        v68 = v51[v18 - (_QWORD)v19] + 512;
        v69 = *v51++;
        *v49 = (*(_DWORD *)(v15 + 4LL * (v69 + 768)) + *(_DWORD *)(v15 + 4 * v68)) >> 5;
        v49 = (_WORD *)((char *)v49 + v114);
      }
      while ( v49 != v113 );
    }
    else
    {
      v70 = 256 - HIWORD(v76);
      do
      {
        v70 += HIWORD(v76);
        *(_DWORD *)(v48 + 3072) = v70;
        v48 += 4LL;
      }
      while ( v48 < v15 + 1024 );
      do
      {
        v71 = *v51++;
        *v49 = *(int *)(v15 + 4LL * (v71 + 768)) >> 5;
        v49 = (_WORD *)((char *)v49 + v114);
      }
      while ( v49 != v113 );
    }
    v72 = v84[0];
    if ( SLOBYTE(v84[0]) < 0 )
    {
      v89(v84);
      v72 = v84[0];
    }
    if ( (v72 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v84);
      LOBYTE(v72) = v84[0];
    }
    if ( (v72 & 0x10) != 0 )
    {
      MappingBGRF(v108, v109, v96, v103);
      v73 = v106 + v103;
      if ( v73 == v104 )
        v73 = v105;
      v103 = v73;
    }
    v90(v84, v110, v111, v85, v95, v97, v97 + v101, v102, v91);
    v74 = v100 + v97;
    if ( v74 == v98 )
      v74 = v99;
    v85 += v88;
    v40 = v80;
    v97 = v74;
    v39 = v83;
  }
  return v87;
}
