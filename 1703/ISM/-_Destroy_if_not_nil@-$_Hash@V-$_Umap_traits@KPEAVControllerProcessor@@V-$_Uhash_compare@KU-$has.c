/*
 * XREFs of ?_Destroy_if_not_nil@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@2@@Z @ 0x1800316DC
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_ControllerProcessor_____ptr64_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ControllerProcessor_____ptr64____0___::_Insert_std::pair_unsigned_long_const__ControllerProcessor_____ptr64__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__ControllerProcessor_____ptr64__________::_1_::catch$118 @ 0x1800A0EE6 (_std--_Hash_std--_Umap_traits_unsigned_long_ControllerProcessor_____ptr64_std--_Uhash_compare_un.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::_Destroy_if_not_nil(
        __int64 a1,
        char *a2)
{
  **((_QWORD **)a2 + 1) = *(_QWORD *)a2;
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *((_QWORD *)a2 + 1);
  --*(_QWORD *)(a1 + 16);
  std::_Deallocate(a2, 1uLL, 0x20uLL);
}
