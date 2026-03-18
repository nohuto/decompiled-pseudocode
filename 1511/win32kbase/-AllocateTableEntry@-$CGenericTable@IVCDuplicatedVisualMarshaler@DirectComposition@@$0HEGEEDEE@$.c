/*
 * XREFs of ?AllocateTableEntry@?$CGenericTable@IVCDuplicatedVisualMarshaler@DirectComposition@@$0HEGEEDEE@$00@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C0077DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGenericTable<unsigned int,DirectComposition::CDuplicatedVisualMarshaler,1952727876,1>::AllocateTableEntry(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  return Win32AllocPoolWithQuota();
}
