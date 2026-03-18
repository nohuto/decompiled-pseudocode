/*
 * XREFs of sub_140285DF0 @ 0x140285DF0
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140277000 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140283BBC @ 0x140283BBC (sub_140283BBC.c)
 *     sub_14079AC8C @ 0x14079AC8C (sub_14079AC8C.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140285DF0(__int64 a1, unsigned int a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // r9d
  unsigned __int64 v7; // rax
  unsigned __int128 v8; // rax
  unsigned __int64 v9; // r15
  __int64 v10; // rcx
  int v11; // esi
  __int64 v12; // rcx
  int v13; // r14d
  unsigned __int128 v14; // rax
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r11
  int v18; // r9d
  _QWORD *v19; // r8
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rax
  unsigned __int128 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int128 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned int v26; // r14d
  __int64 v27; // rdi
  _QWORD *v28; // r8
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rax
  unsigned __int128 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int128 v33; // rax
  unsigned __int64 v34; // rdx
  int v35; // ecx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  unsigned int v38; // r12d
  int v39; // ecx
  int v40; // eax
  unsigned int v41; // r13d
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // r14
  int v46; // r9d
  _QWORD *v47; // r8
  unsigned __int64 v48; // r10
  unsigned __int64 v49; // rax
  unsigned __int128 v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int128 v52; // rax
  unsigned __int64 v53; // rdx
  unsigned int v54; // esi
  _QWORD *v55; // r8
  unsigned __int64 v56; // r9
  unsigned __int64 v57; // rax
  unsigned __int128 v58; // rax
  unsigned __int64 v59; // rax
  unsigned __int128 v60; // rax
  unsigned __int64 v61; // rdx
  __int64 v62; // rcx
  unsigned int v63; // edx
  _QWORD *v64; // r8
  unsigned __int64 v65; // r9
  char *v66; // r8
  int v67; // eax
  __int64 v69; // [rsp+30h] [rbp-39h]
  __int64 v70; // [rsp+38h] [rbp-31h]

  v4 = __rdtsc();
  v5 = __ROR8__(v4, 3);
  v6 = ((((v5 ^ v4) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v5 ^ v4))) & 0x7FF;
  v7 = __rdtsc();
  v8 = (__ROR8__(v7, 3) ^ v7) * (unsigned __int128)0x7010008004002001uLL;
  v9 = (*((_QWORD *)&v8 + 1) ^ (unsigned __int64)v8) % (unsigned int)(v6 + 1);
  *(_QWORD *)&v8 = __rdtsc();
  v10 = __ROR8__(v8, 3);
  v11 = v6
      + ((((unsigned __int8)(((v10 ^ (unsigned __int64)v8) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int8)(v10 ^ v8)) & 1) << 12)
      + 4096;
  *(_QWORD *)&v8 = __rdtsc();
  v12 = __ROR8__(v8, 3);
  v13 = ((((v12 ^ (unsigned __int64)v8) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * (v12 ^ v8))) & 0x7FF;
  *(_QWORD *)&v8 = __rdtsc();
  v14 = (__ROR8__(v8, 3) ^ (unsigned __int64)v8) * (unsigned __int128)0x7010008004002001uLL;
  v15 = (*((_QWORD *)&v14 + 1) ^ (unsigned __int64)v14) % (unsigned int)(v13 + 1);
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(a1 + 232))(
          512LL,
          (unsigned int)(v13 + 32),
          *(unsigned int *)(a1 + 1400));
  v17 = v16;
  if ( !v16 )
  {
    ++*(_DWORD *)(a1 + 1800);
LABEL_49:
    ++*(_DWORD *)(a1 + 1800);
    return 0LL;
  }
  v18 = v15;
  v19 = (_QWORD *)v16;
  if ( (unsigned int)v15 >= 8 )
  {
    v20 = (unsigned __int64)(unsigned int)v15 >> 3;
    do
    {
      v21 = __rdtsc();
      v18 -= 8;
      v22 = (__ROR8__(v21, 3) ^ v21) * (unsigned __int128)0x7010008004002001uLL;
      *v19++ = v22 ^ *((_QWORD *)&v22 + 1);
      --v20;
    }
    while ( v20 );
  }
  if ( v18 )
  {
    v23 = __rdtsc();
    v24 = (__ROR8__(v23, 3) ^ v23) * (unsigned __int128)0x7010008004002001uLL;
    v25 = v24 ^ *((_QWORD *)&v24 + 1);
    do
    {
      *(_BYTE *)v19 = v25;
      v19 = (_QWORD *)((char *)v19 + 1);
      v25 >>= 8;
      --v18;
    }
    while ( v18 );
  }
  v26 = v13 - v15;
  v27 = v17 + (unsigned int)v15;
  v28 = (_QWORD *)(v27 + 32);
  if ( v26 >= 8 )
  {
    v29 = (unsigned __int64)v26 >> 3;
    do
    {
      v30 = __rdtsc();
      v26 -= 8;
      v31 = (__ROR8__(v30, 3) ^ v30) * (unsigned __int128)0x7010008004002001uLL;
      v69 = *((_QWORD *)&v31 + 1);
      *v28++ = v31 ^ *((_QWORD *)&v31 + 1);
      --v29;
    }
    while ( v29 );
  }
  if ( v26 )
  {
    v32 = __rdtsc();
    v33 = (__ROR8__(v32, 3) ^ v32) * (unsigned __int128)0x7010008004002001uLL;
    v70 = *((_QWORD *)&v33 + 1);
    v34 = v33 ^ *((_QWORD *)&v33 + 1);
    do
    {
      *(_BYTE *)v28 = v34;
      v28 = (_QWORD *)((char *)v28 + 1);
      v34 >>= 8;
      --v26;
    }
    while ( v26 );
  }
  if ( !v27 )
    goto LABEL_49;
  v35 = 32;
  v36 = (_QWORD *)v27;
  v37 = 4LL;
  do
  {
    *v36 = 0LL;
    v35 -= 8;
    ++v36;
    --v37;
  }
  while ( v37 );
  for ( ; v35; --v35 )
  {
    *(_BYTE *)v36 = 0;
    v36 = (_QWORD *)((char *)v36 + 1);
  }
  v38 = *(_DWORD *)(a1 + 1400);
  *(_DWORD *)(v27 + 16) = v38;
  v39 = 5;
  *(_QWORD *)(v27 + 24) = v17;
  v40 = *(_DWORD *)(a1 + 1672);
  if ( (v40 & 0x1000000) != 0 )
    v39 = 21;
  else
    *(_DWORD *)(a1 + 1672) = v40 | 0x1000000;
  v41 = v11 + a2;
  v42 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, int, __int64, __int64))(a1 + 760))(
          0LL,
          -1LL,
          0LL,
          v41,
          1,
          v39,
          v69,
          v70);
  v43 = v42;
  if ( !v42
    || (*(_QWORD *)v27 = v42, (v44 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 768))(v41, v38)) == 0)
    || (*(_QWORD *)(v27 + 8) = v44,
        v45 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(a1 + 776))(v44, v38, v43, 1LL),
        !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 504))(v45, (v41 + 4095) & 0xFFFFF000, 64LL)) )
  {
    (*(void (__fastcall **)(__int64))(a1 + 792))(v27);
    goto LABEL_49;
  }
  v46 = v9;
  v47 = (_QWORD *)v45;
  if ( (unsigned int)v9 >= 8 )
  {
    v48 = (unsigned __int64)(unsigned int)v9 >> 3;
    do
    {
      v49 = __rdtsc();
      v46 -= 8;
      v50 = (__ROR8__(v49, 3) ^ v49) * (unsigned __int128)0x7010008004002001uLL;
      *v47++ = v50 ^ *((_QWORD *)&v50 + 1);
      --v48;
    }
    while ( v48 );
  }
  if ( v46 )
  {
    v51 = __rdtsc();
    v52 = (__ROR8__(v51, 3) ^ v51) * (unsigned __int128)0x7010008004002001uLL;
    v53 = v52 ^ *((_QWORD *)&v52 + 1);
    do
    {
      *(_BYTE *)v47 = v53;
      v47 = (_QWORD *)((char *)v47 + 1);
      v53 >>= 8;
      --v46;
    }
    while ( v46 );
  }
  v54 = v11 - v9;
  v55 = (_QWORD *)(v45 + (unsigned int)v9 + (unsigned __int64)a2);
  if ( v54 >= 8 )
  {
    v56 = (unsigned __int64)v54 >> 3;
    do
    {
      v57 = __rdtsc();
      v54 -= 8;
      v58 = (__ROR8__(v57, 3) ^ v57) * (unsigned __int128)0x7010008004002001uLL;
      *v55++ = v58 ^ *((_QWORD *)&v58 + 1);
      --v56;
    }
    while ( v56 );
  }
  if ( v54 )
  {
    v59 = __rdtsc();
    v60 = (__ROR8__(v59, 3) ^ v59) * (unsigned __int128)0x7010008004002001uLL;
    v61 = v60 ^ *((_QWORD *)&v60 + 1);
    do
    {
      *(_BYTE *)v55 = v61;
      v55 = (_QWORD *)((char *)v55 + 1);
      v61 >>= 8;
      --v54;
    }
    while ( v54 );
  }
  v62 = (unsigned int)v9 + v45;
  if ( !v62 )
    return 0LL;
  v63 = *(_DWORD *)(a1 + 1356);
  v64 = (_QWORD *)((unsigned int)v9 + v45);
  if ( v63 >= 8 )
  {
    v65 = (unsigned __int64)v63 >> 3;
    do
    {
      v63 -= 8;
      *v64 = *(_QWORD *)a1;
      a1 += 8LL;
      ++v64;
      --v65;
    }
    while ( v65 );
  }
  if ( v63 )
  {
    v66 = (char *)v64 - a1;
    do
    {
      v66[a1] = *(_BYTE *)a1;
      ++a1;
      --v63;
    }
    while ( v63 );
  }
  v67 = *(_DWORD *)(v62 + 1672);
  *(_DWORD *)(v62 + 1356) = a2;
  *(_QWORD *)(v62 + 1328) = v27;
  *(_DWORD *)(v62 + 1580) = 3;
  if ( (v67 & 0x10000000) == 0 )
    *(_DWORD *)(v62 + 1672) = v67 | 0x20000000;
  return (unsigned int)v9 + v45;
}
