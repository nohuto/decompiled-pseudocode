/*
 * XREFs of ?AllocTableData@?$CGenericTableMap@PEAVCResource@@UCWeakReferenceMappingEntry@@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1800B1920
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  return (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
           WPF::g_pProcessHeap,
           ByteSize);
}
