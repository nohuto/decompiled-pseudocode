/*
 * XREFs of ArbInitializeOrderingList @ 0x14055AF18
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x140558F8C (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ArbInitializeOrderingList(__int64 a1)
{
  PVOID PoolWithTag; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x4C627241u);
  *(_QWORD *)(a1 + 8) = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_DWORD *)a1 = 0x100000;
    return 0LL;
  }
  else
  {
    *(_DWORD *)a1 = 0;
    return 3221225626LL;
  }
}
