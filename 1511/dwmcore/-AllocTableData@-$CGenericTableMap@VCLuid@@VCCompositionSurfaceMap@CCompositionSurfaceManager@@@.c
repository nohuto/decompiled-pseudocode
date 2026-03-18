/*
 * XREFs of ?AllocTableData@?$CGenericTableMap@VCLuid@@VCCompositionSurfaceMap@CCompositionSurfaceManager@@@@CAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x1800B0CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 */

PVOID __fastcall CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::AllocTableData(
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
