/*
 * XREFs of GrayExpandDIB_CY @ 0x140268CD0
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
  __int64 v15; // rbx
  unsigned __int8 *v16; // r14
  __int64 v17; // r15
  unsigned __int8 *v18; // r12
  unsigned __int8 *v19; // rdi
  __int64 v20; // r13
  __int64 FixupScan; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // ebx
  int v25; // eax
  unsigned int v26; // ebx
  unsigned int v27; // r15d
  int v28; // eax
  __int128 v29; // xmm1
  unsigned __int8 *v30; // r13
  char *v31; // rsi
  __int64 v32; // rax
  char *v33; // rsi
  unsigned __int8 *v34; // rdx
  unsigned __int8 *v35; // rdi
  int v36; // ecx
  __int64 *v37; // rdx
  int v38; // eax
  __int64 v39; // rbx
  __int128 v40; // xmm0
  unsigned __int8 *v41; // r15
  unsigned __int8 *v42; // xmm1_8
  unsigned __int8 *v43; // rsi
  __int64 v44; // rax
  int v45; // ecx
  unsigned __int64 v46; // r9
  __int64 v47; // rdx
  unsigned __int8 *v48; // r11
  int v49; // ecx
  _WORD *v50; // r8
  unsigned __int8 *v51; // r15
  int v52; // esi
  int v53; // r10d
  int *v54; // r9
  int v55; // r11d
  int v56; // edx
  __int64 v57; // rax
  int *v58; // r9
  int v59; // r11d
  __int64 v60; // rcx
  int v61; // edx
  __int64 v62; // rax
  int *v63; // r10
  int v64; // r9d
  __int64 v65; // rax
  __int64 v66; // rcx
  int v67; // eax
  __int64 v68; // rax
  __int16 v69; // ax
  unsigned __int8 *v70; // rax
  __int64 v71; // rcx
  _BYTE v73[40]; // [rsp+60h] [rbp-A8h]
  char *v74; // [rsp+88h] [rbp-80h]
  __int64 v75; // [rsp+90h] [rbp-78h]
  int v76; // [rsp+A0h] [rbp-68h]
  size_t Size; // [rsp+A8h] [rbp-60h]
  unsigned __int8 *v78; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v79; // [rsp+B8h] [rbp-50h]
  __int64 *v80; // [rsp+C0h] [rbp-48h]
  int v81[34]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v82; // [rsp+150h] [rbp+48h]
  int v83; // [rsp+158h] [rbp+50h]
  unsigned int v84; // [rsp+15Ch] [rbp+54h]
  int v85; // [rsp+164h] [rbp+5Ch]
  void (__fastcall *v86)(int *, __int64, _WORD *, unsigned __int64); // [rsp+188h] [rbp+80h]
  void (__fastcall *v87)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1D8h] [rbp+D0h]
  __int64 v88; // [rsp+1E0h] [rbp+D8h]
  void (__fastcall *v89)(__int64, __int64, __int64, __int64, int); // [rsp+1E8h] [rbp+E0h]
  __int64 v90; // [rsp+1F8h] [rbp+F0h]
  __int64 v91; // [rsp+200h] [rbp+F8h]
  __int64 v92; // [rsp+248h] [rbp+140h]
  __int64 v93; // [rsp+250h] [rbp+148h]
  __int64 v94; // [rsp+260h] [rbp+158h]
  __int64 v95; // [rsp+268h] [rbp+160h]
  __int64 v96; // [rsp+270h] [rbp+168h]
  int v97; // [rsp+278h] [rbp+170h]
  int v98; // [rsp+27Ch] [rbp+174h]
  int v99; // [rsp+280h] [rbp+178h]
  unsigned __int8 *v100; // [rsp+288h] [rbp+180h]
  unsigned __int8 *v101; // [rsp+290h] [rbp+188h]
  unsigned __int8 *v102; // [rsp+298h] [rbp+190h]
  int v103; // [rsp+2A0h] [rbp+198h]
  __int64 v104; // [rsp+2E0h] [rbp+1D8h]
  unsigned __int8 *v105; // [rsp+2E8h] [rbp+1E0h]
  unsigned __int64 v106; // [rsp+2F0h] [rbp+1E8h]
  __int64 v107; // [rsp+2F8h] [rbp+1F0h]
  __int64 v108; // [rsp+300h] [rbp+1F8h]
  _WORD *v109; // [rsp+308h] [rbp+200h]
  _WORD *v110; // [rsp+310h] [rbp+208h]
  int v111; // [rsp+318h] [rbp+210h]

  v1 = 4LL;
  v2 = v81;
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
  v15 = v83 + 6;
  v16 = *(unsigned __int8 **)(v91 + 32);
  v78 = v16;
  v79 = (unsigned __int64)(v16 + 1024);
  *(_QWORD *)&v73[8] = &v16[v15 + 4099];
  v17 = (__int64)&v16[4 * v15 + 4099];
  *(_QWORD *)&v73[32] = v17;
  *(_QWORD *)&v73[16] = &v16[2 * v15 + 4099];
  v18 = (unsigned __int8 *)(v15 + *(_QWORD *)&v73[16]);
  *(_QWORD *)&v73[24] = v15 + *(_QWORD *)&v73[16];
  v19 = v16 + 4099;
  v74 = (char *)(v17 + v15);
  Size = v83;
  v20 = v83 + v17;
  FixupScan = GetFixupScan((unsigned int *)v81, v104);
  v89(v90, FixupScan, v17, v20, 1);
  if ( (*(_BYTE *)(v91 + 8) & 1) != 0 )
  {
    v22 = GetFixupScan((unsigned int *)v81, v104);
    v89(v90, v22, v17 + v15, v20 + v15, 1);
  }
  else
  {
    memmove((void *)(v17 + v15), &v16[4 * v15 + 4099], Size);
  }
  v23 = v91;
  v24 = *(unsigned __int16 *)(v91 + 12);
  v25 = v24 & 0xF;
  v26 = v24 >> 4;
  v27 = v25 + v26;
  if ( v25 + v26 )
  {
    do
    {
      v28 = v26;
      --v27;
      v29 = *(_OWORD *)&v73[24];
      --v26;
      v30 = &v19[Size];
      *(_OWORD *)v73 = *(_OWORD *)&v73[8];
      *(_QWORD *)&v73[32] = v74;
      v31 = v74;
      v74 = (char *)v19;
      *(_OWORD *)&v73[16] = v29;
      if ( v28 <= 0 )
      {
        v32 = GetFixupScan((unsigned int *)v81, v104);
        v89(v90, v32, (__int64)v19, (__int64)&v19[Size], 1);
      }
      else
      {
        memmove(v19, v31, Size);
      }
      v18 = (unsigned __int8 *)*((_QWORD *)&v29 + 1);
      if ( (v81[0] & 0x200) != 0 )
      {
        memmove(*((void **)&v29 + 1), v31, Size);
      }
      else
      {
        v33 = &v31[-*((_QWORD *)&v29 + 1)];
        v34 = (unsigned __int8 *)*((_QWORD *)&v29 + 1);
        v35 = &v19[-*((_QWORD *)&v29 + 1)];
        do
        {
          v36 = (6 * (unsigned __int8)v33[(_QWORD)v34] - v35[(_QWORD)v34] - *v34) >> 2;
          if ( (v36 & 0xFF00) != 0 )
            LOBYTE(v36) = ~HIBYTE(v36);
          *v34++ = v36;
        }
        while ( &v35[(_QWORD)v34] < v30 );
      }
      v19 = *(unsigned __int8 **)v73;
    }
    while ( v27 );
    v23 = v91;
  }
  v37 = *(__int64 **)(v23 + 40);
  v38 = *(_DWORD *)(v23 + 16);
  while ( v38 )
  {
    v39 = *v37;
    v76 = v38 - 1;
    v75 = *v37;
    v80 = v37 + 1;
    if ( (*v37 & 0x8000u) != 0LL )
    {
      v40 = *(_OWORD *)&v73[8];
      *(_OWORD *)&v73[16] = *(_OWORD *)&v73[24];
      v41 = &v19[Size];
      v42 = (unsigned __int8 *)_mm_srli_si128(*(__m128i *)&v73[16], 8).m128i_u64[0];
      *(_QWORD *)&v73[8] = *((_QWORD *)&v40 + 1);
      v18 = v42;
      v43 = v42;
      *(_QWORD *)&v73[32] = v74;
      v74 = (char *)v19;
      v44 = GetFixupScan((unsigned int *)v81, v104);
      v89(v90, v44, (__int64)v19, (__int64)&v19[Size], 1);
      if ( (v81[0] & 0x200) != 0 )
      {
        memmove(v42, *(const void **)&v73[32], Size);
      }
      else
      {
        do
        {
          v45 = (6 * v43[*(_QWORD *)&v73[32] - (_QWORD)v42] - *v19 - *v43) >> 2;
          if ( (v45 & 0xFF00) != 0 )
            LOBYTE(v45) = ~HIBYTE(v45);
          *v43 = v45;
          ++v19;
          ++v43;
        }
        while ( v19 < v41 );
      }
      v19 = (unsigned __int8 *)v40;
      LOWORD(v39) = v39 & 0x3FFF;
    }
    v46 = (unsigned __int64)v16;
    v47 = HIWORD(v75);
    v48 = *(unsigned __int8 **)&v73[16];
    v49 = -WORD2(v75);
    v50 = v109;
    v51 = v18;
    v52 = -(unsigned __int16)v39;
    v53 = -WORD1(v75);
    if ( (_WORD)v39 )
    {
      v54 = (int *)(v16 + 2048);
      v55 = 256 - HIWORD(v75);
      do
      {
        v52 += (unsigned __int16)v39;
        v53 += WORD1(v75);
        v49 += WORD2(v75);
        *(v54 - 512) = v52;
        v55 += HIWORD(v75);
        *(v54 - 256) = v53;
        *v54 = v49;
        v54[256] = v55;
        ++v54;
      }
      while ( (unsigned __int64)(v54 - 512) < v79 );
      v46 = *(_QWORD *)&v73[8];
      v16 = v78;
      do
      {
        v56 = *(_DWORD *)&v78[4 * v19[v46 - *(_QWORD *)&v73[8]]]
            + *(_DWORD *)&v78[4 * *(unsigned __int8 *)(v46 + *(_QWORD *)&v73[16] - *(_QWORD *)&v73[8]) + 2048]
            + *(_DWORD *)&v78[4 * v18[v46 - *(_QWORD *)&v73[8]] + 3072];
        v57 = *(unsigned __int8 *)v46++;
        v47 = (unsigned int)((*(_DWORD *)&v78[4 * v57 + 1024] + v56) >> 5);
        *v50 = v47;
        v50 = (_WORD *)((char *)v50 + v111);
      }
      while ( v50 != v110 );
    }
    else if ( WORD1(v75) )
    {
      v58 = (int *)(v16 + 2048);
      v59 = 256 - HIWORD(v75);
      do
      {
        v53 += WORD1(v75);
        v49 += WORD2(v75);
        v59 += HIWORD(v75);
        *(v58 - 256) = v53;
        *v58 = v49;
        v58[256] = v59;
        ++v58;
      }
      while ( (unsigned __int64)(v58 - 512) < v79 );
      v46 = *(_QWORD *)&v73[8];
      v16 = v78;
      do
      {
        v60 = *(unsigned __int8 *)(v46 + *(_QWORD *)&v73[16] - *(_QWORD *)&v73[8]);
        v61 = *(_DWORD *)&v78[4 * v18[v46 - *(_QWORD *)&v73[8]] + 3072];
        v62 = *(unsigned __int8 *)v46++;
        v47 = (unsigned int)((*(_DWORD *)&v78[4 * v62 + 1024] + *(_DWORD *)&v78[4 * v60 + 2048] + v61) >> 5);
        *v50 = v47;
        v50 = (_WORD *)((char *)v50 + v111);
      }
      while ( v50 != v110 );
    }
    else if ( WORD2(v75) )
    {
      v63 = (int *)(v16 + 3072);
      v64 = 256 - HIWORD(v75);
      do
      {
        v49 += WORD2(v75);
        v64 += HIWORD(v75);
        *(v63 - 256) = v49;
        *v63++ = v64;
      }
      while ( v63 - 768 < (int *)v16 + 256 );
      v46 = (unsigned __int64)&v18[-*(_QWORD *)&v73[16]];
      do
      {
        v65 = v48[v46];
        v66 = *v48++;
        v47 = (unsigned int)((*(_DWORD *)&v16[4 * v66 + 2048] + *(_DWORD *)&v16[4 * v65 + 3072]) >> 5);
        *v50 = v47;
        v50 = (_WORD *)((char *)v50 + v111);
      }
      while ( v50 != v110 );
    }
    else
    {
      v67 = 256 - HIWORD(v75);
      do
      {
        v67 += HIWORD(v75);
        *(_DWORD *)(v46 + 3072) = v67;
        v46 += 4LL;
      }
      while ( v46 < (unsigned __int64)(v16 + 1024) );
      do
      {
        v68 = *v51++;
        *v50 = *(int *)&v16[4 * v68 + 3072] >> 5;
        v50 = (_WORD *)((char *)v50 + v111);
      }
      while ( v50 != v110 );
    }
    v69 = v81[0];
    if ( SLOBYTE(v81[0]) < 0 )
    {
      v86(v81, v47, v50, v46);
      v69 = v81[0];
    }
    if ( (v69 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v81);
      LOBYTE(v69) = v81[0];
    }
    if ( (v69 & 0x10) != 0 )
    {
      MappingBGRF(v105, v106, v93, v100);
      v70 = &v100[v103];
      if ( v70 == v101 )
        v70 = v102;
      v100 = v70;
    }
    v87(v81, v107, v108, v82, v92, v94, v94 + v98, v99, v88);
    v37 = v80;
    v71 = v97 + v94;
    if ( v71 == v95 )
      v71 = v96;
    v82 += v85;
    v38 = v76;
    v94 = v71;
  }
  return v84;
}
