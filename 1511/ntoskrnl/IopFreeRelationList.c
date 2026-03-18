/*
 * XREFs of IopFreeRelationList @ 0x1404A0570
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x14049E9CC (PipRemoveDevicesInRelationList.c)
 *     PnpBuildRemovalRelationList @ 0x14049EDD4 (PnpBuildRemovalRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14049F874 (PnpProcessQueryRemoveAndEject.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14049FEC0 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x1404A00B8 (PnpInvalidateRelationsInList.c)
 *     IopAllocateRelationList @ 0x1404A04B8 (IopAllocateRelationList.c)
 *     PnpProcessCompletedEject @ 0x140603BA0 (PnpProcessCompletedEject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PipFreeDeviceObjectList @ 0x1404A05A4 (PipFreeDeviceObjectList.c)
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
