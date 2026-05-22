/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@PEAX@2@_K@Z @ 0x1800314C0
 * Callers:
 *     _std::_List_alloc_std::_List_base_types_std::pair_unsigned_int_const__Microsoft::WRL::ComPtr_InputThread____std::allocator_std::pair_unsigned_int_const__Microsoft::WRL::ComPtr_InputThread_________::_Buynode0_::_1_::catch$14 @ 0x1800A0F41 (_std--_List_alloc_std--_List_base_types_std--pair_unsigned_int_const__Microsoft--WRL--ComPtr_Inp.c)
 *     _std::_List_buy_std::pair_unsigned_long_const__ControllerProcessor_____ptr64__std::allocator_std::pair_unsigned_long_const__ControllerProcessor_____ptr64_____::_Buynode_unsigned_long_&___ptr64_ControllerProcessor_____ptr64_&___ptr64__::_1_::catch$14 @ 0x1800A0F61 (_std--_List_buy_std--pair_unsigned_long_const__ControllerProcessor_____ptr64__std--allocator_std.c)
 *     _std::_List_buy_std::pair_unsigned_int_const__Microsoft::WRL::ComPtr_InputAcknowledge____std::allocator_std::pair_unsigned_int_const__Microsoft::WRL::ComPtr_InputAcknowledge_______::_Buynode_unsigned_int_Microsoft::WRL::ComPtr_InputAcknowledge__&___ptr64__::_1_::catch$14 @ 0x1800A28E1 (_std--_List_buy_std--pair_unsigned_int_const__Microsoft--WRL--ComPtr_InputAcknowledge____std--al.c)
 *     _std::_List_buy_std::pair_unsigned_int_const__Microsoft::WRL::ComPtr_InputThread____std::allocator_std::pair_unsigned_int_const__Microsoft::WRL::ComPtr_InputThread_______::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple_unsigned_int_const_&___ptr64__std::tuple_____::_1_::catch$21 @ 0x1800A2901 (_std--_List_buy_std--pair_unsigned_int_const__Microsoft--WRL--ComPtr_InputThread____std--allocat.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputAcknowledge>>,void *>>>::deallocate(
        __int64 a1,
        char *a2)
{
  std::_Deallocate(a2, 1uLL, 0x20uLL);
}
