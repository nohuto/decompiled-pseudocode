/*
 * XREFs of ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001FB30
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18000A564 (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x18000BB20 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x18000BDA0 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z.c)
 *     ?CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ @ 0x18000C3CC (-CleanupGoodFaithExemptionTimer@CApplication@@QEAAJXZ.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x18000CB5C (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D018 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D08C (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18000D100 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18000D1A0 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18000D444 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18000EE3C (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x18000F1CC (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180010178 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180013F9C (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x180014254 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x180014368 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x1800158F0 (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x180015D24 (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18001662C (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     WPP_SF_dSd @ 0x180017B94 (WPP_SF_dSd.c)
 *     ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18001E1A8 (-TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     Template_zqq @ 0x18001F7D4 (Template_zqq.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStreamStartedWorkItem::Invoke(CStreamStartedWorkItem *this)
{
  __int64 v1; // rax
  float v2; // xmm6_4
  int v4; // r13d
  int v5; // r12d
  __int64 v6; // rsi
  unsigned int v7; // eax
  const wchar_t *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rax
  struct IAudioProcess *v11; // rbx
  unsigned int v12; // eax
  int PBMRelatedAudioStreamCategory; // eax
  const GUID *v14; // r8
  const GUID *v15; // r9
  UINT32 v16; // r15d
  __int64 v17; // rax
  CProcess *v18; // rcx
  const unsigned __int16 *v19; // rdi
  int ActiveRenderStreamCount; // ebx
  int v21; // ebx
  int v22; // ebx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  CApplicationManager *v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // edi
  __int64 (__fastcall **v30)(char *, _QWORD, const unsigned __int16 *, _QWORD); // rbx
  int v31; // eax
  int v32; // eax
  int v33; // ebx
  CApplicationManager *v34; // rcx
  CApplicationManager *v35; // rcx
  __int64 v36; // rcx
  const struct _TlgProvider_t *v37; // rcx
  UINT32 cData; // [rsp+28h] [rbp-89h]
  int updated; // [rsp+48h] [rbp-69h] BYREF
  UINT32 v40; // [rsp+4Ch] [rbp-65h] BYREF
  char v41[4]; // [rsp+50h] [rbp-61h] BYREF
  int v42; // [rsp+54h] [rbp-5Dh] BYREF
  int v43; // [rsp+58h] [rbp-59h] BYREF
  int v44; // [rsp+5Ch] [rbp-55h] BYREF
  float v45; // [rsp+60h] [rbp-51h] BYREF
  int v46; // [rsp+64h] [rbp-4Dh]
  const unsigned __int16 *v47; // [rsp+68h] [rbp-49h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-39h] BYREF
  const char *v49; // [rsp+98h] [rbp-19h]
  __int64 v50; // [rsp+A0h] [rbp-11h]
  char *v51; // [rsp+A8h] [rbp-9h]
  __int64 v52; // [rsp+B0h] [rbp-1h]
  int *p_updated; // [rsp+B8h] [rbp+7h]
  __int64 v54; // [rsp+C0h] [rbp+Fh]

  v1 = *((_QWORD *)this + 3);
  v2 = FLOAT_1_0;
  updated = 0;
  v4 = 0;
  v45 = FLOAT_1_0;
  v5 = 0;
  v6 = *(_QWORD *)(v1 + 224);
  v46 = 0;
  v43 = 0;
  v42 = 0;
  v44 = 0;
  v40 = 0;
  *(_DWORD *)v41 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    if ( v7 > 2 )
      v8 = L"unknown";
    else
      v8 = off_180029EC8[v7];
    v9 = *(_DWORD *)(*((_QWORD *)this + 3) + 168LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 40LL))(*((_QWORD *)this + 1));
    cData = (unsigned int)v8;
    WPP_SF_dSd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, v9);
  }
  v10 = *((_QWORD *)this + 3);
  v11 = (struct IAudioProcess *)(v10 + 16);
  if ( !v10 )
    v11 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 40LL))(*((_QWORD *)this + 1));
  PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(v11, v12, &v40);
  v16 = v40;
  updated = PBMRelatedAudioStreamCategory;
  if ( PBMRelatedAudioStreamCategory >= 0 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2));
    v18 = (CProcess *)*((_QWORD *)this + 3);
    v19 = (const unsigned __int16 *)v17;
    v47 = (const unsigned __int16 *)v17;
    ActiveRenderStreamCount = CProcess::GetActiveRenderStreamCount(v18, 0xBu);
    v21 = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xAu) + ActiveRenderStreamCount;
    v22 = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 2u) + v21;
    v23 = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 1u);
    v24 = *((_QWORD *)this + 1);
    v40 = v22 + v23;
    v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 56LL))(v24);
    CProcess::UpdateStreamCountAndProcessCategory(*((CProcess **)this + 3), v19, v16, 1, v25, 0LL, 0LL);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1))
      || v16 == 2
      || (unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)v6)
      && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)v6)
      && (unsigned int)CApplication::HasSmtcSubscription(v6, 1) )
    {
      v26 = *((_QWORD *)this + 3);
      if ( *(_DWORD *)(v26 + 452) == 3 )
      {
        *(_QWORD *)(v26 + 452) = 0LL;
        *(_DWORD *)(v26 + 460) = 4;
      }
      CApplication::RemoveAudioPlaybackRestriction((CApplication *)v6);
      CProcess::DeleteInactivityTimer(*((CProcess **)this + 3));
      CApplication::CleanupBCMStartupLatencyGracePeriod((const wchar_t **)v6);
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1)) )
    {
      PBMRelatedAudioStreamCategory = 0;
      updated = 0;
    }
    else
    {
      if ( v16 == 2 )
        CApplication::ApplySmtcRelatedPolicy((CApplication *)v6);
      if ( *(_DWORD *)(*((_QWORD *)this + 3) + 424LL)
        && (v16 == 2
         || (unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)v6)
         && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)v6)
         && (unsigned int)CApplication::HasSmtcSubscription(v6, 1))
        && *(_DWORD *)(v6 + 336) )
      {
        CApplication::CleanupGoodFaithExemptionTimer((const wchar_t **)v6);
        if ( *(_DWORD *)(v6 + 468) == 2 )
        {
          *(_QWORD *)(v6 + 468) = 0LL;
          *(_QWORD *)(v6 + 476) = 0LL;
          *(_QWORD *)(v6 + 484) = 0LL;
          *(_DWORD *)(v6 + 492) = 1;
        }
        v27 = g_ApplicationManager;
        *(_DWORD *)(v6 + 336) = 0;
        CApplicationManager::ApplyPBMPolicy(v27, (struct CApplication *)v6, 209);
      }
      v28 = *((_QWORD *)this + 3);
      if ( !*(_DWORD *)(v28 + 416) && *(_DWORD *)(v6 + 120) )
      {
        v29 = *(_DWORD *)(v28 + 172);
        v30 = (__int64 (__fastcall **)(char *, _QWORD, const unsigned __int16 *, _QWORD))*((_QWORD *)g_StreamClassPolicyManager
                                                                                         + 2);
        cData = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1)) != 0;
        v31 = (*v30)((char *)g_StreamClassPolicyManager + 16, v29, v47, v16);
        v19 = v47;
        updated = v31;
      }
      if ( v16 == 14 || v16 == 17 )
      {
        v32 = CApplicationManager::ApplyEndpointVolumeOverride(
                (CApplicationManager *)&v43,
                v19,
                *(_DWORD *)(*((_QWORD *)this + 3) + 172LL),
                &v44,
                &v43,
                &v45,
                &v42,
                (int *)v41);
        v4 = v43;
        v5 = v44;
        v2 = v45;
        updated = v32;
      }
      if ( v46 || v5 )
        CApplicationManager::UpdateVolumeForAllAppsInSession(
          (__int64)g_ApplicationManager,
          *(_DWORD *)(v6 + 116),
          (v5 != 0) + 3);
      v33 = v42;
      if ( v4 || v42 )
      {
        Sleep(0x32u);
        updated = CApplicationManager::UpdateEndpointVolume(v34, v19, v4, v2, v33, *(unsigned int *)v41);
      }
      updated = CApplicationManager::ApplyPBMPolicyForAllAppsInSession(g_ApplicationManager, *(_DWORD *)(v6 + 116));
      if ( (v16 - 10 <= 1 || v16 - 1 <= 1) && !v40 )
        CApplication::SendTrackStateNotification(v6);
      if ( v16 - 10 <= 1 || v16 <= 2 )
        TS_SessionIdStreamStarted(
          *(_DWORD *)(*((_QWORD *)this + 3) + 172LL),
          *((struct IAudioStreamInfo **)this + 1),
          v19);
      if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v6) )
        CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v35);
      PBMRelatedAudioStreamCategory = updated;
    }
  }
  v36 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v36 + 424) && Microsoft_Windows_AudioEnableBits < 0 )
  {
    Template_zqq(v36, &EVT_PBM_STREAM_STARTED, *(const wchar_t **)(v6 + 16), *(_DWORD *)(v36 + 168), v16);
    PBMRelatedAudioStreamCategory = updated;
  }
  if ( PBMRelatedAudioStreamCategory < 0 )
  {
    v37 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xDu,
        &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids,
        PBMRelatedAudioStreamCategory);
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v50 = 9LL;
      v49 = "__FUNC__";
      v51 = v41;
      p_updated = &updated;
      *(_DWORD *)v41 = 278;
      v52 = 4LL;
      v54 = 4LL;
      TlgWrite(v37, &unk_18002D869, v14, v15, cData, &pData);
    }
  }
}
