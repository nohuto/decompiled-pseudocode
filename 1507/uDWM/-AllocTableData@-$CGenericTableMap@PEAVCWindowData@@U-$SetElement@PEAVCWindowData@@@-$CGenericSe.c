/*
 * XREFs of ?AllocTableData@?$CGenericTableMap@PEAVCWindowData@@U?$SetElement@PEAVCWindowData@@@?$CGenericSet@PEAVCWindowData@@@@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x180008B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x1800284D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

PVOID __fastcall CGenericTableMap<CWindowData *,CGenericSet<CWindowData *>::SetElement<CWindowData *>>::AllocTableData(
        struct _RTL_GENERIC_TABLE *Table,
        CLONG ByteSize)
{
  void *(__fastcall *v2)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi

  v2 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v2 == WPF::ProcessHeapImpl::Alloc )
    return WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, ByteSize);
  else
    return v2(WPF::g_pProcessHeap, ByteSize);
}
