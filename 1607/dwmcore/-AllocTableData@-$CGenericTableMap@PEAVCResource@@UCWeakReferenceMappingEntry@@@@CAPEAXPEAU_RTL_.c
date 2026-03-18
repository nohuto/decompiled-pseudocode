/*
 * XREFs of ?AllocTableData@?$CGenericTableMap@PEAVCResource@@UCWeakReferenceMappingEntry@@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1800B11B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800616B0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

PVOID __fastcall CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( (char *)v2 == (char *)WPF::ProcessHeapImpl::Alloc )
    return WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, ByteSize);
  else
    return (PVOID)v2();
}
