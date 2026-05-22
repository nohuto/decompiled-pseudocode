/*
 * XREFs of ?_Destroy_if_not_nil@?$_Tree@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@2@@Z @ 0x1800223B0
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@1@AEAU?$pair@$$CBHUCursorGlyphInfo@@@1@1@Z @ 0x1800223EC (--$_Insert_at@AEAU-$pair@$$CBHUCursorGlyphInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBHUCursorGlyph.c)
 *     _std::_Tree_std::_Tmap_traits_int_CursorGlyphInfo_std::less_int__std::allocator_std::pair_int_const__CursorGlyphInfo____0___::_Insert_hint_std::pair_int_const__CursorGlyphInfo__&___ptr64_std::_Tree_node_std::pair_int_const__CursorGlyphInfo__void_____ptr64______ptr64__::_1_::catch$111 @ 0x1800A04EC (_std--_Tree_std--_Tmap_traits_int_CursorGlyphInfo_std--less_int__std--allocator_std--pair_int_co.c)
 *     _std::_Tree_std::_Tmap_traits_int_CursorGlyphInfo_std::less_int__std::allocator_std::pair_int_const__CursorGlyphInfo____0___::_Insert_nohint_std::pair_int_const__CursorGlyphInfo__&___ptr64_std::_Tree_node_std::pair_int_const__CursorGlyphInfo__void_____ptr64______ptr64__::_1_::catch$60 @ 0x1800A052F (_std--_Tree_std--_Tmap_traits_int_CursorGlyphInfo_std--less_int__std--allocator_std_ea_1800A052F.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::_Destroy_if_not_nil(
        __int64 a1,
        __int64 a2)
{
  unsigned __int64 v3; // rdx

  v3 = *(_QWORD *)(a2 + 64);
  if ( v3 >= 0x10 )
    std::_Deallocate(*(char **)(a2 + 40), v3 + 1, 1uLL);
  std::_Deallocate((char *)a2, 1uLL, 0x50uLL);
}
