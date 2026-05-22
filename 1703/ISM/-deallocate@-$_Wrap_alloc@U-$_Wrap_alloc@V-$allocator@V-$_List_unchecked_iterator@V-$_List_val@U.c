/*
 * XREFs of ?deallocate@?$_Wrap_alloc@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@2@_K@Z @ 0x18000A614
 * Callers:
 *     _std::vector_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__ViewHeirarchy::ViewHeirarchyEntry________std::_Wrap_alloc_std::allocator_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__ViewHeirarchy::ViewHeirarchyEntry_____________::_Reallocate_exactly_::_1_::catch$51 @ 0x18009F3FD (_std--vector_std--_List_unchecked_iterator_std--_List_val_std--_List_simple_types_std--pair_unsi.c)
 *     _std::vector_Input::PropertyNode_____ptr64_std::allocator_Input::PropertyNode_____ptr64___::emplace_back_Input::PropertyNode_____ptr64_const_&___ptr64__::_1_::catch$101 @ 0x18009FC4F (_std--vector_Input--PropertyNode_____ptr64_std--allocator_Input--PropertyNode_____ptr64___--empl.c)
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal__std::allocator_Microsoft::WRL::ComPtr_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal_____::emplace_back_Microsoft::WRL::ComPtr_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal__const_&___ptr64__::_1_::catch$102 @ 0x18009FC73 (_std--vector_Microsoft--WRL--ComPtr_Windows--Graphics--Holographic--Internal--IHolographicDispla.c)
 *     _std::vector_Input::PropertyNode_____ptr64_std::allocator_Input::PropertyNode_____ptr64___::emplace_Input::PropertyNode_____ptr64_const_&___ptr64__::_1_::catch$137 @ 0x1800A0895 (_std--vector_Input--PropertyNode_____ptr64_std--allocator_Input--PropertyNode_____p_ea_1800A0895.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IMPCInputProviderBase__std::allocator_Microsoft::WRL::ComPtr_IMPCInputProviderBase_____::emplace_back_Microsoft::WRL::ComPtr_IMPCInputProviderBase____::_1_::catch$69 @ 0x1800A1804 (_std--vector_Microsoft--WRL--ComPtr_IMPCInputProviderBase__std--allocator_Microsoft--WRL--ComPtr.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IMPCInputProviderBase__std::allocator_Microsoft::WRL::ComPtr_IMPCInputProviderBase_____::emplace_back_Microsoft::WRL::ComPtr_IMPCInputProviderBase__const_&___ptr64__::_1_::catch$69 @ 0x1800A1847 (_std--vector_Microsoft--WRL--ComPtr_IMPCInputProviderBase__std--allocator_Microsoft_ea_1800A1847.c)
 *     _std::vector_Microsoft::WRL::ComPtr_WGIController__std::allocator_Microsoft::WRL::ComPtr_WGIController_____::emplace_back_Microsoft::WRL::ComPtr_WGIController____::_1_::catch$102 @ 0x1800A22EF (_std--vector_Microsoft--WRL--ComPtr_WGIController__std--allocator_Microsoft--WRL--ComPtr_WGICont.c)
 *     _std::vector_Microsoft::WRL::Wrappers::HString_std::allocator_Microsoft::WRL::Wrappers::HString___::emplace_back_Microsoft::WRL::Wrappers::HString__::_1_::catch$102 @ 0x1800A327A (_std--vector_Microsoft--WRL--Wrappers--HString_std--allocator_Microsoft--WRL--Wrappers--HString_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>>::deallocate(
        __int64 a1,
        char *a2,
        unsigned __int64 a3)
{
  std::_Deallocate(a2, a3, 8uLL);
}
