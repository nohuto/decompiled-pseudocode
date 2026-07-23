/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x1400C23E4
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x1400825FC (VfAvlInsertReservedTreeNode.c)
 *     PiSwBusRelationAdd @ 0x140487F84 (PiSwBusRelationAdd.c)
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1404C8DB4 (PiDqQueryAddObjectToResultSet.c)
 *     PopCreatePowerRequestObject @ 0x1405035C0 (PopCreatePowerRequestObject.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14050D7D8 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiUpdateDriverDBCache @ 0x140515734 (PiUpdateDriverDBCache.c)
 *     PiDmObjectManagerPopulate @ 0x1405645E8 (PiDmObjectManagerPopulate.c)
 *     PiDcInitUpdateProperties @ 0x140577CF8 (PiDcInitUpdateProperties.c)
 *     IopSetFileObjectIosbRange @ 0x140622C98 (IopSetFileObjectIosbRange.c)
 * Callees:
 *     FindNodeOrParent @ 0x1400C20A0 (FindNodeOrParent.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1400C2150 (RtlInsertElementGenericTableFullAvl.c)
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
