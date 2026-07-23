/*
 * XREFs of RtlpGenericInverseCouplingWorker @ 0x140216840
 * Callers:
 *     RtlScrubMemory @ 0x1402165A0 (RtlScrubMemory.c)
 * Callees:
 *     RtlpTestAndFillMemoryUp @ 0x1402170A4 (RtlpTestAndFillMemoryUp.c)
 *     RtlpTestMemory @ 0x1402170C4 (RtlpTestMemory.c)
 */

char __fastcall RtlpGenericInverseCouplingWorker(unsigned int a1, unsigned int a2, unsigned __int64 a3)
{
  _DWORD *v3; // r11
  __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  char v7; // bp
  unsigned __int64 v9; // r8
  int v10; // ebp
  unsigned __int64 v11; // r14
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CFlushSize; // rdx
  char *i; // rcx
  __int64 v15; // r9
  unsigned int v16; // r10d
  struct _KPRCB *v18; // rax
  __int64 v19; // rdx
  char *j; // rcx
  unsigned __int64 v21; // r9
  int v22; // r10d
  void *v23; // r8
  unsigned __int64 v24; // rdx
  struct _KPRCB *v25; // rax
  __int64 v26; // rdx
  char *k; // rcx
  void *v28; // r11
  unsigned __int64 v29; // r8
  struct _KPRCB *v30; // rax
  __int64 v31; // rdx
  char *m; // rcx
  unsigned __int64 v33; // r9
  int v34; // r10d
  void *v35; // rdx
  struct _KPRCB *v36; // rax
  __int64 v37; // rdx
  char *n; // rcx
  _DWORD *v39; // rax
  struct _KPRCB *v40; // rax
  __int64 v41; // rdx
  char *ii; // rcx
  signed __int32 v43[14]; // [rsp+0h] [rbp-38h] BYREF

  v3 = (_DWORD *)a3;
  v4 = a2;
  v5 = 1024LL;
  v7 = a3;
  v9 = 1024LL;
  v10 = v7 & 4;
  if ( v10 )
  {
    *v3 = a1;
    v9 = 1023LL;
    ++v3;
  }
  v11 = a1 | ((unsigned __int64)a1 << 32);
  memset64(v3, v11, v9 >> 1);
  if ( (v9 & 1) != 0 )
    v3[v9 - 1] = a1;
  CurrentPrcb = KeGetCurrentPrcb();
  CFlushSize = CurrentPrcb->CFlushSize;
  if ( CurrentPrcb->CFlushSize )
  {
    _InterlockedOr(v43, 0);
    for ( i = (char *)(a3 & ~(CFlushSize - 1)); (unsigned __int64)i < a3 + 4096; i += CFlushSize )
      _mm_clflush(i);
  }
  if ( !(unsigned __int8)RtlpTestAndFillMemoryUp(a1, a1, a3) )
    return 0;
  v18 = KeGetCurrentPrcb();
  v19 = v18->CFlushSize;
  if ( v18->CFlushSize )
  {
    _InterlockedOr(v43, 0);
    for ( j = (char *)(v15 & ~(v19 - 1)); (unsigned __int64)j < v15 + 4096; j += v19 )
      _mm_clflush(j);
  }
  if ( !(unsigned __int8)RtlpTestMemory(v16, v15) )
    return 0;
  v23 = (void *)v21;
  v24 = 1024LL;
  if ( v10 )
  {
    *(_DWORD *)v21 = v22;
    v23 = (void *)(v21 + 4);
    v24 = 1023LL;
  }
  memset64(v23, v11, v24 >> 1);
  if ( (v24 & 1) != 0 )
    *((_DWORD *)v23 + v24 - 1) = v22;
  v25 = KeGetCurrentPrcb();
  v26 = v25->CFlushSize;
  if ( v25->CFlushSize )
  {
    _InterlockedOr(v43, 0);
    for ( k = (char *)(v21 & ~(v26 - 1)); (unsigned __int64)k < v21 + 4096; k += v26 )
      _mm_clflush(k);
  }
  v28 = (void *)v21;
  v29 = 1024LL;
  if ( v10 )
  {
    *(_DWORD *)v21 = v4;
    v28 = (void *)(v21 + 4);
    v29 = 1023LL;
  }
  memset64(v28, v4 | (v4 << 32), v29 >> 1);
  if ( (v29 & 1) != 0 )
    *((_DWORD *)v28 + v29 - 1) = v4;
  v30 = KeGetCurrentPrcb();
  v31 = v30->CFlushSize;
  if ( v30->CFlushSize )
  {
    _InterlockedOr(v43, 0);
    for ( m = (char *)(v21 & ~(v31 - 1)); (unsigned __int64)m < v21 + 4096; m += v31 )
      _mm_clflush(m);
  }
  if ( !(unsigned __int8)RtlpTestMemory((unsigned int)v4, v21) )
    return 0;
  v35 = (void *)v33;
  if ( v10 )
  {
    *(_DWORD *)v33 = v34;
    v35 = (void *)(v33 + 4);
    v5 = 1023LL;
  }
  memset64(v35, v11, v5 >> 1);
  if ( (v5 & 1) != 0 )
    *((_DWORD *)v35 + v5 - 1) = v34;
  v36 = KeGetCurrentPrcb();
  v37 = v36->CFlushSize;
  if ( v36->CFlushSize )
  {
    _InterlockedOr(v43, 0);
    for ( n = (char *)(v33 & ~(v37 - 1)); (unsigned __int64)n < v33 + 4096; n += v37 )
      _mm_clflush(n);
  }
  v39 = (_DWORD *)(v33 + 4096);
  do
    *--v39 = v4;
  while ( v39 != (_DWORD *)v33 );
  v40 = KeGetCurrentPrcb();
  v41 = v40->CFlushSize;
  if ( v40->CFlushSize )
  {
    _InterlockedOr(v43, 0);
    for ( ii = (char *)(v33 & ~(v41 - 1)); (unsigned __int64)ii < v33 + 4096; ii += v41 )
      _mm_clflush(ii);
  }
  return RtlpTestMemory((unsigned int)v4, v33);
}
