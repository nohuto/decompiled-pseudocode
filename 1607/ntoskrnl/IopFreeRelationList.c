/*
 * XREFs of IopFreeRelationList @ 0x140485DE0
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x1404835BC (PipRemoveDevicesInRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14048545C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpInvalidateRelationsInList @ 0x140485900 (PnpInvalidateRelationsInList.c)
 *     IopAllocateRelationList @ 0x140485D8C (IopAllocateRelationList.c)
 *     PnpBuildRemovalRelationList @ 0x140485F74 (PnpBuildRemovalRelationList.c)
 *     PnpProcessCompletedEject @ 0x14062E050 (PnpProcessCompletedEject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PipFreeDeviceObjectList @ 0x140485E14 (PipFreeDeviceObjectList.c)
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
