/*
 * XREFs of ?AllocTableData@?$CGenericTableMap@PEAVCWindowData@@U?$SetElement@PEAVCWindowData@@@?$CGenericSet@PEAVCWindowData@@@@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x180041C90
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002AE50 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

PVOID __fastcall CGenericTableMap<CWindowData *,CGenericSet<CWindowData *>::SetElement<CWindowData *>>::AllocTableData(
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
