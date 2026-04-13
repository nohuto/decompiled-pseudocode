/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_093e5cd604f7ab5de7acc075fbba0f63__0__wistd::details::function_allocator_wistd::_Func_class_void_long_Windows::Storage::IStorageFolder_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_long_Windows::Storage::IStorageFolder_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Move @ 0x180054BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002ADC0 (--0-$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18002EA70 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 */

_QWORD *__fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_093e5cd604f7ab5de7acc075fbba0f63__0__wistd::details::function_allocator_wistd::_Func_class_void_long_Windows::Storage::IStorageFolder_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_long_Windows::Storage::IStorageFolder_____ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Move(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rbx

  if ( !a2 )
    __fastfail(7u);
  v3 = a1 + 8;
  *a2 = off_180080B30;
  std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
    a2 + 1,
    (__int64 *)(a1 + 8));
  a2[6] = 7LL;
  a2[5] = 0LL;
  *((_WORD *)a2 + 12) = 0;
  std::wstring::_Assign_rv(a2 + 3, (_QWORD *)(v3 + 16));
  a2[7] = *(_QWORD *)(v3 + 48);
  return a2;
}
