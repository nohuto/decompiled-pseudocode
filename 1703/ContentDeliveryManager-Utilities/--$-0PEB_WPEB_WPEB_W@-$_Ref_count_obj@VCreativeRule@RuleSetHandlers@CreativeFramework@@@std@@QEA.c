/*
 * XREFs of ??$?0PEB_WPEB_WPEB_W@?$_Ref_count_obj@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@$$QEAPEB_W00@Z @ 0x18004A320
 * Callers:
 *     ??$make_shared@VCreativeRule@RuleSetHandlers@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@0@$$QEAPEB_W00@Z @ 0x180049F00 (--$make_shared@VCreativeRule@RuleSetHandlers@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA-AV-$shar.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180049C60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Ref_count_obj<CreativeFramework::RuleSetHandlers::CreativeRule>::_Ref_count_obj<CreativeFramework::RuleSetHandlers::CreativeRule>(
        __int64 a1,
        char **a2,
        char **a3,
        const WCHAR **a4)
{
  __int64 v5; // rsi
  int v6; // ebx
  const WCHAR *v7; // rbp
  char *v8; // rdi
  char *v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r8
  wchar_t **v12; // rdi

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<CreativeFramework::RuleSetHandlers::CreativeRule>::`vftable';
  v5 = a1 + 16;
  v6 = 0;
  if ( a1 != -16 )
  {
    v7 = *a4;
    v8 = *a3;
    v9 = *a2;
    *(_QWORD *)(a1 + 40) = 7LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_WORD *)v5 = 0;
    if ( *(_WORD *)v9 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( *(_WORD *)&v9[2 * v10] );
    }
    else
    {
      v10 = 0LL;
    }
    std::wstring::assign((_QWORD *)(a1 + 16), v9, v10);
    *(_QWORD *)(v5 + 56) = 7LL;
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_WORD *)(v5 + 32) = 0;
    if ( *(_WORD *)v8 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)&v8[2 * v11] );
    }
    else
    {
      v11 = 0LL;
    }
    std::wstring::assign((_QWORD *)(v5 + 32), v8, v11);
    v12 = &off_1800F33F0;
    while ( CompareStringOrdinal(*v12, -1, v7, -1, 1) != 2 )
    {
      v12 += 2;
      if ( v12 == (wchar_t **)&unk_1800F3420 )
        goto LABEL_15;
    }
    v6 = *((_DWORD *)v12 + 2);
LABEL_15:
    *(_DWORD *)(v5 + 64) = v6;
  }
  return a1;
}
