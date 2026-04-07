/*
 * XREFs of ?FreeTableData@?$CGenericTableMap@PEAVCWindowData@@U?$SetElement@PEAVCWindowData@@@?$CGenericSet@PEAVCWindowData@@@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x180008BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180028450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CGenericTableMap<CWindowData *,CGenericSet<CWindowData *>::SetElement<CWindowData *>>::FreeTableData(
        struct _RTL_GENERIC_TABLE *Table,
        PVOID Buffer)
{
  void (__fastcall *v2)(WPF::ProcessHeapImpl *__hidden, void *); // rdi

  v2 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v2 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, Buffer);
  else
    v2(WPF::g_pProcessHeap, Buffer);
}
