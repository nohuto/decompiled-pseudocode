/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAX@2@_K@Z @ 0x18002A7E0
 * Callers:
 *     _std::_Tree_comp_alloc_std::_Tmap_traits__GUID_Input::PropertyTypeInfo_Input::KeyCompareTrait__GUID__std::allocator_std::pair__GUID_const__Input::PropertyTypeInfo____0___::_Buyheadnode_::_1_::catch$24 @ 0x1800A0ABD (_std--_Tree_comp_alloc_std--_Tmap_traits__GUID_Input--PropertyTypeInfo_Input--KeyCompareTrait__G.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits__GUID_Input::PropertyInfo_Input::KeyCompareTrait__GUID__std::allocator_std::pair__GUID_const__Input::PropertyInfo____0___::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple__GUID_const_&___ptr64__std::tuple_____::_1_::catch$28 @ 0x1800A0ADD (_std--_Tree_comp_alloc_std--_Tmap_traits__GUID_Input--PropertyInfo_Input--KeyCompareTrait__GUID_.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits__GUID_Input::PropertyTypeInfo_Input::KeyCompareTrait__GUID__std::allocator_std::pair__GUID_const__Input::PropertyTypeInfo____0___::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple__GUID_const_&___ptr64__std::tuple_____::_1_::catch$28 @ 0x1800A0B20 (_std--_Tree_comp_alloc_std--_Tmap_traits__GUID_Input--PropertyTypeInfo_Input--KeyCo_ea_1800A0B20.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits__GUID_Input::PropertyTypeInfo_Input::KeyCompareTrait__GUID__std::allocator_std::pair__GUID_const__Input::PropertyTypeInfo____0___::_Buynode0_::_1_::catch$36 @ 0x1800A0B40 (_std--_Tree_comp_alloc_std--_Tmap_traits__GUID_Input--PropertyTypeInfo_Input--KeyCo_ea_1800A0B40.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<_GUID const,Input::PropertyTypeInfo>,void *>>>::deallocate(
        __int64 a1,
        char *a2)
{
  std::_Deallocate(a2, 1uLL, 0x70uLL);
}
