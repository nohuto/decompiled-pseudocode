/*
 * XREFs of CmpLightWeightCreateModificationData @ 0x14060EBD4
 * Callers:
 *     CmpLightWeightPrepareAddKeyUoW @ 0x14060ED60 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14060EF98 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14060F334 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14060E390 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightDuplicateParentLists @ 0x14060EC9C (CmpLightWeightDuplicateParentLists.c)
 *     CmpLightWeightUpdateModificationActions @ 0x14060F964 (CmpLightWeightUpdateModificationActions.c)
 */

__int64 __fastcall CmpLightWeightCreateModificationData(__int64 a1, unsigned int **a2)
{
  ULONG_PTR v4; // rbp
  unsigned int *PoolWithTag; // rax
  unsigned int *v6; // rbx
  int updated; // edi

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x77554D43u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    ++*PoolWithTag;
    PoolWithTag[3] = -1;
    PoolWithTag[4] = -1;
    updated = CmpLightWeightDuplicateParentLists(v4);
    if ( updated >= 0 )
    {
      updated = CmpLightWeightUpdateModificationActions(
                  v6,
                  *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL),
                  *(_QWORD *)(a1 + 56));
      if ( updated >= 0 )
      {
        updated = 0;
        *a2 = v6;
        v6 = 0LL;
      }
    }
    if ( v6 )
      CmpLightWeightCleanupModifyKeyDataUoW(v4, v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)updated;
}
