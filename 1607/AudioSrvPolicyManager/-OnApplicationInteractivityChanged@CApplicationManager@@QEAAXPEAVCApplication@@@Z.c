/*
 * XREFs of ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180015360
 * Callers:
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x180014FC0 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z.c)
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x180015140 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x180020BA0 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A618 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_SS @ 0x18000A754 (WPP_SF_SS.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000B40C (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?RawCategory@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000B4C4 (-RawCategory@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x18000BC20 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18000BC8C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ @ 0x18000CAB4 (-AddPBMStatusOverrideToSilenceAndRevokePLMExemption@CApplication@@QEAAXXZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18000CAF4 (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D018 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D08C (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18000D100 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18000D1A0 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000D220 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000D444 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x180014254 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x180014368 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180014DA4 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::OnApplicationInteractivityChanged(
        CApplicationManager *this,
        struct CApplication *a2)
{
  const wchar_t *v4; // rax
  bool v5; // zf
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-30h] BYREF
  char v7; // [rsp+50h] [rbp-28h]
  DWORD pcbData; // [rsp+80h] [rbp+8h] BYREF
  int pvData; // [rsp+88h] [rbp+10h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v4 = L"NOT_INTERACTIVE";
    if ( *((_DWORD *)a2 + 28) )
      v4 = (const wchar_t *)L"INTERACTIVE";
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x34u,
      &WPP_2ae01a2157653d59076bb8a0ce2992be_Traceguids,
      *((const wchar_t **)a2 + 2),
      v4);
  }
  if ( !*((_DWORD *)a2 + 28) )
  {
    if ( (unsigned int)CApplication::IsBackgroundAudioCapable(a2)
      && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(a2)
      && (unsigned int)CApplication::HasSmtcSubscription((__int64)a2, 1) )
    {
      v5 = (unsigned int)CApplication::GetTotalActiveRenderStreamCount(a2) == 0;
    }
    else
    {
      if ( dword_18002B5A0[(int)CApplication::Category((__int64)a2)] )
      {
        if ( !dword_18002B5A0[(int)CApplication::RawCategory((__int64)a2)] && *((_DWORD *)a2 + 30) )
          CApplication::RestrictAudioPlaybackToPrimaryCategories(a2);
        goto LABEL_27;
      }
      if ( !(unsigned int)CApplication::IsBackgroundAudioCapable(a2) )
      {
        CApplication::AddPBMStatusOverrideToSilenceAndRevokePLMExemption(a2);
        goto LABEL_27;
      }
      if ( (unsigned int)CApplication::HasBackgroundAudioTask(a2)
        || (unsigned int)CApplication::GetTotalActiveCaptureStreamCount(a2) )
      {
        goto LABEL_27;
      }
      pcbData = 4;
      if ( RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
             L"DisableExemptionForBCMStartupLatency",
             0x18u,
             0LL,
             &pvData,
             &pcbData) )
      {
        goto LABEL_23;
      }
      v5 = pvData == 0;
    }
    if ( v5 )
LABEL_23:
      CApplication::BeginBCMStartupLatencyGracePeriod((const wchar_t **)a2);
LABEL_27:
    CApplicationManager::ApplyPBMPolicy(this, a2, 209);
    goto LABEL_28;
  }
  if ( (unsigned int)CApplication::IsBackgroundAudioCapable(a2) )
    CApplication::CleanupBCMStartupLatencyGracePeriod((const wchar_t **)a2);
  *(_QWORD *)((char *)a2 + 468) = 0LL;
  *(_QWORD *)((char *)a2 + 476) = 0LL;
  *(_QWORD *)((char *)a2 + 484) = 0LL;
  *((_DWORD *)a2 + 123) = 1;
  CApplicationManager::ApplyPBMPolicyForAllAppsInSession(this, *((_DWORD *)a2 + 29));
LABEL_28:
  CApplicationManager::UpdateActiveMediaAppForSession(this, a2, 0);
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
}
