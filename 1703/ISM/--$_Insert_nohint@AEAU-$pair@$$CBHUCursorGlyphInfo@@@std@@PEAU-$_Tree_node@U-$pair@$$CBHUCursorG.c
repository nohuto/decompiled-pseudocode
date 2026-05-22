/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBHUCursorGlyphInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@1@@Z @ 0x180022668
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBHUCursorGlyphInfo@@@1@PEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@1@@Z @ 0x18002213C (--$_Insert_hint@AEAU-$pair@$$CBHUCursorGlyphInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBHUCursorGly.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@1@AEAU?$pair@$$CBHUCursorGlyphInfo@@@1@1@Z @ 0x1800223EC (--$_Insert_at@AEAU-$pair@$$CBHUCursorGlyphInfo@@@std@@PEAU-$_Tree_node@U-$pair@$$CBHUCursorGlyph.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::_Insert_nohint<std::pair<int const,CursorGlyphInfo> &,std::_Tree_node<std::pair<int const,CursorGlyphInfo>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        void *a5)
{
  __int64 *v7; // rax
  __int64 v8; // r9
  char v9; // r10
  int v10; // r8d
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rax
  __int64 i; // rax
  char *v16; // rsi
  unsigned __int64 v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-28h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    v7 = *(__int64 **)(*a1 + 8);
    v8 = *a1;
    v9 = 1;
    if ( !*((_BYTE *)v7 + 25) )
    {
      v10 = *a4;
      do
      {
        v8 = (__int64)v7;
        v9 = v10 < *((_DWORD *)v7 + 8);
        if ( v10 >= *((_DWORD *)v7 + 8) )
          v7 = (__int64 *)v7[2];
        else
          v7 = (__int64 *)*v7;
      }
      while ( !*((_BYTE *)v7 + 25) );
    }
    v11 = v8;
    if ( v9 )
    {
      if ( v8 == *(_QWORD *)*a1 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::_Insert_at<std::pair<int const,CursorGlyphInfo> &,std::_Tree_node<std::pair<int const,CursorGlyphInfo>,void *> *>(
                           a1,
                           &v19,
                           1,
                           (__int64 *)v8,
                           v18,
                           (__int64)a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_BYTE *)(v8 + 25) )
      {
        v11 = *(_QWORD *)(v8 + 16);
      }
      else
      {
        v14 = *(_QWORD *)v8;
        if ( *(_BYTE *)(*(_QWORD *)v8 + 25LL) )
        {
          for ( i = *(_QWORD *)(v8 + 8); !*(_BYTE *)(i + 25) && v11 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
            v11 = i;
          if ( !*(_BYTE *)(v11 + 25) )
            v11 = i;
        }
        else
        {
          do
          {
            v11 = v14;
            v14 = *(_QWORD *)(v14 + 16);
          }
          while ( !*(_BYTE *)(v14 + 25) );
        }
      }
    }
    if ( *(_DWORD *)(v11 + 32) >= *a4 )
    {
      v16 = (char *)a5;
      v17 = *((_QWORD *)a5 + 8);
      if ( v17 >= 0x10 )
        std::_Deallocate(*((char **)a5 + 5), v17 + 1, 1uLL);
      std::_Deallocate(v16, 1uLL, 0x50uLL);
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::_Insert_at<std::pair<int const,CursorGlyphInfo> &,std::_Tree_node<std::pair<int const,CursorGlyphInfo>,void *> *>(
                         a1,
                         &v19,
                         v9,
                         (__int64 *)v8,
                         v18,
                         (__int64)a5);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::_Destroy_if_not_nil(
      v12,
      (__int64)a5);
    throw;
  }
  return result;
}
