/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x140090710
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x140002274 (VfAvlDeleteTreeNode.c)
 *     PiUpdateDriverDBCache @ 0x1403B6B8C (PiUpdateDriverDBCache.c)
 *     PiPnpRtlEndOperation @ 0x140440BC0 (PiPnpRtlEndOperation.c)
 *     PopCreatePowerRequestObject @ 0x14045519C (PopCreatePowerRequestObject.c)
 *     PopPowerRequestDeleteEntryById @ 0x140455D50 (PopPowerRequestDeleteEntryById.c)
 *     PiPnpRtlObjectEventWorker @ 0x14045A4D8 (PiPnpRtlObjectEventWorker.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x14045F6A4 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiSwBusRelationRemove @ 0x1404944F0 (PiSwBusRelationRemove.c)
 *     PiSwProcessRemove @ 0x140494C74 (PiSwProcessRemove.c)
 *     PiSwCloseDevice @ 0x1404957E8 (PiSwCloseDevice.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1404A078C (PnpCleanupDeviceRegistryValues.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404B07CC (PiDmRemoveCacheReferenceForObject.c)
 *     PiSwIrpStartCreateWorker @ 0x1404E42CC (PiSwIrpStartCreateWorker.c)
 *     PiDmObjectManagerPopulate @ 0x14051B15C (PiDmObjectManagerPopulate.c)
 *     IopCleanupFileObjectIosbRange @ 0x1405F7484 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x1405F8D44 (IopSetFileObjectIosbRange.c)
 *     PiDmListRemoveObjectWorker @ 0x140605C1C (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     DeleteNodeFromTree @ 0x140090780 (DeleteNodeFromTree.c)
 *     FindNodeOrParent @ 0x140090940 (FindNodeOrParent.c)
 *     RealPredecessor @ 0x1400F281C (RealPredecessor.c)
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
