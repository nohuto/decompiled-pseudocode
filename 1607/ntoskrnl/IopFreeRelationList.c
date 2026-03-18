/*
 * XREFs of IopFreeRelationList @ 0x1404C59AC
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x1404C3254 (PipRemoveDevicesInRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1404C41D8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpBuildRemovalRelationList @ 0x1404C473C (PnpBuildRemovalRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1404C5028 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x1404C54CC (PnpInvalidateRelationsInList.c)
 *     IopAllocateRelationList @ 0x1404C5958 (IopAllocateRelationList.c)
 *     PnpProcessCompletedEject @ 0x14062DF9C (PnpProcessCompletedEject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PipFreeDeviceObjectList @ 0x1404C59E0 (PipFreeDeviceObjectList.c)
 */

void __fastcall IopFreeRelationList(_QWORD *P)
{
  if ( P )
  {
    if ( *P )
    {
      PipFreeDeviceObjectList();
      *P = 0LL;
    }
    ExFreePoolWithTag(P, 0x54706E50u);
  }
}
