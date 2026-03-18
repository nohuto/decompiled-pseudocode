/*
 * XREFs of GrayExpandDIB_CY @ 0x1C0257320
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C000D0D8 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0253D48 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0258E08 (MappingBGRF.c)
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
  __int64 v18; // r12
  __int64 v19; // r15
  __int64 v20; // rsi
  const void *v21; // r12
  char *v22; // r14
  __int64 v23; // rbx
  void *FixupScan; // rax
  void *v25; // rax
  __int64 v26; // rax
  int v27; // r14d
  int v28; // ebx
  int v29; // r14d
  int v30; // ebx
  __int128 v31; // xmm0
  _BYTE *v32; // xmm1_8
  int v33; // eax
  _BYTE *v34; // r12
  const void *v35; // r15
  unsigned __int8 *v36; // r13
  void *v37; // rax
  signed __int64 v38; // r15
  int v39; // ecx
  __int64 *v40; // rcx
  int v41; // eax
  unsigned __int16 v42; // r14
  __int64 v43; // xmm0_8
  unsigned __int8 *v44; // r15
  _BYTE *v45; // xmm1_8
  _BYTE *v46; // rbx
  void *v47; // rax
  int v48; // ecx
  unsigned __int64 v49; // rdx
  _WORD *v50; // r8
  int v51; // ecx
  unsigned __int8 *v52; // r10
  int v53; // r11d
  __int64 v54; // r9
  int *v55; // rdx
  int v56; // r10d
  int v57; // edx
  __int64 v58; // rax
  int *v59; // rdx
  int v60; // r10d
  __int64 v61; // rcx
  int v62; // edx
  __int64 v63; // rax
  int *v64; // rdx
  int v65; // r9d
  __int64 v66; // rax
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rax
  __int16 v70; // ax
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v74; // [rsp+58h] [rbp-B0h]
  size_t Size; // [rsp+60h] [rbp-A8h]
  __m256i v76; // [rsp+78h] [rbp-90h]
  __int64 v77; // [rsp+98h] [rbp-70h]
  int v78; // [rsp+A4h] [rbp-64h]
  unsigned __int64 v79; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v80; // [rsp+B8h] [rbp-50h]
  __int64 *v81; // [rsp+C0h] [rbp-48h]
  int v82[34]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v83; // [rsp+150h] [rbp+48h]
  int v84; // [rsp+158h] [rbp+50h]
  unsigned int v85; // [rsp+15Ch] [rbp+54h]
  int v86; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v87)(int *, unsigned __int64, _WORD *, __int64); // [rsp+188h] [rbp+80h]
  void (__fastcall *v88)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v89; // [rsp+1E0h] [rbp+D8h]
  void (__fastcall *v90)(__int64, void *, const void *, __int64, int); // [rsp+1E8h] [rbp+E0h]
  __int64 v91; // [rsp+1F8h] [rbp+F0h]
  __int64 v92; // [rsp+200h] [rbp+F8h]
  __int64 v93; // [rsp+248h] [rbp+140h]
  __int64 v94; // [rsp+250h] [rbp+148h]
  __int64 v95; // [rsp+260h] [rbp+158h]
  __int64 v96; // [rsp+268h] [rbp+160h]
  __int64 v97; // [rsp+270h] [rbp+168h]
  int v98; // [rsp+278h] [rbp+170h]
  int v99; // [rsp+27Ch] [rbp+174h]
  int v100; // [rsp+280h] [rbp+178h]
  __int64 v101; // [rsp+288h] [rbp+180h]
  __int64 v102; // [rsp+290h] [rbp+188h]
  __int64 v103; // [rsp+298h] [rbp+190h]
  int v104; // [rsp+2A0h] [rbp+198h]
  void *v105; // [rsp+2E0h] [rbp+1D8h]
  __int64 v106; // [rsp+2E8h] [rbp+1E0h]
  __int64 v107; // [rsp+2F0h] [rbp+1E8h]
  __int64 v108; // [rsp+2F8h] [rbp+1F0h]
  __int64 v109; // [rsp+300h] [rbp+1F8h]
  _WORD *v110; // [rsp+308h] [rbp+200h]
  _WORD *v111; // [rsp+310h] [rbp+208h]
  int v112; // [rsp+318h] [rbp+210h]

  v1 = 4LL;
  v2 = v82;
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
  v15 = *(_QWORD *)(v92 + 32);
  v79 = v15;
  v80 = v15 + 1024;
  v16 = (unsigned __int8 *)(v15 + 4099);
  v17 = v84 + 6;
  v18 = v17 + v15 + 4099;
  v19 = v17 + v18;
  v76.m256i_i64[0] = v18;
  v20 = v17 + v17 + v18;
  v76.m256i_i64[1] = v17 + v18;
  v21 = (const void *)(v17 + v20);
  v76.m256i_i64[2] = v20;
  v22 = (char *)(v17 + v17 + v20);
  v76.m256i_i64[3] = v17 + v20;
  v77 = (__int64)v22;
  Size = v84;
  v23 = v84 + v17 + v20;
  FixupScan = GetFixupScan((__int64)v82, v105);
  v90(v91, FixupScan, v21, v23, 1);
  if ( (*(_BYTE *)(v92 + 8) & 1) != 0 )
  {
    v25 = GetFixupScan((__int64)v82, v105);
    v90(v91, v25, v22, (__int64)&v22[Size], 1);
  }
  else
  {
    memmove(v22, v21, Size);
  }
  v26 = v92;
  v27 = *(unsigned __int16 *)(v92 + 12);
  v28 = v27 & 0xF;
  v29 = v27 >> 4;
  v30 = v29 + v28;
  if ( v30 )
  {
    do
    {
      --v30;
      v31 = *(_OWORD *)v76.m256i_i8;
      v76.m256i_i64[1] = v76.m256i_i64[2];
      v32 = (_BYTE *)_mm_srli_si128(*(__m128i *)&v76.m256i_u64[2], 8).m128i_u64[0];
      v20 = (__int64)v32;
      v33 = v29;
      v76.m256i_i64[2] = (__int64)v32;
      v76.m256i_i64[0] = *((_QWORD *)&v31 + 1);
      --v29;
      v34 = v32;
      v76.m256i_i64[3] = v77;
      v35 = (const void *)v77;
      v77 = (__int64)v16;
      if ( v33 <= 0 )
      {
        v37 = GetFixupScan((__int64)v82, v105);
        v36 = &v16[Size];
        v90(v91, v37, v16, (__int64)&v16[Size], 1);
      }
      else
      {
        memmove(v16, v35, Size);
        v36 = &v16[Size];
      }
      if ( (v82[0] & 0x200) != 0 )
      {
        memmove(v32, v35, Size);
      }
      else
      {
        v38 = (_BYTE *)v35 - v32;
        do
        {
          v39 = (6 * (unsigned __int8)v34[v38] - (unsigned __int8)*v34 - *v16) >> 2;
          if ( (v39 & 0xFF00) != 0 )
            LOBYTE(v39) = ~HIBYTE(v39);
          *v34 = v39;
          ++v16;
          ++v34;
        }
        while ( v16 < v36 );
      }
      v16 = (unsigned __int8 *)v31;
    }
    while ( v30 );
    v26 = v92;
    v19 = v76.m256i_i64[1];
    v15 = v79;
  }
  v40 = *(__int64 **)(v26 + 40);
  v41 = *(_DWORD *)(v26 + 16);
  while ( v41 )
  {
    v78 = v41 - 1;
    v42 = *v40;
    v74 = *v40;
    v81 = v40 + 1;
    if ( (v42 & 0x8000u) != 0 )
    {
      v43 = v76.m256i_i64[0];
      v44 = &v16[Size];
      v45 = (_BYTE *)_mm_srli_si128(*(__m128i *)&v76.m256i_u64[2], 8).m128i_u64[0];
      v20 = (__int64)v45;
      *(_OWORD *)v76.m256i_i8 = *(_OWORD *)&v76.m256i_u64[1];
      v46 = v45;
      v76.m256i_i64[2] = (__int64)v45;
      v76.m256i_i64[3] = v77;
      v77 = (__int64)v16;
      v47 = GetFixupScan((__int64)v82, v105);
      v90(v91, v47, v16, (__int64)&v16[Size], 1);
      if ( (v82[0] & 0x200) != 0 )
      {
        memmove(v45, (const void *)v76.m256i_i64[3], Size);
      }
      else
      {
        do
        {
          v48 = (6 * (unsigned __int8)v46[v76.m256i_i64[3] - (_QWORD)v45] - (unsigned __int8)*v46 - *v16) >> 2;
          if ( (v48 & 0xFF00) != 0 )
            LOBYTE(v48) = ~HIBYTE(v48);
          *v46 = v48;
          ++v16;
          ++v46;
        }
        while ( v16 < v44 );
      }
      v19 = v76.m256i_i64[1];
      v16 = (unsigned __int8 *)v43;
      v42 &= 0x3FFFu;
    }
    v49 = v15;
    v50 = v110;
    v51 = -WORD2(v74);
    v52 = (unsigned __int8 *)v20;
    v53 = -v42;
    v54 = (unsigned int)-WORD1(v74);
    if ( v42 )
    {
      v55 = (int *)(v15 + 2048);
      v56 = 256 - HIWORD(v74);
      do
      {
        v53 += v42;
        LODWORD(v54) = WORD1(v74) + (_DWORD)v54;
        v51 += WORD2(v74);
        *(v55 - 512) = v53;
        v56 += HIWORD(v74);
        *(v55 - 256) = v54;
        *v55 = v51;
        v55[256] = v56;
        ++v55;
      }
      while ( (unsigned __int64)(v55 - 512) < v80 );
      v15 = v79;
      v54 = v19;
      do
      {
        v57 = *(_DWORD *)(v79 + 4LL * v16[v54 - v19])
            + *(_DWORD *)(v79 + 4LL * *(unsigned __int8 *)(v76.m256i_i64[0] - v19 + v54) + 1024)
            + *(_DWORD *)(v79 + 4LL * *(unsigned __int8 *)(v20 - v19 + v54) + 3072);
        v58 = *(unsigned __int8 *)v54++;
        v49 = (unsigned int)((*(_DWORD *)(v79 + 4 * v58 + 2048) + v57) >> 5);
        *v50 = v49;
        v50 = (_WORD *)((char *)v50 + v112);
      }
      while ( v50 != v111 );
    }
    else if ( WORD1(v74) )
    {
      v59 = (int *)(v15 + 2048);
      v60 = 256 - HIWORD(v74);
      do
      {
        LODWORD(v54) = WORD1(v74) + (_DWORD)v54;
        v51 += WORD2(v74);
        v60 += HIWORD(v74);
        *(v59 - 256) = v54;
        *v59 = v51;
        v59[256] = v60;
        ++v59;
      }
      while ( (unsigned __int64)(v59 - 512) < v15 + 1024 );
      v54 = v76.m256i_i64[0];
      do
      {
        v61 = *(unsigned __int8 *)(v54 + v19 - v76.m256i_i64[0]);
        v62 = *(_DWORD *)(v15 + 4LL * *(unsigned __int8 *)(v54 + v20 - v76.m256i_i64[0]) + 3072);
        v63 = *(unsigned __int8 *)v54++;
        v49 = (unsigned int)((*(_DWORD *)(v15 + 4 * v63 + 1024) + *(_DWORD *)(v15 + 4 * v61 + 2048) + v62) >> 5);
        *v50 = v49;
        v50 = (_WORD *)((char *)v50 + v112);
      }
      while ( v50 != v111 );
    }
    else if ( WORD2(v74) )
    {
      v64 = (int *)(v15 + 3072);
      v65 = 256 - HIWORD(v74);
      do
      {
        v51 += WORD2(v74);
        v65 += HIWORD(v74);
        *(v64 - 256) = v51;
        *v64++ = v65;
      }
      while ( (unsigned __int64)(v64 - 768) < v15 + 1024 );
      v54 = v19 - v20;
      do
      {
        v66 = v52[v54];
        v67 = *v52++;
        v49 = (unsigned int)((*(_DWORD *)(v15 + 4 * v67 + 3072) + *(_DWORD *)(v15 + 4 * v66 + 2048)) >> 5);
        *v50 = v49;
        v50 = (_WORD *)((char *)v50 + v112);
      }
      while ( v50 != v111 );
    }
    else
    {
      v68 = 256 - HIWORD(v74);
      do
      {
        v68 += HIWORD(v74);
        *(_DWORD *)(v49 + 3072) = v68;
        v49 += 4LL;
      }
      while ( v49 < v15 + 1024 );
      do
      {
        v69 = *v52++;
        *v50 = *(int *)(v15 + 4 * v69 + 3072) >> 5;
        v50 = (_WORD *)((char *)v50 + v112);
      }
      while ( v50 != v111 );
    }
    v70 = v82[0];
    if ( SLOBYTE(v82[0]) < 0 )
    {
      v87(v82, v49, v50, v54);
      v70 = v82[0];
    }
    if ( (v70 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v82);
      LOBYTE(v70) = v82[0];
    }
    if ( (v70 & 0x10) != 0 )
    {
      MappingBGRF(v106, v107, v94, v101);
      v71 = v104 + v101;
      if ( v71 == v102 )
        v71 = v103;
      v101 = v71;
    }
    v88(v82, v108, v109, v83, v93, v95, v95 + v99, v100, v89);
    v72 = v98 + v95;
    if ( v72 == v96 )
      v72 = v97;
    v83 += v86;
    v41 = v78;
    v95 = v72;
    v40 = v81;
  }
  return v85;
}
