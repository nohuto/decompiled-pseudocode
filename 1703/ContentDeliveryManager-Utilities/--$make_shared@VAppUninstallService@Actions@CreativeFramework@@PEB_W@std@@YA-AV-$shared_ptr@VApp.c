/*
 * XREFs of ??$make_shared@VAppUninstallService@Actions@CreativeFramework@@PEB_W@std@@YA?AV?$shared_ptr@VAppUninstallService@Actions@CreativeFramework@@@0@$$QEAPEB_W@Z @ 0x180057F08
 * Callers:
 *     ?MakeAppUninstallService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180057310 (-MakeAppUninstallService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Cr.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180049C60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::AppUninstallService,wchar_t const *>(
        _QWORD *a1,
        char **a2)
{
  unsigned __int64 v4; // rdi
  _DWORD *v5; // rbx
  char *v6; // rdx
  __int64 v7; // rax

  v4 = 0LL;
  v5 = operator new(0x38uLL);
  if ( v5 )
  {
    v5[2] = 1;
    v5[3] = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    if ( v5 != (_DWORD *)-16LL )
    {
      v6 = *a2;
      *((_QWORD *)v5 + 2) = &CreativeFramework::Actions::AppUninstallService::`vftable';
      *((_QWORD *)v5 + 6) = 7LL;
      *((_QWORD *)v5 + 5) = 0LL;
      *((_WORD *)v5 + 12) = 0;
      if ( *(_WORD *)v6 )
      {
        v7 = -1LL;
        do
          ++v7;
        while ( *(_WORD *)&v6[2 * v7] );
        v4 = v7;
      }
      std::wstring::assign((_QWORD *)v5 + 3, v6, v4);
    }
  }
  else
  {
    v5 = 0LL;
  }
  a1[1] = v5;
  *a1 = v5 + 4;
  return a1;
}
