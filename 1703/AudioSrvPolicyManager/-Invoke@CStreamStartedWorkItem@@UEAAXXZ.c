/*
 * XREFs of ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001D2F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18000A2E8 (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x18000B6C0 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x18000B930 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x18000BE68 (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x18000C4BC (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000C904 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000C970 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18000C9DC (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18000CA78 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000CC94 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18000E5F4 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x18000E9EC (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x18000F7F0 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x1800128D4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x180012B40 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x180012C4C (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x18001419C (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x1800144B0 (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x180014C10 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     WPP_SF_dSd @ 0x180015CA8 (WPP_SF_dSd.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18001BF20 (-TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     Template_zqq @ 0x18001D1A0 (Template_zqq.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStreamStartedWorkItem::Invoke(CStreamStartedWorkItem *this)
{
  __int64 v1; // rax
  float v3; // xmm6_4
  __int64 v4; // rsi
  int v5; // r13d
  int v6; // r12d
  unsigned int v7; // eax
  const wchar_t *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rbx
  unsigned int v11; // eax
  int PBMRelatedAudioStreamCategory; // eax
  CApplicationManager *v13; // rcx
  unsigned int v14; // r15d
  int v15; // ebx
  __int64 v16; // rax
  CProcess *v17; // rcx
  const unsigned __int16 *v18; // rdi
  int ActiveRenderStreamCount; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  CApplicationManager *v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // edi
  void (__fastcall **v29)(char *, _QWORD, const unsigned __int16 *, _QWORD, bool, int *); // rbx
  int v30; // eax
  int v31; // ebx
  CApplicationManager *v32; // rcx
  __int64 v33; // rax
  int v34; // [rsp+28h] [rbp-50h]
  float v35; // [rsp+40h] [rbp-38h] BYREF
  int v36; // [rsp+44h] [rbp-34h] BYREF
  char v37[4]; // [rsp+48h] [rbp-30h] BYREF
  const unsigned __int16 *v38; // [rsp+50h] [rbp-28h]
  int v39; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v40; // [rsp+C8h] [rbp+50h] BYREF
  int v41; // [rsp+D0h] [rbp+58h] BYREF
  int v42; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *((_QWORD *)this + 3);
  v3 = FLOAT_1_0;
  v35 = FLOAT_1_0;
  v4 = *(_QWORD *)(v1 + 224);
  v36 = 0;
  v5 = 0;
  v41 = 0;
  v6 = 0;
  v39 = 0;
  v42 = 0;
  v40 = 0;
  *(_DWORD *)v37 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    if ( v7 > 2 )
      v8 = L"unknown";
    else
      v8 = off_180025B38[v7];
    v9 = *(_DWORD *)(*((_QWORD *)this + 3) + 168LL);
    v34 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 40LL))(*((_QWORD *)this + 1));
    WPP_SF_dSd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, v9, v8, v34);
  }
  v10 = *((_QWORD *)this + 3);
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 40LL))(*((_QWORD *)this + 1));
  PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(
                                    (struct IAudioProcess *)((v10 + 16) & -(__int64)(v10 != 0)),
                                    v11,
                                    &v40);
  v14 = v40;
  v15 = PBMRelatedAudioStreamCategory;
  if ( PBMRelatedAudioStreamCategory >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2));
    v17 = (CProcess *)*((_QWORD *)this + 3);
    v18 = (const unsigned __int16 *)v16;
    v38 = (const unsigned __int16 *)v16;
    ActiveRenderStreamCount = CProcess::GetActiveRenderStreamCount(v17, 0xBu);
    v20 = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xAu) + ActiveRenderStreamCount;
    v21 = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 2u) + v20;
    v22 = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 1u);
    v23 = *((_QWORD *)this + 1);
    v40 = v21 + v22;
    v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 56LL))(v23);
    v15 = 0;
    CProcess::UpdateStreamCountAndProcessCategory(*((CProcess **)this + 3), v18, v14, 1, v24, 0LL, 0LL);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1))
      || v14 == 2
      || (unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)v4)
      && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)v4)
      && (unsigned int)CApplication::HasSmtcSubscription(v4, 1) )
    {
      v25 = *((_QWORD *)this + 3);
      if ( *(_DWORD *)(v25 + 452) == 3 )
      {
        *(_QWORD *)(v25 + 452) = 0LL;
        *(_DWORD *)(v25 + 460) = 4;
      }
      CApplication::RemoveAudioPlaybackRestriction((CApplication *)v4);
      CProcess::DeleteInactivityTimer(*((CProcess **)this + 3));
      CApplication::CleanupBCMStartupLatencyGracePeriod((const wchar_t **)v4);
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1)) )
    {
      if ( v14 == 2 )
        CApplication::ApplySmtcRelatedPolicy((CApplication *)v4);
      if ( *(_DWORD *)(*((_QWORD *)this + 3) + 424LL)
        && (v14 == 2
         || (unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)v4)
         && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)v4)
         && (unsigned int)CApplication::HasSmtcSubscription(v4, 1))
        && *(_DWORD *)(v4 + 392) )
      {
        CApplication::CleanupGoodFaithExemptionTimer((const wchar_t **)v4);
        if ( *(_DWORD *)(v4 + 524) == 2 )
        {
          *(_QWORD *)(v4 + 524) = 0LL;
          *(_QWORD *)(v4 + 532) = 0LL;
          *(_QWORD *)(v4 + 540) = 0LL;
          *(_DWORD *)(v4 + 548) = 1;
        }
        v26 = g_ApplicationManager;
        *(_DWORD *)(v4 + 392) = 0;
        CApplicationManager::ApplyPBMPolicy(v26, (struct CApplication *)v4, 209);
      }
      v27 = *((_QWORD *)this + 3);
      if ( !*(_DWORD *)(v27 + 416) && *(_DWORD *)(v4 + 176) )
      {
        v28 = *(_DWORD *)(v27 + 172);
        v29 = (void (__fastcall **)(char *, _QWORD, const unsigned __int16 *, _QWORD, bool, int *))*((_QWORD *)g_StreamClassPolicyManager + 2);
        v30 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1));
        (*v29)((char *)g_StreamClassPolicyManager + 16, v28, v38, v14, v30 != 0, &v36);
        v18 = v38;
      }
      if ( v14 == 14 || v14 == 17 )
      {
        CApplicationManager::ApplyEndpointVolumeOverride(
          (CApplicationManager *)&v41,
          v18,
          *(_DWORD *)(*((_QWORD *)this + 3) + 172LL),
          &v42,
          &v41,
          &v35,
          &v39,
          (int *)v37);
        v5 = v41;
        v6 = v42;
        v3 = v35;
      }
      if ( v36 || v6 )
        CApplicationManager::UpdateVolumeForAllAppsInSession(
          (__int64)g_ApplicationManager,
          *(_DWORD *)(v4 + 172),
          (v6 != 0) + 3);
      v31 = v39;
      if ( v5 || v39 )
      {
        Sleep(0x32u);
        CApplicationManager::UpdateEndpointVolume(v32, v18, v5, v3, v31, *(unsigned int *)v37);
      }
      v15 = CApplicationManager::ApplyPBMPolicyForAllAppsInSession(g_ApplicationManager, *(_DWORD *)(v4 + 172));
      if ( (v14 - 10 <= 1 || v14 - 1 <= 1) && !v40 )
        CApplication::SendTrackStateNotification(v4);
      if ( v14 - 10 <= 1 || v14 <= 2 )
        TS_SessionIdStreamStarted(
          *(_DWORD *)(*((_QWORD *)this + 3) + 172LL),
          *((struct IAudioStreamInfo **)this + 1),
          v18);
      if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v4) )
        CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v13);
    }
  }
  v33 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v33 + 424) && Microsoft_Windows_AudioEnableBits < 0 )
    Template_zqq((__int64)v13, &EVT_PBM_STREAM_STARTED, *(const wchar_t **)(v4 + 24), *(_DWORD *)(v33 + 168), v14);
  if ( v15 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, v15);
    }
    AudPolicyLogError("CStreamStartedWorkItem::Invoke", 278, v15);
  }
}
