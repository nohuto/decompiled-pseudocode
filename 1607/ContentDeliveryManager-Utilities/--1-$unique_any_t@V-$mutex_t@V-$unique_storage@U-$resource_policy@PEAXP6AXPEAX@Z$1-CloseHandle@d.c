/*
 * XREFs of ??1?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x18000D5AC
 * Callers:
 *     _wil::details_abi::ProcessLocalStorageData_wil::details_abi::FeatureStateData_::Release_::_1_::dtor$1 @ 0x180059E7B (_wil--details_abi--ProcessLocalStorageData_wil--details_abi--FeatureStateData_--Rel_ea_180059E7B.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002C68 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::unique_any_t<wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>::~unique_any_t<wil::mutex_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>(
        void **a1)
{
  void *v1; // rcx
  __int64 v2; // r8
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  if ( v1 && !CloseHandle(v1) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x623, v2, v3);
    JUMPOUT(0x18000D5D6LL);
  }
}
