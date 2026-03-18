/*
 * XREFs of ?AllocateTableEntry@?$CGenericTable@_KVCBatch@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C0075960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGenericTable<unsigned __int64,DirectComposition::CBatch,1702052676,0>::AllocateTableEntry(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  return Win32AllocPool();
}
