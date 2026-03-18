/*
 * XREFs of ?FreeTableData@?$CGenericTableMap@IVPropertyMapEntry@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x1800AD800
 * Callers:
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800774A0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x180080264 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     _dynamic_atexit_destructor_for__CInteraction::s_InteractionHandleTable__ @ 0x1800C2EC0 (_dynamic_atexit_destructor_for__CInteraction--s_InteractionHandleTable__.c)
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<unsigned int,PropertyMapEntry>::FreeTableData(
        struct _RTL_GENERIC_TABLE *Table,
        PVOID Buffer)
{
  void (__fastcall *v2)(WPF::ProcessHeapImpl *, void *); // rax

  v2 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v2 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, Buffer);
  else
    v2(WPF::g_pProcessHeap, Buffer);
}
