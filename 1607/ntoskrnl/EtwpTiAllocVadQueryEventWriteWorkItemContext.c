/*
 * XREFs of EtwpTiAllocVadQueryEventWriteWorkItemContext @ 0x140228A18
 * Callers:
 *     EtwpTiAsyncVadQueryEventWrite @ 0x140228BA8 (EtwpTiAsyncVadQueryEventWrite.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpTiAllocVadQueryEventWriteWorkItemContext(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        void *Src,
        unsigned int a6,
        __int64 a7,
        _QWORD *a8)
{
  unsigned int v8; // esi
  __int64 v9; // r15
  unsigned int v10; // r11d
  _DWORD *v12; // r10
  unsigned int v13; // ecx
  unsigned __int64 v14; // rdi
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v17; // r14
  _QWORD *PoolWithTag; // rax
  _QWORD *v19; // rbx
  char *v21; // rbp
  const void **v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // r13
  int v25; // eax
  char *v26; // rcx
  __int64 v27; // rax
  void *v28; // rcx

  v8 = 0;
  v9 = a3;
  v10 = 0;
  if ( a3 )
  {
    v12 = (_DWORD *)(a1 + 8);
    do
    {
      v13 = v8 + *v12;
      if ( v13 < v8 )
        return 3221225621LL;
      ++v10;
      v12 += 4;
      v8 = v13;
    }
    while ( v10 < a3 );
  }
  v14 = 16LL * a2;
  if ( v14 > 0xFFFFFFFF )
    return 3221225621LL;
  v15 = v14 + 80;
  if ( (unsigned int)v14 >= 0xFFFFFFB0 )
    return 3221225621LL;
  v16 = v15 + v8;
  if ( v15 + v8 < v15 )
    return 3221225621LL;
  v17 = 8LL * a6;
  if ( v17 > 0xFFFFFFFF || (unsigned int)v17 + v16 < v16 )
    return 3221225621LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v17 + v16, 0x6E734954u);
  v19 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  PoolWithTag[4] = PoolWithTag + 10;
  v21 = (char *)PoolWithTag + (unsigned int)v14 + 80;
  PoolWithTag[5] = v21;
  PoolWithTag[9] = &v21[v8];
  if ( (_DWORD)v9 )
  {
    v22 = (const void **)(a1 + 8);
    v23 = -8 - a1;
    v24 = v9;
    do
    {
      memmove(v21, *(v22 - 1), *(unsigned int *)v22);
      v25 = *(_DWORD *)v22;
      v26 = (char *)v22 + v23 + v19[4];
      *((_DWORD *)v26 + 3) = 0;
      *(_QWORD *)v26 = v21;
      *((_DWORD *)v26 + 2) = v25;
      v27 = *(unsigned int *)v22;
      v22 += 2;
      v21 += v27;
      --v24;
    }
    while ( v24 );
  }
  *((_DWORD *)v19 + 12) = v9;
  ObfReferenceObjectWithTag(a4, 0x69547445u);
  v28 = (void *)v19[9];
  v19[8] = a4;
  memmove(v28, Src, (unsigned int)v17);
  v19[7] = a7;
  *((_DWORD *)v19 + 13) = a6;
  *a8 = v19;
  return 0LL;
}
