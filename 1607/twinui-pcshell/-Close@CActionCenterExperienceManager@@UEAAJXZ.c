/*
 * XREFs of ?Close@CActionCenterExperienceManager@@UEAAJXZ @ 0x180010860
 * Callers:
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800102D4 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ??1?$ScopeExitFn@V_lambda_d72167afb87ac1c2994ac41ac0cc6b0f_@@@details@wil@@QEAA@XZ @ 0x180013D14 (--1-$ScopeExitFn@V_lambda_d72167afb87ac1c2994ac41ac0cc6b0f_@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000C888 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActionCenterExperienceManager::Close(CActionCenterExperienceManager *this)
{
  struct _TP_TIMER *v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _TP_TIMER *)*((_QWORD *)this + 58);
  if ( v2 )
  {
    SetThreadpoolTimer(v2, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*((PTP_TIMER *)this + 58), 1);
    CloseThreadpoolTimer(*((PTP_TIMER *)this + 58));
    *((_QWORD *)this + 58) = 0LL;
  }
  v3 = *((_QWORD *)this + 49);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, *((unsigned int *)this + 100));
    if ( v4 >= 0 )
      *((_DWORD *)this + 100) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x141,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
  }
  v5 = *((_QWORD *)this + 56);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 32LL))(v5, *((unsigned int *)this + 108));
    if ( v6 >= 0 )
      *((_DWORD *)this + 108) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x149,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 56) + 32LL))(
           *((_QWORD *)this + 56),
           *((unsigned int *)this + 109));
    if ( v7 >= 0 )
      *((_DWORD *)this + 108) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x14E,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
  }
  v8 = *((_QWORD *)this + 57);
  if ( v8 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, *((unsigned int *)this + 110));
    if ( v9 >= 0 )
      *((_DWORD *)this + 110) = 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x156,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
  }
  if ( *((_QWORD *)this + 45) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 45) = 0LL;
  }
  if ( *((_QWORD *)this + 43) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 43) = 0LL;
  }
  if ( *((_QWORD *)this + 44) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 44) = 0LL;
  }
  return 0LL;
}
