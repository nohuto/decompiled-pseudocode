/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@KPEAVControllerProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180031400
 * Callers:
 *     ?UnregisterControllerProcessor@ControllerNavigationManager@@QEAAJK@Z @ 0x180030A90 (-UnregisterControllerProcessor@ControllerNavigationManager@@QEAAJK@Z.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_ControllerProcessor_____ptr64_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ControllerProcessor_____ptr64____0___::_Insert_std::pair_unsigned_long_const__ControllerProcessor_____ptr64__&___ptr64_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__ControllerProcessor_____ptr64__________::_1_::catch$117 @ 0x1800A0F0D (_std--_Hash_std--_Umap_traits_unsigned_long_ControllerProcessor_____ptr64_std--_Uha_ea_1800A0F0D.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned long,ControllerProcessor *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ControllerProcessor *>>,0>>::erase(
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
  std::_Deallocate(a3, 1uLL, 0x20uLL);
  *a2 = v12;
  return a2;
}
