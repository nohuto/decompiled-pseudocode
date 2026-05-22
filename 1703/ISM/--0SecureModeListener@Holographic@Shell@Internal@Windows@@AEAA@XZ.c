/*
 * XREFs of ??0SecureModeListener@Holographic@Shell@Internal@Windows@@AEAA@XZ @ 0x18002F680
 * Callers:
 *     _dynamic_initializer_for__Windows::Internal::Shell::Holographic::SecureModeListener::s_listener__ @ 0x1800012F0 (_dynamic_initializer_for__Windows--Internal--Shell--Holographic--SecureModeListener--s_listener_.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18002F598 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?_UpdateSecureModeActive@SecureModeListener@Holographic@Shell@Internal@Windows@@AEAAX_N@Z @ 0x18002F8AC (-_UpdateSecureModeActive@SecureModeListener@Holographic@Shell@Internal@Windows@@AEAAX_N@Z.c)
 *     ??$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@KPEAPEAU?$wnf_subscription_state@K@01@@Z @ 0x18002F93C (--$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV-$function@$$A6AXAEB.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Windows::Internal::Shell::Holographic::SecureModeListener::SecureModeListener(
        Windows::Internal::Shell::Holographic::SecureModeListener *this)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  int wnf_subscription; // eax
  const char *v4; // r9
  void (__fastcall ***v5)(_QWORD, __int64); // rdi
  __int64 v6; // rbx
  bool v7; // si
  DWORD LastError; // r14d
  _QWORD *v9; // rdx
  bool v10; // di
  int v11; // ebx
  const char *v12; // r9
  const char *v14; // [rsp+38h] [rbp-49h] BYREF
  int v15[2]; // [rsp+40h] [rbp-41h] BYREF
  _QWORD v16[13]; // [rsp+48h] [rbp-39h] BYREF
  _QWORD *v17; // [rsp+B0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  Windows::Internal::Shell::Holographic::SecureModeListener::s_listener = 0LL;
  unk_1800D38D8 = 0;
  InitializeCriticalSectionEx(&stru_1800D38E0, 0, 0);
  qword_1800D3910 = 0LL;
  v16[0] = off_1800A5CF8;
  v16[1] = &Windows::Internal::Shell::Holographic::SecureModeListener::s_listener;
  v17 = v16;
  wnf_subscription = wil::details::make_wnf_subscription_state<unsigned long>(v1, v16, v2, v15);
  v5 = (void (__fastcall ***)(_QWORD, __int64))Windows::Internal::Shell::Holographic::SecureModeListener::s_listener;
  v6 = 0LL;
  v7 = 1;
  if ( wnf_subscription >= 0 )
    v6 = *(_QWORD *)v15;
  if ( Windows::Internal::Shell::Holographic::SecureModeListener::s_listener )
  {
    LastError = GetLastError();
    if ( v5 )
      (**v5)(v5, 1LL);
    SetLastError(LastError);
  }
  Windows::Internal::Shell::Holographic::SecureModeListener::s_listener = v6;
  if ( v17 )
  {
    v9 = v16;
    LOBYTE(v9) = v17 != v16;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v17 + 24LL))(v17, v9);
    v6 = Windows::Internal::Shell::Holographic::SecureModeListener::s_listener;
  }
  if ( !v6 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x17,
      (__int64)"onecoreuap\\shell\\holographic\\securemodelistener\\securemodelistener.cpp",
      v4);
    __debugbreak();
  }
  v15[0] = 0;
  LODWORD(v14) = 4;
  v10 = 0;
  v11 = NtQueryWnfStateData(&WNF_SHEL_LOCKSCREEN_ACTIVE, 0LL, 0LL, (char *)&v14 + 4, v15, &v14) | 0x10000000;
  if ( (int)(v11 + 0x80000000) < 0 || v11 == -805306333 )
  {
    if ( HIDWORD(v14) && (_DWORD)v14 != 4 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x12F0,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        v12);
      __debugbreak();
    }
    wil::details::in1diag3::Log_HrIfMsg(
      retaddr,
      (void *)0x12F1,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      (const char *)0x8000FFFFLL,
      0,
      (unsigned __int16 *)"Inconsistent state data size in wnf_query",
      v14);
    v10 = HIDWORD(v14) && (_DWORD)v14 == 4;
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12EF,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      (const char *)(unsigned int)v11);
  }
  if ( v11 < 0 || !v10 || !v15[0] )
    v7 = 0;
  Windows::Internal::Shell::Holographic::SecureModeListener::_UpdateSecureModeActive(
    (Windows::Internal::Shell::Holographic::SecureModeListener *)&Windows::Internal::Shell::Holographic::SecureModeListener::s_listener,
    v7);
  return &Windows::Internal::Shell::Holographic::SecureModeListener::s_listener;
}
