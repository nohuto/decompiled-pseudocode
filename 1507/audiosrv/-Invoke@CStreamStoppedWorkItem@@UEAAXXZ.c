/*
 * XREFs of ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002C130
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18003FA70 (-EventWorkerThread@@YAKPEAX@Z.c)
 * Callees:
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x180002D08 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180003340 (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x1800034FC (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180003678 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     Template_zqq @ 0x1800051EC (Template_zqq.c)
 *     ?UpdatePolicyForOutgoingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x18000DB50 (-UpdatePolicyForOutgoingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdevic.c)
 *     ?GetEndpointId@CAudioSession@@UEAAPEBGXZ @ 0x180010D00 (-GetEndpointId@CAudioSession@@UEAAPEBGXZ.c)
 *     ?Category@CProcess@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180011498 (-Category@CProcess@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x1800114C0 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x18001C2F0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001C754 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?GetCategory@CAudioStream@@UEAAKXZ @ 0x18001DF80 (-GetCategory@CAudioStream@@UEAAKXZ.c)
 *     ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x18001E780 (-IsCaptureStream@CAudioStream@@UEAAHXZ.c)
 *     ?TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002C6A0 (-TS_SessionIdStreamStopped@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x1800A1F58 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x1800A223C (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x1800A3B64 (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     WPP_SF_dSd @ 0x1800A4054 (WPP_SF_dSd.c)
 *     ?StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x1800A700C (-StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z.c)
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
  __int64 v28; // rsi
  char v29; // di
  unsigned int v30; // eax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  bool v35; // r8
  CApplication *v36; // rbx
  __int64 v37; // rdx
  bool v38; // r8
  _DWORD *v39; // rax
  float v40; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v41; // [rsp+44h] [rbp-74h] BYREF
  int v42; // [rsp+48h] [rbp-70h] BYREF
  int v43; // [rsp+4Ch] [rbp-6Ch] BYREF
  CApplication *v44; // [rsp+50h] [rbp-68h]
  int v45; // [rsp+C0h] [rbp+8h] BYREF
  int v46; // [rsp+C8h] [rbp+10h] BYREF
  int v47; // [rsp+D0h] [rbp+18h] BYREF
  int v48; // [rsp+D8h] [rbp+20h] BYREF

  v1 = *(CApplication **)(*((_QWORD *)this + 3) + 224LL);
  v3 = 0;
  v4 = 0;
  v5 = FLOAT_1_0;
  v40 = FLOAT_1_0;
  v44 = v1;
  v46 = 0;
  v48 = 0;
  v45 = 0;
  v47 = 0;
  v41 = 0;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v28 = *((_QWORD *)this + 1);
    v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 40LL))(v28);
    v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 48LL))(v28);
    v31 = StreamTypeToString(v30);
    WPP_SF_dSd(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), v31, v29);
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
    if ( dword_1800C6740[Category]
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
      &v42,
      (enum _APPLICATION_CATEGORY *)&v43);
    v18 = eCapture;
    if ( v42 )
    {
      if ( v43 == 1 )
      {
        v32 = CProcess::Category(*((unsigned int **)this + 3));
        if ( v32 != 1 && !*(_DWORD *)(v34 + 444) && !*(_DWORD *)(v34 + 416) )
        {
          v36 = v44;
          if ( !(unsigned int)CApplication::GetTotalActiveCaptureStreamCount(v44, v33, v35) )
          {
            v39 = (_DWORD *)*((_QWORD *)this + 3);
            if ( v39[110] != 3 )
            {
              v39[110] = 3;
              v39[111] = 1;
              v39[112] = 1;
            }
            if ( !*((_DWORD *)v36 + 28) && *((_DWORD *)v36 + 30) )
              CApplication::RestrictAudioPlaybackToPrimaryCategories(v36, v37, v38);
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
      v1 = v44;
      v12 = 0;
    }
    else
    {
      if ( v11 - 10 > 1 && v11 - 1 > 1
        || (unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xBu)
        || (unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 0xAu)
        || (unsigned int)CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 2u) )
      {
        v21 = v44;
      }
      else
      {
        ActiveRenderStreamCount = CProcess::GetActiveRenderStreamCount(*((CProcess **)this + 3), 1u);
        v21 = v44;
        if ( !ActiveRenderStreamCount )
          CApplication::SendTrackStateNotification((__int64)v44);
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
            &v46);
        else
          v25((struct CStreamClassPolicyManager *)((char *)g_StreamClassPolicyManager + 16), v24, v15, v11, v18, &v46);
        v4 = v45;
      }
      if ( v11 == 14 || v11 == 17 )
      {
        CApplicationManager::RevertEndpointVolumeOverride(
          (CApplicationManager *)&v45,
          v15,
          *(_DWORD *)(*((_QWORD *)this + 3) + 172LL),
          &v48,
          &v45,
          &v40,
          &v47,
          (int *)&v41);
        v3 = v48;
        v5 = v40;
        v4 = v45;
      }
      if ( v46 || v3 )
      {
        v1 = v44;
        CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *((_DWORD *)v44 + 29), 3u);
      }
      else
      {
        v1 = v44;
      }
      if ( v4 || v47 )
        CApplicationManager::UpdateEndpointVolume((CApplicationManager *)v41, v15, v4, v5, v47, v41);
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
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      17LL,
      &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      (unsigned int)v12);
  }
}
