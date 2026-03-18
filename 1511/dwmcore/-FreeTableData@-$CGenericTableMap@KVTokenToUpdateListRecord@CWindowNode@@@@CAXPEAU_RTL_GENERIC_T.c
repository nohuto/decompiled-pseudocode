/*
 * XREFs of ?FreeTableData@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x1800B19D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData(
        struct _RTL_GENERIC_TABLE *Table,
        PVOID Buffer)
{
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, PVOID))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    Buffer);
}
