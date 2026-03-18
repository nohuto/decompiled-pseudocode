/*
 * XREFs of PnpAllocateGenericTableEntry @ 0x1404C3AF8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall PnpAllocateGenericTableEntry(struct _RTL_AVL_TABLE *Table, CLONG ByteSize)
{
  return ExAllocatePoolWithTag((POOL_TYPE)257, ByteSize, 0x75737050u);
}
