/*
 * XREFs of RtlpGenericStrideWorker @ 0x140216EFC
 * Callers:
 *     RtlScrubMemory @ 0x1402165A0 (RtlScrubMemory.c)
 * Callees:
 *     RtlpFillMemoryWithInverseStride @ 0x14021671C (RtlpFillMemoryWithInverseStride.c)
 */

char __fastcall RtlpGenericStrideWorker(int a1, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r12
  int v7; // r14d
  unsigned __int64 v10; // r15
  unsigned int v11; // ebx
  int v12; // ecx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD *i; // rcx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CFlushSize; // rdx
  char *j; // rcx
  struct _KPRCB *v19; // rax
  __int64 v20; // rdx
  char *k; // rcx
  __int64 v22; // rbx
  _DWORD *m; // rcx
  signed __int32 v25[22]; // [rsp+0h] [rbp-58h] BYREF

  v5 = a4 + 4096;
  v6 = a4 >> 2;
  v7 = 0;
  v10 = (a4 >> 2) - 12 * ((unsigned __int64)(((a4 >> 2) * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64) >> 3);
  while ( 2 )
  {
    v11 = 2 * v7;
    v12 = 2 * v7;
    v13 = v6 % 0xC;
    if ( v6 % 0xC > (unsigned int)(2 * v7) )
      v14 = (unsigned int)(12 - v13 + v12);
    else
      v14 = (unsigned int)(v12 - v13);
    for ( i = (_DWORD *)(a4 + 4 * v14); (unsigned __int64)i < v5; i += 12 )
    {
      *i = a1;
      i[1] = a1;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    CFlushSize = CurrentPrcb->CFlushSize;
    if ( CurrentPrcb->CFlushSize )
    {
      _InterlockedOr(v25, 0);
      for ( j = (char *)(a4 & ~(CFlushSize - 1)); (unsigned __int64)j < v5; j += CFlushSize )
        _mm_clflush(j);
    }
    RtlpFillMemoryWithInverseStride(a2, v7, 0xAAAAAAAAAAAAAAABuLL, a4);
    v19 = KeGetCurrentPrcb();
    v20 = v19->CFlushSize;
    if ( v19->CFlushSize )
    {
      _InterlockedOr(v25, 0);
      for ( k = (char *)(a4 & ~(v20 - 1)); (unsigned __int64)k < v5; k += v20 )
        _mm_clflush(k);
    }
    if ( (unsigned int)v10 > v11 )
      v22 = 12 - (_DWORD)v10 + v11;
    else
      v22 = v11 - (unsigned int)v10;
    for ( m = (_DWORD *)(a4 + 4 * v22); (unsigned __int64)m < v5; m += 12 )
    {
      if ( *m != a1 || m[1] != a1 )
        return 0;
    }
    if ( (unsigned int)++v7 < 6 )
      continue;
    break;
  }
  return 1;
}
