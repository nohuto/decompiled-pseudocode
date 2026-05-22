/*
 * XREFs of ??A?$map@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@@std@@QEAAAEAUCursorGlyphInfo@@$$QEAH@Z @ 0x1800216E4
 * Callers:
 *     ?Initialize@DWMHardwareCursor@@IEAAJXZ @ 0x180020194 (-Initialize@DWMHardwareCursor@@IEAAJXZ.c)
 *     ?UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ @ 0x180020CE4 (-UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAH@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAH@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800220C8 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAH@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBHUCursorGlyphInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@1@@Z @ 0x18002213C (--$_Insert_hint@AEAU-$pair@$$CBHUCursorGlyphInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBHUCursorGly.c)
 */

_DWORD *__fastcall std::map<int,CursorGlyphInfo>::operator[](__int64 a1, _DWORD *a2)
{
  int v2; // edi
  _DWORD *v3; // rbx
  __int64 *v4; // r8
  void *v5; // rax
  _DWORD *v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  v3 = *(_DWORD **)a1;
  v4 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  while ( !*((_BYTE *)v4 + 25) )
  {
    if ( *((_DWORD *)v4 + 8) >= *a2 )
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
    }
    else
    {
      v4 = (__int64 *)v4[2];
    }
  }
  if ( v3 == *(_DWORD **)a1 || *a2 < v3[8] )
  {
    v7 = a2;
    v5 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<int &&>,std::tuple<>>(
                   a1,
                   a2,
                   &v7);
    std::_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::_Insert_hint<std::pair<int const,CursorGlyphInfo> &,std::_Tree_node<std::pair<int const,CursorGlyphInfo>,void *> *>(
      v2,
      v5);
    v3 = v7;
  }
  return v3 + 10;
}
