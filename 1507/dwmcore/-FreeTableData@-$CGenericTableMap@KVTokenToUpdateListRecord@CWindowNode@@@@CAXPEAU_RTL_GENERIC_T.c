/*
 * XREFs of ?FreeTableData@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x180097880
 * Callers:
 *     _dynamic_atexit_destructor_for__CInteraction::s_InteractionHandleTable__ @ 0x18009C6A0 (_dynamic_atexit_destructor_for__CInteraction--s_InteractionHandleTable__.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData(
        struct _RTL_GENERIC_TABLE *Table,
        PVOID Buffer)
{
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, PVOID))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    Buffer);
}
