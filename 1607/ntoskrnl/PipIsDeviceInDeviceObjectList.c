/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x1404860FC
 * Callers:
 *     IopSetRelationsTag @ 0x14048421C (IopSetRelationsTag.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1404859EC (PnpDeleteLockedDeviceNodes.c)
 *     IopIsDescendantNode @ 0x140485F38 (IopIsDescendantNode.c)
 *     IopAddRelationToList @ 0x140486010 (IopAddRelationToList.c)
 *     PnpProcessRelation @ 0x1404861B0 (PnpProcessRelation.c)
 *     IopSortRelationListForRemove @ 0x1404863A8 (IopSortRelationListForRemove.c)
 *     PipVisitDeviceObjectListEntry @ 0x1404865E8 (PipVisitDeviceObjectListEntry.c)
 *     IopCheckIfMergeRequired @ 0x14064B9B4 (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x140486118 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
