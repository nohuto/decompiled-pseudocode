/*
 * XREFs of RtlDeleteElementGenericTableAvlEx @ 0x180073F20
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x180073EE0 (RtlDeleteElementGenericTableAvl.c)
 * Callees:
 *     DeleteNodeFromTree @ 0x180073F7C (DeleteNodeFromTree.c)
 *     RealPredecessor @ 0x18007449C (RealPredecessor.c)
 */

__int64 __fastcall RtlDeleteElementGenericTableAvlEx(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64); // rax

  if ( a2 == *(_QWORD *)(a1 + 56) )
    *(_QWORD *)(a1 + 56) = RealPredecessor(a2);
  ++*(_DWORD *)(a1 + 64);
  DeleteNodeFromTree(a1);
  v4 = *(__int64 (__fastcall **)(__int64, __int64))(a1 + 88);
  --*(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  return v4(a1, a2);
}
