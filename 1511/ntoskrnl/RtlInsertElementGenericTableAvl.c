/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x140090468
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x140002484 (VfAvlInsertReservedTreeNode.c)
 *     PiUpdateDriverDBCache @ 0x1403B6B8C (PiUpdateDriverDBCache.c)
 *     PopCreatePowerRequestObject @ 0x14045519C (PopCreatePowerRequestObject.c)
 *     PiDqQueryAddObjectToResultSet @ 0x140460C48 (PiDqQueryAddObjectToResultSet.c)
 *     PiSwIrpStartCreateWorker @ 0x1404E42CC (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x1404E4570 (PiSwBusRelationAdd.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404F0CA0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiDmObjectManagerPopulate @ 0x14051B15C (PiDmObjectManagerPopulate.c)
 *     PiDcInitUpdateProperties @ 0x1405247C4 (PiDcInitUpdateProperties.c)
 *     IopSetFileObjectIosbRange @ 0x1405F8D44 (IopSetFileObjectIosbRange.c)
 * Callees:
 *     RtlInsertElementGenericTableFullAvl @ 0x1400904D0 (RtlInsertElementGenericTableFullAvl.c)
 *     FindNodeOrParent @ 0x140090940 (FindNodeOrParent.c)
 */

PVOID __stdcall RtlInsertElementGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PVOID Buffer,
        CLONG BufferSize,
        PBOOLEAN NewElement)
{
  TABLE_SEARCH_RESULT SearchResult; // eax
  PVOID NodeOrParent[3]; // [rsp+30h] [rbp-18h] BYREF

  SearchResult = (unsigned int)FindNodeOrParent(Table, Buffer, NodeOrParent);
  return RtlInsertElementGenericTableFullAvl(Table, Buffer, BufferSize, NewElement, NodeOrParent[0], SearchResult);
}
