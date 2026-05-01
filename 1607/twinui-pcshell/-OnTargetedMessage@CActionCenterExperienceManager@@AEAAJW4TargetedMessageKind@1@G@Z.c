/*
 * XREFs of ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180010CC0
 * Callers:
 *     ?OnMessage@CActionCenterExperienceManager@@UEAAJI_K_J@Z @ 0x180010C10 (-OnMessage@CActionCenterExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001134 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18000D2AC (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18000FB70 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?OnShellReady@CActionCenterExperienceManager@@AEAAJXZ @ 0x180010FA0 (-OnShellReady@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180011150 (-OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ @ 0x180011574 (-OnDpiOrHighContrastChanged@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180011714 (-RaiseApplicationEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180014390 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800147B0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@$$V@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@XZ @ 0x180014BD4 (--$Start@$$V@EM_CriticalNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITel.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180018824 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Z @ 0x18001D028 (-NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Desktop@Shel.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180030420 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::OnTargetedMessage(__int64 a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // edi
  const struct _TlgProvider_t *v15; // rax
  EVENT_DATA_DESCRIPTOR *pData; // rcx
  const void *v17; // rdx
  NTSTATUS v18; // eax
  unsigned int v19; // r8d
  int cData; // [rsp+28h] [rbp-E0h]
  _QWORD v22[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v23[40]; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v24; // [rsp+188h] [rbp+80h] BYREF
  char v25; // [rsp+1A8h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v22[1] = -2LL;
  if ( !a2 )
  {
    v10 = CActionCenterExperienceManager::OnShellReady((CActionCenterExperienceManager *)a1);
    v7 = v10;
    if ( v10 < 0 )
    {
      v9 = 460LL;
      goto LABEL_38;
    }
    return 0LL;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    v10 = CActionCenterExperienceManager::OnNewNotification((PVOID)a1);
    v7 = v10;
    if ( v10 < 0 )
    {
      v9 = 464LL;
      goto LABEL_38;
    }
    return 0LL;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::Start<>((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity *)v23);
    v12 = *(_QWORD *)(a1 + 496);
    if ( v12 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v12 + 32LL))(v12, 3LL, v22);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x216,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v13);
LABEL_21:
        v23[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::`vftable';
        wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v23);
        wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v23);
        goto LABEL_32;
      }
      if ( !*(_BYTE *)(a1 + 460) || LODWORD(v22[0]) )
      {
        v18 = NtPowerInformation(ProcessorStateHandler2|0x40, 0LL, 0, 0LL, 0);
        if ( v18 < 0 )
        {
          v14 = wil::details::in1diag3::Return_NtStatus(
                  retaddr,
                  (void *)0x21E,
                  v19,
                  (const char *)(unsigned int)v18,
                  cData);
          goto LABEL_21;
        }
        v15 = NotificationCenterLogging::Provider();
        if ( *(_DWORD *)v15 > 5u )
        {
          pData = (EVENT_DATA_DESCRIPTOR *)&v25;
          v17 = &unk_180041E34;
          goto LABEL_30;
        }
      }
      else
      {
        v15 = NotificationCenterLogging::Provider();
        if ( *(_DWORD *)v15 > 5u )
        {
          pData = &v24;
          v17 = &unk_180042993;
LABEL_30:
          TlgWrite(v15, v17, (LPCGUID)(v23[6] + 8LL), 0LL, 2u, pData);
        }
      }
    }
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v23);
    v23[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_CriticalNotificationActivity::`vftable';
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v23);
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v23);
    v14 = 0;
LABEL_32:
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D4,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
      return (unsigned int)v14;
    }
    return 0LL;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        v7 = -2147418113;
        v8 = 2147549183LL;
        v9 = 483LL;
LABEL_39:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)v8);
        return (unsigned int)v7;
      }
      v10 = CActionCenterExperienceManager::OnDpiOrHighContrastChanged((CActionCenterExperienceManager *)a1);
      v7 = v10;
      if ( v10 < 0 )
      {
        v9 = 479LL;
LABEL_38:
        v8 = (unsigned int)v10;
        goto LABEL_39;
      }
    }
    else
    {
      v10 = CActionCenterExperienceManager::RaiseApplicationEvent(
              (CActionCenterExperienceManager *)a1,
              L"ThemeChanged",
              1);
      v7 = v10;
      if ( v10 < 0 )
      {
        v9 = 475LL;
        goto LABEL_38;
      }
    }
  }
  else
  {
    SetThreadpoolTimer(*(PTP_TIMER *)(a1 + 536), 0LL, 0, 0);
    if ( *(_QWORD *)(a1 + 144) && (v11 = CSingleViewShellExperience::NavigateView(a1 + 112, 1LL), v7 = v11, v11 < 0) )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x279,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
    else
      v7 = 0;
    if ( v7 < 0 )
    {
      v8 = (unsigned int)v7;
      v9 = 472LL;
      goto LABEL_39;
    }
  }
  return 0LL;
}
