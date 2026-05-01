/*
 * XREFs of ?OnNewNotification@CActionCenterExperienceManager@@AEAAJXZ @ 0x180011150
 * Callers:
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x180010CC0 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001134 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18000D2AC (-Provider@NotificationCenterLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ??1?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18000FB70 (--1-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Launch@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800119D8 (-Launch@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?GetViewStateAllowed@CActionCenterExperienceManager@@AEAA_NW4ActionCenterViewState@1@@Z @ 0x180011E5C (-GetViewStateAllowed@CActionCenterExperienceManager@@AEAA_NW4ActionCenterViewState@1@@Z.c)
 *     ?Destroy@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180014390 (-Destroy@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800147B0 (-Stop@-$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@I@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SA?AV012@$$QEAI@Z @ 0x180014C84 (--$Start@I@EM_NewNotificationActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180018824 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Z @ 0x18001D028 (-NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Desktop@Shel.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CActionCenterExperienceManager::OnNewNotification(char *pv)
{
  const struct _TlgProvider_t *v2; // rax
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  const struct _TlgProvider_t *v6; // rax
  const void *v7; // rdx
  struct _TP_TIMER *v8; // rcx
  const struct _TlgProvider_t *v9; // rax
  const struct _TlgProvider_t *v10; // rax
  const struct _TlgProvider_t *v11; // rax
  NTSTATUS v12; // eax
  unsigned int v13; // r8d
  int cData; // [rsp+28h] [rbp-E0h]
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C8h]
  int pvParam; // [rsp+48h] [rbp-C0h] BYREF
  char v19; // [rsp+4Ch] [rbp-BCh]
  _QWORD v20[6]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v21; // [rsp+B8h] [rbp-50h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1C8h] [rbp+C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v17 = -2LL;
  pftDueTime.dwLowDateTime = *((_DWORD *)pv + 86);
  NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::Start<unsigned int>((NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity *)v20);
  if ( *((_QWORD *)pv + 18) )
  {
    if ( (unsigned int)(*((_DWORD *)pv + 86) - 2) > 1 )
    {
      v6 = NotificationCenterLogging::Provider();
      if ( *(_DWORD *)v6 <= 5u )
        goto LABEL_31;
      v7 = &unk_18004296C;
      goto LABEL_9;
    }
    v8 = (struct _TP_TIMER *)*((_QWORD *)pv + 67);
    if ( v8 && IsThreadpoolTimerSet(v8) )
    {
      v9 = NotificationCenterLogging::Provider();
      if ( *(_DWORD *)v9 > 5u )
        TlgWrite(v9, &unk_180042945, (LPCGUID)(v21 + 8), 0LL, 2u, &pData);
    }
    else
    {
      if ( !*((_QWORD *)pv + 67) )
        *((_QWORD *)pv + 67) = CreateThreadpoolTimer(
                                 lambda_ceafefa0c468dfb376f6405f05df8602_::_lambda_invoker_cdecl_,
                                 pv,
                                 0LL);
      v10 = NotificationCenterLogging::Provider();
      if ( *(_DWORD *)v10 > 5u )
        TlgWrite(v10, &unk_180042915, (LPCGUID)(v21 + 8), 0LL, 2u, &pData);
      v3 = CSingleViewShellExperience::NavigateView(pv + 112, 3LL);
      v4 = v3;
      if ( v3 < 0 )
      {
        v5 = 600LL;
        goto LABEL_23;
      }
      pftDueTime = (struct _FILETIME)-600000000LL;
      SetThreadpoolTimer(*((PTP_TIMER *)pv + 67), &pftDueTime, 0, 0);
    }
    pvParam = 56;
    if ( SystemParametersInfoW(0x40u, 0x38u, &pvParam, 0) && (v19 & 1) != 0 )
    {
      v11 = NotificationCenterLogging::Provider();
      if ( *(_DWORD *)v11 > 5u )
        TlgWrite(v11, &unk_1800428EB, (LPCGUID)(v21 + 8), 0LL, 2u, &pData);
      v12 = NtPowerInformation(ProcessorStateHandler2|0x40, 0LL, 0, 0LL, 0);
      if ( v12 < 0 )
      {
        v4 = wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x266,
               v13,
               (const char *)(unsigned int)v12,
               cData);
        goto LABEL_32;
      }
    }
LABEL_31:
    wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v20);
    v4 = 0;
    goto LABEL_32;
  }
  if ( !(unsigned __int8)CActionCenterExperienceManager::GetViewStateAllowed(pv, 1LL) )
  {
    v6 = NotificationCenterLogging::Provider();
    if ( *(_DWORD *)v6 > 5u )
    {
      v7 = &unk_180042993;
LABEL_9:
      TlgWrite(v6, v7, (LPCGUID)(v21 + 8), 0LL, 2u, &pData);
      goto LABEL_31;
    }
    goto LABEL_31;
  }
  v2 = NotificationCenterLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_1800429AE, (LPCGUID)(v21 + 8), 0LL, 2u, &pData);
  v3 = CActionCenterExperienceManager::Launch((CActionCenterExperienceManager *)pv);
  v4 = v3;
  if ( v3 >= 0 )
    goto LABEL_31;
  v5 = 564LL;
LABEL_23:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_32:
  v20[0] = &NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_NewNotificationActivity::`vftable';
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v20);
  wil::ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<NotificationCenterLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v20);
  return v4;
}
