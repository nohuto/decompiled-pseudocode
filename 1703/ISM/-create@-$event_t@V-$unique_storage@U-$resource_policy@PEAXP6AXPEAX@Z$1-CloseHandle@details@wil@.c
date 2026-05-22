/*
 * XREFs of ?create@?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@QEAAXW4EventOptions@2@PEBGPEAU_SECURITY_ATTRIBUTES@@PEA_N@Z @ 0x180007DC0
 * Callers:
 *     _dynamic_initializer_for__MPC3DStateHelper::s_isInstanceCreatedEvent__ @ 0x180001290 (_dynamic_initializer_for__MPC3DStateHelper--s_isInstanceCreatedEvent__.c)
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_4bfd0116db80ce4255855ce8af72e9c8_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180008A00 (--$_Callback_once@V-$tuple@$$QEAV_lambda_4bfd0116db80ce4255855ce8af72e9c8_@@AEAVexception_ptr@st.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000324C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000745C (-Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_exception_policy>::create(
        void **a1,
        char a2)
{
  void *v3; // rdx
  HANDLE Event; // rbp
  __int64 v5; // r8
  const char *v6; // r9
  void *v7; // rbx
  DWORD LastError; // esi
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Event = CreateEventExW(0LL, 0LL, a2 & 3, 0x1F0003u);
  if ( !Event )
  {
    wil::details::in1diag3::Throw_GetLastError(retaddr, v3, v5, v6);
    JUMPOUT(0x180007E59LL);
  }
  GetLastError();
  v7 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    if ( !CloseHandle(v7) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x875,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v9);
      __debugbreak();
    }
    SetLastError(LastError);
  }
  *a1 = Event;
}
