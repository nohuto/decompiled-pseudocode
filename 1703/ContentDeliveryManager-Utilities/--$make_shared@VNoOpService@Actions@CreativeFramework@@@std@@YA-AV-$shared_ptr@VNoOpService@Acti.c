/*
 * XREFs of ??$make_shared@VNoOpService@Actions@CreativeFramework@@@std@@YA?AV?$shared_ptr@VNoOpService@Actions@CreativeFramework@@@0@XZ @ 0x18005600C
 * Callers:
 *     ?MakeNoOpService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180055CD0 (-MakeNoOpService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@CreativeFr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<CreativeFramework::Actions::NoOpService>(_QWORD *a1)
{
  _DWORD *v2; // rax

  v2 = operator new(0x18uLL);
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<CreativeFramework::Actions::PinToStartService>::`vftable';
    if ( v2 != (_DWORD *)-16LL )
      *((_QWORD *)v2 + 2) = &CreativeFramework::Actions::NoOpService::`vftable';
  }
  a1[1] = v2;
  *a1 = v2 + 4;
  return a1;
}
