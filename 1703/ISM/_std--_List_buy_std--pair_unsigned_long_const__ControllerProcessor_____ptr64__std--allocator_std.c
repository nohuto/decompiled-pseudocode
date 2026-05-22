/*
 * XREFs of _std::_List_buy_std::pair_unsigned_long_const__ControllerProcessor_____ptr64__std::allocator_std::pair_unsigned_long_const__ControllerProcessor_____ptr64_____::_Buynode_unsigned_long_&___ptr64_ControllerProcessor_____ptr64_&___ptr64__::_1_::catch$14 @ 0x1800A0F61
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@PEAX@2@_K@Z @ 0x1800314C0 (-deallocate@-$_Wrap_alloc@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$ComPtr@VInputAcknowledge@@@.c)
 *     _CxxThrowException_0 @ 0x18009E220 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_buy_std::pair_unsigned_long_const__ControllerProcessor_____ptr64__std::allocator_std::pair_unsigned_long_const__ControllerProcessor_____ptr64_____::_Buynode_unsigned_long_____ptr64_ControllerProcessor_____ptr64_____ptr64__::_1_::catch_14(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputAcknowledge>>,void *>>>::deallocate(
    a1,
    *(char **)(a2 + 64));
  throw;
}
