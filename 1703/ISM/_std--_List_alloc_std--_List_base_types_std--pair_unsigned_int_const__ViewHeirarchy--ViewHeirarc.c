/*
 * XREFs of _std::_List_alloc_std::_List_base_types_std::pair_unsigned_int_const__ViewHeirarchy::ViewHeirarchyEntry__std::allocator_std::pair_unsigned_int_const__ViewHeirarchy::ViewHeirarchyEntry_______::_Buynode0_::_1_::catch$14 @ 0x18009F438
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@U?$_List_node@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@PEAX@2@_K@Z @ 0x18000A93C (-deallocate@-$_Wrap_alloc@V-$allocator@U-$_List_node@U-$pair@$$CBW4TestCommandMessageType@@U-$pa.c)
 *     _CxxThrowException_0 @ 0x18009E220 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_alloc_std::_List_base_types_std::pair_unsigned_int_const__ViewHeirarchy::ViewHeirarchyEntry__std::allocator_std::pair_unsigned_int_const__ViewHeirarchy::ViewHeirarchyEntry_______::_Buynode0_::_1_::catch_14(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>,void *>>>::deallocate(
    a1,
    *(char **)(a2 + 64));
  throw;
}
