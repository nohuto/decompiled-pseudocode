/*
 * XREFs of DoubleCheckLinkColor @ 0x1C00B7ED8
 * Callers:
 *     itrp_MSIRP @ 0x1C00B3CB0 (itrp_MSIRP.c)
 *     itrp_MIRP @ 0x1C00B70D0 (itrp_MIRP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DoubleCheckLinkColor(__int64 a1, int a2, int a3, unsigned int a4)
{
  int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v8; // r10
  int v10; // r11d
  __int16 *v11; // rcx
  __int64 i; // rdx
  int v13; // ecx
  int v14; // edx
  int v15; // r9d
  __int16 *v16; // r11
  __int64 j; // rbp
  __int64 v18; // r15
  int v19; // ecx
  int v20; // edx
  int v21; // r9d
  int v22; // eax
  int v24; // r12d
  __int64 v25; // r11
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // r14d
  __int64 v30; // r10
  int v31; // ebp
  int v32; // edx
  __int64 v33; // rax
  int v34; // edi
  bool v35; // sf
  bool v36; // of
  __int64 v37; // rdx
  int v38; // r12d
  int v39; // r13d
  int v40; // r14d
  int v41; // ebp

  v4 = 0;
  v5 = a3;
  v6 = *(__int16 *)(a1 + 80);
  v8 = a2;
  v10 = 0;
  if ( (int)v6 > 0 )
  {
    v11 = *(__int16 **)(a1 + 64);
    for ( i = 0LL; i < v6; ++i )
    {
      if ( (int)v8 <= *v11 )
        break;
      ++v10;
      ++v11;
    }
  }
  v13 = -1;
  v14 = -1;
  if ( v10 < (int)v6 )
    v14 = v10;
  if ( v14 < 0 )
    return 0LL;
  v15 = 0;
  if ( (int)v6 > 0 )
  {
    v16 = *(__int16 **)(a1 + 64);
    for ( j = 0LL; j < v6; ++j )
    {
      if ( (int)v5 <= *v16 )
        break;
      ++v15;
      ++v16;
    }
  }
  if ( v15 < (int)v6 )
    v13 = v15;
  if ( v13 < 0 )
    return 0LL;
  if ( v14 != v13 )
    return a4;
  _mm_lfence();
  v18 = v14;
  v19 = *(__int16 *)(*(_QWORD *)(a1 + 56) + 2LL * v14);
  v20 = v19;
  v21 = *(__int16 *)(*(_QWORD *)(a1 + 64) + 2 * v18);
  if ( (_DWORD)v8 != v21 )
    v20 = v8 + 1;
  v22 = *(__int16 *)(*(_QWORD *)(a1 + 64) + 2 * v18);
  if ( (_DWORD)v8 != v19 )
    v22 = v8 - 1;
  if ( (_DWORD)v5 != v22 && (_DWORD)v5 != v20 )
    return a4;
  v24 = v19;
  if ( (_DWORD)v5 != v21 )
    v24 = v5 + 1;
  if ( (_DWORD)v5 != v19 )
    v21 = v5 - 1;
  v25 = *(_QWORD *)(a1 + 32);
  v26 = v22;
  v27 = v8;
  v28 = v20;
  v29 = *(_DWORD *)(v25 + 4 * v8);
  v30 = *(_QWORD *)(a1 + 40);
  v31 = *(_DWORD *)(v30 + 4 * v27);
  v32 = (v31 - *(_DWORD *)(v30 + 4 * v26)) * (*(_DWORD *)(v25 + 4LL * v20) - v29);
  LODWORD(v28) = (v29 - *(_DWORD *)(v25 + 4 * v26)) * (*(_DWORD *)(v30 + 4 * v28) - v31);
  v33 = v5;
  v34 = *(_DWORD *)(v25 + 4 * v5);
  v36 = __OFSUB__((_DWORD)v28, v32);
  v35 = (int)v28 - v32 < 0;
  v37 = v24;
  v38 = *(_DWORD *)(v30 + 4 * v33);
  v39 = v35 ^ v36;
  if ( v39 != (*(_DWORD *)(v30 + 4 * v37) - v38) * (v34 - *(_DWORD *)(v25 + 4LL * v21)) < (*(_DWORD *)(v25 + 4 * v37)
                                                                                         - v34)
                                                                                        * (v38
                                                                                         - *(_DWORD *)(v30 + 4LL * v21)) )
    return 0LL;
  v40 = v34 - v29 < 0 ? v29 - v34 : v34 - v29;
  v41 = v38 - v31 < 0 ? v31 - v38 : v38 - v31;
  if ( 2 * v40 < v41 )
    return 0LL;
  LOBYTE(v4) = ((*(_BYTE *)(v18 + *(_QWORD *)(a1 + 88)) & 1) == 0) != v39;
  return (unsigned int)(v4 + 1);
}
