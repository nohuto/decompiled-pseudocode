/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x1400C3FD4
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x14012EF54 (VfAvlDeleteTreeNode.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x14048A260 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiUpdateDriverDBCache @ 0x14049D278 (PiUpdateDriverDBCache.c)
 *     PiSwProcessRemove @ 0x1404C36B0 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x1404C3900 (PiSwCloseDevice.c)
 *     PiSwBusRelationRemove @ 0x1404C3A38 (PiSwBusRelationRemove.c)
 *     PiSwIrpStartCreateWorker @ 0x1404C6CB4 (PiSwIrpStartCreateWorker.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1404C7C20 (PnpCleanupDeviceRegistryValues.c)
 *     PiPnpRtlEndOperation @ 0x14050147C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventWorker @ 0x14050470C (PiPnpRtlObjectEventWorker.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140506180 (PiDmRemoveCacheReferenceForObject.c)
 *     PopCreatePowerRequestObject @ 0x140520558 (PopCreatePowerRequestObject.c)
 *     PopPowerRequestDeleteEntryById @ 0x1405207EC (PopPowerRequestDeleteEntryById.c)
 *     PiDmObjectManagerPopulate @ 0x1405640A8 (PiDmObjectManagerPopulate.c)
 *     IopCleanupFileObjectIosbRange @ 0x14062118C (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140622BE4 (IopSetFileObjectIosbRange.c)
 *     PiDmListRemoveObjectWorker @ 0x14062FDFC (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     RealPredecessor @ 0x1400B41FC (RealPredecessor.c)
 *     DeleteNodeFromTree @ 0x1400C4040 (DeleteNodeFromTree.c)
 *     FindNodeOrParent @ 0x1400C4200 (FindNodeOrParent.c)
 */

BOOLEAN __stdcall RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  _RTL_BALANCED_LINKS *v3; // rdi
  _RTL_BALANCED_LINKS *v5; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)FindNodeOrParent(Table, Buffer, &v5) != 1 )
    return 0;
  v3 = v5;
  if ( v5 == Table->RestartKey )
    Table->RestartKey = (_RTL_BALANCED_LINKS *)RealPredecessor(v5);
  ++Table->DeleteCount;
  DeleteNodeFromTree(Table, v3);
  --Table->NumberGenericTableElements;
  Table->WhichOrderedElement = 0;
  Table->OrderedPointer = 0LL;
  Table->FreeRoutine(Table, v3);
  return 1;
}
