/*
 * XREFs of ??1SemaphoreValue@details_abi@wil@@QEAA@XZ @ 0x180012CC0
 * Callers:
 *     _wil::details_abi::ProcessLocalStorageData_wil::details_abi::FeatureStateData_::Release_::_1_::dtor$2 @ 0x180070AE3 (_wil--details_abi--ProcessLocalStorageData_wil--details_abi--FeatureStateData_--Rel_ea_180070AE3.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002D8C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details_abi::SemaphoreValue::~SemaphoreValue(wil::details_abi::SemaphoreValue *this)
{
  void *v2; // rcx
  __int64 v3; // r8
  const char *v4; // r9
  __int64 v5; // r8
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 && !CloseHandle(v2) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x875, v3, v4);
    __debugbreak();
  }
  if ( *(_QWORD *)this )
  {
    if ( !CloseHandle(*(HANDLE *)this) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x875, v5, v6);
      __debugbreak();
    }
  }
}
