/*
 * XREFs of ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140002700
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x1400015C8 (-ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_KPEAVCPipeInstance@@@Z @ 0x140001620 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_KPEAVCPi.c)
 *     ?DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140001764 (-DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140001810 (-ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140001D10 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ @ 0x140001D84 (-GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ.c)
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x140003150 (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 *     ?Find@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCStreamInstance@@PEAU3@@Z @ 0x14000374C (-Find@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEBAPEA.c)
 *     ?RemoveAt@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1400037C4 (-RemoveAt@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEA.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x140004BD0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009490 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140009F60 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000B474 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_S.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000E110 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x1400250A4 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x1400253F8 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamInstance@@@Z @ 0x1400257AC (-AddHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     ??0?$CComQIPtr@UISaDeviceInternal@@$1?_GUID_f023913b_e06a_4278_a498_925381e3c23a@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140025954 (--0-$CComQIPtr@UISaDeviceInternal@@$1-_GUID_f023913b_e06a_4278_a498_925381e3c23a@@3U__s_GUID@@B@.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CStreamGroup::CreateStream(
        CStreamGroup *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  struct SYSTEM_AUDIO_STREAM *v4; // r13
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v6; // r12
  struct CStreamInstance *v7; // r14
  DWORD DueTime; // ebx
  CPipeInstance *v9; // rbx
  int StreamInstance; // esi
  __int64 v11; // rax
  HANDLE CurrentProcess; // rdi
  HANDLE v13; // rax
  HANDLE v14; // rdi
  HANDLE v15; // rax
  struct CStreamInstance *v16; // rdi
  struct ISaDeviceInternal *v17; // rdx
  struct ATL::CAtlPlex *v18; // rax
  int v19; // edx
  _QWORD *v20; // rax
  int i; // edx
  struct ISaDeviceInternal **v22; // rax
  struct ISaDeviceInternal *v23; // rcx
  __int64 v24; // rcx
  HANDLE v25; // rax
  HANDLE v26; // rax
  struct SYSTEM_AUDIO_STREAM **v27; // rdx
  unsigned int v28; // edx
  ATL::CAtlException *v30; // rbx
  ATL::CAtlException *v31; // rbx
  struct CStreamInstance *v32; // rdi
  CStreamInstance *v33; // rcx
  __int64 v34; // rax
  signed int LastError; // eax
  signed int v36; // eax
  const struct CPipeInstance *v37; // rdi
  struct ISaDeviceInternal *v38; // rsi
  __int64 StreamGroupLatency; // rax
  const struct CPipeInstance *v40; // r8
  __int64 v41; // rax
  struct SYSTEM_AUDIO_STREAM *v42[5]; // [rsp+0h] [rbp-E8h] BYREF
  struct ISaDeviceInternal *v43; // [rsp+40h] [rbp-A8h] BYREF
  CPipeInstance *v44; // [rsp+48h] [rbp-A0h] BYREF
  struct CStreamInstance *v45; // [rsp+50h] [rbp-98h] BYREF
  HANDLE hObject; // [rsp+58h] [rbp-90h] BYREF
  HANDLE TargetHandle; // [rsp+60h] [rbp-88h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-80h] BYREF
  char v49; // [rsp+70h] [rbp-78h]
  void *phNewTimer[2]; // [rsp+78h] [rbp-70h] BYREF
  DWORD CurrentThreadId; // [rsp+88h] [rbp-60h]
  const wchar_t *v52; // [rsp+90h] [rbp-58h]
  __int64 v53; // [rsp+98h] [rbp-50h]
  ATL::CAtlException *v54; // [rsp+A0h] [rbp-48h] BYREF
  ATL::CAtlException *v55; // [rsp+A8h] [rbp-40h] BYREF
  struct CStreamInstance *v56; // [rsp+F0h] [rbp+8h] BYREF
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v57; // [rsp+F8h] [rbp+10h]
  struct SYSTEM_AUDIO_STREAM *v58; // [rsp+108h] [rbp+20h] BYREF

  v58 = a4;
  v57 = a2;
  v56 = this;
  v53 = -2LL;
  v4 = a4;
  v6 = a2;
  v7 = this;
  DueTime = g_AudioDgWatchDogTimerInMs;
  phNewTimer[0] = 0LL;
  phNewTimer[1] = &dword_1400540B0;
  CurrentThreadId = GetCurrentThreadId();
  v52 = L"CStreamGroup::CreateStream";
  if ( DueTime >= 0x3E8 )
    CreateTimerQueueTimer(phNewTimer, 0LL, CWatchdogTimer::TimerCallback, phNewTimer, DueTime, 0, 0x20u);
  v9 = 0LL;
  v44 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v7 + 160);
  v49 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  TargetHandle = 0LL;
  hObject = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 3) = 0LL;
  if ( *((_BYTE *)v7 + 80) )
  {
    v56 = 0LL;
    StreamInstance = CStreamInstance::CreateStreamInstance(&v56, v6, (__int64)v7, 0LL);
    if ( StreamInstance < 0 )
      goto LABEL_52;
    StreamInstance = 0;
    try
    {
      v32 = v56;
      v45 = v56;
      ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::AddHead((char *)v7 + 96, &v45);
    }
    catch ( ATL::CAtlException *v54 )
    {
      v27 = v42;
      v30 = v54;
      if ( *(_DWORD *)v54 == -1073741571 )
        _resetstkoflw();
      LODWORD(v43) = *(_DWORD *)v30;
      StreamInstance = (int)v43;
      v9 = v44;
      if ( (int)v43 >= 0 )
      {
        v4 = v58;
        v32 = v56;
        goto LABEL_51;
      }
LABEL_52:
      v33 = v56;
LABEL_53:
      if ( !v33 )
        goto LABEL_36;
      goto LABEL_84;
    }
LABEL_51:
    *((_QWORD *)v4 + 6) = *((_QWORD *)v32 + 1);
    v33 = 0LL;
    goto LABEL_53;
  }
  StreamInstance = ValidateStreamDescriptor(v6);
  if ( StreamInstance >= 0 )
  {
    if ( *((_DWORD *)v7 + 60) == *(_DWORD *)v6 && *((_QWORD *)v7 + 27) != *((_QWORD *)v6 + 5) )
    {
      StreamInstance = -2147024809;
    }
    else
    {
      v11 = *(_QWORD *)((char *)v6 + 108) - *((_QWORD *)v7 + 28);
      if ( !v11 )
        v11 = *(_QWORD *)((char *)v6 + 116) - *((_QWORD *)v7 + 29);
      if ( !v11 )
        goto LABEL_10;
      v34 = *(_QWORD *)((char *)v6 + 108) - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( !v34 )
        v34 = *(_QWORD *)((char *)v6 + 116) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( v34 )
      {
        StreamInstance = -2147024809;
      }
      else
      {
LABEL_10:
        StreamInstance = CPipeInstance::CreateStreamPipeInstance(
                           *((struct IDeviceGraphObjectCache **)v7 + 31),
                           v6,
                           *((struct CPipeInstance **)v7 + 11),
                           *((struct tWAVEFORMATEX **)v7 + 26),
                           v42[4],
                           &v44);
        v9 = v44;
        if ( StreamInstance >= 0 )
        {
          StreamInstance = CPipeInstance::Initialize(v44);
          if ( StreamInstance >= 0 )
          {
            StreamInstance = CPipeInstance::ConnectAPOs(v9, a3);
            if ( StreamInstance >= 0 )
            {
              *((_QWORD *)v6 + 3) = v9;
              StreamInstance = CPipeInstance::CreateStreamInstance(v9, v6, v4);
              if ( StreamInstance >= 0 )
              {
                CurrentProcess = GetCurrentProcess();
                v13 = GetCurrentProcess();
                if ( !DuplicateHandle(v13, *((HANDLE *)v4 + 3), CurrentProcess, &TargetHandle, 0, 0, 2u) )
                {
                  LastError = GetLastError();
                  StreamInstance = LastError;
                  if ( LastError > 0 )
                    StreamInstance = (unsigned __int16)LastError | 0x80070000;
                }
                if ( StreamInstance >= 0 )
                {
                  v14 = GetCurrentProcess();
                  v15 = GetCurrentProcess();
                  if ( !DuplicateHandle(v15, *((HANDLE *)v4 + 4), v14, &hObject, 0, 0, 2u) )
                  {
                    v36 = GetLastError();
                    StreamInstance = v36;
                    if ( v36 > 0 )
                      StreamInstance = (unsigned __int16)v36 | 0x80070000;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v16 = 0LL;
  v45 = 0LL;
  if ( StreamInstance < 0 )
    goto LABEL_76;
  StreamInstance = CStreamInstance::CreateStreamInstance(&v45, v6, (__int64)v9, v9);
  if ( StreamInstance < 0 )
  {
LABEL_75:
    v16 = v45;
    goto LABEL_76;
  }
  v9 = 0LL;
  v44 = 0LL;
  if ( *((_QWORD *)v7 + 32) )
  {
    ATL::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>(&v43);
    v37 = (const struct CPipeInstance *)*((_QWORD *)v7 + 34);
    v38 = v43;
    StreamGroupLatency = CStreamGroup::GetStreamGroupLatency(v7);
    v40 = v37;
    v16 = v45;
    StreamInstance = CStreamInstance::ConnectToSaDevice(v45, v38, v40, StreamGroupLatency);
    if ( v43 )
      (*(void (__fastcall **)(struct ISaDeviceInternal *))(*(_QWORD *)v43 + 16LL))(v43);
  }
  else
  {
    v16 = v45;
  }
  if ( StreamInstance < 0 )
    goto LABEL_76;
  StreamInstance = 0;
  try
  {
    v17 = (struct ISaDeviceInternal *)*((_QWORD *)v7 + 12);
    v43 = v17;
    if ( !*((_QWORD *)v7 + 16) )
    {
      v18 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)v7 + 15, *((unsigned int *)v7 + 34), 0x18uLL);
      if ( !v18 )
        ATL::AtlThrowImpl(-2147024882);
      v19 = *((_DWORD *)v7 + 34);
      v20 = (_QWORD *)((char *)v18 + 16 * (v19 - 1) + 8 * (unsigned int)(v19 - 1) + 8);
      for ( i = v19 - 1; i >= 0; --i )
      {
        *v20 = *((_QWORD *)v7 + 16);
        *((_QWORD *)v7 + 16) = v20;
        v20 -= 3;
      }
      v17 = v43;
    }
    v22 = (struct ISaDeviceInternal **)*((_QWORD *)v7 + 16);
    v43 = (struct ISaDeviceInternal *)v22;
    v23 = *v22;
    if ( v22 )
      v22[2] = v16;
    *((_QWORD *)v7 + 16) = v23;
    v22[1] = 0LL;
    *v22 = v17;
    ++*((_QWORD *)v7 + 14);
    v24 = *((_QWORD *)v7 + 12);
    if ( v24 )
      *(_QWORD *)(v24 + 8) = v22;
    else
      *((_QWORD *)v7 + 13) = v22;
    *((_QWORD *)v7 + 12) = v22;
  }
  catch ( ATL::CAtlException *v55 )
  {
    v31 = v55;
    if ( *(_DWORD *)v55 == -1073741571 )
      _resetstkoflw();
    LODWORD(v43) = *(_DWORD *)v31;
    StreamInstance = (int)v43;
    v7 = v56;
    if ( (int)v43 < 0 )
    {
      if ( *((_QWORD *)v56 + 32) )
      {
        ATL::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>(&v56);
        v16 = v45;
        CStreamInstance::DisconnectFromSaDevice((struct CPipeInstance **)v45, v56);
        if ( v56 )
          (*(void (__fastcall **)(struct CStreamInstance *))(*(_QWORD *)v56 + 16LL))(v56);
        v4 = v58;
        v9 = v44;
        goto LABEL_76;
      }
      v4 = v58;
      v9 = v44;
      goto LABEL_75;
    }
    v4 = v58;
    v6 = v57;
    v9 = v44;
    v16 = v45;
  }
  v25 = TargetHandle;
  TargetHandle = 0LL;
  *((_QWORD *)v4 + 3) = v25;
  v26 = hObject;
  hObject = 0LL;
  *((_QWORD *)v4 + 4) = v26;
  *((_QWORD *)v4 + 6) = *((_QWORD *)v16 + 1);
  v16 = 0LL;
  v45 = 0LL;
  if ( StreamInstance < 0 )
  {
LABEL_76:
    v58 = v16;
    v41 = ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::Find((char *)v7 + 96, &v58);
    if ( v41 )
      ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAt((char *)v7 + 96, v41);
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        12LL,
        &WPP_038ebcd9436636c4ced351fd008a2e04_Traceguids,
        (unsigned int)StreamInstance);
    }
    AudDGTraceLoggingErrorHelper("CStreamGroup::CreateStream", 0x298u, StreamInstance);
    goto LABEL_35;
  }
  TrackSystemEffectBehavior(*((_QWORD *)v6 + 12), 1LL, 1LL);
  TrackSystemEffectBehavior(*((_QWORD *)v6 + 12), 2LL, 1LL);
  TrackSystemEffectBehavior(*((_QWORD *)v6 + 12), 3LL, 1LL);
LABEL_35:
  if ( !v16 )
    goto LABEL_36;
  v33 = v16;
LABEL_84:
  CStreamInstance::`scalar deleting destructor'(v33, (unsigned int)v27);
LABEL_36:
  PublishDeviceGraphWnfState();
  if ( hObject )
  {
    CloseHandle(hObject);
    hObject = 0LL;
  }
  if ( TargetHandle )
  {
    CloseHandle(TargetHandle);
    TargetHandle = 0LL;
  }
  if ( v49 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v9 )
    CPipeInstance::`scalar deleting destructor'(v9, v28);
  if ( phNewTimer[0] )
    DeleteTimerQueueTimer(0LL, phNewTimer[0], (HANDLE)0xFFFFFFFFFFFFFFFFLL);
  return (unsigned int)StreamInstance;
}
