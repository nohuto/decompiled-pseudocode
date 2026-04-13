/*
 * XREFs of _std::make_shared_CreativeFramework::Actions::AppInstallService_wchar_t_const_____ptr64_wchar_t_const_____ptr64_bool_bool__::_1_::dtor$1 @ 0x180073B6F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x18001053C (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::make_shared_CreativeFramework::Actions::AppInstallService_wchar_t_const_____ptr64_wchar_t_const_____ptr64_bool_bool__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(*(_QWORD *)(a2 + 112));
  }
  return result;
}
