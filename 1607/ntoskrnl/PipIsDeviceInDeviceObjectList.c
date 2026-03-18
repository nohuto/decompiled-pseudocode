/*
 * XREFs of PipIsDeviceInDeviceObjectList @ 0x1404C4E98
 * Callers:
 *     IopSetRelationsTag @ 0x1404C3E48 (IopSetRelationsTag.c)
 *     PnpProcessRelation @ 0x1404C47D8 (PnpProcessRelation.c)
 *     IopSortRelationListForRemove @ 0x1404C49D0 (IopSortRelationListForRemove.c)
 *     PipVisitDeviceObjectListEntry @ 0x1404C4C10 (PipVisitDeviceObjectListEntry.c)
 *     IopAddRelationToList @ 0x1404C4DAC (IopAddRelationToList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1404C55B8 (PnpDeleteLockedDeviceNodes.c)
 *     IopIsDescendantNode @ 0x1404C5B04 (IopIsDescendantNode.c)
 *     IopCheckIfMergeRequired @ 0x14064B8D0 (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListIndexOf @ 0x1404C4EB4 (PipDeviceObjectListIndexOf.c)
 */

bool __fastcall PipIsDeviceInDeviceObjectList(unsigned int *a1, __int64 a2, __int64 a3)
{
  return (unsigned int)PipDeviceObjectListIndexOf(a1, a2, *a1, a3) != -1;
}
