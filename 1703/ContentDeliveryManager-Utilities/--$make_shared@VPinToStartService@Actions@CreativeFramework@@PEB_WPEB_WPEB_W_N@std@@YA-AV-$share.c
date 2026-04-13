/*
 * XREFs of ??$make_shared@VPinToStartService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W_N@std@@YA?AV?$shared_ptr@VPinToStartService@Actions@CreativeFramework@@@0@$$QEAPEB_W00$$QEA_N@Z @ 0x180059920
 * Callers:
 *     ?MakePinToStartService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180059370 (-MakePinToStartService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Crea.c)
 * Callees:
 *     ??$?0PEB_WPEB_WPEB_W_N@?$_Ref_count_obj@VPinToStartService@Actions@CreativeFramework@@@std@@QEAA@$$QEAPEB_W00$$QEA_N@Z @ 0x18005A0CC (--$-0PEB_WPEB_WPEB_W_N@-$_Ref_count_obj@VPinToStartService@Actions@CreativeFramework@@@std@@QEAA.c)
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::PinToStartService,wchar_t const *,wchar_t const *,wchar_t const *,bool>(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        __int64 a5)
{
  __int64 started; // rdi
  void *v10; // rax

  started = 0LL;
  v10 = operator new(0x80uLL);
  if ( v10 )
    started = std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>(
                (_DWORD)v10,
                a2,
                a3,
                a4,
                a5);
  a1[1] = started;
  *a1 = started + 16;
  return a1;
}
