/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@2@_K@Z @ 0x180021AC4
 * Callers:
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_int_CursorGlyphInfo_std::less_int__std::allocator_std::pair_int_const__CursorGlyphInfo____0___::_Buyheadnode_::_1_::catch$24 @ 0x1800A0441 (_std--_Tree_comp_alloc_std--_Tmap_traits_int_CursorGlyphInfo_std--less_int__std--allocator_std--.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_int_CursorGlyphInfo_std::less_int__std::allocator_std::pair_int_const__CursorGlyphInfo____0___::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple_int_const_&___ptr64__std::tuple_____::_1_::catch$29 @ 0x1800A04CC (_std--_Tree_comp_alloc_std--_Tmap_traits_int_CursorGlyphInfo_std--less_int__std--al_ea_1800A04CC.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_int_CursorGlyphInfo_std::less_int__std::allocator_std::pair_int_const__CursorGlyphInfo____0___::_Buynode0_::_1_::catch$36 @ 0x1800A050F (_std--_Tree_comp_alloc_std--_Tmap_traits_int_CursorGlyphInfo_std--less_int__std--al_ea_1800A050F.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<int const,CursorGlyphInfo>,void *>>>::deallocate(
        __int64 a1,
        char *a2)
{
  std::_Deallocate(a2, 1uLL, 0x50uLL);
}
