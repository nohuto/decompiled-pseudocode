/*
 * XREFs of ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001A680
 * Callers:
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18003FA70 (-EventWorkerThread@@YAKPEAX@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x180002CA8 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x180002D08 (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180002EBC (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x18000300C (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180003228 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     Template_zqq @ 0x1800051EC (Template_zqq.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEBAAEAPEAIH@Z @ 0x18000B04C (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$C.c)
 *     ?UpdatePolicyForIncomingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x18000DC00 (-UpdatePolicyForIncomingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdevic.c)
 *     ?GetEndpointId@CAudioSession@@UEAAPEBGXZ @ 0x180010D00 (-GetEndpointId@CAudioSession@@UEAAPEBGXZ.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x1800114C0 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x180012330 (-SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180012458 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x1800129EC (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180012DE0 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x1800132D4 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x1800133C4 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001C754 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?GetCategory@CAudioStream@@UEAAKXZ @ 0x18001DF80 (-GetCategory@CAudioStream@@UEAAKXZ.c)
 *     ?IsCaptureStream@CAudioStream@@UEAAHXZ @ 0x18001E780 (-IsCaptureStream@CAudioStream@@UEAAHXZ.c)
 *     ?TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z @ 0x180030720 (-TS_SessionIdStreamStarted@@YAJKPEAUIAudioStreamInfo@@PEBG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?StartSoundLevelChangeCompletionTimer@CApplication@@IEAAXK@Z @ 0x180066FCC (-StartSoundLevelChangeCompletionTimer@CApplication@@IEAAXK@Z.c)
 *     WPP_SF_SS @ 0x18007E86C (WPP_SF_SS.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z @ 0x1800A1358 (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKPEAH1PEAM11@Z.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x1800A2090 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x1800A223C (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     WPP_SF_SSSSSSS @ 0x1800A2444 (WPP_SF_SSSSSSS.c)
 *     ?CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ @ 0x1800A2BD0 (-CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ.c)
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x1800A2D88 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     WPP_SF_dSd @ 0x1800A4054 (WPP_SF_dSd.c)
 *     ?StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x1800A700C (-StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CStreamStartedWorkItem::Invoke(CAudioStream **this)
{
  CStreamStartedWorkItem *v1; // r12
  const wchar_t **v2; // r15
  int v3; // r13d
  float v4; // xmm6_4
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned int (__fastcall *v7)(CAudioStream *__hidden); // rdi
  unsigned int Category; // eax
  unsigned int v9; // r14d
  int v10; // edi
  __int64 v11; // rcx
  const unsigned __int16 *(__fastcall *v12)(CAudioSession *); // rdi
  unsigned __int16 *EndpointId; // rax
  __int64 v14; // rdi
  int v15; // r12d
  int i; // ebx
  CAudioStream *v17; // rdi
  int v18; // r15d
  int j; // ebx
  CAudioStream *v20; // rdi
  int v21; // r14d
  int k; // ebx
  CAudioStream *v23; // rdi
  int v24; // esi
  int v25; // ebx
  __int64 (__fastcall *v26)(CAudioStream *__hidden); // rdi
  int IsCaptureStream; // eax
  unsigned __int16 *v28; // rsi
  __int64 (__fastcall *v29)(CAudioStream *__hidden); // rdi
  int v30; // eax
  __int64 v31; // rdx
  bool v32; // r8
  unsigned int v33; // r15d
  __int64 (__fastcall *v34)(CAudioStream *__hidden); // rdi
  int v35; // eax
  __int64 v36; // rdx
  bool v37; // r8
  __int64 (__fastcall *v38)(CAudioStream *__hidden); // rdi
  int v39; // eax
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v40; // edi
  DWORD v41; // esi
  __int64 (__fastcall *v42)(CStreamClassPolicyManager *, DWORD, const unsigned __int16 *, unsigned int, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001, int *); // r14
  CApplication *v43; // r14
  int v44; // ebx
  int v45; // edi
  int v46; // r15d
  CRefCountedObject *v47; // rbx
  struct _RTL_CRITICAL_SECTION *v48; // rsi
  _QWORD *v49; // r14
  __int64 v50; // rdi
  int v51; // r13d
  int v52; // r14d
  float v53; // r15d
  int v54; // r12d
  unsigned int v55; // esi
  BOOL v56; // ebx
  struct _RTL_CRITICAL_SECTION *v57; // r14
  unsigned int v58; // ebx
  __int64 v59; // rax
  unsigned int v60; // ebx
  __int64 v61; // rcx
  int v62; // eax
  BOOL v63; // ebx
  int v64; // ebx
  _QWORD *v65; // rcx
  __int64 v66; // rdx
  int v67; // eax
  __int64 *v68; // rax
  CAudioStream *v69; // rsi
  char v70; // di
  unsigned int v71; // eax
  __int64 v72; // rax
  CAudioStream *v73; // rax
  __int64 v74; // rdx
  bool v75; // r8
  CApplicationManager *v76; // rcx
  __int64 v77; // rbx
  __int64 v78; // rdx
  bool v79; // r8
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // r10
  __int64 v85; // r11
  __int64 v86; // rax
  __int64 v87; // r10
  int v88; // ebx
  __int64 *Next; // rax
  unsigned int v90; // edx
  float v91; // [rsp+50h] [rbp-B0h] BYREF
  int v92; // [rsp+54h] [rbp-ACh] BYREF
  CApplication *v93; // [rsp+58h] [rbp-A8h]
  int v94[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v95; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 *v96; // [rsp+70h] [rbp-90h]
  int v97; // [rsp+78h] [rbp-88h]
  _QWORD *v98; // [rsp+80h] [rbp-80h]
  LPCRITICAL_SECTION v99; // [rsp+88h] [rbp-78h] BYREF
  char v100; // [rsp+90h] [rbp-70h]
  LPCRITICAL_SECTION v101; // [rsp+98h] [rbp-68h] BYREF
  char v102; // [rsp+A0h] [rbp-60h]
  struct _RTL_CRITICAL_SECTION *v103; // [rsp+A8h] [rbp-58h]
  LPCRITICAL_SECTION v104; // [rsp+B0h] [rbp-50h] BYREF
  char v105; // [rsp+B8h] [rbp-48h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+C0h] [rbp-40h] BYREF
  char v107; // [rsp+C8h] [rbp-38h]
  LPCRITICAL_SECTION v108; // [rsp+D0h] [rbp-30h] BYREF
  char v109; // [rsp+D8h] [rbp-28h]
  _QWORD *v110; // [rsp+E0h] [rbp-20h] BYREF
  LPCRITICAL_SECTION v111; // [rsp+E8h] [rbp-18h] BYREF
  char v112; // [rsp+F0h] [rbp-10h]
  LPCRITICAL_SECTION v113; // [rsp+F8h] [rbp-8h] BYREF
  char v114; // [rsp+100h] [rbp+0h]
  __int64 v115; // [rsp+108h] [rbp+8h]
  unsigned int v117; // [rsp+178h] [rbp+78h]
  int v118; // [rsp+180h] [rbp+80h] BYREF
  int v119; // [rsp+188h] [rbp+88h] BYREF

  v115 = -2LL;
  v1 = (CStreamStartedWorkItem *)this;
  v2 = (const wchar_t **)*((_QWORD *)this[3] + 28);
  v93 = (CApplication *)v2;
  v95 = 0;
  v92 = 0;
  v119 = 0;
  v3 = 0;
  v118 = 0;
  v4 = FLOAT_1_0;
  v91 = FLOAT_1_0;
  v94[0] = 0;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v69 = this[1];
    v70 = (*(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v69 + 40LL))(v69);
    v71 = (*(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v69 + 48LL))(v69);
    v72 = StreamTypeToString(v71);
    WPP_SF_dSd(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), v72, v70);
  }
  v5 = *((_QWORD *)v1 + 3);
  if ( v5 )
    v6 = v5 + 16;
  else
    v6 = 0LL;
  v7 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(**((_QWORD **)v1 + 1) + 40LL);
  if ( v7 == CAudioStream::GetCategory )
    Category = CAudioStream::GetCategory(*((CAudioStream **)v1 + 1));
  else
    Category = v7(*((CAudioStream **)v1 + 1));
  v9 = Category;
  v117 = Category;
  v10 = 0;
  if ( Category >= 0x15 )
    v10 = -2147024809;
  v11 = (__int64)&_ImageBase;
  if ( v10 < 0 )
    goto LABEL_98;
  if ( dword_1800C6740[Category] && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 88LL))(v6) )
  {
    if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 120LL))(v6) )
      v9 = 0;
    v117 = v9;
  }
  v12 = *(const unsigned __int16 *(__fastcall **)(CAudioSession *))(**((_QWORD **)v1 + 2) + 72LL);
  if ( v12 == CAudioSession::GetEndpointId )
    EndpointId = (unsigned __int16 *)CAudioSession::GetEndpointId(*((CAudioSession **)v1 + 2));
  else
    EndpointId = (unsigned __int16 *)v12(*((CAudioSession **)v1 + 2));
  v96 = EndpointId;
  v14 = *((_QWORD *)v1 + 3);
  v15 = 0;
  for ( i = 0; i < *(_DWORD *)(v14 + 272); ++i )
    v15 += *(_DWORD *)(*(_QWORD *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::GetValueAt(
                                    v14 + 256,
                                    i)
                     + 44LL);
  v17 = this[3];
  v18 = 0;
  for ( j = 0; j < *((_DWORD *)v17 + 68); ++j )
    v18 += *(_DWORD *)(*(_QWORD *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::GetValueAt(
                                    (__int64)v17 + 256,
                                    j)
                     + 40LL);
  v20 = this[3];
  v21 = 0;
  for ( k = 0; k < *((_DWORD *)v20 + 68); ++k )
    v21 += *(_DWORD *)(*(_QWORD *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::GetValueAt(
                                    (__int64)v20 + 256,
                                    k)
                     + 8LL);
  v23 = this[3];
  v24 = 0;
  v25 = 0;
  if ( *((int *)v23 + 68) > 0 )
  {
    do
      v24 += *(_DWORD *)(*(_QWORD *)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::GetValueAt(
                                      (__int64)v23 + 256,
                                      v25++)
                       + 4LL);
    while ( v25 < *((_DWORD *)v23 + 68) );
    v3 = v118;
  }
  v97 = v15 + v18 + v24 + v21;
  v1 = (CStreamStartedWorkItem *)this;
  v26 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)this[1] + 56LL);
  if ( v26 == CAudioStream::IsCaptureStream )
    IsCaptureStream = CAudioStream::IsCaptureStream(this[1]);
  else
    IsCaptureStream = v26(this[1]);
  v9 = v117;
  v28 = v96;
  CProcess::UpdateStreamCountAndProcessCategory(this[3], (__int64)v96, v117, 1, IsCaptureStream, 0LL, 0LL);
  v29 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)this[1] + 56LL);
  if ( v29 == CAudioStream::IsCaptureStream )
    v30 = CAudioStream::IsCaptureStream(this[1]);
  else
    v30 = v29(this[1]);
  v33 = 4;
  if ( v30 || v117 == 2 )
  {
    v73 = this[3];
    if ( *((_DWORD *)v73 + 110) == 3 )
    {
      *((_QWORD *)v73 + 55) = 0LL;
      *((_DWORD *)v73 + 112) = 4;
    }
    CApplication::RemoveAudioPlaybackRestriction(v93, v31, v32);
    CProcess::DeleteInactivityTimer(this[3]);
    CApplication::CleanupBCMStartupLatencyGracePeriod(v93, v74, v75);
  }
  v34 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)this[1] + 56LL);
  if ( v34 == CAudioStream::IsCaptureStream )
    v35 = CAudioStream::IsCaptureStream(this[1]);
  else
    v35 = v34(this[1]);
  if ( v35 )
  {
    v10 = 0;
    v2 = (const wchar_t **)v93;
    goto LABEL_98;
  }
  if ( v117 == 2 )
    CApplication::ApplySmtcRelatedPolicy(v93, v36, v37);
  if ( *((_DWORD *)this[3] + 105) && v117 == 2 && *((_DWORD *)v93 + 84) )
    CApplication::CommitGoodFaithPLMExemption(v93);
  if ( !*((_DWORD *)this[3] + 104) && *((_DWORD *)v93 + 30) )
  {
    v38 = *(__int64 (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)this[1] + 56LL);
    if ( v38 == CAudioStream::IsCaptureStream )
      v39 = CAudioStream::IsCaptureStream(this[1]);
    else
      v39 = v38(this[1]);
    v40 = v39 != 0;
    v41 = *((_DWORD *)this[3] + 43);
    v42 = (__int64 (__fastcall *)(CStreamClassPolicyManager *, DWORD, const unsigned __int16 *, unsigned int, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001, int *))**((_QWORD **)g_StreamClassPolicyManager + 2);
    if ( v42 == CStreamClassPolicyManager::UpdatePolicyForIncomingStream )
    {
      v9 = v117;
      CStreamClassPolicyManager::UpdatePolicyForIncomingStream(
        (struct CStreamClassPolicyManager *)((char *)g_StreamClassPolicyManager + 16),
        v41,
        v96,
        v117,
        v40,
        &v95);
    }
    else
    {
      v42((struct CStreamClassPolicyManager *)((char *)g_StreamClassPolicyManager + 16), v41, v96, v117, v40, &v95);
      v9 = v117;
    }
    v28 = v96;
  }
  if ( v9 == 14 || v9 == 17 )
  {
    CApplicationManager::ApplyEndpointVolumeOverride(
      (CApplicationManager *)&v92,
      v28,
      *((_DWORD *)this[3] + 43),
      &v118,
      &v92,
      &v91,
      &v119,
      v94);
    v4 = v91;
    v3 = v118;
  }
  if ( v95 )
  {
    if ( !v3 )
      v33 = 3;
  }
  else if ( !v3 )
  {
    v43 = v93;
    goto LABEL_48;
  }
  v43 = v93;
  CApplicationManager::UpdateVolumeForAllAppsInSession(g_ApplicationManager, *((unsigned int *)v93 + 29), v33);
LABEL_48:
  v44 = v92;
  v45 = v119;
  if ( v92 || v119 )
  {
    Sleep(0x32u);
    CApplicationManager::UpdateEndpointVolume(v76, v28, v44, v4, v45, v94[0]);
  }
  v46 = *((_DWORD *)v43 + 29);
  v92 = v46;
  v47 = g_ApplicationManager;
  v48 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24);
  v103 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24);
  v113 = (LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24);
  v114 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v113);
  v49 = (_QWORD *)*((_QWORD *)v47 + 8);
  if ( v49 )
  {
    while ( 1 )
    {
      v50 = v49[2];
      v49 = (_QWORD *)*v49;
      v98 = v49;
      if ( *(_DWORD *)(v50 + 116) != v46 )
        goto LABEL_89;
      v111 = v48;
      v112 = 0;
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v111);
      v104 = v48;
      v105 = 0;
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v104);
      lpCriticalSection = v48;
      v107 = 0;
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
      if ( *(_DWORD *)(v50 + 480) )
      {
        v51 = *(_DWORD *)(v50 + 484);
      }
      else if ( *(_DWORD *)(v50 + 112) )
      {
        v51 = 2;
      }
      else
      {
        v77 = (int)CApplication::Category(v50);
        if ( (unsigned int)CApplication::HasBackgroundAudioTask((CApplication *)v50) )
        {
          v51 = 2;
        }
        else
        {
          if ( !dword_1800C6808[v77] )
          {
            v52 = 0;
            v51 = 0;
            v119 = 0;
            goto LABEL_55;
          }
          v51 = 2 - ((unsigned int)CApplication::HasDuckedStream((CApplication *)v50, v78, v79) != 0);
        }
      }
      v52 = 0;
      v119 = v51;
LABEL_55:
      if ( v107 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v107 = 0;
      }
      if ( *(_DWORD *)(v50 + 472) )
      {
        v53 = *(float *)(v50 + 476);
        v91 = v53;
      }
      else
      {
        v53 = *(float *)&v51;
        LODWORD(v91) = v51;
      }
      v101 = v48;
      v102 = 0;
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v101);
      if ( *(_DWORD *)(v50 + 488) )
      {
        v54 = *(_DWORD *)(v50 + 492);
        v118 = v54;
      }
      else
      {
        v99 = (LPCRITICAL_SECTION)(v50 + 24);
        v100 = 0;
        ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v99);
        v64 = 0;
        v65 = *(_QWORD **)(v50 + 64);
        if ( v65 )
        {
          while ( 1 )
          {
            v66 = v65[2];
            v65 = (_QWORD *)*v65;
            if ( !*(_DWORD *)(v66 + 416) )
            {
              if ( *(_DWORD *)(v66 + 460) )
                break;
            }
            if ( !v65 )
              goto LABEL_127;
          }
          v64 = 1;
        }
LABEL_127:
        if ( v100 )
        {
          LeaveCriticalSection(v99);
          v100 = 0;
        }
        if ( v64 )
        {
          v54 = 2;
          v118 = 2;
        }
        else
        {
          v67 = CApplication::Category(v50);
          if ( v67 )
          {
            if ( v51 && dword_1800C6808[v67] )
            {
              v54 = 2;
              v118 = 2;
            }
            else
            {
              v54 = 1;
              v118 = 1;
            }
          }
          else
          {
            v54 = 2;
            v118 = 2;
          }
        }
      }
      if ( v102 )
      {
        LeaveCriticalSection(v101);
        v102 = 0;
      }
      v11 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
      {
        SoundLevelToString(LODWORD(v53));
        v80 = SoundLevelToString((unsigned int)v51);
        WPP_SF_SSSSSSS(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          v81,
          v82,
          *(_QWORD *)(v50 + 16),
          v80,
          v81,
          v82,
          v83,
          v84,
          v85);
      }
      if ( v105 )
      {
        LeaveCriticalSection(v104);
        v105 = 0;
      }
      v55 = 209;
      do
      {
        v56 = 0;
        switch ( v55 & 7 )
        {
          case 1u:
            v62 = *(_DWORD *)(v50 + 120);
            v11 = v62 == 0;
            v63 = v11 != (LODWORD(v53) == 0);
            *(float *)(v50 + 120) = v53;
            if ( v62 != LODWORD(v53) )
            {
              if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
                && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
                && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
              {
                v86 = SoundLevelToString(LODWORD(v53));
                WPP_SF_SS(
                  *(_QWORD *)(v87 + 16),
                  13,
                  (unsigned int)&WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
                  *(_QWORD *)(v50 + 16),
                  v86);
              }
              if ( v63 )
              {
                v94[0] = 0;
                v88 = 0;
                v110 = *(_QWORD **)(v50 + 64);
                if ( v110 )
                {
                  do
                  {
                    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v11, &v110);
                    v11 = *Next;
                    if ( !*(_DWORD *)(*Next + 416) )
                    {
                      LOBYTE(v52) = LODWORD(v53) != 0;
                      CProcess::SimulateStreamStateChange((CProcess *)v11, v52, v94);
                      v88 |= v94[0];
                    }
                  }
                  while ( v110 );
                  if ( v88 )
                    CApplicationManager::UpdateVolumeForAllAppsInSession(
                      g_ApplicationManager,
                      *(unsigned int *)(v50 + 116),
                      3LL);
                }
                v52 = 0;
              }
              CApplication::RecalculateVolume(v50, 3u);
              EnterCriticalSection((LPCRITICAL_SECTION)(v50 + 128));
              *(_DWORD *)(v50 + 176) = 1;
              CApplication::StartSoundLevelChangeCompletionTimer((CApplication *)v50, v90);
              LeaveCriticalSection((LPCRITICAL_SECTION)(v50 + 128));
            }
            break;
          case 2u:
            v57 = (struct _RTL_CRITICAL_SECTION *)(v50 + 184);
            EnterCriticalSection((LPCRITICAL_SECTION)(v50 + 184));
            *(_DWORD *)(v50 + 228) = v51;
            if ( v51 < *(_DWORD *)(v50 + 232) )
              v56 = *(_DWORD *)(v50 + 176) != 0;
            LeaveCriticalSection((LPCRITICAL_SECTION)(v50 + 184));
            if ( !v56 )
            {
              EnterCriticalSection((LPCRITICAL_SECTION)(v50 + 184));
              if ( *(_DWORD *)(v50 + 224) )
                goto LABEL_117;
              *(_DWORD *)(v50 + 224) = 1;
              while ( 1 )
              {
                v58 = *(_DWORD *)(v50 + 228);
                if ( v58 == *(_DWORD *)(v50 + 232) && !*(_DWORD *)(v50 + 516) )
                  break;
                *(_DWORD *)(v50 + 232) = v58;
                LeaveCriticalSection((LPCRITICAL_SECTION)(v50 + 184));
                CApplication::SendSoundLevelNotification(v50, v58);
                EnterCriticalSection((LPCRITICAL_SECTION)(v50 + 184));
                *(_DWORD *)(v50 + 516) = 0;
              }
              *(_DWORD *)(v50 + 224) = 0;
              LeaveCriticalSection((LPCRITICAL_SECTION)(v50 + 184));
              v53 = v91;
            }
            goto LABEL_80;
          case 3u:
            v57 = (struct _RTL_CRITICAL_SECTION *)(v50 + 240);
            EnterCriticalSection((LPCRITICAL_SECTION)(v50 + 240));
            *(_DWORD *)(v50 + 284) = v54;
            if ( v54 == 1 )
              v56 = *(_DWORD *)(v50 + 176) != 0;
            LeaveCriticalSection((LPCRITICAL_SECTION)(v50 + 240));
            if ( !v56 )
            {
              EnterCriticalSection((LPCRITICAL_SECTION)(v50 + 240));
              if ( !*(_DWORD *)(v50 + 280) )
              {
                *(_DWORD *)(v50 + 280) = 1;
                if ( *(_DWORD *)(v50 + 284) )
                {
                  do
                  {
                    v60 = *(_DWORD *)(v50 + 284);
                    *(_DWORD *)(v50 + 284) = 0;
                    LeaveCriticalSection((LPCRITICAL_SECTION)(v50 + 240));
                    v108 = (LPCRITICAL_SECTION)(v50 + 24);
                    v109 = 0;
                    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v108);
                    v61 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
                    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
                      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
                      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
                    {
                      WPP_SF_D(
                        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                        16LL,
                        &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
                        v60);
                    }
                    *(_QWORD *)v94 = *(_QWORD *)(v50 + 64);
                    while ( *(_QWORD *)v94 )
                    {
                      v68 = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v61, (_QWORD **)v94);
                      CProcess::NotifyPLM(*v68, v60);
                    }
                    if ( v109 )
                    {
                      LeaveCriticalSection(v108);
                      v109 = 0;
                    }
                    EnterCriticalSection((LPCRITICAL_SECTION)(v50 + 240));
                  }
                  while ( *(_DWORD *)(v50 + 284) );
                  v54 = v118;
                  v51 = v119;
                  v53 = v91;
                }
                *(_DWORD *)(v50 + 280) = 0;
              }
LABEL_117:
              LeaveCriticalSection(v57);
            }
LABEL_80:
            v52 = 0;
            break;
          case 4u:
            Sleep(0xAu);
            break;
        }
        v55 >>= 3;
      }
      while ( v55 );
      if ( !v51 && v53 == 0.0 )
      {
        if ( v54 == 1 )
        {
          *(_QWORD *)(v50 + 468) = 0LL;
          *(_QWORD *)(v50 + 476) = 0LL;
          *(_QWORD *)(v50 + 484) = 0LL;
          *(_DWORD *)(v50 + 492) = 1;
          *(_DWORD *)(v50 + 468) = 1;
          *(_QWORD *)(v50 + 472) = 1LL;
          *(_QWORD *)(v50 + 480) = 1LL;
          *(_DWORD *)(v50 + 488) = 1;
          *(_DWORD *)(v50 + 492) = 1;
        }
        else if ( *(_DWORD *)(v50 + 468) != 6 )
        {
          *(_DWORD *)(v50 + 468) = 6;
          *(_QWORD *)(v50 + 472) = 1LL;
          *(_QWORD *)(v50 + 480) = 1LL;
        }
      }
      if ( v112 )
      {
        LeaveCriticalSection(v111);
        v112 = 0;
      }
      v46 = v92;
      v48 = v103;
      v49 = v98;
LABEL_89:
      if ( !v49 )
      {
        v1 = (CStreamStartedWorkItem *)this;
        break;
      }
    }
  }
  if ( v114 )
    LeaveCriticalSection(v113);
  v10 = 0;
  LOBYTE(v9) = v117;
  if ( v117 - 10 <= 1 || v117 - 1 <= 1 )
  {
    v2 = (const wchar_t **)v93;
    if ( !v97 )
      CApplication::SendTrackStateNotification((__int64)v93);
  }
  else
  {
    v2 = (const wchar_t **)v93;
  }
  if ( v117 <= 2 || v117 - 10 <= 1 )
    TS_SessionIdStreamStarted(*(_DWORD *)(*((_QWORD *)v1 + 3) + 172LL), *((struct IAudioStreamInfo **)v1 + 1), v96);
LABEL_98:
  v59 = *((_QWORD *)v1 + 3);
  if ( *(_DWORD *)(v59 + 420) && (Microsoft_Windows_AudioEnableBits & 0x80u) != 0 )
    Template_zqq(v11, &EVT_PBM_STREAM_STARTED, v2[2], *(_DWORD *)(v59 + 168), v9);
  if ( v10 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      13LL,
      &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      (unsigned int)v10);
  }
}
