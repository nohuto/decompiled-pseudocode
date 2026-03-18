/*
 * XREFs of PiPnpRtlOperationAllocateGenericTableEntry @ 0x140501F2C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PiPnpRtlOperationAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag(PagedPool, ByteSize, 0x41706E50u);
}
