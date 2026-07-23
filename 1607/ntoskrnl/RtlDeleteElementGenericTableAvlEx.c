/*
 * XREFs of RtlDeleteElementGenericTableAvlEx @ 0x14011239C
 * Callers:
 *     <none>
 * Callees:
 *     RealPredecessor @ 0x1400B207C (RealPredecessor.c)
 *     DeleteNodeFromTree @ 0x1400C1EE0 (DeleteNodeFromTree.c)
 */

__int64 __fastcall RtlDeleteElementGenericTableAvlEx(__int64 a1, _QWORD *a2)
{
  if ( a2 == *(_QWORD **)(a1 + 56) )
    *(_QWORD *)(a1 + 56) = RealPredecessor(a2);
  ++*(_DWORD *)(a1 + 64);
  DeleteNodeFromTree(a1, (__int64)a2);
  --*(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  return (*(__int64 (__fastcall **)(__int64, _QWORD *))(a1 + 88))(a1, a2);
}
