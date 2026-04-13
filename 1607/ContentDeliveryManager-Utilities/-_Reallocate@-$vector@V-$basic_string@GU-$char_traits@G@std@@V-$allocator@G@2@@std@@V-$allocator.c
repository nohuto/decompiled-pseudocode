/*
 * XREFs of ?_Reallocate@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEAAX_K@Z @ 0x18002789C
 * Callers:
 *     ?push_back@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180023580 (-push_back@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V.c)
 * Callees:
 *     ??$_Uninit_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18002E2C4 (--$_Uninit_move@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAV12@V-$alloc.c)
 *     ??2@YAPEAX_K@Z @ 0x1800538BC (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180053AE8 (-_Xbad_alloc@std@@YAXXZ.c)
 */

void __fastcall std::vector<std::wstring>::_Reallocate(_QWORD *a1, unsigned __int64 a2)
{
  char *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // r15
  void *v9; // [rsp+78h] [rbp+10h]

  v4 = 0LL;
  v9 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFLL || (v4 = (char *)operator new(32 * a2), (v9 = v4) == 0LL) )
      std::_Xbad_alloc();
  }
  try
  {
    std::_Uninit_move<std::wstring *,std::wstring *,std::allocator<std::wstring>,std::wstring>(*a1, a1[1], v4);
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *>>>::deallocate(
      v5,
      v9);
    throw;
  }
  v6 = a1[1];
  v7 = *a1;
  v8 = v6 - *a1;
  if ( *a1 )
  {
    while ( v7 != v6 )
    {
      if ( *(_QWORD *)(v7 + 24) >= 8uLL )
        operator delete(*(void **)v7);
      *(_QWORD *)(v7 + 24) = 7LL;
      *(_QWORD *)(v7 + 16) = 0LL;
      *(_WORD *)v7 = 0;
      v7 += 32LL;
    }
    operator delete((void *)*a1);
  }
  a1[2] = &v4[32 * a2];
  a1[1] = &v4[v8 & 0xFFFFFFFFFFFFFFE0uLL];
  *a1 = v4;
}
