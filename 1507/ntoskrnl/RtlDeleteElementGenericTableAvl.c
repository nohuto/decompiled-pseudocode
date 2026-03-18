/*
 * XREFs of RtlDeleteElementGenericTableAvl @ 0x140018004
 * Callers:
 *     VfAvlDeleteTreeNode @ 0x14002591C (VfAvlDeleteTreeNode.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     PiSwIrpStartCreateWorker @ 0x14045BC94 (PiSwIrpStartCreateWorker.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DFCE4 (PiPnpRtlObjectEventWorker.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E0538 (PiDmRemoveCacheReferenceForObject.c)
 *     PopPowerRequestDeleteEntryById @ 0x1404E61A8 (PopPowerRequestDeleteEntryById.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14053503C (PnpCleanupDeviceRegistryValues.c)
 *     PiSwCloseDevice @ 0x1405391A8 (PiSwCloseDevice.c)
 *     PiSwProcessRemove @ 0x140539C30 (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x140539D58 (PiSwBusRelationRemove.c)
 *     PiDqQueryDeleteObjectFromResultSet @ 0x14053D5D8 (PiDqQueryDeleteObjectFromResultSet.c)
 *     PiUpdateDriverDBCache @ 0x1405AA750 (PiUpdateDriverDBCache.c)
 *     PiDmObjectManagerPopulate @ 0x1405ABFB4 (PiDmObjectManagerPopulate.c)
 *     IopCleanupFileObjectIosbRange @ 0x14067127C (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140672E30 (IopSetFileObjectIosbRange.c)
 *     PiDmListRemoveObjectWorker @ 0x140680984 (PiDmListRemoveObjectWorker.c)
 *     PopPowerRequestDeleteEntryNoLock @ 0x1406B0C50 (PopPowerRequestDeleteEntryNoLock.c)
 * Callees:
 *     FindNodeOrParent @ 0x140018070 (FindNodeOrParent.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x140018114 (RtlDeleteElementGenericTableAvlEx.c)
 */

BOOLEAN __stdcall RtlDeleteElementGenericTableAvl(PRTL_AVL_TABLE Table, PVOID Buffer)
{
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  if ( (unsigned int)FindNodeOrParent(Table, Buffer, &v4) != 1 )
    return 0;
  RtlDeleteElementGenericTableAvlEx(Table, v4);
  return 1;
}
