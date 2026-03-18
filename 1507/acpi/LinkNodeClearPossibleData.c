/*
 * XREFs of LinkNodeClearPossibleData @ 0x1C006C59C
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C006C260 (IrqArbCommitAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C006D860 (IrqArbpPrepareForTestOrConflict.c)
 *     IrqArbpQueryConflictIsa @ 0x1C00809D8 (IrqArbpQueryConflictIsa.c)
 * Callees:
 *     <none>
 */

__int64 LinkNodeClearPossibleData()
{
  __int64 result; // rax

  for ( result = LinkNodeListHead - 56;
        &LinkNodeListHead != (__int64 *)(result + 56);
        result = *(_QWORD *)(result + 56) - 56LL )
  {
    *(_DWORD *)(result + 36) = 0;
    *(_DWORD *)(result + 28) = 0;
  }
  return result;
}
