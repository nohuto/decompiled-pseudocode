/*
 * XREFs of ArbAddOrdering @ 0x140559540
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x140558F8C (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ArbAddOrdering(unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  PVOID PoolWithTag; // rax
  PVOID v8; // rbp
  const void *v9; // rdx

  if ( a3 < a2 )
    return 3221225485LL;
  if ( *a1 != a1[1] )
  {
LABEL_3:
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL * *a1) = a2;
    *(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL * (*a1)++ + 8) = a3;
    return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * (*a1 + 8), 0x4C627241u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    v9 = (const void *)*((_QWORD *)a1 + 1);
    if ( v9 )
    {
      memmove(PoolWithTag, v9, 16LL * *a1);
      ExFreePoolWithTag(*((PVOID *)a1 + 1), 0);
    }
    a1[1] += 8;
    *((_QWORD *)a1 + 1) = v8;
    goto LABEL_3;
  }
  return 3221225626LL;
}
