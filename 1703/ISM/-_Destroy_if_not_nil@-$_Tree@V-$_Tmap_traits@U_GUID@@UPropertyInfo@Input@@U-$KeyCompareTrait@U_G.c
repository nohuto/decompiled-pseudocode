/*
 * XREFs of ?_Destroy_if_not_nil@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@2@@Z @ 0x18002AC74
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@1@1@Z @ 0x18002ACB0 (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU_G.c)
 *     _std::_Tree_std::_Tmap_traits__GUID_Input::PropertyTypeInfo_Input::KeyCompareTrait__GUID__std::allocator_std::pair__GUID_const__Input::PropertyTypeInfo____0___::_Insert_hint_std::pair__GUID_const__Input::PropertyTypeInfo__&___ptr64_std::_Tree_node_std::pair__GUID_const__Input::PropertyTypeInfo__void_____ptr64______ptr64__::_1_::catch$111 @ 0x1800A0AFD (_std--_Tree_std--_Tmap_traits__GUID_Input--PropertyTypeInfo_Input--KeyCompareTrait__GUID__std--a.c)
 *     _std::_Tree_std::_Tmap_traits__GUID_Input::PropertyTypeInfo_Input::KeyCompareTrait__GUID__std::allocator_std::pair__GUID_const__Input::PropertyTypeInfo____0___::_Insert_nohint_std::pair__GUID_const__Input::PropertyTypeInfo__&___ptr64_std::_Tree_node_std::pair__GUID_const__Input::PropertyTypeInfo__void_____ptr64______ptr64__::_1_::catch$60 @ 0x1800A0B60 (_std--_Tree_std--_Tmap_traits__GUID_Input--PropertyTypeInfo_Input--KeyCompareTrait__ea_1800A0B60.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Destroy_if_not_nil(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v3; // rdx

  v3 = *(_QWORD *)(a2 + 88);
  if ( v3 >= 8 )
    std::_Deallocate(*(char **)(a2 + 64), v3 + 1, 2uLL);
  std::_Deallocate((char *)a2, 1uLL, 0x70uLL);
}
