/*
 * XREFs of ?TransitionToState@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x180012040
 * Callers:
 *     ?OnIdleStateFlagsChanged@CActionCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x180010A60 (-OnIdleStateFlagsChanged@CActionCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 *     ?InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z @ 0x180011C4C (-InternalEntryPointInvoked@CActionCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?OnDismiss@CActionCenterExperienceManager@@UEAAJXZ @ 0x1800126D0 (-OnDismiss@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180012AD0 (-OnViewPropertiesChanging@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 * Callees:
 *     _TlgWrite @ 0x180001134 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180008DD8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18000D2AC (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18000FB70 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x180011B44 (-Hide@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ @ 0x180012348 (-RegisterWithLightDismiss@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180014390 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800147B0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$InvokeAll@PEAVCActionCenterExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVActionCenterExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCActionCenterExperienceManager@@$$T@Z @ 0x180014FE4 (--$InvokeAll@PEAVCActionCenterExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVAct.c)
 *     ??$Start@II@EM_TransitionToStateActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAI0@Z @ 0x1800150F0 (--$Start@II@EM_TransitionToStateActivity@NotificationCenterTelemetry@NotificationCenterUITelemet.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18001D9C8 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18001E86C (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ @ 0x180028A08 (-UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::TransitionToState(__int64 a1, unsigned int a2)
{
  struct _TP_TIMER *v4; // rcx
  const struct _TlgProvider_t *v5; // rax
  unsigned int v6; // eax
  int v7; // eax
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  unsigned int v11; // edi
  int v12; // eax
  const struct _TlgProvider_t *v13; // rax
  const void *v14; // rdx
  HRESULT v15; // eax
  _QWORD v17[6]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+78h] [rbp-90h]
  HSTRING_HEADER pData; // [rsp+188h] [rbp+80h] BYREF
  HSTRING string; // [rsp+1A0h] [rbp+98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_TransitionToStateActivity::Start<unsigned int,unsigned int>((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_TransitionToStateActivity *)v17);
  if ( *(_DWORD *)(a1 + 344) == a2 )
  {
    v13 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v13 > 5u )
    {
      v14 = &unk_1800424A7;
      goto LABEL_45;
    }
    goto LABEL_46;
  }
  v4 = *(struct _TP_TIMER **)(a1 + 536);
  if ( v4 )
  {
    if ( IsThreadpoolTimerSet(v4) )
    {
      SetThreadpoolTimer(*(PTP_TIMER *)(a1 + 536), 0LL, 0, 0);
      v5 = NotificationCenterLogging::Provider();
      if ( *(_DWORD *)v5 > 5u )
        TlgWrite(v5, &unk_180042451, (LPCGUID)(v18 + 8), 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
    }
  }
  v6 = *(_DWORD *)(a1 + 344);
  if ( v6 > 1 || a2 > 1 )
    goto LABEL_12;
  if ( !v6 )
  {
LABEL_13:
    if ( a2 > 1 )
    {
LABEL_18:
      SingleViewLightDismissHelper::UnregisterWithLightDismiss((SingleViewLightDismissHelper *)(a1 + 328));
      goto LABEL_19;
    }
LABEL_14:
    if ( v6 > 1 || a2 > 1 || v6 || !a2 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( a2 )
  {
LABEL_12:
    if ( v6 )
      goto LABEL_14;
    goto LABEL_13;
  }
  v7 = CActionCenterExperienceManager::RegisterWithLightDismiss((CActionCenterExperienceManager *)a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x411,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_20;
  }
LABEL_19:
  v8 = 0;
LABEL_20:
  if ( v8 >= 0 )
  {
    *(_DWORD *)(a1 + 348) = *(_DWORD *)(a1 + 344);
    *(_DWORD *)(a1 + 344) = a2;
    if ( a2 )
    {
      v11 = a2 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          v12 = CActionCenterExperienceManager::Hide((CActionCenterExperienceManager *)a1);
          v8 = v12;
          if ( v12 < 0 )
          {
            v10 = 1003LL;
LABEL_41:
            v9 = (unsigned int)v12;
            goto LABEL_42;
          }
          v13 = NotificationCenterLogging::Provider();
          if ( *(_DWORD *)v13 > 5u )
          {
            v14 = &unk_180042474;
LABEL_45:
            TlgWrite(v13, v14, (LPCGUID)(v18 + 8), 0LL, 2u, (EVENT_DATA_DESCRIPTOR *)&pData);
            goto LABEL_46;
          }
        }
        goto LABEL_46;
      }
      string = 0LL;
      v15 = WindowsCreateStringReference(L"Windows.Internal.ShellExperience.ActionCenter", 0x2Du, &pData, &string);
      if ( v15 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v15);
        __debugbreak();
      }
      v12 = CSingleViewShellExperience::SetArgs((HSTRING *)(a1 + 112), string);
      v8 = v12;
      if ( v12 < 0 )
      {
        v10 = 998LL;
        goto LABEL_41;
      }
      v12 = CSingleViewShellExperience::Show(a1 + 112, 1LL);
      v8 = v12;
      if ( v12 < 0 )
      {
        v10 = 999LL;
        goto LABEL_41;
      }
    }
    else
    {
      v12 = CSingleViewShellExperience::Show(a1 + 112, 0LL);
      v8 = v12;
      if ( v12 < 0 )
      {
        v10 = 992LL;
        goto LABEL_41;
      }
      v12 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ActionCenterExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CActionCenterExperienceManager *,std::nullptr_t>(
              a1 + 560,
              a1);
      v8 = v12;
      if ( v12 < 0 )
      {
        v10 = 993LL;
        goto LABEL_41;
      }
    }
    v13 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v13 > 5u )
    {
      v14 = &unk_18004248E;
      goto LABEL_45;
    }
LABEL_46:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v17);
    v8 = 0;
    goto LABEL_47;
  }
  v9 = (unsigned int)v8;
  v10 = 984LL;
LABEL_42:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)v9);
LABEL_47:
  v17[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_TransitionToStateActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v17);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v17);
  return (unsigned int)v8;
}
