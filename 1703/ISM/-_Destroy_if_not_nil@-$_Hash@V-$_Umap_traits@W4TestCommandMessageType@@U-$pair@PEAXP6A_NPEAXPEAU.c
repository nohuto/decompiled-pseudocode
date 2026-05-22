/*
 * XREFs of ?_Destroy_if_not_nil@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@2@@Z @ 0x18000AC30
 * Callers:
 *     _std::_Hash_std::_Umap_traits_enum_TestCommandMessageType_std::pair_void_____ptr64_bool_(__cdecl_)(void_____ptr64_TestCommandMessageDataHeader_____ptr64)__std::_Uhash_compare_enum_TestCommandMessageType_std::hash_enum_TestCommandMessageType__std::equal_to_enum_TestCommandMessageType____std::allocator_std::pair_enum_TestCommandMessageType_const__std::pair_void_____ptr64_bool_(__cdecl_)(void_____ptr64_TestCommandMessageDataHeader_____ptr64)______0___::_Insert_std::pair_enum_TestCommandMessageType_const__std::pair_void_____ptr64_bool_(__cdecl_)(void_____ptr64_TestCommandMessageDataHeader_____ptr64)____&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_enum_TestCommandMessageType_const__std::pair_void_____ptr64_bool_(__cdecl_)(void_____ptr64_TestCommandMessageDataHeader_____ptr64)____________::_1_::catch$118 @ 0x18009F46F (_std--_Hash_std--_Umap_traits_enum_TestCommandMessageType_std--pair_void_____ptr64_bool_(__cdecl.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::_Destroy_if_not_nil(
        __int64 a1,
        char *a2)
{
  **((_QWORD **)a2 + 1) = *(_QWORD *)a2;
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *((_QWORD *)a2 + 1);
  --*(_QWORD *)(a1 + 16);
  std::_Deallocate(a2, 1uLL, 0x28uLL);
}
