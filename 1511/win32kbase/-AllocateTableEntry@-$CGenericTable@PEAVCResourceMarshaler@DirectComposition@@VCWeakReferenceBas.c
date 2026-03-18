/*
 * XREFs of ?AllocateTableEntry@?$CGenericTable@PEAVCResourceMarshaler@DirectComposition@@VCWeakReferenceBase@2@$0HEHHEDEE@$00@DirectComposition@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1C007B770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::AllocateTableEntry(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  return Win32AllocPoolWithQuota();
}
