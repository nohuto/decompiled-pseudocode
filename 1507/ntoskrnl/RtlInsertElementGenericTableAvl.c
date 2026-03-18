/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x1400D0A24
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x140153FC4 (VfAvlInsertReservedTreeNode.c)
 *     PiSwBusRelationAdd @ 0x14045BB44 (PiSwBusRelationAdd.c)
 *     PiSwIrpStartCreateWorker @ 0x14045BC94 (PiSwIrpStartCreateWorker.c)
 *     PopPowerRequestInsertElementNoLock @ 0x1404E5F40 (PopPowerRequestInsertElementNoLock.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1404E6010 (PiDqQueryAddObjectToResultSet.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404E66AC (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiUpdateDriverDBCache @ 0x1405AA750 (PiUpdateDriverDBCache.c)
 *     PiDmObjectManagerPopulate @ 0x1405ABFB4 (PiDmObjectManagerPopulate.c)
 *     PiDcInitUpdateProperties @ 0x1405B9CB8 (PiDcInitUpdateProperties.c)
 *     IopSetFileObjectIosbRange @ 0x140672E30 (IopSetFileObjectIosbRange.c)
 * Callees:
 *     FindNodeOrParent @ 0x140018070 (FindNodeOrParent.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x140019660 (RtlInsertElementGenericTableFullAvl.c)
 */

PVOID __stdcall RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  TABLE_SEARCH_RESULT SearchResult; // eax
  PVOID NodeOrParent[3]; // [rsp+30h] [rbp-18h] BYREF

  SearchResult = (unsigned int)FindNodeOrParent((__int64)Table, (__int64)Buffer, NodeOrParent);
  return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent[0], SearchResult);
}
