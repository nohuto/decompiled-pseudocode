/*
 * XREFs of ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002E5E0
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18003B460 (-EventWorkerThread@@YAKPEAX@Z.c)
 * Callees:
 *     Template_zqq @ 0x180002F64 (Template_zqq.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x180004710 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x180004770 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180004D74 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z @ 0x18001EAC0 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJK@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001F254 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?GetCategory@CAudioStream@@UEAAKXZ @ 0x1800206A0 (-GetCategory@CAudioStream@@UEAAKXZ.c)
 *     ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x180020D50 (-IsCaptureStream@CAudioStream@@UEAAHXZ.c)
 *     ?GetEndpointId@CAudioSession@@UEAAPEBGXZ @ 0x180028B10 (-GetEndpointId@CAudioSession@@UEAAPEBGXZ.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180029280 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?UpdatePolicyForIncomingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x18002A940 (-UpdatePolicyForIncomingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdevic.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEBAAEAPEAIH@Z @ 0x18002BC04 (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$C.c)
 *     ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x18002EDEC (-TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x18009E4C8 (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18009F3EC (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x18009FBE8 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ @ 0x18009FE30 (-CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x18009FFE8 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     WPP_SF_dSd @ 0x1800A13C0 (WPP_SF_dSd.c)
 *     ?StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x1800A443C (-StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z.c)
 */

void __fastcall CStreamStartedWorkItem::Invoke(CStreamStartedWorkItem *this)
{
  CApplication *v2; // rcx
  int v3; // r15d
  float v4; // xmm6_4
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 (__fastcall *v7)(CAudioStream *); // rdi
  unsigned int Category; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  int v11; // esi
  CAudioSession *v12; // rbx
  const unsigned __int16 *(__fastcall *v13)(CAudioSession *); // rsi
  unsigned __int16 *EndpointId; // rax
  __int64 v15; // rbx
  int v16; // ebp
  int v17; // esi
  __int64 ValueAt; // rax
  __int64 v19; // rbx
  int v20; // r13d
  int i; // esi
  __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // ebp
  int j; // esi
  __int64 v26; // rax
  __int64 v27; // rbx
  int v28; // esi
  int k; // r12d
  __int64 v30; // rax
  CAudioStream *v31; // rbx
  int v32; // r12d
  _BOOL8 (__fastcall *v33)(CAudioStream *); // rsi
  int IsCaptureStream; // eax
  unsigned __int16 *v35; // r13
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v36; // esi
  _BOOL8 (__fastcall *v37)(CAudioStream *); // rbp
  BOOL v38; // eax
  __int64 v39; // rdx
  bool v40; // r8
  _BOOL8 (__fastcall *v41)(CAudioStream *); // rbp
  BOOL v42; // eax
  _BOOL8 (__fastcall *v43)(CAudioStream *); // rbp
  BOOL v44; // eax
  DWORD v45; // ebp
  __int64 (__fastcall *v46)(CStreamClassPolicyManager *, DWORD, const unsigned __int16 *, unsigned int, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001, int *); // r12
  CApplication *v47; // rbp
  int v48; // ebx
  int v49; // eax
  __int64 v50; // rdx
  bool v51; // r8
  __int64 v52; // rax
  unsigned int v53; // r8d
  __int64 v54; // rsi
  char v55; // di
  unsigned int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  bool v60; // r8
  CApplicationManager *v61; // rcx
  int v62; // [rsp+40h] [rbp-78h] BYREF
  float v63; // [rsp+44h] [rbp-74h] BYREF
  int v64; // [rsp+48h] [rbp-70h] BYREF
  CApplication *v65; // [rsp+50h] [rbp-68h]
  unsigned __int16 *v66; // [rsp+58h] [rbp-60h]
  int v67; // [rsp+C0h] [rbp+8h] BYREF
  int v68; // [rsp+C8h] [rbp+10h] BYREF
  int v69; // [rsp+D0h] [rbp+18h] BYREF
  int v70; // [rsp+D8h] [rbp+20h]

  v2 = *(CApplication **)(*((_QWORD *)this + 3) + 224LL);
  v3 = 0;
  v4 = FLOAT_1_0;
  v63 = FLOAT_1_0;
  v65 = v2;
  v67 = 0;
  v62 = 0;
  v69 = 0;
  v68 = 0;
  v64 = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v54 = *((_QWORD *)this + 1);
    v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 40LL))(v54);
    v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 48LL))(v54);
    v57 = StreamTypeToString(v56);
    WPP_SF_dSd(*((_QWORD *)WPP_GLOBAL_Control + 2), v57, v55);
  }
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
    v6 = v5 + 16;
  else
    v6 = 0LL;
  v7 = *(__int64 (__fastcall **)(CAudioStream *))(**((_QWORD **)this + 1) + 40LL);
  if ( v7 == CAudioStream::GetCategory )
    Category = CAudioStream::GetCategory(*((CAudioStream **)this + 1));
  else
    Category = v7(*((CAudioStream **)this + 1));
  v10 = Category;
  v11 = 0;
  if ( Category >= 0x15 )
    v11 = -2147024809;
  if ( v11 < 0 )
  {
    v47 = v65;
    goto LABEL_56;
  }
  if ( dword_1800C4CF0[Category]
    && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 88LL))(v6)
    && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 120LL))(v6) )
  {
    v10 = 0;
  }
  v12 = (CAudioSession *)*((_QWORD *)this + 2);
  v13 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *))(*(_QWORD *)v12 + 72LL);
  if ( v13 == CAudioSession::GetEndpointId )
    EndpointId = (unsigned __int16 *)CAudioSession::GetEndpointId(v12);
  else
    EndpointId = (unsigned __int16 *)v13(v12);
  v15 = *((_QWORD *)this + 3);
  v16 = 0;
  v66 = EndpointId;
  v17 = 0;
  v70 = 0;
  if ( *(int *)(v15 + 272) > 0 )
  {
    do
    {
      ValueAt = ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::GetValueAt(
                  v15 + 256,
                  v17++);
      v16 += *(_DWORD *)(*(_QWORD *)ValueAt + 44LL);
    }
    while ( v17 < *(_DWORD *)(v15 + 272) );
    v70 = v16;
  }
  v19 = *((_QWORD *)this + 3);
  v20 = 0;
  for ( i = 0; i < *(_DWORD *)(v19 + 272); v20 += *(_DWORD *)(*(_QWORD *)v22 + 40LL) )
    v22 = ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::GetValueAt(
            v19 + 256,
            i++);
  v23 = *((_QWORD *)this + 3);
  v24 = 0;
  for ( j = 0; j < *(_DWORD *)(v23 + 272); v24 += *(_DWORD *)(*(_QWORD *)v26 + 8LL) )
    v26 = ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::GetValueAt(
            v23 + 256,
            j++);
  v27 = *((_QWORD *)this + 3);
  v28 = 0;
  for ( k = 0; k < *(_DWORD *)(v27 + 272); v28 += *(_DWORD *)(*(_QWORD *)v30 + 4LL) )
    v30 = ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::GetValueAt(
            v27 + 256,
            k++);
  v31 = (CAudioStream *)*((_QWORD *)this + 1);
  v32 = v70 + v20 + v28 + v24;
  v70 = v32;
  v33 = *(_BOOL8 (__fastcall **)(CAudioStream *))(*(_QWORD *)v31 + 56LL);
  if ( v33 == CAudioStream::IsCaptureStream )
    IsCaptureStream = CAudioStream::IsCaptureStream(v31);
  else
    IsCaptureStream = v33(v31);
  v35 = v66;
  v36 = eCapture;
  CProcess::UpdateStreamCountAndProcessCategory(
    *((CProcess **)this + 3),
    (__int64)v66,
    v10,
    1,
    IsCaptureStream,
    0LL,
    0LL);
  v37 = *(_BOOL8 (__fastcall **)(CAudioStream *))(**((_QWORD **)this + 1) + 56LL);
  if ( v37 == CAudioStream::IsCaptureStream )
    v38 = CAudioStream::IsCaptureStream(*((CAudioStream **)this + 1));
  else
    v38 = v37(*((CAudioStream **)this + 1));
  if ( v38 || v10 == 2 )
  {
    v58 = *((_QWORD *)this + 3);
    if ( *(_DWORD *)(v58 + 440) == 3 )
    {
      *(_QWORD *)(v58 + 440) = 0LL;
      *(_DWORD *)(v58 + 448) = 4;
    }
    CApplication::RemoveAudioPlaybackRestriction(v65, v39, v40);
    CProcess::DeleteInactivityTimer(*((CProcess **)this + 3));
    CApplication::CleanupBCMStartupLatencyGracePeriod(v65, v59, v60);
  }
  v41 = *(_BOOL8 (__fastcall **)(CAudioStream *))(**((_QWORD **)this + 1) + 56LL);
  if ( v41 == CAudioStream::IsCaptureStream )
    v42 = CAudioStream::IsCaptureStream(*((CAudioStream **)this + 1));
  else
    v42 = v41(*((CAudioStream **)this + 1));
  if ( v42 )
  {
    v47 = v65;
    v11 = 0;
    goto LABEL_56;
  }
  if ( v10 == 2 )
    CApplication::ApplySmtcRelatedPolicy(v65);
  if ( *(_DWORD *)(*((_QWORD *)this + 3) + 420LL) && v10 == 2 && *((_DWORD *)v65 + 84) )
    CApplication::CommitGoodFaithPLMExemption(v65);
  if ( !*(_DWORD *)(*((_QWORD *)this + 3) + 416LL) && *((_DWORD *)v65 + 30) )
  {
    v43 = *(_BOOL8 (__fastcall **)(CAudioStream *))(**((_QWORD **)this + 1) + 56LL);
    if ( v43 == CAudioStream::IsCaptureStream )
      v44 = CAudioStream::IsCaptureStream(*((CAudioStream **)this + 1));
    else
      v44 = v43(*((CAudioStream **)this + 1));
    if ( !v44 )
      v36 = eRender;
    v45 = *(_DWORD *)(*((_QWORD *)this + 3) + 172LL);
    v46 = (__int64 (__fastcall *)(CStreamClassPolicyManager *, DWORD, const unsigned __int16 *, unsigned int, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001, int *))**((_QWORD **)g_StreamClassPolicyManager + 2);
    if ( v46 == CStreamClassPolicyManager::UpdatePolicyForIncomingStream )
      CStreamClassPolicyManager::UpdatePolicyForIncomingStream(
        (struct CStreamClassPolicyManager *)((char *)g_StreamClassPolicyManager + 16),
        v45,
        v35,
        v10,
        v36,
        &v67);
    else
      v46((struct CStreamClassPolicyManager *)((char *)g_StreamClassPolicyManager + 16), v45, v35, v10, v36, &v67);
    v32 = v70;
  }
  if ( v10 == 14 || v10 == 17 )
  {
    CApplicationManager::ApplyEndpointVolumeOverride(
      (CApplicationManager *)&v62,
      v35,
      *(_DWORD *)(*((_QWORD *)this + 3) + 172LL),
      &v68,
      &v62,
      &v63,
      &v69,
      &v64);
    v3 = v62;
    v4 = v63;
  }
  if ( !v67 )
  {
    if ( !v68 )
    {
      v47 = v65;
      goto LABEL_50;
    }
    goto LABEL_68;
  }
  if ( v68 )
  {
LABEL_68:
    v53 = 4;
    goto LABEL_65;
  }
  v53 = 3;
LABEL_65:
  v47 = v65;
  CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, *((_DWORD *)v65 + 29), v53);
LABEL_50:
  v48 = v69;
  if ( v3 || v69 )
  {
    Sleep(0x32u);
    CApplicationManager::UpdateEndpointVolume(v61, v35, v3, v4, v48, v64);
  }
  v49 = CApplicationManager::ApplyPBMPolicyForAllAppsInSession(g_ApplicationManager, *((_DWORD *)v47 + 29));
  v9 = v10 - 1;
  v11 = v49;
  if ( (unsigned int)v9 <= 1 || (v9 = v10 - 10, (unsigned int)v9 <= 1) )
  {
    if ( !v32 )
      CApplication::SendTrackStateNotification((__int64)v47, v50, v51);
  }
  if ( v10 <= 2 || v10 - 10 <= 1 )
    TS_SessionIdStreamStarted(*(_DWORD *)(*((_QWORD *)this + 3) + 172LL), *((struct IAudioStreamInfo **)this + 1), v35);
LABEL_56:
  v52 = *((_QWORD *)this + 3);
  if ( *(_DWORD *)(v52 + 420) && (Microsoft_Windows_AudioEnableBits & 0x80u) != 0 )
    Template_zqq(v9, &EVT_PBM_STREAM_STARTED, *((const wchar_t **)v47 + 2), *(_DWORD *)(v52 + 168), v10);
  if ( v11 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      (unsigned int)v11);
  }
}
