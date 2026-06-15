/*
 * XREFs of ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001BB50
 * Callers:
 *     ?Invoke@CAppStateChangedWorkItem@@UEAAXXZ @ 0x180002AD0 (-Invoke@CAppStateChangedWorkItem@@UEAAXXZ.c)
 *     ?OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z @ 0x18001BCD0 (-OnHostedAppStateChanged@CApplicationManager@@QEAAJPEAVHostedAppStateChangedContext@@@Z.c)
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z @ 0x1800A18B0 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAU_CastingAppStateChangedContext@@@Z.c)
 * Callees:
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180003228 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180003340 (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x1800033B4 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x1800034FC (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?GrantExemptionForBCMStartupLatency@@YAHXZ @ 0x1800057F0 (-GrantExemptionForBCMStartupLatency@@YAHXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18001282C (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180012DE0 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x1800132D4 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18001BD74 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x18001C2F0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x18001C568 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 *     WPP_SF_SS @ 0x18007E86C (WPP_SF_SS.c)
 *     ?RawCategory@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x1800A3824 (-RawCategory@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CApplicationManager::OnApplicationInteractivityChanged(
        CApplicationManager *this,
        struct CApplication *a2)
{
  __int64 v4; // rdx
  bool v5; // r8
  __int64 v6; // rdx
  bool v7; // r8
  __int64 v8; // rdx
  bool v9; // r8
  const wchar_t *v10; // rax
  __int64 v11; // rdx
  bool v12; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v14; // [rsp+40h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v10 = L"INTERACTIVE";
    if ( !*((_DWORD *)a2 + 28) )
      v10 = L"NOT_INTERACTIVE";
    WPP_SF_SS(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      48,
      (unsigned int)&WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
      *((_QWORD *)a2 + 2),
      (__int64)v10);
  }
  if ( *((_DWORD *)a2 + 28) )
  {
    if ( (unsigned int)CApplication::IsBackgroundAudioCapable(a2) )
      CApplication::CleanupBCMStartupLatencyGracePeriod(a2, v4, v5);
    *(_QWORD *)((char *)a2 + 468) = 0LL;
    *(_QWORD *)((char *)a2 + 476) = 0LL;
    *(_QWORD *)((char *)a2 + 484) = 0LL;
    *((_DWORD *)a2 + 123) = 1;
    CApplicationManager::ApplyPBMPolicyForAllAppsInSession(this, *((_DWORD *)a2 + 29));
  }
  else
  {
    if ( dword_1800C6808[(int)CApplication::Category((__int64)a2)] )
    {
      if ( !dword_1800C6808[(int)CApplication::RawCategory(a2)] && *((_DWORD *)a2 + 30) )
        CApplication::RestrictAudioPlaybackToPrimaryCategories(a2, v11, v12);
    }
    else if ( (unsigned int)CApplication::IsBackgroundAudioCapable(a2) )
    {
      if ( !(unsigned int)CApplication::HasBackgroundAudioTask(a2)
        && !(unsigned int)CApplication::GetTotalActiveCaptureStreamCount(a2, v6, v7)
        && (unsigned int)GrantExemptionForBCMStartupLatency() )
      {
        CApplication::BeginBCMStartupLatencyGracePeriod(a2, v8, v9);
      }
    }
    else if ( *((_DWORD *)a2 + 117) != 1 )
    {
      *((_DWORD *)a2 + 117) = 1;
      *((_QWORD *)a2 + 59) = 1LL;
      *((_QWORD *)a2 + 60) = 1LL;
      *((_DWORD *)a2 + 122) = 1;
      *((_DWORD *)a2 + 123) = 1;
    }
    CApplicationManager::ApplyPBMPolicy(this, a2, 0xD1u);
  }
  CApplicationManager::UpdateActiveMediaAppForSession(this, a2, 0);
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
}
