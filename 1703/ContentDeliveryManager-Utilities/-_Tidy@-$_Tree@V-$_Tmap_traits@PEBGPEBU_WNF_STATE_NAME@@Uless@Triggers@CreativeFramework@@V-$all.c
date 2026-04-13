/*
 * XREFs of ?_Tidy@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAAXXZ @ 0x180055298
 * Callers:
 *     _std::_Tree_std::_Tmap_traits_unsigned_short_const_____ptr64__WNF_STATE_NAME_const_____ptr64_CreativeFramework::Triggers::less_std::allocator_std::pair_unsigned_short_const_____ptr64_const__WNF_STATE_NAME_const_____ptr64____0___::_Tree_std::_Tmap_traits_unsigned_short_const_____ptr64__WNF_STATE_NAME_const_____ptr64_CreativeFramework::Triggers::less_std::allocator_std::pair_unsigned_short_const_____ptr64_const__WNF_STATE_NAME_const_____ptr64____0____::_1_::catch$3 @ 0x1800735E4 (_std--_Tree_std--_Tmap_traits_unsigned_short_const_____ptr64__WNF_STATE_NAME_const__ea_1800735E4.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@Z @ 0x1800553B8 (-_Erase@-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$al.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Tidy(
        _QWORD *a1)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rdi
  __int64 result; // rax

  v2 = *(_QWORD **)(*a1 + 8LL);
  for ( i = v2; !*((_BYTE *)i + 25); v2 = i )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Erase(
      a1,
      i[2]);
    i = (_QWORD *)*i;
    operator delete(v2);
  }
  *(_QWORD *)(*a1 + 8LL) = *a1;
  *(_QWORD *)*a1 = *a1;
  result = *a1;
  *(_QWORD *)(*a1 + 16LL) = *a1;
  a1[1] = 0LL;
  return result;
}
