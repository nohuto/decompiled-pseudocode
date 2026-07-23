/*
 * XREFs of PnpBuildRemovalRelationList @ 0x140485F74
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     IopAllocateRelationList @ 0x140485D8C (IopAllocateRelationList.c)
 *     IopFreeRelationList @ 0x140485DE0 (IopFreeRelationList.c)
 *     PnpProcessRelation @ 0x1404861B0 (PnpProcessRelation.c)
 *     IopSortRelationListForRemove @ 0x1404863A8 (IopSortRelationListForRemove.c)
 */

__int64 __fastcall PnpBuildRemovalRelationList(__int64 a1, unsigned int a2, int a3, UNICODE_STRING *a4, _QWORD *a5)
{
  __int64 v8; // r15
  _BYTE *BugCheckParameter3; // rax
  _QWORD *v10; // rbx
  int v11; // edi

  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  *a5 = 0LL;
  BugCheckParameter3 = IopAllocateRelationList(a2);
  v10 = BugCheckParameter3;
  if ( !BugCheckParameter3 )
    return 3221225626LL;
  v11 = PnpProcessRelation(v8, a2, 2, a3, a4, (ULONG_PTR)BugCheckParameter3);
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
