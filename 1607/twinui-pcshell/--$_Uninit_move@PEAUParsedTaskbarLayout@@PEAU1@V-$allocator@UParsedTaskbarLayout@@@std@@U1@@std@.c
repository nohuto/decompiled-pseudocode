/*
 * XREFs of ??$_Uninit_move@PEAUParsedTaskbarLayout@@PEAU1@V?$allocator@UParsedTaskbarLayout@@@std@@U1@@std@@YAPEAUParsedTaskbarLayout@@PEAU1@00AEAU?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18000C7AC
 * Callers:
 *     ?_Reallocate@?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@IEAAX_K@Z @ 0x18000BDE8 (-_Reallocate@-$vector@UParsedTaskbarLayout@@V-$allocator@UParsedTaskbarLayout@@@std@@@std@@IEAAX.c)
 * Callees:
 *     ??$construct@UParsedTaskbarLayout@@U1@@?$_Wrap_alloc@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@QEAAXPEAUParsedTaskbarLayout@@$$QEAU2@@Z @ 0x18000C538 (--$construct@UParsedTaskbarLayout@@U1@@-$_Wrap_alloc@V-$allocator@UParsedTaskbarLayout@@@std@@@s.c)
 */

__int64 __fastcall std::_Uninit_move<ParsedTaskbarLayout *,ParsedTaskbarLayout *,std::allocator<ParsedTaskbarLayout>,ParsedTaskbarLayout>(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 *v5; // rdi
  unsigned __int64 j; // rdi
  __int64 v8; // rcx
  __int64 i; // rbx
  __int64 v10; // [rsp+50h] [rbp+18h]

  v10 = a3;
  v3 = a3;
  v5 = (__int64 *)a1;
  try
  {
    while ( v5 != a2 )
    {
      std::_Wrap_alloc<std::allocator<ParsedTaskbarLayout>>::construct<ParsedTaskbarLayout,ParsedTaskbarLayout>(
        a1,
        v3,
        v5);
      v3 += 104LL;
      v10 = v3;
      v5 += 13;
    }
  }
  catch ( ... )
  {
    for ( i = a3; i != v10; i += 104LL )
    {
      StartLayout::SelectionData::~SelectionData((StartLayout::SelectionData *)(i + 32));
      if ( *(_QWORD *)i )
      {
        for ( j = 0LL; j < *(_QWORD *)(i + 8); ++j )
        {
          v8 = *(_QWORD *)(*(_QWORD *)i + 8 * j);
          if ( v8 )
          {
            *(_QWORD *)(*(_QWORD *)i + 8 * j) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
          }
        }
        CoTaskMemFree(*(LPVOID *)i);
        *(_QWORD *)i = 0LL;
      }
      *(_QWORD *)(i + 8) = 0LL;
      *(_QWORD *)(i + 24) = 0LL;
    }
    throw;
  }
  return v3;
}
