/*
 * XREFs of ??$make_shared@VCreativeRule@RuleSetHandlers@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@0@$$QEAPEB_W00@Z @ 0x180049F00
 * Callers:
 *     ?CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180047818 (-CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCreativeRule@R.c)
 * Callees:
 *     ??$?0PEB_WPEB_WPEB_W@?$_Ref_count_obj@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@$$QEAPEB_W00@Z @ 0x18004A320 (--$-0PEB_WPEB_WPEB_W@-$_Ref_count_obj@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEA.c)
 *     ??2@YAPEAX_K@Z @ 0x18006A518 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<CreativeFramework::RuleSetHandlers::CreativeRule,wchar_t const *,wchar_t const *,wchar_t const *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v8; // rdi
  void *v9; // rax

  v8 = 0LL;
  v9 = operator new(0x58uLL);
  if ( v9 )
    v8 = std::_Ref_count_obj<CreativeFramework::RuleSetHandlers::CreativeRule>::_Ref_count_obj<CreativeFramework::RuleSetHandlers::CreativeRule>(
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
