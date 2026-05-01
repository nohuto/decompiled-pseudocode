/*
 * XREFs of ?OnShellReady@CActionCenterExperienceManager@@AEAAJXZ @ 0x180010FA0
 * Callers:
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180010CC0 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReadyToLaunch@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18000D3E8 (-ReadyToLaunch@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ.c)
 *     ?PrelaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18000D464 (-PrelaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ.c)
 *     ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800119D8 (-Launch@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActionCenterExperienceManager::OnShellReady(CActionCenterExperienceManager *this)
{
  HRESULT Instance; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  unsigned __int64 v5; // r9
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_BYTE *)this + 476) = 1;
  if ( *((_QWORD *)this + 54) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)this + 54) = 0LL;
  }
  NotificationCenterUITelemetry::NotificationCenterTelemetry::ReadyToLaunch();
  if ( (unsigned int)SHWindowsPolicy(&POLID_DisableNotificationCenter) )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::PrelaunchSkippedDueToPolicy();
  }
  else
  {
    Instance = CActionCenterExperienceManager::Launch(this);
    v3 = Instance;
    if ( Instance < 0 )
    {
      v4 = 504LL;
LABEL_6:
      v5 = (unsigned int)Instance;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)v5);
      return v3;
    }
  }
  v7 = *((_QWORD *)this + 62);
  if ( v7 )
  {
    *((_QWORD *)this + 62) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  Instance = CoCreateInstance(
               &GUID_d18705be_fc2f_44c8_aeff_1cd49aea8fc1,
               0LL,
               0x17u,
               &GUID_4a21fac3_37ad_45f0_ad17_bc4a303042d8,
               (LPVOID *)this + 62);
  v3 = Instance;
  if ( Instance < 0 )
  {
    v4 = 515LL;
    goto LABEL_6;
  }
  v8 = RtlSubscribeWnfStateChangeNotification(
         (char *)this + 416,
         WNF_SHEL_TOAST_PUBLISHED,
         0LL,
         CActionCenterExperienceManager::NotificationStateChangedCallback,
         this,
         0LL,
         0,
         1);
  v3 = v8 | 0x10000000;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x366,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)v3);
    v5 = v3;
    v4 = 518LL;
    goto LABEL_7;
  }
  v9 = RtlSubscribeWnfStateChangeNotification(
         (char *)this + 424,
         WNF_SHEL_NOTIFICATIONS_CRITICAL,
         0LL,
         CActionCenterExperienceManager::CriticalNotificationStateChangedCallback,
         this,
         0LL,
         0,
         1);
  v10 = v9 | 0x10000000;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x374,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)v10);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x209,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)v10);
  }
  return v10;
}
