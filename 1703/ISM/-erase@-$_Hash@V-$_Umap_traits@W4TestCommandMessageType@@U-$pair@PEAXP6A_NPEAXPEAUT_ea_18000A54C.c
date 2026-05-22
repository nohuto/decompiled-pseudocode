/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@2@@Z @ 0x18000A54C
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBW4TestCommandMessageType@@@Z @ 0x18000A124 (-erase@-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMes.c)
 *     _std::_Hash_std::_Umap_traits_enum_TestCommandMessageType_std::pair_void_____ptr64_bool_(__cdecl_)(void_____ptr64_TestCommandMessageDataHeader_____ptr64)__std::_Uhash_compare_enum_TestCommandMessageType_std::hash_enum_TestCommandMessageType__std::equal_to_enum_TestCommandMessageType____std::allocator_std::pair_enum_TestCommandMessageType_const__std::pair_void_____ptr64_bool_(__cdecl_)(void_____ptr64_TestCommandMessageDataHeader_____ptr64)______0___::_Insert_std::pair_enum_TestCommandMessageType_const__std::pair_void_____ptr64_bool_(__cdecl_)(void_____ptr64_TestCommandMessageDataHeader_____ptr64)____&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_enum_TestCommandMessageType_const__std::pair_void_____ptr64_bool_(__cdecl_)(void_____ptr64_TestCommandMessageDataHeader_____ptr64)____________::_1_::catch$117 @ 0x18009F496 (_std--_Hash_std--_Umap_traits_enum_TestCommandMessageType_std--pair_void_____ptr64__ea_18009F496.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        char *a3)
{
  __int64 v5; // rcx
  unsigned __int64 i; // r10
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rbx

  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v8 = (unsigned __int8)a3[i + 16];
    v5 = 0x100000001B3LL * (v8 ^ v5);
  }
  v9 = a1[3];
  v10 = 2 * (v5 & a1[6]);
  if ( *(char **)(v9 + 16 * (v5 & a1[6]) + 8) == a3 )
  {
    if ( *(char **)(v9 + 16 * (v5 & a1[6])) == a3 )
    {
      *(_QWORD *)(v9 + 16 * (v5 & a1[6])) = a1[1];
      v9 = a1[3];
      v11 = a1[1];
    }
    else
    {
      v11 = *((_QWORD *)a3 + 1);
    }
    *(_QWORD *)(v9 + 8 * v10 + 8) = v11;
  }
  else if ( *(char **)(v9 + 16 * (v5 & a1[6])) == a3 )
  {
    *(_QWORD *)(v9 + 16 * (v5 & a1[6])) = *(_QWORD *)a3;
  }
  v12 = *(_QWORD *)a3;
  **((_QWORD **)a3 + 1) = *(_QWORD *)a3;
  *(_QWORD *)(*(_QWORD *)a3 + 8LL) = *((_QWORD *)a3 + 1);
  --a1[2];
  std::_Deallocate(a3, 1uLL, 0x28uLL);
  *a2 = v12;
  return a2;
}
