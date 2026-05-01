/*
 * XREFs of ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800128C0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001134 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180008DD8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180008F78 (-SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18000D2AC (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18000FB70 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800119D8 (-Launch@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180014390 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800147B0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@I@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAI@Z @ 0x180015280 (--$Start@I@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@S.c)
 *     ??$WrapWithTask@V_lambda_ac1020972fffe058a556d363e2775067_@@@ComTaskPool@Internal@Windows@@SA?AV?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@$$QEAV_lambda_ac1020972fffe058a556d363e2775067_@@@Z @ 0x180015700 (--$WrapWithTask@V_lambda_ac1020972fffe058a556d363e2775067_@@@ComTaskPool@Internal@Windows@@SA-AV.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180018128 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18001E86C (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CActionCenterExperienceManager::OnViewDestroyed(
        CActionCenterExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  DWORD CurrentThreadId; // eax
  int v4; // ebx
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  HRESULT v8; // eax
  int v9; // eax
  const struct _TlgProvider_t *v10; // rax
  int v12[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C8h]
  _QWORD v14[40]; // [rsp+48h] [rbp-C0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+188h] [rbp+80h] BYREF
  HSTRING string; // [rsp+1A0h] [rbp+98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v13 = -2LL;
  v12[0] = *((_DWORD *)this + 62);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::Start<unsigned int>((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity *)v14);
  *((_DWORD *)this + 63) = *((_DWORD *)this + 62);
  *((_DWORD *)this + 62) = 2;
  Windows::Internal::ComTaskPool::WrapWithTask<_lambda_ac1020972fffe058a556d363e2775067_>(v12);
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunTask(3LL, 0LL, CurrentThreadId);
  v5 = *(_QWORD *)v12;
  if ( *(_QWORD *)v12 )
  {
    *(_QWORD *)v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v4 >= 0 )
  {
    string = 0LL;
    v8 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.ActionCenter", 0x2Du, &hstringHeader, &string);
    if ( v8 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v8);
      __debugbreak();
    }
    v9 = CSingleViewShellExperience::SetArgs((HSTRING *)this + 2, string);
    v4 = v9;
    if ( v9 < 0 )
    {
      v7 = 1207LL;
LABEL_13:
      v6 = (unsigned int)v9;
      goto LABEL_14;
    }
    if ( *((_DWORD *)this + 63) == 1 )
    {
      v12[0] = 1;
      SHRegGetBOOL(
        HKEY_LOCAL_MACHINE,
        L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
        L"AllowAutoAppRestartOnCrash",
        v12);
      if ( v12[0] )
      {
        v9 = CActionCenterExperienceManager::Launch((CActionCenterExperienceManager *)((char *)this - 96));
        v4 = v9;
        if ( v9 < 0 )
        {
          v7 = 1217LL;
          goto LABEL_13;
        }
        v10 = NotificationCenterLogging::Provider();
        if ( *(_DWORD *)v10 > 5u )
          TlgWrite(v10, &unk_180042023, (LPCGUID)(v14[6] + 8LL), 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&hstringHeader);
      }
    }
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v14);
    v4 = 0;
    goto LABEL_18;
  }
  v6 = (unsigned int)v4;
  v7 = 1204LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)v6);
LABEL_18:
  v14[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_ViewDestroyedActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v14);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v14);
  return (unsigned int)v4;
}
