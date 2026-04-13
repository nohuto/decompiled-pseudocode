/*
 * XREFs of ??$make_shared@VPublishWindowsTipService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA?AV?$shared_ptr@VPublishWindowsTipService@Actions@CreativeFramework@@@0@$$QEAPEB_W0@Z @ 0x180064FF0
 * Callers:
 *     ?MakePublishWindowsTipService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180064EB0 (-MakePublishWindowsTipService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actio.c)
 * Callees:
 *     ??0PublishWindowsTipService@Actions@CreativeFramework@@QEAA@PEB_W0@Z @ 0x180064B34 (--0PublishWindowsTipService@Actions@CreativeFramework@@QEAA@PEB_W0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::PublishWindowsTipService,wchar_t const *,wchar_t const *>(
        _QWORD *a1,
        wchar_t **a2,
        wchar_t **a3)
{
  _DWORD *v6; // rbx

  v6 = operator new(0x58uLL);
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    if ( v6 != (_DWORD *)-16LL )
      CreativeFramework::Actions::PublishWindowsTipService::PublishWindowsTipService(
        (CreativeFramework::Actions::PublishWindowsTipService *)(v6 + 4),
        *a2,
        *a3);
  }
  else
  {
    v6 = 0LL;
  }
  a1[1] = v6;
  *a1 = v6 + 4;
  return a1;
}
