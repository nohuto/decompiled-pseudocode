/*
 * XREFs of sub_140285AAC @ 0x140285AAC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140285AAC(__int64 a1, unsigned int a2, int a3)
{
  int v3; // r14d
  __int64 v4; // r12
  char v6; // r10
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // esi
  unsigned __int64 v10; // rax
  __int64 (__fastcall *v11)(_QWORD, _QWORD, __int64); // r9
  void (__fastcall *v12)(_QWORD *, _QWORD); // r13
  __int64 v13; // r8
  unsigned __int128 v14; // rax
  unsigned int v15; // ebp
  int v16; // ecx
  __int64 v17; // rcx
  unsigned int v18; // r14d
  __int64 v19; // rax
  _QWORD *v20; // rbx
  __int64 v21; // rbx
  unsigned int v22; // r9d
  _QWORD *v23; // r8
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rax
  unsigned __int128 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int128 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned int v30; // esi
  _QWORD *v31; // r8
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rax
  unsigned __int128 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int128 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned int v40; // edx
  _QWORD *v41; // r8
  unsigned __int64 v42; // r9
  char *v43; // r8
  int v44; // eax
  __int64 v45; // [rsp+28h] [rbp-60h]
  unsigned __int8 (__fastcall *v46)(__int64, _QWORD, __int64); // [rsp+90h] [rbp+8h]

  v3 = a3;
  v4 = a2;
  v6 = 1;
  v7 = __rdtsc();
  v8 = __ROR8__(v7, 3);
  v9 = ((unsigned __int16)(((v8 ^ v7) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int16)(8193 * (v8 ^ v7))) & 0x7FF;
  v10 = __rdtsc();
  v11 = *(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 232);
  v12 = *(void (__fastcall **)(_QWORD *, _QWORD))(a1 + 496);
  v13 = *(unsigned int *)(a1 + 1400);
  v14 = (__ROR8__(v10, 3) ^ v10) * (unsigned __int128)0x7010008004002001uLL;
  v15 = (*((_QWORD *)&v14 + 1) ^ (unsigned __int64)v14) % (unsigned int)(v9 + 1);
  v16 = *(_DWORD *)(a1 + 1580);
  v46 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 504);
  if ( (*(_DWORD *)(a1 + 1672) & 0x10000000) != 0 )
  {
    v6 = 0;
    v16 = 0;
  }
  if ( v16 == 1 )
  {
    *(_QWORD *)&v14 = __rdtsc();
    v17 = __ROR8__(v14, 3);
    v45 = ((v17 ^ (unsigned __int64)v14) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v9 += ((((unsigned __int8)v45 ^ (unsigned __int8)(v17 ^ v14)) & 1) << 12) + 4096;
    v18 = v9 + v4;
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 (__fastcall *)(_QWORD, _QWORD, __int64), _QWORD, __int64))(a1 + 488))(
            (unsigned int)(v9 + v4) + 8LL,
            0xFFFFFFFFLL,
            v13,
            v11,
            *((_QWORD *)&v14 + 1),
            v45);
    v20 = (_QWORD *)v19;
    if ( !v19 )
    {
LABEL_10:
      ++*(_DWORD *)(a1 + 1800);
      return 0LL;
    }
    if ( !v46(v19, (v18 + 4095) & 0xFFFFF000, 64LL) )
    {
      v12(v20, v18);
      goto LABEL_10;
    }
    v3 = a3;
    *v20 = (unsigned int)(v9 + v4) + 8LL;
    v21 = (__int64)(v20 + 1);
  }
  else
  {
    v21 = v11(v6 == 0 ? 0x200 : 0, (unsigned int)(v9 + v4), v13);
  }
  if ( !v21 )
    goto LABEL_10;
  v22 = v15;
  v23 = (_QWORD *)v21;
  if ( v15 >= 8 )
  {
    v24 = (unsigned __int64)v15 >> 3;
    do
    {
      v25 = __rdtsc();
      v22 -= 8;
      v26 = (__ROR8__(v25, 3) ^ v25) * (unsigned __int128)0x7010008004002001uLL;
      *v23++ = v26 ^ *((_QWORD *)&v26 + 1);
      --v24;
    }
    while ( v24 );
  }
  if ( v22 )
  {
    v27 = __rdtsc();
    v28 = (__ROR8__(v27, 3) ^ v27) * (unsigned __int128)0x7010008004002001uLL;
    v29 = v28 ^ *((_QWORD *)&v28 + 1);
    do
    {
      *(_BYTE *)v23 = v29;
      v23 = (_QWORD *)((char *)v23 + 1);
      v29 >>= 8;
      --v22;
    }
    while ( v22 );
  }
  v30 = v9 - v15;
  v31 = (_QWORD *)(v21 + v15 + v4);
  if ( v30 >= 8 )
  {
    v32 = (unsigned __int64)v30 >> 3;
    do
    {
      v33 = __rdtsc();
      v30 -= 8;
      v34 = (__ROR8__(v33, 3) ^ v33) * (unsigned __int128)0x7010008004002001uLL;
      *v31++ = v34 ^ *((_QWORD *)&v34 + 1);
      --v32;
    }
    while ( v32 );
  }
  if ( v30 )
  {
    v35 = __rdtsc();
    v36 = (__ROR8__(v35, 3) ^ v35) * (unsigned __int128)0x7010008004002001uLL;
    v37 = v36 ^ *((_QWORD *)&v36 + 1);
    do
    {
      *(_BYTE *)v31 = v37;
      v31 = (_QWORD *)((char *)v31 + 1);
      v37 >>= 8;
      --v30;
    }
    while ( v30 );
  }
  v38 = v15 + v21;
  if ( !v38 )
    return 0LL;
  v40 = *(_DWORD *)(a1 + 1356);
  v41 = (_QWORD *)(v15 + v21);
  if ( v40 >= 8 )
  {
    v42 = (unsigned __int64)v40 >> 3;
    do
    {
      v40 -= 8;
      *v41 = *(_QWORD *)a1;
      a1 += 8LL;
      ++v41;
      --v42;
    }
    while ( v42 );
  }
  if ( v40 )
  {
    v43 = (char *)v41 - a1;
    do
    {
      v43[a1] = *(_BYTE *)a1;
      ++a1;
      --v40;
    }
    while ( v40 );
  }
  v44 = *(_DWORD *)(v38 + 1672);
  *(_DWORD *)(v38 + 1356) = v4;
  *(_QWORD *)(v38 + 1328) = v21;
  *(_DWORD *)(v38 + 1580) = v3;
  if ( (v44 & 0x10000000) == 0 )
    *(_DWORD *)(v38 + 1672) = v44 | 0x20000000;
  return v15 + v21;
}
