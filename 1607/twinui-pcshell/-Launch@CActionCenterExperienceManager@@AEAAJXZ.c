/*
 * XREFs of ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800119D8
 * Callers:
 *     ?OnShellReady@CActionCenterExperienceManager@@AEAAJXZ @ 0x180010FA0 (-OnShellReady@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180011150 (-OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z @ 0x180011C4C (-InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800128C0 (-OnViewDestroyed@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001134 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18000D2AC (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18000FB70 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180014390 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800147B0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@$$V@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@XZ @ 0x180014F34 (--$Start@$$V@EM_LaunchActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA-AV0.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18001C3C4 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::Launch(CActionCenterExperienceManager *this)
{
  HWND WindowW; // rax
  const struct _TlgProvider_t *v3; // rax
  const void *v4; // rdx
  const struct _TlgProvider_t *v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD v9[6]; // [rsp+40h] [rbp-178h] BYREF
  __int64 v10; // [rsp+70h] [rbp-148h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+180h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::Start<>((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity *)v9);
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !*((_BYTE *)this + 476) )
  {
    v3 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v3 > 5u )
    {
      v4 = &unk_180041C21;
LABEL_7:
      TlgWrite(v3, v4, (LPCGUID)(v10 + 8), 0LL, 2u, &pData);
      goto LABEL_12;
    }
    goto LABEL_12;
  }
  if ( GetPropW(WindowW, L"IsExplorerShuttingDown") )
  {
    v3 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v3 > 5u )
    {
      v4 = &unk_180041C43;
      goto LABEL_7;
    }
LABEL_12:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v9);
    v7 = 0;
    goto LABEL_13;
  }
  v5 = NotificationCenterLogging::Provider();
  if ( *(_DWORD *)v5 > 5u )
    TlgWrite(v5, &unk_180041C6A, (LPCGUID)(v10 + 8), 0LL, 2u, &pData);
  v6 = CSingleViewShellExperience::Launch((CActionCenterExperienceManager *)((char *)this + 112));
  v7 = v6;
  if ( v6 >= 0 )
    goto LABEL_12;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_13:
  v9[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_LaunchActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v9);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
  return v7;
}
