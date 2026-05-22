/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@U?$_List_node@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@PEAX@2@_K@Z @ 0x18000A93C
 * Callers:
 *     _std::_List_alloc_std::_List_base_types_std::pair_unsigned_int_const__ViewHeirarchy::ViewHeirarchyEntry__std::allocator_std::pair_unsigned_int_const__ViewHeirarchy::ViewHeirarchyEntry_______::_Buynode0_::_1_::catch$14 @ 0x18009F438 (_std--_List_alloc_std--_List_base_types_std--pair_unsigned_int_const__ViewHeirarchy--ViewHeirarc.c)
 *     _std::_List_buy_std::pair_enum_TestCommandMessageType_const__std::pair_void_____ptr64_bool_(__cdecl_)(void_____ptr64_TestCommandMessageDataHeader_____ptr64)____std::allocator_std::pair_enum_TestCommandMessageType_const__std::pair_void_____ptr64_bool_(__cdecl_)(void_____ptr64_TestCommandMessageDataHeader_____ptr64)_______::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple_enum_TestCommandMessageType_const_&___ptr64__std::tuple_____::_1_::catch$21 @ 0x18009F4CA (_std--_List_buy_std--pair_enum_TestCommandMessageType_const__std--pair_void_____ptr64_bool_(__cd.c)
 *     _std::_List_buy_std::pair_unsigned_int_const__ViewHeirarchy::ViewHeirarchyEntry__std::allocator_std::pair_unsigned_int_const__ViewHeirarchy::ViewHeirarchyEntry_____::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple_unsigned_int_const_&___ptr64__std::tuple_____::_1_::catch$21 @ 0x1800A2C8B (_std--_List_buy_std--pair_unsigned_int_const__ViewHeirarchy--ViewHeirarchyEntry__std--allocator_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>,void *>>>::deallocate(
        __int64 a1,
        char *a2)
{
  std::_Deallocate(a2, 1uLL, 0x28uLL);
}
