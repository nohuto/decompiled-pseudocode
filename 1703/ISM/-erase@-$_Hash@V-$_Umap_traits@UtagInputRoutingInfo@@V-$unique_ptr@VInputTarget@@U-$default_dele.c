/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@UtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@V?$_Uhash_compare@UtagInputRoutingInfo@@U?$hash@UtagInputRoutingInfo@@@std@@U?$equal_to@UtagInputRoutingInfo@@@3@@3@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18006A2B4
 * Callers:
 *     ?OnAppThreadMessage@InputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x180069450 (-OnAppThreadMessage@InputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z.c)
 *     ?OnAppThreadDisconnected@InputDeliveryServer@@QEAAJI@Z @ 0x180069A48 (-OnAppThreadDisconnected@InputDeliveryServer@@QEAAJI@Z.c)
 *     _std::_Hash_std::_Umap_traits_tagInputRoutingInfo_std::unique_ptr_InputTarget_std::default_delete_InputTarget____std::_Uhash_compare_tagInputRoutingInfo_std::hash_tagInputRoutingInfo__std::equal_to_tagInputRoutingInfo____std::allocator_std::pair_tagInputRoutingInfo_const__std::unique_ptr_InputTarget_std::default_delete_InputTarget________0___::_Insert_std::pair_tagInputRoutingInfo_const__std::unique_ptr_InputTarget_std::default_delete_InputTarget______&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_tagInputRoutingInfo_const__std::unique_ptr_InputTarget_std::default_delete_InputTarget______________::_1_::catch$129 @ 0x1800A2812 (_std--_Hash_std--_Umap_traits_tagInputRoutingInfo_std--unique_ptr_InputTarget_std--_ea_1800A2812.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Hash<std::_Umap_traits<tagInputRoutingInfo,std::unique_ptr<InputTarget>,std::_Uhash_compare<tagInputRoutingInfo,std::hash<tagInputRoutingInfo>,std::equal_to<tagInputRoutingInfo>>,std::allocator<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        char *a3)
{
  unsigned __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  void (__fastcall ***v10)(_QWORD, __int64); // rcx

  v6 = 2 * (a1[6] & (*((unsigned int *)a3 + 5) | ((unsigned __int64)*((unsigned int *)a3 + 4) << 32)));
  v7 = a1[3];
  if ( *(char **)(v7 + 8 * v6 + 8) == a3 )
  {
    if ( *(char **)(v7 + 8 * v6) == a3 )
    {
      *(_QWORD *)(v7 + 8 * v6) = a1[1];
      v8 = a1[1];
      v7 = a1[3];
    }
    else
    {
      v8 = *((_QWORD *)a3 + 1);
    }
    *(_QWORD *)(v7 + 8 * v6 + 8) = v8;
  }
  else if ( *(char **)(v7 + 8 * v6) == a3 )
  {
    *(_QWORD *)(v7 + 8 * v6) = *(_QWORD *)a3;
  }
  v9 = *(_QWORD *)a3;
  **((_QWORD **)a3 + 1) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *((_QWORD *)a3 + 1);
  --a1[2];
  v10 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)a3 + 8);
  if ( v10 )
    (**v10)(v10, 1LL);
  std::_Deallocate(a3, 1uLL, 0x48uLL);
  *a2 = v9;
  return a2;
}
