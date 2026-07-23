/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x1400C1E74
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x14012F4C4 (VfAvlDeleteTreeNode.c)
 *     PiSwProcessRemove @ 0x140483A18 (PiSwProcessRemove.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140483B88 (PnpCleanupDeviceRegistryValues.c)
 *     PiSwCloseDevice @ 0x140483C1C (PiSwCloseDevice.c)
 *     PiSwBusRelationRemove @ 0x140483D54 (PiSwBusRelationRemove.c)
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x1404D1050 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404E769C (PiPnpRtlObjectEventWorker.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E9110 (PiDmRemoveCacheReferenceForObject.c)
 *     PopCreatePowerRequestObject @ 0x1405035C0 (PopCreatePowerRequestObject.c)
 *     PopPowerRequestDeleteEntryById @ 0x140503854 (PopPowerRequestDeleteEntryById.c)
 *     PiUpdateDriverDBCache @ 0x140515734 (PiUpdateDriverDBCache.c)
 *     PiDmObjectManagerPopulate @ 0x1405645E8 (PiDmObjectManagerPopulate.c)
 *     IopCleanupFileObjectIosbRange @ 0x140621240 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140622C98 (IopSetFileObjectIosbRange.c)
 *     PiDmListRemoveObjectWorker @ 0x14062FEB0 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     RealPredecessor @ 0x1400B207C (RealPredecessor.c)
 *     DeleteNodeFromTree @ 0x1400C1EE0 (DeleteNodeFromTree.c)
 *     FindNodeOrParent @ 0x1400C20A0 (FindNodeOrParent.c)
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
