/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180021628
 * Callers:
 *     ??_GDWMHardwareCursor@@MEAAPEAXI@Z @ 0x18001FEE8 (--_GDWMHardwareCursor@@MEAAPEAXI@Z.c)
 *     ??1?$map@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@@std@@QEAA@XZ @ 0x180020058 (--1-$map@HUCursorGlyphInfo@@U-$less@H@std@@V-$allocator@U-$pair@$$CBHUCursorGlyphInfo@@@std@@@3@.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@2@@Z @ 0x180021DC4 (-_Erase@-$_Tree@V-$_Tmap_traits@HUCursorGlyphInfo@@U-$less@H@std@@V-$allocator@U-$pair@$$CBHUCur.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::~_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>(
        char **a1)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  unsigned __int64 v4; // rdx

  v2 = (__int64 *)*((_QWORD *)*a1 + 1);
  for ( i = v2; !*((_BYTE *)i + 25); v2 = i )
  {
    std::_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::_Erase(
      a1,
      i[2]);
    i = (__int64 *)*i;
    v4 = v2[8];
    if ( v4 >= 0x10 )
      std::_Deallocate((char *)v2[5], v4 + 1, 1uLL);
    std::_Deallocate((char *)v2, 1uLL, 0x50uLL);
  }
  *((_QWORD *)*a1 + 1) = *a1;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 2) = *a1;
  a1[1] = 0LL;
  std::_Deallocate(*a1, 1uLL, 0x50uLL);
}
