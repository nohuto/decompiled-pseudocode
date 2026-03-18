/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x14049F738
 * Callers:
 *     PnpProcessRelation @ 0x14049EE70 (PnpProcessRelation.c)
 *     IopSortRelationListForRemove @ 0x14049F054 (IopSortRelationListForRemove.c)
 *     PipVisitDeviceObjectListEntry @ 0x14049F294 (PipVisitDeviceObjectListEntry.c)
 *     IopAddRelationToList @ 0x14049F3DC (IopAddRelationToList.c)
 *     IopSetRelationsTag @ 0x14049F6F0 (IopSetRelationsTag.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1404A01A8 (PnpDeleteLockedDeviceNodes.c)
 *     IopIsDescendantNode @ 0x1404A0714 (IopIsDescendantNode.c)
 *     IopCheckIfMergeRequired @ 0x140616EAC (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x14049F754 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
