/*
 * XREFs of ?_Destroy_if_not_nil@?$_Hash@V?$_Umap_traits@IV?$ComPtr@VInputThread@@@WRL@Microsoft@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAXV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x18006B3C4
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_int_Microsoft::WRL::ComPtr_InputThread__std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__Microsoft::WRL::ComPtr_InputThread______0___::_Insert_std::pair_unsigned_int_const__Microsoft::WRL::ComPtr_InputThread____&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__Microsoft::WRL::ComPtr_InputThread____________::_1_::catch$118 @ 0x1800A2846 (_std--_Hash_std--_Umap_traits_unsigned_int_Microsoft--WRL--ComPtr_InputThread__std--_Uhash_compa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<unsigned int,Microsoft::WRL::ComPtr<InputThread>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>,0>>::_Destroy_if_not_nil(
        __int64 a1,
        char *a2)
{
  __int64 v3; // rcx

  **((_QWORD **)a2 + 1) = *(_QWORD *)a2;
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *((_QWORD *)a2 + 1);
  --*(_QWORD *)(a1 + 16);
  v3 = *((_QWORD *)a2 + 3);
  if ( v3 )
  {
    *((_QWORD *)a2 + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  std::_Deallocate(a2, 1uLL, 0x20uLL);
}
