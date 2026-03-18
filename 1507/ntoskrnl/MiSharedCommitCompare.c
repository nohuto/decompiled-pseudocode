/*
 * XREFs of MiSharedCommitCompare @ 0x1404B7DA0
 * Callers:
 *     MiInsertSharedCommitNode @ 0x1404B7640 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1404B7A60 (MiRemoveSharedCommitNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSharedCommitCompare(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx

  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a2 + 24);
  if ( v2 > v3 )
    return 1LL;
  else
    return (unsigned int)-(v2 < v3);
}
