/*
 * XREFs of RtlInsertElementGenericTableAvl @ 0x1400C4544
 * Callers:
 *     VfAvlInsertReservedTreeNode @ 0x14008449C (VfAvlInsertReservedTreeNode.c)
 *     PiUpdateDriverDBCache @ 0x14049D278 (PiUpdateDriverDBCache.c)
 *     PiSwIrpStartCreateWorker @ 0x1404C6CB4 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x1404C6F58 (PiSwBusRelationAdd.c)
 *     PiDqQueryAddObjectToResultSet @ 0x1404E6380 (PiDqQueryAddObjectToResultSet.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404EDDBC (PnpMapDeviceObjectToDeviceInstance.c)
 *     PopCreatePowerRequestObject @ 0x140520558 (PopCreatePowerRequestObject.c)
 *     PiDmObjectManagerPopulate @ 0x1405640A8 (PiDmObjectManagerPopulate.c)
 *     PiDcInitUpdateProperties @ 0x1405777B8 (PiDcInitUpdateProperties.c)
 *     IopSetFileObjectIosbRange @ 0x140622BE4 (IopSetFileObjectIosbRange.c)
 * Callees:
 *     FindNodeOrParent @ 0x1400C4200 (FindNodeOrParent.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1400C42B0 (RtlInsertElementGenericTableFullAvl.c)
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
