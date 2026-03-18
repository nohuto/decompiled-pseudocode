/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x140535CDC
 * Callers:
 *     IopSetRelationsTag @ 0x140535140 (IopSetRelationsTag.c)
 *     IopSortRelationListForRemove @ 0x1405356C4 (IopSortRelationListForRemove.c)
 *     PipVisitDeviceObjectListEntry @ 0x140535864 (PipVisitDeviceObjectListEntry.c)
 *     PnpProcessRelation @ 0x140535938 (PnpProcessRelation.c)
 *     IopAddRelationToList @ 0x140535BF0 (IopAddRelationToList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140536AEC (PnpDeleteLockedDeviceNodes.c)
 *     IopIsDescendantNode @ 0x140538368 (IopIsDescendantNode.c)
 *     IopCheckIfMergeRequired @ 0x14069574C (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x140535CF8 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
