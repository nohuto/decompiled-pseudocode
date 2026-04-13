/*
 * XREFs of ??$make_shared@VPublishSystemStateService@Actions@CreativeFramework@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V45@@std@@YA?AV?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@0@$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@0@Z @ 0x1800652DC
 * Callers:
 *     ?MakePublishSystemStateService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800651B0 (-MakePublishSystemStateService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Acti.c)
 * Callees:
 *     ??$?0V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V01@@?$_Ref_count_obj@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@0@Z @ 0x180065344 (--$-0V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V01@@-$_Ref_count_obj@VPub.c)
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::PublishSystemStateService,std::wstring,std::wstring>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rdi
  void *v7; // rax

  v6 = 0LL;
  v7 = operator new(0x48uLL);
  if ( v7 )
    v6 = std::_Ref_count_obj<CreativeFramework::Actions::PublishSystemStateService>::_Ref_count_obj<CreativeFramework::Actions::PublishSystemStateService>(
           v7,
           a2,
           a3);
  a1[1] = v6;
  *a1 = v6 + 16;
  return a1;
}
