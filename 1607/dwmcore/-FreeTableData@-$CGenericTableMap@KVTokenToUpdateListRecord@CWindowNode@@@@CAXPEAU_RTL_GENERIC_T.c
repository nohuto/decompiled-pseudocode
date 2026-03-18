/*
 * XREFs of ?FreeTableData@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x1800B47D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData(
        struct _RTL_GENERIC_TABLE *Table,
        PVOID Buffer)
{
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, PVOID))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    Buffer);
}
