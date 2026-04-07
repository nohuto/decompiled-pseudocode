/*
 * XREFs of ?AllocTableData@?$CGenericTableMap@PEAVCWindowData@@U?$SetElement@PEAVCWindowData@@@?$CGenericSet@PEAVCWindowData@@@@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x18003F740
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B4D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

PVOID __fastcall CGenericTableMap<CWindowData *,CGenericSet<CWindowData *>::SetElement<CWindowData *>>::AllocTableData(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  LPVOID (__fastcall *v2)(WPF::ProcessHeapImpl *, SIZE_T); // rdi

  v2 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v2 == WPF::ProcessHeapImpl::Alloc )
    return WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, ByteSize);
  else
    return v2(WPF::g_pProcessHeap, ByteSize);
}
