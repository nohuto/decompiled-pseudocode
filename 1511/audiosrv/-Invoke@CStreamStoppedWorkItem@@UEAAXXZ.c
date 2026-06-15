/*
 * XREFs of ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002F360
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18003B460 (-EventWorkerThread@@YAKPEAX@Z.c)
 * Callees:
 *     Template_zqq @ 0x180002F64 (Template_zqq.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x180004770 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180004BB8 (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x180004E8C (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x18000535C (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x18001EAC0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001F254 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?GetCategory@CAudioStream@@UEAAKXZ @ 0x1800206A0 (-GetCategory@CAudioStream@@UEAAKXZ.c)
 *     ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x180020D50 (-IsCaptureStream@CAudioStream@@UEAAHXZ.c)
 *     ?GetEndpointId@CAudioSession@@UEAAPEBGXZ @ 0x180028B10 (-GetEndpointId@CAudioSession@@UEAAPEBGXZ.c)
 *     ?Category@CProcess@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180029258 (-Category@CProcess@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180029280 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?UpdatePolicyForOutgoingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x18002A6F0 (-UpdatePolicyForOutgoingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdevic.c)
 *     ?TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002F8C0 (-TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x18009F02C (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18009F3EC (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x1800A0ED4 (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     WPP_SF_dSd @ 0x1800A13C0 (WPP_SF_dSd.c)
 *     ?StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x1800A443C (-StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z.c)
 */

void __fastcall CStreamStoppedWorkItem::Invoke(CStreamStoppedWorkItem *this)
{
  CApplication *v1; // r13
  int v3; // r15d
  int v4; // r12d
  float v5; // xmm6_4
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 (__fastcall *v8)(CAudioStream *); // rdi
  unsigned int Category; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  int v12; // esi
  const unsigned __int16 *(__fastcall *v13)(CAudioSession *); // rsi
  const unsigned __int16 *EndpointId; // rax
  const unsigned __int16 *v15; // rbp
  _BOOL8 (__fastcall *v16)(CAudioStream *); // rsi
  int IsCaptureStream; // eax
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v18; // r13d
  _BOOL8 (__fastcall *v19)(CAudioStream *); // rsi
  BOOL v20; // eax
  CApplication *v21; // rbx
  _BOOL8 (__fastcall *v22)(CAudioStream *); // rsi
  BOOL v23; // eax
  DWORD v24; // esi
  __int64 (__fastcall *v25)(CStreamClassPolicyManager *, DWORD, const unsigned __int16 *, unsigned int, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001, int *); // r12
  __int64 v26; // rax
  int ActiveRenderStreamCount; // eax
  __int64 v28; // rdx
  bool v29; // r8
  __int64 v30; // rsi
  char v31; // di
  unsigned int v32; // eax
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  bool v37; // r8
  CApplication *v38; // rbx
  __int64 v39; // rdx
  bool v40; // r8
  _DWORD *v41; // rax
  float v42; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v43; // [rsp+44h] [rbp-74h] BYREF
  int v44; // [rsp+48h] [rbp-70h] BYREF
  int v45; // [rsp+4Ch] [rbp-6Ch] BYREF
  CApplication *v46; // [rsp+50h] [rbp-68h]
  int v47; // [rsp+C0h] [rbp+8h] BYREF
  int v48; // [rsp+C8h] [rbp+10h] BYREF
  int v49; // [rsp+D0h] [rbp+18h] BYREF
  int v50; // [rsp+D8h] [rbp+20h] BYREF

  v1 = *(CApplication **)(*((_QWORD *)this + 3) + 224LL);
  v3 = 0;
  v4 = 0;
  v5 = FLOAT_1_0;
  v42 = FLOAT_1_0;
  v46 = v1;
  v48 = 0;
  v50 = 0;
  v47 = 0;
  v49 = 0;
  v43 = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v30 = *((_QWORD *)this + 1);
    v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 40LL))(v30);
    v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 48LL))(v30);
    v33 = StreamTypeToString(v32);
    WPP_SF_dSd(*((_QWORD *)WPP_GLOBAL_Control + 2), v33, v31);
  }
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
    v7 = v6 + 16;
  else
    v7 = 0LL;
  v8 = *(__int64 (__fastcall **)(CAudioStream *))(**((_QWORD **)this + 1) + 40LL);
  if ( v8 == CAudioStream::GetCategory )
    Category = CAudioStream::GetCategory(*((CAudioStream **)this + 1));
  else
    Category = v8(*((CAudioStream **)this + 1));
  v11 = Category;
  v12 = 0;
  if ( Category >= 0x15 )
    v12 = -2147024809;
  if ( v12 >= 0 )
  {
    if ( dword_1800C4CF0[Category]
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 88LL))(v7)
      && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 120LL))(v7) )
    {
      v11 = 0;
    }
    v13 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *))(**((_QWORD **)this + 2) + 72LL);
    if ( v13 == CAudioSession::GetEndpointId )
      EndpointId = CAudioSession::GetEndpointId(*((CAudioSession **)this + 2));
    else
      EndpointId = v13(*((CAudioSession **)this + 2));
    v15 = EndpointId;
    v16 = *(_BOOL8 (__fastcall **)(CAudioStream *))(**((_QWORD **)this + 1) + 56LL);
    if ( v16 == CAudioStream::IsCaptureStream )
      IsCaptureStream = CAudioStream::IsCaptureStream(*((CAudioStream **)this + 1));
    else
      IsCaptureStream = v16(*((CAudioStream **)this + 1));
    CProcess::UpdateStreamCountAndProcessCategory(
      *((CProcess **)this + 3),
      (__int64)v15,
      v11,
      0,
      IsCaptureStream,
      &v44,
      (enum _APPLICATION_CATEGORY *)&v45);
    v18 = eCapture;
    if ( v44 )
    {
      if ( v45 == 1 )
      {
        v34 = CProcess::Category(*((unsigned int **)this + 3));
        if ( v34 != 1 && !*(_DWORD *)(v36 + 444) && !*(_DWORD *)(v36 + 416) )
        {
          v38 = v46;
          if ( !(unsigned int)CApplication::GetTotalActiveCaptureStreamCount(v46, v35, v37) )
          {
            v41 = (_DWORD *)*((_QWORD *)this + 3);
            if ( v41[110] != 3 )
            {
              v41[110] = 3;
              v41[111] = 1;
              v41[112] = 1;
            }
            if ( !*((_DWORD *)v38 + 28) && *((_DWORD *)v38 + 30) )
              CApplication::RestrictAudioPlaybackToPrimaryCategories(v38, v39, v40);
            CProcess::StartInactivityTimer(*((CProcess **)this + 3));
          }
        }
      }
    }
    v19 = *(_BOOL8 (__fastcall **)(CAudioStream *))(**((_QWORD **)this + 1) + 56LL);
    if ( v19 == CAudioStream::IsCaptureStream )
      v20 = CAudioStream::IsCaptureStream(*((CAudioStream **)this + 1));
    else
      v20 = v19(*((CAudioStream **)this + 1));
    if ( v20 )
    {
      v1 = v46;
      v12 = 0;
    }
    else
    {
      if ( v11 - 1 > 1 && v11 - 10 > 1
        || (unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xBu)
        || (unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xAu)
        || (unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 2u) )
      {
        v21 = v46;
      }
      else
      {
        ActiveRenderStreamCount = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 1u);
        v21 = v46;
        if ( !ActiveRenderStreamCount )
          CApplication::SendTrackStateNotification((__int64)v46, v28, v29);
      }
      if ( !*(_DWORD *)(*((_QWORD *)this + 3) + 416LL) && *((_DWORD *)v21 + 30) )
      {
        v22 = *(_BOOL8 (__fastcall **)(CAudioStream *))(**((_QWORD **)this + 1) + 56LL);
        if ( v22 == CAudioStream::IsCaptureStream )
          v23 = CAudioStream::IsCaptureStream(*((CAudioStream **)this + 1));
        else
          v23 = v22(*((CAudioStream **)this + 1));
        if ( !v23 )
          v18 = eRender;
        v24 = *(_DWORD *)(*((_QWORD *)this + 3) + 172LL);
        v25 = *(__int64 (__fastcall **)(CStreamClassPolicyManager *, DWORD, const unsigned __int16 *, unsigned int, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001, int *))(*((_QWORD *)g_StreamClassPolicyManager + 2) + 8LL);
        if ( v25 == CStreamClassPolicyManager::UpdatePolicyForOutgoingStream )
          CStreamClassPolicyManager::UpdatePolicyForOutgoingStream(
            (struct CStreamClassPolicyManager *)((char *)g_StreamClassPolicyManager + 16),
            v24,
            v15,
            v11,
            v18,
            &v48);
        else
          v25((struct CStreamClassPolicyManager *)((char *)g_StreamClassPolicyManager + 16), v24, v15, v11, v18, &v48);
        v4 = v47;
      }
      if ( v11 == 14 || v11 == 17 )
      {
        CApplicationManager::RevertEndpointVolumeOverride(
          (CApplicationManager *)&v47,
          v15,
          *(_DWORD *)(*((_QWORD *)this + 3) + 172LL),
          &v50,
          &v47,
          &v42,
          &v49,
          (int *)&v43);
        v3 = v50;
        v5 = v42;
        v4 = v47;
      }
      if ( v48 || v3 )
      {
        v1 = v46;
        CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *((_DWORD *)v46 + 29), 3u);
      }
      else
      {
        v1 = v46;
      }
      if ( v4 || v49 )
        CApplicationManager::UpdateEndpointVolume((CApplicationManager *)v43, v15, v4, v5, v49, v43);
      v12 = CApplicationManager::ApplyPBMPolicyForAllAppsInSession(g_ApplicationManager, *((_DWORD *)v1 + 29));
      if ( v11 <= 2 || (v10 = v11 - 10, (unsigned int)v10 <= 1) )
        TS_SessionIdStreamStopped(
          *(_DWORD *)(*((_QWORD *)this + 3) + 172LL),
          *((struct IAudioStreamInfo **)this + 1),
          v15);
    }
  }
  v26 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v26 + 420) && (Microsoft_Windows_AudioEnableBits & 0x80u) != 0 )
    Template_zqq(v10, &EVT_PBM_STREAM_STOPPED, *((const wchar_t **)v1 + 2), *(_DWORD *)(v26 + 168), v11);
  if ( v12 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      17LL,
      &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      (unsigned int)v12);
  }
}
