/*
 * XREFs of ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x180020390
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x18000A564 (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18000BC8C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x18000BDA0 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18000CAF4 (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D018 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D08C (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x18000D100 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18000D1A0 (-HasSmtcSubscription@CApplication@@QEAAHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18000EE3C (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x18000EFC8 (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180010178 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180013F9C (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x180014368 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x180015B68 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x180015D24 (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18001662C (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     WPP_SF_dSd @ 0x180017B94 (WPP_SF_dSd.c)
 *     ?TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18001E348 (-TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     Template_zqq @ 0x18001F7D4 (Template_zqq.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CStreamStoppedWorkItem::Invoke(CStreamStoppedWorkItem *this)
{
  __int64 v1; // rax
  float v2; // xmm6_4
  int v4; // r12d
  int v5; // r13d
  __int64 v6; // r14
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
  __int64 v18; // rcx
  const unsigned __int16 *v19; // rbx
  int v20; // eax
  _DWORD *v21; // rax
  int v22; // ecx
  _DWORD *v23; // rax
  CApplicationManager *v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // edi
  __int64 v27; // rbx
  int v28; // eax
  int v29; // eax
  CApplicationManager *v30; // rcx
  __int64 v31; // rcx
  const struct _TlgProvider_t *v32; // rcx
  UINT32 cData; // [rsp+28h] [rbp-89h]
  int updated; // [rsp+48h] [rbp-69h] BYREF
  UINT32 v35; // [rsp+4Ch] [rbp-65h] BYREF
  int v36; // [rsp+50h] [rbp-61h] BYREF
  int v37; // [rsp+54h] [rbp-5Dh] BYREF
  int v38; // [rsp+58h] [rbp-59h] BYREF
  float v39; // [rsp+5Ch] [rbp-55h] BYREF
  int v40; // [rsp+60h] [rbp-51h]
  int v41; // [rsp+64h] [rbp-4Dh] BYREF
  char v42[4]; // [rsp+68h] [rbp-49h] BYREF
  const unsigned __int16 *v43; // [rsp+70h] [rbp-41h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-39h] BYREF
  const char *v45; // [rsp+98h] [rbp-19h]
  __int64 v46; // [rsp+A0h] [rbp-11h]
  int *v47; // [rsp+A8h] [rbp-9h]
  __int64 v48; // [rsp+B0h] [rbp-1h]
  int *p_updated; // [rsp+B8h] [rbp+7h]
  __int64 v50; // [rsp+C0h] [rbp+Fh]

  v1 = *((_QWORD *)this + 3);
  v2 = FLOAT_1_0;
  updated = 0;
  v4 = 0;
  v39 = FLOAT_1_0;
  v5 = 0;
  v6 = *(_QWORD *)(v1 + 224);
  v40 = 0;
  v41 = 0;
  v37 = 0;
  v38 = 0;
  v35 = 0;
  *(_DWORD *)v42 = 0;
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
    WPP_SF_dSd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids, v9);
  }
  v10 = *((_QWORD *)this + 3);
  v11 = (struct IAudioProcess *)(v10 + 16);
  if ( !v10 )
    v11 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 40LL))(*((_QWORD *)this + 1));
  PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(v11, v12, &v35);
  v16 = v35;
  updated = PBMRelatedAudioStreamCategory;
  if ( PBMRelatedAudioStreamCategory >= 0 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 72LL))(*((_QWORD *)this + 2));
    v18 = *((_QWORD *)this + 1);
    v19 = (const unsigned __int16 *)v17;
    v43 = (const unsigned __int16 *)v17;
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 56LL))(v18);
    CProcess::UpdateStreamCountAndProcessCategory(
      *((CProcess **)this + 3),
      v19,
      v16,
      0,
      v20,
      (int *)&v35,
      (enum _APPLICATION_CATEGORY *)&v36);
    if ( v35 && v36 == 1 )
    {
      v21 = (_DWORD *)*((_QWORD *)this + 3);
      v22 = v21[114] ? v21[115] : v21[78];
      if ( v22 != 1
        && !v21[114]
        && !v21[104]
        && !(unsigned int)CApplication::GetTotalActiveCaptureStreamCount((CApplication *)v6) )
      {
        v23 = (_DWORD *)*((_QWORD *)this + 3);
        if ( v23[113] != 3 )
        {
          v23[113] = 3;
          v23[114] = 1;
          v23[115] = 1;
        }
        if ( !*(_DWORD *)(v6 + 112) && *(_DWORD *)(v6 + 120) )
          CApplication::RestrictAudioPlaybackToPrimaryCategories((CApplication *)v6);
        CProcess::StartInactivityTimer(*((CProcess **)this + 3));
      }
    }
    if ( (unsigned int)CApplication::IsBackgroundAudioCapable((CApplication *)v6)
      && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable((CApplication *)v6)
      && (unsigned int)CApplication::HasSmtcSubscription(v6, 1)
      && !*(_DWORD *)(v6 + 112)
      && !*(_DWORD *)(*((_QWORD *)this + 3) + 416LL)
      && !(unsigned int)CApplication::GetTotalActiveCaptureStreamCount((CApplication *)v6) )
    {
      CProcess::StartInactivityTimer(*((CProcess **)this + 3));
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1)) )
    {
      PBMRelatedAudioStreamCategory = 0;
      updated = 0;
    }
    else
    {
      if ( (v16 - 10 <= 1 || v16 - 1 <= 1)
        && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xBu)
        && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xAu)
        && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 2u)
        && !(unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 1u) )
      {
        CApplication::SendTrackStateNotification(v6);
      }
      v25 = *((_QWORD *)this + 3);
      if ( !*(_DWORD *)(v25 + 416) && *(_DWORD *)(v6 + 120) )
      {
        v26 = *(_DWORD *)(v25 + 172);
        v27 = *((_QWORD *)g_StreamClassPolicyManager + 2);
        cData = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 56LL))(*((_QWORD *)this + 1)) != 0;
        v28 = (*(__int64 (__fastcall **)(char *, _QWORD, const unsigned __int16 *, _QWORD))(v27 + 8))(
                (char *)g_StreamClassPolicyManager + 16,
                v26,
                v43,
                v16);
        v19 = v43;
        updated = v28;
      }
      if ( v16 == 14 || v16 == 17 )
      {
        v29 = CApplicationManager::RevertEndpointVolumeOverride(
                (CApplicationManager *)&v37,
                v19,
                *(_DWORD *)(*((_QWORD *)this + 3) + 172LL),
                &v41,
                &v37,
                &v39,
                &v38,
                (int *)v42);
        v4 = v37;
        v5 = v38;
        v2 = v39;
        updated = v29;
      }
      if ( v40 || v41 )
        CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *(_DWORD *)(v6 + 116), 3u);
      if ( v4 || v5 )
        updated = CApplicationManager::UpdateEndpointVolume(v24, v19, v4, v2, v5, *(unsigned int *)v42);
      updated = CApplicationManager::ApplyPBMPolicyForAllAppsInSession(g_ApplicationManager, *(_DWORD *)(v6 + 116));
      if ( v16 - 10 <= 1 || v16 <= 2 )
        TS_SessionIdStreamStopped(
          *(_DWORD *)(*((_QWORD *)this + 3) + 172LL),
          *((struct IAudioStreamInfo **)this + 1),
          v19);
      if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v6) )
        CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v30);
      PBMRelatedAudioStreamCategory = updated;
    }
  }
  v31 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v31 + 424) && Microsoft_Windows_AudioEnableBits < 0 )
  {
    Template_zqq(v31, &EVT_PBM_STREAM_STOPPED, *(const wchar_t **)(v6 + 16), *(_DWORD *)(v31 + 168), v16);
    PBMRelatedAudioStreamCategory = updated;
  }
  if ( PBMRelatedAudioStreamCategory < 0 )
  {
    v32 = (const struct _TlgProvider_t *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x11u,
        &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids,
        PBMRelatedAudioStreamCategory);
    }
    if ( (unsigned int)dword_180034030 > 2 )
    {
      v46 = 9LL;
      v45 = "__FUNC__";
      v47 = &v36;
      p_updated = &updated;
      v36 = 512;
      v48 = 4LL;
      v50 = 4LL;
      TlgWrite(v32, &unk_18002D869, v14, v15, cData, &pData);
    }
  }
}
