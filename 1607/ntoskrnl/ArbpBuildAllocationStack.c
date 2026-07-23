/*
 * XREFs of ArbpBuildAllocationStack @ 0x140559CCC
 * Callers:
 *     ArbTestAllocation @ 0x140559618 (ArbTestAllocation.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ArbpBuildAlternative @ 0x140559F84 (ArbpBuildAlternative.c)
 */

__int64 __fastcall ArbpBuildAllocationStack(__int64 a1, __int64 *a2, int a3)
{
  __int64 *v3; // rax
  __int64 v4; // rsi
  int v7; // ebx
  int v8; // r8d
  unsigned int v9; // ebx
  __int64 v10; // rdi
  __int64 *v11; // rbx
  __int64 v12; // rsi
  unsigned __int64 v13; // rbp
  unsigned __int64 i; // rax
  __int64 result; // rax
  PVOID PoolWithTag; // rdi

  v3 = (__int64 *)*a2;
  v4 = (unsigned int)(a3 + 1);
  v7 = 0;
  while ( a2 != v3 )
  {
    v8 = *((_DWORD *)v3 + 4);
    if ( v8 )
      v7 += v8 << 6;
    else
      v4 = (unsigned int)(v4 - 1);
    v3 = (__int64 *)*v3;
  }
  v9 = 80 * v4 + v7;
  if ( *(_DWORD *)(a1 + 104) < v9 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x41627241u);
    if ( !PoolWithTag )
      return 3221225626LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 112), 0x41627241u);
    *(_QWORD *)(a1 + 112) = PoolWithTag;
    *(_DWORD *)(a1 + 104) = v9;
  }
  memset(*(void **)(a1 + 112), 0, v9);
  v10 = *(_QWORD *)(a1 + 112);
  v11 = (__int64 *)*a2;
  v12 = v10 + 80 * v4;
  while ( a2 != v11 )
  {
    if ( *((_DWORD *)v11 + 4) )
    {
      *(_QWORD *)(v10 + 32) = v11;
      *(_DWORD *)(v10 + 48) = *((_DWORD *)v11 + 4);
      *(_QWORD *)(v10 + 56) = v12;
      *(_QWORD *)v10 = 1LL;
      v13 = v11[3];
      for ( i = v13 + 32LL * *((unsigned int *)v11 + 4); v13 < i; i = v11[3] + 32LL * *((unsigned int *)v11 + 4) )
      {
        result = ArbpBuildAlternative(a1, v13, v12);
        if ( (int)result < 0 )
          return result;
        *(_DWORD *)(v12 + 32) = 0;
        v13 += 32LL;
        v12 += 64LL;
      }
      v10 += 80LL;
    }
    v11 = (__int64 *)*v11;
  }
  *(_QWORD *)(v10 + 32) = 0LL;
  return 0LL;
}
