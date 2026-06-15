/*
 * XREFs of ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140011FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140006148 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140006C70 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400085E0 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_S.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14000866C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14000A820 (-CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D880 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ @ 0x140012A64 (-GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ.c)
 *     ?Find@?$CAtlList@PEAVCStreamInstanceNew@@V?$CElementTraits@PEAVCStreamInstanceNew@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCStreamInstanceNew@@PEAU3@@Z @ 0x140012CE4 (-Find@-$CAtlList@PEAVCStreamInstanceNew@@V-$CElementTraits@PEAVCStreamInstanceNew@@@ATL@@@ATL@@Q.c)
 *     ?RemoveAt@?$CAtlList@PEAVCStreamInstanceNew@@V?$CElementTraits@PEAVCStreamInstanceNew@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140012E04 (-RemoveAt@-$CAtlList@PEAVCStreamInstanceNew@@V-$CElementTraits@PEAVCStreamInstanceNew@@@ATL@@@AT.c)
 *     ?AddHead@?$CAtlList@PEAVCStreamInstanceNew@@V?$CElementTraits@PEAVCStreamInstanceNew@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamInstanceNew@@@Z @ 0x140012E64 (-AddHead@-$CAtlList@PEAVCStreamInstanceNew@@V-$CElementTraits@PEAVCStreamInstanceNew@@@ATL@@@ATL.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140012F30 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?CreateStreamInstance@CStreamInstanceNew@@SAJPEAPEAV1@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_KPEAVCPipeInstance@@@Z @ 0x140013F90 (-CreateStreamInstance@CStreamInstanceNew@@SAJPEAPEAV1@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_KPEAV.c)
 *     ?ConnectToSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140014150 (-ConnectToSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x1400180E0 (-ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??_GCStreamInstanceNew@@QEAAPEAXI@Z @ 0x14002681C (--_GCStreamInstanceNew@@QEAAPEAXI@Z.c)
 *     ??0?$CComQIPtr@UISaDeviceInternal@@$1?_GUID_f023913b_e06a_4278_a498_925381e3c23a@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140026A78 (--0-$CComQIPtr@UISaDeviceInternal@@$1-_GUID_f023913b_e06a_4278_a498_925381e3c23a@@3U__s_GUID@@B@.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140027424 (WPP_SF_.c)
 *     ?DisconnectFromSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140034354 (-DisconnectFromSaDevice@CStreamInstanceNew@@QEAAJPEAUISaDeviceInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CStreamGroup::CreateStream(
        CStreamGroup *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        HANDLE *a4)
{
  struct CStreamInstanceNew *v6; // r13
  CPipeInstance *v7; // rbx
  HANDLE v8; // rsi
  int StreamInstance; // r12d
  __int64 v10; // rax
  __int64 v11; // rax
  HANDLE CurrentProcess; // rax
  HANDLE v13; // rax
  HANDLE v14; // rax
  _QWORD *v15; // rdi
  struct SYSTEM_AUDIO_STREAM **v16; // rdx
  __int64 v17; // r15
  struct ATL::CAtlPlex *v18; // rax
  int v19; // edx
  _QWORD *v20; // rax
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  HANDLE *v24; // r15
  CStreamInstanceNew *v26; // rcx
  ATL::CAtlException *v27; // rbx
  ATL::CAtlException *v28; // rbx
  struct CStreamInstanceNew *v29; // rdi
  signed int LastError; // eax
  __int64 v31; // rcx
  signed int v32; // eax
  signed int v33; // eax
  const struct CPipeInstance *v34; // rdi
  struct ISaDeviceInternal *v35; // r14
  __int64 StreamGroupLatency; // rax
  const struct CPipeInstance *v37; // r8
  __int64 v38; // rax
  unsigned int *v39; // r8
  HANDLE v40; // rax
  HANDLE v41; // rax
  struct SYSTEM_AUDIO_STREAM *v42[5]; // [rsp+0h] [rbp-C8h] BYREF
  HANDLE hObject; // [rsp+40h] [rbp-88h] BYREF
  HANDLE TargetHandle; // [rsp+48h] [rbp-80h] BYREF
  CPipeInstance *v45; // [rsp+50h] [rbp-78h] BYREF
  HANDLE v46; // [rsp+58h] [rbp-70h]
  void *phNewTimer; // [rsp+60h] [rbp-68h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-60h] BYREF
  char v49; // [rsp+70h] [rbp-58h]
  ATL::CAtlException *v50; // [rsp+78h] [rbp-50h] BYREF
  ATL::CAtlException *v51[9]; // [rsp+80h] [rbp-48h] BYREF
  struct CStreamInstanceNew *v52; // [rsp+D0h] [rbp+8h] BYREF
  struct IAudioGraphCallback *v53; // [rsp+E0h] [rbp+18h]
  HANDLE v54; // [rsp+E8h] [rbp+20h] BYREF

  v54 = a4;
  v53 = a3;
  v52 = this;
  v51[1] = (ATL::CAtlException *)-2LL;
  v6 = this;
  v7 = 0LL;
  v45 = 0LL;
  v8 = 0LL;
  v46 = 0LL;
  phNewTimer = 0LL;
  if ( g_AudioDgWatchDogTimerInMs >= 0x3E8 )
    CreateTimerQueueTimer(
      &phNewTimer,
      0LL,
      CWatchDogTimer::TimerCallback,
      L"CStreamGroup::CreateStream",
      g_AudioDgWatchDogTimerInMs,
      0,
      0x20u);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v6 + 160);
  v49 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  a4[4] = 0LL;
  a4[3] = 0LL;
  if ( *((_BYTE *)v6 + 80) )
  {
    v52 = 0LL;
    StreamInstance = CStreamInstanceNew::CreateStreamInstance(&v52, a2, (unsigned __int64)v6, 0LL);
    if ( StreamInstance < 0 )
      goto LABEL_64;
    StreamInstance = 0;
    try
    {
      v29 = v52;
      hObject = v52;
      ATL::CAtlList<CStreamInstanceNew *,ATL::CElementTraits<CStreamInstanceNew *>>::AddHead((char *)v6 + 96, &hObject);
    }
    catch ( ATL::CAtlException *v50 )
    {
      v16 = v42;
      v27 = v50;
      if ( *(_DWORD *)v50 == -1073741571 )
        _resetstkoflw();
      LODWORD(TargetHandle) = *(_DWORD *)v27;
      StreamInstance = (int)TargetHandle;
      v7 = v45;
      v8 = v46;
      if ( (int)TargetHandle >= 0 )
      {
        v29 = v52;
        goto LABEL_59;
      }
LABEL_64:
      v26 = v52;
LABEL_60:
      if ( !v26 )
        goto LABEL_47;
      goto LABEL_114;
    }
LABEL_59:
    *((_QWORD *)v54 + 5) = *((_QWORD *)v29 + 1);
    v26 = 0LL;
    goto LABEL_60;
  }
  StreamInstance = ValidateStreamDescriptor(a2);
  if ( StreamInstance < 0 )
    goto LABEL_30;
  if ( *((_DWORD *)v6 + 60) == *(_DWORD *)a2 && *((_QWORD *)v6 + 27) != *((_QWORD *)a2 + 5) )
  {
    StreamInstance = -2147024809;
    goto LABEL_30;
  }
  v10 = *(_QWORD *)((char *)a2 + 108) - *((_QWORD *)v6 + 28);
  if ( !v10 )
    v10 = *(_QWORD *)((char *)a2 + 116) - *((_QWORD *)v6 + 29);
  if ( v10 )
  {
    v11 = *(_QWORD *)((char *)a2 + 108) - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( !v11 )
      v11 = *(_QWORD *)((char *)a2 + 116) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( v11 )
    {
      StreamInstance = -2147024809;
      goto LABEL_30;
    }
  }
  StreamInstance = CPipeInstance::CreateStreamPipeInstanceNew(
                     *((struct IUnknown **)v6 + 31),
                     (const struct tWAVEFORMATEX **)a2,
                     *((struct CPipeInstance **)v6 + 11),
                     *((struct tWAVEFORMATEX **)v6 + 26),
                     v42[4],
                     &v45);
  v7 = v45;
  if ( StreamInstance >= 0 )
  {
    StreamInstance = CPipeInstance::Initialize(v45);
    if ( StreamInstance >= 0 )
    {
      StreamInstance = CPipeInstance::ConnectAPOs(v7, v53);
      if ( StreamInstance >= 0 )
      {
        *((_QWORD *)a2 + 3) = v7;
        *((_DWORD *)a2 + 2) = 0;
        StreamInstance = CoImpersonateClient();
        if ( StreamInstance >= 0 )
        {
          v8 = OpenProcess(0x40u, 0, *((_DWORD *)a2 + 3));
          v46 = v8;
          if ( !v8 )
          {
            LastError = GetLastError();
            StreamInstance = LastError;
            if ( LastError > 0 )
              StreamInstance = (unsigned __int16)LastError | 0x80070000;
            if ( StreamInstance == -2147024891 )
            {
              v31 = *(_QWORD *)&WPP_GLOBAL_Control;
              if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
              {
                if ( (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
                  && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
                {
                  WPP_SF_D(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
                    12LL,
                    &WPP_abbc9616773bff2d22868d6a38e1f1c8_Traceguids,
                    2147942405LL);
                  v31 = *(_QWORD *)&WPP_GLOBAL_Control;
                }
                if ( (unsigned int *)v31 != &WPP_GLOBAL_Control
                  && (*(_DWORD *)(v31 + 28) & 0x20000) != 0
                  && *(_BYTE *)(v31 + 25) >= 4u )
                {
                  WPP_SF_(*(_QWORD *)(v31 + 16), 13LL, &WPP_abbc9616773bff2d22868d6a38e1f1c8_Traceguids);
                }
              }
              *((_DWORD *)a2 + 2) = 1;
              StreamInstance = 0;
            }
          }
          CoRevertToSelf();
          if ( StreamInstance >= 0 )
          {
            StreamInstance = CPipeInstance::CreateStreamInstance(v7, a2, (struct SYSTEM_AUDIO_STREAM *)a4);
            if ( StreamInstance >= 0 )
            {
              if ( *((_DWORD *)a2 + 2) )
              {
                a4[3] = 0LL;
                a4[4] = 0LL;
                goto LABEL_30;
              }
              TargetHandle = 0LL;
              CurrentProcess = GetCurrentProcess();
              if ( !DuplicateHandle(CurrentProcess, a4[3], v8, &TargetHandle, 0, 0, 2u) )
              {
                v32 = GetLastError();
                StreamInstance = v32;
                if ( v32 > 0 )
                  StreamInstance = (unsigned __int16)v32 | 0x80070000;
              }
              if ( StreamInstance >= 0 )
              {
                v13 = TargetHandle;
                TargetHandle = 0LL;
                a4[3] = v13;
              }
              hObject = 0LL;
              v14 = GetCurrentProcess();
              if ( !DuplicateHandle(v14, a4[4], v8, &hObject, 0, 0, 2u) )
              {
                v33 = GetLastError();
                StreamInstance = v33;
                if ( v33 > 0 )
                  StreamInstance = (unsigned __int16)v33 | 0x80070000;
              }
              if ( StreamInstance < 0 )
              {
                if ( !hObject )
                {
LABEL_28:
                  if ( TargetHandle )
                    CloseHandle(TargetHandle);
                  goto LABEL_30;
                }
                CloseHandle(hObject);
              }
              else
              {
                a4[4] = hObject;
              }
              hObject = 0LL;
              goto LABEL_28;
            }
          }
        }
      }
    }
  }
LABEL_30:
  v15 = 0LL;
  hObject = 0LL;
  if ( StreamInstance < 0 )
  {
LABEL_98:
    v24 = (HANDLE *)v54;
    goto LABEL_99;
  }
  StreamInstance = CStreamInstanceNew::CreateStreamInstance(
                     (struct CStreamInstanceNew **)&hObject,
                     a2,
                     (unsigned __int64)v7,
                     v7);
  if ( StreamInstance < 0 )
  {
LABEL_97:
    v15 = hObject;
    goto LABEL_98;
  }
  v7 = 0LL;
  v45 = 0LL;
  v16 = (struct SYSTEM_AUDIO_STREAM **)*((_QWORD *)v6 + 32);
  if ( v16 )
  {
    ATL::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>(&TargetHandle);
    v34 = (const struct CPipeInstance *)*((_QWORD *)v6 + 34);
    v35 = (struct ISaDeviceInternal *)TargetHandle;
    StreamGroupLatency = CStreamGroup::GetStreamGroupLatency(v6);
    v37 = v34;
    v15 = hObject;
    StreamInstance = CStreamInstanceNew::ConnectToSaDevice((CStreamInstanceNew *)hObject, v35, v37, StreamGroupLatency);
    if ( TargetHandle )
      (*(void (__fastcall **)(HANDLE))(*(_QWORD *)TargetHandle + 16LL))(TargetHandle);
  }
  else
  {
    v15 = hObject;
  }
  if ( StreamInstance < 0 )
    goto LABEL_98;
  StreamInstance = 0;
  try
  {
    v17 = *((_QWORD *)v6 + 12);
    if ( !*((_QWORD *)v6 + 16) )
    {
      v18 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)v6 + 15, *((unsigned int *)v6 + 34), 0x18uLL);
      if ( !v18 )
        ATL::AtlThrowImpl(-2147024882);
      v19 = *((_DWORD *)v6 + 34);
      v20 = (_QWORD *)((char *)v18 + 16 * (v19 - 1) + 8 * (unsigned int)(v19 - 1) + 8);
      for ( LODWORD(v16) = v19 - 1; (int)v16 >= 0; LODWORD(v16) = (_DWORD)v16 - 1 )
      {
        *v20 = *((_QWORD *)v6 + 16);
        *((_QWORD *)v6 + 16) = v20;
        v20 -= 3;
      }
    }
    v21 = (__int64 *)*((_QWORD *)v6 + 16);
    TargetHandle = v21;
    v22 = *v21;
    if ( v21 )
      v21[2] = (__int64)v15;
    *((_QWORD *)v6 + 16) = v22;
    v21[1] = 0LL;
    *v21 = v17;
    ++*((_QWORD *)v6 + 14);
    v23 = *((_QWORD *)v6 + 12);
    if ( v23 )
      *(_QWORD *)(v23 + 8) = v21;
    else
      *((_QWORD *)v6 + 13) = v21;
    *((_QWORD *)v6 + 12) = v21;
  }
  catch ( ATL::CAtlException *v51 )
  {
    v16 = v42;
    v28 = v51[0];
    if ( *(_DWORD *)v51[0] == -1073741571 )
      _resetstkoflw();
    LODWORD(TargetHandle) = *(_DWORD *)v28;
    StreamInstance = (int)TargetHandle;
    v6 = v52;
    if ( (int)TargetHandle < 0 )
    {
      if ( *((_QWORD *)v52 + 32) )
      {
        ATL::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>(&v52);
        v15 = hObject;
        CStreamInstanceNew::DisconnectFromSaDevice((CStreamInstanceNew *)hObject, v52);
        if ( v52 )
          (*(void (__fastcall **)(struct CStreamInstanceNew *))(*(_QWORD *)v52 + 16LL))(v52);
        v7 = v45;
        v8 = v46;
        goto LABEL_98;
      }
      v7 = v45;
      v8 = v46;
      goto LABEL_97;
    }
    v7 = v45;
    v8 = v46;
    v15 = hObject;
  }
  v24 = (HANDLE *)v54;
  *((_QWORD *)v54 + 5) = v15[1];
  v15 = 0LL;
  if ( StreamInstance < 0 )
  {
LABEL_99:
    v54 = v15;
    v38 = ATL::CAtlList<CStreamInstanceNew *,ATL::CElementTraits<CStreamInstanceNew *>>::Find((char *)v6 + 96, &v54);
    if ( v38 )
    {
      ATL::CAtlList<CStreamInstanceNew *,ATL::CElementTraits<CStreamInstanceNew *>>::RemoveAt((char *)v6 + 96, v38);
      v39 = &WPP_GLOBAL_Control;
    }
    if ( v24[3] )
    {
      v54 = 0LL;
      v40 = GetCurrentProcess();
      DuplicateHandle(v8, v24[3], v40, &v54, 0, 0, 1u);
      v24[3] = 0LL;
      if ( v54 )
        CloseHandle(v54);
      v39 = &WPP_GLOBAL_Control;
    }
    if ( v24[4] )
    {
      v54 = 0LL;
      v41 = GetCurrentProcess();
      DuplicateHandle(v8, v24[4], v41, &v54, 0, 0, 1u);
      v24[4] = 0LL;
      if ( v54 )
        CloseHandle(v54);
      v39 = &WPP_GLOBAL_Control;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control != v39
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        14LL,
        &WPP_abbc9616773bff2d22868d6a38e1f1c8_Traceguids,
        (unsigned int)StreamInstance);
    }
  }
  if ( !v15 )
    goto LABEL_47;
  v26 = (CStreamInstanceNew *)v15;
LABEL_114:
  CStreamInstanceNew::`scalar deleting destructor'(v26, (unsigned int)v16);
LABEL_47:
  PublishDeviceGraphWnfState();
  if ( v49 )
    LeaveCriticalSection(lpCriticalSection);
  if ( phNewTimer )
  {
    DeleteTimerQueueTimer(0LL, phNewTimer, 0LL);
    phNewTimer = 0LL;
  }
  if ( v8 )
    CloseHandle(v8);
  if ( v7 )
    CPipeInstance::`scalar deleting destructor'(v7);
  return (unsigned int)StreamInstance;
}
