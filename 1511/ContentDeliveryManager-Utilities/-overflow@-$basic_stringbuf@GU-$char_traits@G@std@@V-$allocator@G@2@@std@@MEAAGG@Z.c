/*
 * XREFs of ?overflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x1800141B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180022C48 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180022CC8 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800280A8 (memcpy_0.c)
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::overflow(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax
  unsigned __int64 *v5; // r10
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r9
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  int *v10; // r9
  __int64 v11; // r10
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // rdi
  const void **v16; // rax
  void *v17; // r12
  __int64 *v18; // rax
  bool v19; // zf
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  _DWORD *v25; // rax
  _WORD **v26; // rcx
  unsigned __int16 *v27; // rdx

  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    return 0xFFFFLL;
  if ( a2 == 0xFFFF )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 112) & 8) != 0 )
  {
    v5 = *(unsigned __int64 **)(a1 + 64);
    v6 = *v5;
    if ( *v5 )
    {
      v7 = *(_QWORD *)(a1 + 104);
      if ( v6 < v7 )
      {
        v8 = **(int **)(a1 + 88);
        *v5 = v7;
        **(_DWORD **)(a1 + 88) = (__int64)(v6 + 2 * v8 - v7) >> 1;
      }
    }
  }
  v9 = **(_QWORD **)(a1 + 64);
  if ( !v9 )
  {
    v12 = 0LL;
LABEL_15:
    v13 = 32LL;
    if ( v12 >> 1 < 0x20 || (v13 = v12 >> 1) != 0 )
    {
      do
      {
        if ( 0x7FFFFFFF - v13 >= v12 )
          break;
        v13 >>= 1;
      }
      while ( v13 );
    }
    if ( !v13 )
      return 0xFFFFLL;
    v14 = v13 + v12;
    v15 = 0LL;
    if ( v13 + v12 )
    {
      if ( v14 > 0x7FFFFFFFFFFFFFFFLL || (v15 = (__int64)operator new(2 * v14)) == 0 )
        std::_Xbad_alloc();
    }
    v16 = *(const void ***)(a1 + 24);
    v17 = (void *)*v16;
    if ( v12 )
    {
      memcpy_0((void *)v15, *v16, 2 * v12);
      *(_QWORD *)(a1 + 104) = v15 + 2 * ((__int64)(*(_QWORD *)(a1 + 104) - (_QWORD)v17) >> 1);
      v21 = v15 + 2 * ((__int64)(**(_QWORD **)(a1 + 64) - (_QWORD)v17) >> 1);
      **(_QWORD **)(a1 + 32) = v15 + 2 * ((__int64)(**(_QWORD **)(a1 + 32) - (_QWORD)v17) >> 1);
      **(_QWORD **)(a1 + 64) = v21;
      **(_DWORD **)(a1 + 88) = (__int64)(v15 + 2 * v14 - v21) >> 1;
      if ( (*(_BYTE *)(a1 + 112) & 4) == 0 )
      {
        v22 = **(_QWORD **)(a1 + 64);
        v23 = (__int64)(**(_QWORD **)(a1 + 56) - (_QWORD)v17) >> 1;
        **(_QWORD **)(a1 + 24) = v15;
        v24 = v15 + 2 * v23;
        **(_QWORD **)(a1 + 56) = v24;
        **(_DWORD **)(a1 + 80) = (v22 - v24 + 2) >> 1;
        goto LABEL_32;
      }
      **(_QWORD **)(a1 + 24) = v15;
      v20 = *(__int64 **)(a1 + 56);
    }
    else
    {
      v18 = *(__int64 **)(a1 + 32);
      *(_QWORD *)(a1 + 104) = v15;
      *v18 = v15;
      **(_QWORD **)(a1 + 64) = v15;
      **(_DWORD **)(a1 + 88) = (__int64)(2 * v14) >> 1;
      v19 = (*(_BYTE *)(a1 + 112) & 4) == 0;
      **(_QWORD **)(a1 + 24) = v15;
      v20 = *(__int64 **)(a1 + 56);
      if ( v19 )
      {
        *v20 = v15;
        **(_DWORD **)(a1 + 80) = 1;
LABEL_32:
        if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
          operator delete(v17);
        v25 = *(_DWORD **)(a1 + 88);
        *(_DWORD *)(a1 + 112) |= 1u;
        --*v25;
        goto LABEL_35;
      }
    }
    *v20 = 0LL;
    **(_DWORD **)(a1 + 80) = v15 >> 1;
    goto LABEL_32;
  }
  v10 = *(int **)(a1 + 88);
  v11 = *v10;
  if ( v9 >= v9 + 2 * v11 )
  {
    v12 = (__int64)(v9 + 2LL * **(int **)(a1 + 88) - **(_QWORD **)(a1 + 24)) >> 1;
    goto LABEL_15;
  }
  *v10 = v11 - 1;
LABEL_35:
  v26 = *(_WORD ***)(a1 + 64);
  v27 = (*v26)++;
  result = a2;
  *v27 = a2;
  return result;
}
