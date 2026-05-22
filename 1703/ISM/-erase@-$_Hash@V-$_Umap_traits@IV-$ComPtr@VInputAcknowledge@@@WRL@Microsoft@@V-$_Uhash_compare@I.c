/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@IV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x18006A480
 * Callers:
 *     ?OnAppThreadDisconnected@InputDeliveryServer@@QEAAJI@Z @ 0x180069A48 (-OnAppThreadDisconnected@InputDeliveryServer@@QEAAJI@Z.c)
 *     ?AcknowledgeDelivery@InputDeliveryServer@@UEAAJUInputDeliveryAcknowledgeData@@@Z @ 0x180069F40 (-AcknowledgeDelivery@InputDeliveryServer@@UEAAJUInputDeliveryAcknowledgeData@@@Z.c)
 *     ?AcknowledgeExpired@InputDeliveryServer@@UEAAJI@Z @ 0x18006A040 (-AcknowledgeExpired@InputDeliveryServer@@UEAAJI@Z.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_int_Microsoft::WRL::ComPtr_InputThread__std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__Microsoft::WRL::ComPtr_InputThread______0___::_Insert_std::pair_unsigned_int_const__Microsoft::WRL::ComPtr_InputThread____&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__Microsoft::WRL::ComPtr_InputThread____________::_1_::catch$117 @ 0x1800A286D (_std--_Hash_std--_Umap_traits_unsigned_int_Microsoft--WRL--ComPtr_InputThread__std-_ea_1800A286D.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned int,Microsoft::WRL::ComPtr<InputAcknowledge>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputAcknowledge>>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        char *a3)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  _QWORD *result; // rax

  v5 = 0LL;
  v6 = 0xCBF29CE484222325uLL;
  do
  {
    v8 = (unsigned __int8)a3[v5++ + 16];
    v6 = 0x100000001B3LL * (v8 ^ v6);
  }
  while ( v5 < 4 );
  v9 = a1[3];
  v10 = 2 * (v6 & a1[6]);
  if ( *(char **)(v9 + 16 * (v6 & a1[6]) + 8) == a3 )
  {
    if ( *(char **)(v9 + 16 * (v6 & a1[6])) == a3 )
    {
      *(_QWORD *)(v9 + 16 * (v6 & a1[6])) = a1[1];
      v9 = a1[3];
      v11 = a1[1];
    }
    else
    {
      v11 = *((_QWORD *)a3 + 1);
    }
    *(_QWORD *)(v9 + 8 * v10 + 8) = v11;
  }
  else if ( *(char **)(v9 + 16 * (v6 & a1[6])) == a3 )
  {
    *(_QWORD *)(v9 + 16 * (v6 & a1[6])) = *(_QWORD *)a3;
  }
  v12 = *(_QWORD *)a3;
  **((_QWORD **)a3 + 1) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *((_QWORD *)a3 + 1);
  --a1[2];
  v13 = *((_QWORD *)a3 + 3);
  if ( v13 )
  {
    *((_QWORD *)a3 + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  std::_Deallocate(a3, 1uLL, 0x20uLL);
  result = a2;
  *a2 = v12;
  return result;
}
