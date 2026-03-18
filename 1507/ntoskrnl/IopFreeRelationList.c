/*
 * XREFs of IopFreeRelationList @ 0x140535FC0
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x1405349D8 (PipRemoveDevicesInRelationList.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140535188 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpBuildRemovalRelationList @ 0x140535628 (PnpBuildRemovalRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x140535D44 (PnpInvalidateRelationsInList.c)
 *     IopAllocateRelationList @ 0x140535F08 (IopAllocateRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessCompletedEject @ 0x14067E910 (PnpProcessCompletedEject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PipFreeDeviceObjectList @ 0x140535FF4 (PipFreeDeviceObjectList.c)
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
