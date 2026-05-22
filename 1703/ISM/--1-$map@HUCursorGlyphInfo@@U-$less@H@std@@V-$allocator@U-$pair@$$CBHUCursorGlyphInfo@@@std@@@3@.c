/*
 * XREFs of ??1?$map@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@@std@@QEAA@XZ @ 0x180020058
 * Callers:
 *     _DWMHardwareCursor::DWMHardwareCursor_::_1_::dtor$1 @ 0x1800A0130 (_DWMHardwareCursor--DWMHardwareCursor_--_1_--dtor$1.c)
 *     _DWMHardwareCursor::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x1800A01BC (_DWMHardwareCursor--_scalar_deleting_destructor__--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::map<int,CursorGlyphInfo>::~map<int,CursorGlyphInfo>(__int64 a1)
{
  return std::_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::~_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>(a1);
}
