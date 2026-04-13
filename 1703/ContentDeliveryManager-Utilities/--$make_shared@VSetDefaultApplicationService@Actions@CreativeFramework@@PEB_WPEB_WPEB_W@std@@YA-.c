/*
 * XREFs of ??$make_shared@VSetDefaultApplicationService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA?AV?$shared_ptr@VSetDefaultApplicationService@Actions@CreativeFramework@@@0@$$QEAPEB_W00@Z @ 0x18005A9EC
 * Callers:
 *     ?MakeSetDefaultApplicationService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18005A7A0 (-MakeSetDefaultApplicationService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@A.c)
 * Callees:
 *     ??0SetDefaultApplicationService@Actions@CreativeFramework@@QEAA@PEB_W00@Z @ 0x18005A49C (--0SetDefaultApplicationService@Actions@CreativeFramework@@QEAA@PEB_W00@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::SetDefaultApplicationService,wchar_t const *,wchar_t const *,wchar_t const *>(
        _QWORD *a1,
        wchar_t **a2,
        wchar_t **a3,
        wchar_t **a4)
{
  _DWORD *v8; // rbx

  v8 = operator new(0x80uLL);
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    if ( v8 != (_DWORD *)-16LL )
      CreativeFramework::Actions::SetDefaultApplicationService::SetDefaultApplicationService(
        (CreativeFramework::Actions::SetDefaultApplicationService *)(v8 + 4),
        *a2,
        *a3,
        *a4);
  }
  else
  {
    v8 = 0LL;
  }
  a1[1] = v8;
  *a1 = v8 + 4;
  return a1;
}
