/*
 * XREFs of ??$make_shared@VTaskbarPinService@Actions@CreativeFramework@@PEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VTaskbarPinService@Actions@CreativeFramework@@@0@$$QEAPEB_W0$$QEA_N@Z @ 0x180060B64
 * Callers:
 *     ?MakePinToTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180060640 (-MakePinToTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Cr.c)
 *     ?MakeUnpinFromTaskbarService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180060860 (-MakeUnpinFromTaskbarService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Action.c)
 * Callees:
 *     ??$?0PEB_WPEB_W_N@?$_Ref_count_obj@VTaskbarPinService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W0$$QEA_N@Z @ 0x180060BE0 (--$-0PEB_WPEB_W_N@-$_Ref_count_obj@VTaskbarPinService@Actions@CreativeFramework@@@std@@QEAA@$$QE.c)
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::TaskbarPinService,wchar_t const *,wchar_t const *,bool>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v8; // rdi
  void *v9; // rax

  v8 = 0LL;
  v9 = operator new(0x80uLL);
  if ( v9 )
    v8 = std::_Ref_count_obj<CreativeFramework::Actions::TaskbarPinService>::_Ref_count_obj<CreativeFramework::Actions::TaskbarPinService>(
           v9,
           a2,
           a3,
           a4,
           0,
           -2LL,
           v9);
  a1[1] = v8;
  *a1 = v8 + 16;
  return a1;
}
