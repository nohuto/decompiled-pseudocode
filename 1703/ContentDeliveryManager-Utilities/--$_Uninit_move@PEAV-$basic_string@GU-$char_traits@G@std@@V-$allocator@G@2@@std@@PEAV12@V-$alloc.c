/*
 * XREFs of ??$_Uninit_move@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x180034BAC
 * Callers:
 *     ?_Reallocate@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@IEAAX_K@Z @ 0x18002EF80 (-_Reallocate@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18002EA70 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 */

void **__fastcall std::_Uninit_move<std::wstring *,std::wstring *,std::allocator<std::wstring>,std::wstring>(
        _QWORD *a1,
        _QWORD *a2,
        void **a3)
{
  void **v3; // rbx
  _QWORD *v5; // rdi
  void **i; // rbx
  void **v8; // [rsp+60h] [rbp+18h]

  v8 = a3;
  v3 = a3;
  v5 = a1;
  try
  {
    if ( a1 != a2 )
    {
      do
      {
        if ( v3 )
        {
          v3[3] = (void *)7;
          v3[2] = 0LL;
          *(_WORD *)v3 = 0;
          std::wstring::_Assign_rv(v3, v5);
        }
        v3 += 4;
        v8 = v3;
        v5 += 4;
      }
      while ( v5 != a2 );
    }
  }
  catch ( ... )
  {
    for ( i = a3; i != v8; i += 4 )
    {
      if ( (unsigned __int64)i[3] >= 8 )
        operator delete(*i);
      i[3] = (void *)7;
      i[2] = 0LL;
      *(_WORD *)i = 0;
    }
    throw;
  }
  return v3;
}
