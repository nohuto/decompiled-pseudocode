/*
 * XREFs of ArbpBuildAllocationStack @ 0x1C006B04C
 * Callers:
 *     ArbTestAllocation @ 0x1C006B370 (ArbTestAllocation.c)
 * Callees:
 *     memset @ 0x1C00251C0 (memset.c)
 *     ArbpBuildAlternative @ 0x1C006B150 (ArbpBuildAlternative.c)
 */

__int64 __fastcall ArbpBuildAllocationStack(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v3; // rax
  __int64 v4; // rsi
  int v7; // ebx
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 *v10; // rbx
  __int64 v11; // rsi
  unsigned __int64 v12; // rbp
  unsigned __int64 i; // rax
  __int64 result; // rax
  int v15; // r8d
  PVOID PoolWithTag; // rdi

  v3 = (__int64 *)*a2;
  v4 = (unsigned int)(a3 + 1);
  v7 = 0;
  while ( a2 != v3 )
  {
    v15 = *((_DWORD *)v3 + 4);
    if ( v15 )
      v7 += v15 << 6;
    else
      v4 = (unsigned int)(v4 - 1);
    v3 = (__int64 *)*v3;
  }
  v8 = 80 * v4 + v7;
  if ( *(_DWORD *)(a1 + 104) < v8 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x41627241u);
    if ( !PoolWithTag )
      return 3221225626LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x41627241u);
    *(_QWORD *)(a1 + 112) = PoolWithTag;
    *(_DWORD *)(a1 + 104) = v8;
  }
  memset(*(void **)(a1 + 112), 0, v8);
  v9 = *(_QWORD *)(a1 + 112);
  v10 = (__int64 *)*a2;
  v11 = v9 + 80 * v4;
  while ( a2 != v10 )
  {
    if ( *((_DWORD *)v10 + 4) )
    {
      *(_QWORD *)(v9 + 32) = v10;
      *(_DWORD *)(v9 + 48) = *((_DWORD *)v10 + 4);
      *(_QWORD *)(v9 + 56) = v11;
      *(_QWORD *)v9 = 1LL;
      v12 = v10[3];
      for ( i = v12 + 32LL * *((unsigned int *)v10 + 4); v12 < i; i = v10[3] + 32LL * *((unsigned int *)v10 + 4) )
      {
        result = ArbpBuildAlternative(a1, v12, v11);
        if ( (int)result < 0 )
          return result;
        *(_DWORD *)(v11 + 32) = 0;
        v12 += 32LL;
        v11 += 64LL;
      }
      v9 += 80LL;
    }
    v10 = (__int64 *)*v10;
  }
  *(_QWORD *)(v9 + 32) = 0LL;
  return 0LL;
}
