/*
 * XREFs of RtlpGenericRandomPatternWorker @ 0x140216BEC
 * Callers:
 *     RtlScrubMemory @ 0x1402165A0 (RtlScrubMemory.c)
 * Callees:
 *     RtlpFillMemoryRandomUp @ 0x1402166D0 (RtlpFillMemoryRandomUp.c)
 *     RtlpTestMemoryRandomUp @ 0x1402170E0 (RtlpTestMemoryRandomUp.c)
 */

char __fastcall RtlpGenericRandomPatternWorker(unsigned __int64 a1)
{
  char *v1; // rdi
  unsigned int v2; // ebp
  __int64 *v3; // r15
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CFlushSize; // rdx
  char *i; // rcx
  char *v13; // rdx
  unsigned __int64 v14; // rax
  struct _KPRCB *v15; // rax
  __int64 v16; // rdx
  char *j; // rcx
  unsigned __int64 *v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rdx
  struct _KPRCB *v22; // rax
  __int64 v23; // rdx
  char *k; // rcx
  struct _KPRCB *v25; // r9
  __int64 v26; // rdx
  char *m; // rcx
  char *v28; // rdx
  unsigned __int64 v29; // rcx
  struct _KPRCB *v30; // rax
  __int64 v31; // rdx
  char *n; // rcx
  char *v33; // rdx
  unsigned __int64 v34; // rcx
  struct _KPRCB *v35; // rax
  __int64 v36; // rdx
  char *ii; // rcx
  char *v38; // rdx
  signed __int32 v40[18]; // [rsp+0h] [rbp-48h] BYREF

  v1 = (char *)(a1 + 4096);
  v2 = 0;
  v3 = (__int64 *)&GlfsrXorLookupTables;
LABEL_2:
  v5 = *v3;
  v6 = *(_QWORD *)RtlpSeedGlfsr;
  v7 = 0;
  v8 = (unsigned int)__rdtsc();
  do
  {
    v9 = (v8 & (1LL << v7)) << v7;
    ++v7;
    v6 ^= v9;
  }
  while ( v7 < 0x20 );
  RtlpFillMemoryRandomUp(a1, v8, v6, v5);
  CurrentPrcb = KeGetCurrentPrcb();
  CFlushSize = CurrentPrcb->CFlushSize;
  if ( CurrentPrcb->CFlushSize )
  {
    _InterlockedOr(v40, 0);
    for ( i = (char *)(a1 & ~(CFlushSize - 1)); i < v1; i += CFlushSize )
      _mm_clflush(i);
  }
  v13 = (char *)a1;
  v14 = v6;
  if ( a1 >= (unsigned __int64)v1 )
  {
LABEL_12:
    v15 = KeGetCurrentPrcb();
    v16 = v15->CFlushSize;
    if ( v15->CFlushSize )
    {
      _InterlockedOr(v40, 0);
      for ( j = (char *)(a1 & ~(v16 - 1)); j < v1; j += v16 )
        _mm_clflush(j);
    }
    if ( (unsigned __int8)RtlpTestMemoryRandomUp(a1, v16, v6, v5) )
    {
      v18 = (unsigned __int64 *)a1;
      v19 = v6;
      v20 = 0LL;
      v21 = (unsigned __int64)&v1[-a1 + 7] >> 3;
      if ( a1 > (unsigned __int64)v1 )
        v21 = 0LL;
      if ( v21 )
      {
        do
        {
          ++v20;
          *v18++ = ~v19;
          v19 = (v19 >> 4) ^ *(_QWORD *)(v5 + 8 * (v19 & 0xF));
        }
        while ( v20 < v21 );
      }
      v22 = KeGetCurrentPrcb();
      v23 = v22->CFlushSize;
      if ( v22->CFlushSize )
      {
        _InterlockedOr(v40, 0);
        for ( k = (char *)(a1 & ~(v23 - 1)); k < v1; k += v23 )
          _mm_clflush(k);
      }
      RtlpFillMemoryRandomUp(a1, v23, v6, v5);
      v25 = KeGetCurrentPrcb();
      v26 = v25->CFlushSize;
      if ( v25->CFlushSize )
      {
        _InterlockedOr(v40, 0);
        for ( m = (char *)(a1 & ~(v26 - 1)); m < v1; m += v26 )
          _mm_clflush(m);
      }
      if ( (unsigned __int8)RtlpTestMemoryRandomUp(a1, v26, v6, v5) )
      {
        v28 = v1;
        v29 = v6;
        do
        {
          v28 -= 8;
          *(_QWORD *)v28 = ~v29;
          v29 = (v29 >> 4) ^ *(_QWORD *)(v5 + 8 * (v29 & 0xF));
        }
        while ( v28 != (char *)a1 );
        v30 = KeGetCurrentPrcb();
        v31 = v30->CFlushSize;
        if ( v30->CFlushSize )
        {
          _InterlockedOr(v40, 0);
          for ( n = (char *)(a1 & ~(v31 - 1)); n < v1; n += v31 )
            _mm_clflush(n);
        }
        v33 = v1;
        v34 = v6;
        do
        {
          v33 -= 8;
          *(_QWORD *)v33 = v34;
          v34 = (v34 >> 4) ^ *(_QWORD *)(v5 + 8 * (v34 & 0xF));
        }
        while ( v33 != (char *)a1 );
        v35 = KeGetCurrentPrcb();
        v36 = v35->CFlushSize;
        if ( v35->CFlushSize )
        {
          _InterlockedOr(v40, 0);
          for ( ii = (char *)(a1 & ~(v36 - 1)); ii < v1; ii += v36 )
            _mm_clflush(ii);
        }
        v38 = v1;
        while ( *((_DWORD *)v38 - 1) == HIDWORD(v6) )
        {
          v38 -= 8;
          if ( *(_DWORD *)v38 != (_DWORD)v6 )
            break;
          v6 = (v6 >> 4) ^ *(_QWORD *)(v5 + 8 * (v6 & 0xF));
          if ( v38 == (char *)a1 )
          {
            ++v2;
            ++v3;
            if ( v2 < 5 )
              goto LABEL_2;
            return 1;
          }
        }
      }
    }
  }
  else
  {
    while ( *(_DWORD *)v13 == (_DWORD)v14 )
    {
      *(_DWORD *)v13 = v14;
      if ( *((_DWORD *)v13 + 1) != HIDWORD(v14) )
        break;
      *((_DWORD *)v13 + 1) = HIDWORD(v14);
      v13 += 8;
      v14 = (v14 >> 4) ^ *(_QWORD *)(v5 + 8 * (v14 & 0xF));
      if ( v13 >= v1 )
        goto LABEL_12;
    }
  }
  return 0;
}
