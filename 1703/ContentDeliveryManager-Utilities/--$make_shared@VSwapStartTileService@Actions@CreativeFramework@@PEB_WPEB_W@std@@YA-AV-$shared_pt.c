/*
 * XREFs of ??$make_shared@VSwapStartTileService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA?AV?$shared_ptr@VSwapStartTileService@Actions@CreativeFramework@@@0@$$QEAPEB_W0@Z @ 0x180059818
 * Callers:
 *     ?MakeSwapStartTileService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180059140 (-MakeSwapStartTileService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@C.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180049C60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::SwapStartTileService,wchar_t const *,wchar_t const *>(
        _QWORD *a1,
        char **a2,
        char **a3)
{
  unsigned __int64 v6; // rbx
  _DWORD *v7; // rdi
  char *v8; // r15
  char *v9; // rdx
  __int64 v10; // rbp
  unsigned __int64 v11; // r8

  v6 = 0LL;
  v7 = operator new(0x58uLL);
  if ( v7 )
  {
    v7[2] = 1;
    v7[3] = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    if ( v7 != (_DWORD *)-16LL )
    {
      v8 = *a3;
      v9 = *a2;
      *((_QWORD *)v7 + 2) = &CreativeFramework::Actions::SwapStartTileService::`vftable';
      *((_QWORD *)v7 + 6) = 7LL;
      *((_QWORD *)v7 + 5) = 0LL;
      *((_WORD *)v7 + 12) = 0;
      v10 = -1LL;
      if ( *(_WORD *)v9 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( *(_WORD *)&v9[2 * v11] );
      }
      else
      {
        v11 = 0LL;
      }
      std::wstring::assign((_QWORD *)v7 + 3, v9, v11);
      *((_QWORD *)v7 + 10) = 7LL;
      *((_QWORD *)v7 + 9) = 0LL;
      *((_WORD *)v7 + 28) = 0;
      if ( *(_WORD *)v8 )
      {
        do
          ++v10;
        while ( *(_WORD *)&v8[2 * v10] );
        v6 = v10;
      }
      std::wstring::assign((_QWORD *)v7 + 7, v8, v6);
    }
  }
  else
  {
    v7 = 0LL;
  }
  a1[1] = v7;
  *a1 = v7 + 4;
  return a1;
}
