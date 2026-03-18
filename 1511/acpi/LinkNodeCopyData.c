/*
 * XREFs of LinkNodeCopyData @ 0x1C006B6B8
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0069DA0 (IrqArbCommitAllocation.c)
 *     IrqArbpPrepareForTestOrConflict @ 0x1C006B4C0 (IrqArbpPrepareForTestOrConflict.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LinkNodeCopyData(int a1)
{
  __int64 i; // rdx

  for ( i = LinkNodeListHead - 56; &LinkNodeListHead != (__int64 *)(i + 56); i = *(_QWORD *)(i + 56) - 56LL )
  {
    if ( a1 == 1 )
    {
      *(_DWORD *)(i + 36) = *(_DWORD *)(i + 32);
      *(_DWORD *)(i + 28) = *(_DWORD *)(i + 24);
    }
    else
    {
      *(_DWORD *)(i + 32) = *(_DWORD *)(i + 36);
      *(_DWORD *)(i + 24) = *(_DWORD *)(i + 28);
    }
  }
  return 0LL;
}
