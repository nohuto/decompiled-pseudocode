/*
 * XREFs of ??$make_shared@VAppInstallService@Actions@CreativeFramework@@PEB_WPEB_W_N_N@std@@YA?AV?$shared_ptr@VAppInstallService@Actions@CreativeFramework@@@0@$$QEAPEB_W0$$QEA_N1@Z @ 0x180057E80
 * Callers:
 *     ?MakeAppInstallService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800570F0 (-MakeAppInstallService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Crea.c)
 * Callees:
 *     ??$?0PEB_WPEB_W_N_N@?$_Ref_count_obj@VAppInstallService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W0$$QEA_N1@Z @ 0x1800580B4 (--$-0PEB_WPEB_W_N_N@-$_Ref_count_obj@VAppInstallService@Actions@CreativeFramework@@@std@@QEAA@$$.c)
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::AppInstallService,wchar_t const *,wchar_t const *,bool,bool>(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        __int64 a5)
{
  __int64 v9; // rdi
  void *v10; // rax

  v9 = 0LL;
  v10 = operator new(0x60uLL);
  if ( v10 )
    v9 = std::_Ref_count_obj<CreativeFramework::Actions::AppInstallService>::_Ref_count_obj<CreativeFramework::Actions::AppInstallService>(
           (_DWORD)v10,
           a2,
           a3,
           a4,
           a5);
  a1[1] = v9;
  *a1 = v9 + 16;
  return a1;
}
