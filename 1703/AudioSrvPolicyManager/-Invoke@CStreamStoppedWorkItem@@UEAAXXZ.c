/*
 * XREFs of ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18001D8A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18000A2E8 (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18000B824 (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x18000B930 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18000C45C (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000C904 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000C970 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18000C9DC (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18000CA78 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18000E5F4 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x18000E878 (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x18000F7F0 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x1800128D4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x180012C4C (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x18001436C (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x1800144B0 (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x180014C10 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     WPP_SF_dSd @ 0x180015CA8 (WPP_SF_dSd.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18001C048 (-TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     Template_zqq @ 0x18001D1A0 (Template_zqq.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStreamStoppedWorkItem::Invoke(CStreamStoppedWorkItem *this)
{
  __int64 v1; // rax
  float v3; // xmm6_4
  __int64 v4; // r14
  int v5; // r12d
  int v6; // r13d
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
  __int64 v17; // rcx
  const unsigned __int16 *v18; // rdi
  int v19; // eax
  _DWORD *v20; // rax
  int v21; // ecx
  _DWORD *v22; // rax
  __int64 v23; // rax
  unsigned int v24; // edi
  __int64 v25; // rbx
  int v26; // eax
  __int64 v27; // rax
  int v28; // [rsp+28h] [rbp-50h]
  int v29; // [rsp+40h] [rbp-38h] BYREF
  int v30; // [rsp+44h] [rbp-34h] BYREF
  char v31[4]; // [rsp+48h] [rbp-30h] BYREF
  int v32; // [rsp+4Ch] [rbp-2Ch] BYREF
  __int64 v33; // [rsp+50h] [rbp-28h]
  unsigned int v34; // [rsp+C0h] [rbp+48h] BYREF
  int v35; // [rsp+C8h] [rbp+50h] BYREF
  int v36; // [rsp+D0h] [rbp+58h] BYREF
  float v37; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *((_QWORD *)this + 3);
  v3 = FLOAT_1_0;
  v37 = FLOAT_1_0;
  v4 = *(_QWORD *)(v1 + 224);
  v29 = 0;
  v5 = 0;
  v30 = 0;
  v6 = 0;
  v35 = 0;
  v36 = 0;
  v34 = 0;
  *(_DWORD *)v31 = 0;
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
    v28 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 40LL))(*((_QWORD *)this + 1));
    WPP_SF_dSd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x10u,
      &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids,
      v9,
      v8,
      v28);
  }
  v10 = *((_QWORD *)this + 3);
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 40LL))(*((_QWORD *)this + 1));
  PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(
                                    (struct IAudioProcess *)((v10 + 16) & -(__int64)(v10 != 0)),
                                    v11,
                                    &v34);
  v14 = v34;
  v15 = PBMRelatedAudioStreamCategory;
  if ( PBMRelatedAudioStreamCategory >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2));
    v17 = *((_QWORD *)this + 1);
    v18 = (const unsigned __int16 *)v16;
    v33 = v16;
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 56LL))(v17);
    CProcess::UpdateStreamCountAndProcessCategory(
      *((CProcess **)this + 3),
      v18,
      v14,
      0,
      v19,
      (int *)&v34,
      (enum _APPLICATION_CATEGORY *)&v32);
    v15 = 0;
    if ( v34 && v32 == 1 )
    {
      v20 = (_DWORD *)*((_QWORD *)this + 3);
      v21 = v20[114] ? v20[115] : v20[78];
      if ( v21 != 1
        && !v20[114]
        && !v20[104]
        && !(unsigned int)CApplication::GetTotalActiveCaptureStreamCount((CApplication *)v4) )
      {
        v22 = (_DWORD *)*((_QWORD *)this + 3);
        if ( v22[113] != 3 )
        {
          v22[113] = 3;
          v22[114] = 1;
          v22[115] = 1;
        }
        if ( !*(_DWORD *)(v4 + 168) && *(_DWORD *)(v4 + 176) )
          CApplication::RestrictAudioPlaybackToPrimaryCategories((CApplication *)v4);
        CProcess::StartInactivityTimer(*((CProcess **)this + 3));
      }
    }
    if ( (unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)v4)
      && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)v4)
      && (unsigned int)CApplication::HasSmtcSubscription(v4, 1)
      && !*(_DWORD *)(v4 + 168)
      && !*(_DWORD *)(*((_QWORD *)this + 3) + 416LL)
      && !(unsigned int)CApplication::GetTotalActiveCaptureStreamCount((CApplication *)v4) )
    {
      CProcess::StartInactivityTimer(*((CProcess **)this + 3));
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1)) )
    {
      if ( (v14 - 10 <= 1 || v14 - 1 <= 1)
        && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xBu)
        && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xAu)
        && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 2u)
        && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 1u) )
      {
        CApplication::SendTrackStateNotification(v4);
      }
      v23 = *((_QWORD *)this + 3);
      if ( !*(_DWORD *)(v23 + 416) && *(_DWORD *)(v4 + 176) )
      {
        v24 = *(_DWORD *)(v23 + 172);
        v25 = *((_QWORD *)g_StreamClassPolicyManager + 2);
        v26 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1));
        (*(void (__fastcall **)(char *, _QWORD, __int64, _QWORD, bool, int *))(v25 + 8))(
          (char *)g_StreamClassPolicyManager + 16,
          v24,
          v33,
          v14,
          v26 != 0,
          &v29);
        v18 = (const unsigned __int16 *)v33;
      }
      if ( v14 == 14 || v14 == 17 )
      {
        CApplicationManager::RevertEndpointVolumeOverride(
          (CApplicationManager *)&v35,
          v18,
          *(_DWORD *)(*((_QWORD *)this + 3) + 172LL),
          &v30,
          &v35,
          &v37,
          &v36,
          (int *)v31);
        v5 = v35;
        v6 = v36;
        v3 = v37;
      }
      if ( v29 || v30 )
        CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *(_DWORD *)(v4 + 172), 3u);
      if ( v5 || v6 )
        CApplicationManager::UpdateEndpointVolume(v13, v18, v5, v3, v6, *(unsigned int *)v31);
      v15 = CApplicationManager::ApplyPBMPolicyForAllAppsInSession(g_ApplicationManager, *(_DWORD *)(v4 + 172));
      if ( v14 - 10 <= 1 || v14 <= 2 )
        TS_SessionIdStreamStopped(
          *(_DWORD *)(*((_QWORD *)this + 3) + 172LL),
          *((struct IAudioStreamInfo **)this + 1),
          v18);
      if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v4) )
        CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v13);
    }
  }
  v27 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v27 + 424) && Microsoft_Windows_AudioEnableBits < 0 )
    Template_zqq((__int64)v13, &EVT_PBM_STREAM_STOPPED, *(const wchar_t **)(v4 + 24), *(_DWORD *)(v27 + 168), v14);
  if ( v15 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, v15);
    }
    AudPolicyLogError("CStreamStoppedWorkItem::Invoke", 512, v15);
  }
}
