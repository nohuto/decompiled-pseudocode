/*
 * XREFs of ArbInitializeOrderingList @ 0x1C006E688
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1C006E118 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     <none>
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
