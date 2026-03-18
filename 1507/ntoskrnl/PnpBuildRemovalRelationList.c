/*
 * XREFs of PnpBuildRemovalRelationList @ 0x140535628
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     IopSortRelationListForRemove @ 0x1405356C4 (IopSortRelationListForRemove.c)
 *     PnpProcessRelation @ 0x140535938 (PnpProcessRelation.c)
 *     IopAllocateRelationList @ 0x140535F08 (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x140535FC0 (IopFreeRelationList.c)
 */

__int64 __fastcall PnpBuildRemovalRelationList(__int64 a1, unsigned int a2, int a3, UNICODE_STRING *a4, _QWORD *a5)
{
  __int64 v8; // r15
  ULONG_PTR BugCheckParameter3; // rax
  void *v10; // rbx
  int v11; // edi

  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  *a5 = 0LL;
  BugCheckParameter3 = IopAllocateRelationList(a2);
  v10 = (void *)BugCheckParameter3;
  if ( !BugCheckParameter3 )
    return 3221225626LL;
  v11 = PnpProcessRelation(v8, a2, 2, a3, a4, BugCheckParameter3);
  if ( v11 < 0 )
  {
    IopFreeRelationList(v10);
  }
  else
  {
    *a5 = v10;
    IopSortRelationListForRemove(v10);
  }
  return (unsigned int)v11;
}
