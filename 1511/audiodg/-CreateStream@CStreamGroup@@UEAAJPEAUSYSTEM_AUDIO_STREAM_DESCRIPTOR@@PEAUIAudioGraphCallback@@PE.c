/*
 * XREFs of ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140003F20
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_KPEAVCPipeInstance@@@Z @ 0x140002358 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAV1@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_KPEAVCPi.c)
 *     ??0CWatchDogTimer@@QEAA@PEBG@Z @ 0x1400029EC (--0CWatchDogTimer@@QEAA@PEBG@Z.c)
 *     ?DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z @ 0x140003378 (-DisconnectFromSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@@Z.c)
 *     ?ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z @ 0x140003430 (-ConnectToSaDevice@CStreamInstance@@QEAAJPEAUISaDeviceInternal@@PEBVCPipeInstance@@_J@Z.c)
 *     ?GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ @ 0x14000362C (-GetStreamGroupLatency@CStreamGroup@@IEAA_JXZ.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140004BB0 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?Find@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCStreamInstance@@PEAU3@@Z @ 0x14000538C (-Find@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEBAPEA.c)
 *     ?RemoveAt@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x140005404 (-RemoveAt@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEA.c)
 *     ??0?$CComQIPtr@UISaDeviceInternal@@$1?_GUID_f023913b_e06a_4278_a498_925381e3c23a@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140005464 (--0-$CComQIPtr@UISaDeviceInternal@@$1-_GUID_f023913b_e06a_4278_a498_925381e3c23a@@3U__s_GUID@@B@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140008110 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000A5F0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x14000DB78 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000E680 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000FE28 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_S.c)
 *     ?CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x140012120 (-CreateStreamPipeInstanceNew@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STR.c)
 *     ?ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x140013FC0 (-ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140026234 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x1400265F4 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCStreamInstance@@V?$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCStreamInstance@@@Z @ 0x1400269B8 (-AddHead@-$CAtlList@PEAVCStreamInstance@@V-$CElementTraits@PEAVCStreamInstance@@@ATL@@@ATL@@QEAA.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CStreamGroup::CreateStream(
        CStreamGroup *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        HANDLE *a4)
{
  struct CStreamInstance *v6; // r13
  CPipeInstance *v7; // rbx
  HANDLE v8; // rsi
  int StreamInstance; // r12d
  __int64 v10; // rax
  HANDLE CurrentProcess; // rax
  HANDLE v12; // rax
  HANDLE v13; // rax
  _QWORD *v14; // rdi
  struct SYSTEM_AUDIO_STREAM **v15; // rdx
  __int64 v16; // r14
  struct ATL::CAtlPlex *v17; // rax
  int v18; // edx
  _QWORD *v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  HANDLE *v23; // r14
  unsigned int v24; // edx
  ATL::CAtlException *v26; // rbx
  ATL::CAtlException *v27; // rbx
  struct CStreamInstance *v28; // rdi
  CStreamInstance *v29; // rcx
  __int64 v30; // rax
  signed int LastError; // eax
  _QWORD *v32; // rcx
  signed int v33; // eax
  signed int v34; // eax
  const struct CPipeInstance *v35; // rdi
  struct ISaDeviceInternal *v36; // r14
  __int64 StreamGroupLatency; // rax
  const struct CPipeInstance *v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rax
  _UNKNOWN **v41; // r8
  HANDLE v42; // rax
  HANDLE v43; // rax
  struct SYSTEM_AUDIO_STREAM *v44[5]; // [rsp+0h] [rbp-C8h] BYREF
  HANDLE hObject; // [rsp+40h] [rbp-88h] BYREF
  HANDLE TargetHandle; // [rsp+48h] [rbp-80h] BYREF
  CPipeInstance *v47; // [rsp+50h] [rbp-78h] BYREF
  HANDLE v48; // [rsp+58h] [rbp-70h]
  HANDLE Timer; // [rsp+60h] [rbp-68h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-60h] BYREF
  char v51; // [rsp+70h] [rbp-58h]
  ATL::CAtlException *v52; // [rsp+78h] [rbp-50h] BYREF
  ATL::CAtlException *v53[9]; // [rsp+80h] [rbp-48h] BYREF
  struct CStreamInstance *v54; // [rsp+D0h] [rbp+8h] BYREF
  struct IAudioGraphCallback *v55; // [rsp+E0h] [rbp+18h]
  HANDLE v56; // [rsp+E8h] [rbp+20h] BYREF

  v56 = a4;
  v55 = a3;
  v54 = this;
  v53[1] = (ATL::CAtlException *)-2LL;
  v6 = this;
  v7 = 0LL;
  v47 = 0LL;
  v8 = 0LL;
  v48 = 0LL;
  CWatchDogTimer::CWatchDogTimer((CWatchDogTimer *)&Timer, L"CStreamGroup::CreateStream");
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v6 + 160);
  v51 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  a4[4] = 0LL;
  a4[3] = 0LL;
  if ( *((_BYTE *)v6 + 80) )
  {
    v54 = 0LL;
    StreamInstance = CStreamInstance::CreateStreamInstance(&v54, a2, (__int64)v6, 0LL);
    if ( StreamInstance < 0 )
      goto LABEL_56;
    StreamInstance = 0;
    try
    {
      v28 = v54;
      hObject = v54;
      ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::AddHead((char *)v6 + 96, &hObject);
    }
    catch ( ATL::CAtlException *v52 )
    {
      v15 = v44;
      v26 = v52;
      if ( *(_DWORD *)v52 == -1073741571 )
        _resetstkoflw();
      LODWORD(TargetHandle) = *(_DWORD *)v26;
      StreamInstance = (int)TargetHandle;
      v7 = v47;
      v8 = v48;
      if ( (int)TargetHandle >= 0 )
      {
        v28 = v54;
        goto LABEL_55;
      }
LABEL_56:
      v29 = v54;
LABEL_57:
      if ( !v29 )
        goto LABEL_42;
      goto LABEL_111;
    }
LABEL_55:
    *((_QWORD *)v56 + 5) = *((_QWORD *)v28 + 1);
    v29 = 0LL;
    goto LABEL_57;
  }
  StreamInstance = ValidateStreamDescriptor(a2);
  if ( StreamInstance < 0 )
    goto LABEL_25;
  if ( *((_DWORD *)v6 + 60) == *(_DWORD *)a2 && *((_QWORD *)v6 + 27) != *((_QWORD *)a2 + 6) )
  {
    StreamInstance = -2147024809;
    goto LABEL_25;
  }
  v10 = *(_QWORD *)((char *)a2 + 116) - *((_QWORD *)v6 + 28);
  if ( !v10 )
    v10 = *(_QWORD *)((char *)a2 + 124) - *((_QWORD *)v6 + 29);
  if ( v10 )
  {
    v30 = *(_QWORD *)((char *)a2 + 116) - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( !v30 )
      v30 = *(_QWORD *)((char *)a2 + 124) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( v30 )
    {
      StreamInstance = -2147024809;
      goto LABEL_25;
    }
  }
  StreamInstance = CPipeInstance::CreateStreamPipeInstanceNew(
                     *((struct IDeviceGraphObjectCache **)v6 + 31),
                     a2,
                     *((struct CPipeInstance **)v6 + 11),
                     *((struct tWAVEFORMATEX **)v6 + 26),
                     v44[4],
                     &v47);
  v7 = v47;
  if ( StreamInstance >= 0 )
  {
    StreamInstance = CPipeInstance::Initialize(v47);
    if ( StreamInstance >= 0 )
    {
      StreamInstance = CPipeInstance::ConnectAPOs(v7, v55);
      if ( StreamInstance >= 0 )
      {
        *((_QWORD *)a2 + 4) = v7;
        *((_DWORD *)a2 + 2) = 0;
        StreamInstance = CoImpersonateClient();
        if ( StreamInstance >= 0 )
        {
          v8 = OpenProcess(0x40u, 0, *((_DWORD *)a2 + 4));
          v48 = v8;
          if ( !v8 )
          {
            LastError = GetLastError();
            StreamInstance = LastError;
            if ( LastError > 0 )
              StreamInstance = (unsigned __int16)LastError | 0x80070000;
            if ( StreamInstance == -2147024891 )
            {
              v32 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
              {
                if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_D(
                    *((_QWORD *)WPP_GLOBAL_Control + 2),
                    12LL,
                    &WPP_076b1de22f212f5ff1194b9e602964d1_Traceguids,
                    2147942405LL);
                  v32 = WPP_GLOBAL_Control;
                }
                if ( v32 != &WPP_GLOBAL_Control && (*((_DWORD *)v32 + 7) & 0x20000) != 0 && *((_BYTE *)v32 + 25) >= 4u )
                  WPP_SF_(v32[2], 13LL, &WPP_076b1de22f212f5ff1194b9e602964d1_Traceguids);
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
                goto LABEL_25;
              }
              TargetHandle = 0LL;
              CurrentProcess = GetCurrentProcess();
              if ( !DuplicateHandle(CurrentProcess, a4[3], v8, &TargetHandle, 0, 0, 2u) )
              {
                v33 = GetLastError();
                StreamInstance = v33;
                if ( v33 > 0 )
                  StreamInstance = (unsigned __int16)v33 | 0x80070000;
              }
              if ( StreamInstance >= 0 )
              {
                v12 = TargetHandle;
                TargetHandle = 0LL;
                a4[3] = v12;
              }
              hObject = 0LL;
              v13 = GetCurrentProcess();
              if ( !DuplicateHandle(v13, a4[4], v8, &hObject, 0, 0, 2u) )
              {
                v34 = GetLastError();
                StreamInstance = v34;
                if ( v34 > 0 )
                  StreamInstance = (unsigned __int16)v34 | 0x80070000;
              }
              if ( StreamInstance < 0 )
              {
                if ( !hObject )
                {
LABEL_23:
                  if ( TargetHandle )
                    CloseHandle(TargetHandle);
                  goto LABEL_25;
                }
                CloseHandle(hObject);
              }
              else
              {
                a4[4] = hObject;
              }
              hObject = 0LL;
              goto LABEL_23;
            }
          }
        }
      }
    }
  }
LABEL_25:
  v14 = 0LL;
  hObject = 0LL;
  if ( StreamInstance < 0 )
  {
LABEL_95:
    v23 = (HANDLE *)v56;
    goto LABEL_96;
  }
  StreamInstance = CStreamInstance::CreateStreamInstance((struct CStreamInstance **)&hObject, a2, (__int64)v7, v7);
  if ( StreamInstance < 0 )
  {
LABEL_94:
    v14 = hObject;
    goto LABEL_95;
  }
  v7 = 0LL;
  v47 = 0LL;
  v15 = (struct SYSTEM_AUDIO_STREAM **)*((_QWORD *)v6 + 32);
  if ( v15 )
  {
    ATL::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>(
      &TargetHandle,
      v15);
    v35 = (const struct CPipeInstance *)*((_QWORD *)v6 + 34);
    v36 = (struct ISaDeviceInternal *)TargetHandle;
    StreamGroupLatency = CStreamGroup::GetStreamGroupLatency(v6);
    v38 = v35;
    v14 = hObject;
    StreamInstance = CStreamInstance::ConnectToSaDevice((CStreamInstance *)hObject, v36, v38, StreamGroupLatency);
    if ( TargetHandle )
      (*(void (__fastcall **)(HANDLE))(*(_QWORD *)TargetHandle + 16LL))(TargetHandle);
  }
  else
  {
    v14 = hObject;
  }
  if ( StreamInstance < 0 )
    goto LABEL_95;
  StreamInstance = 0;
  try
  {
    v16 = *((_QWORD *)v6 + 12);
    if ( !*((_QWORD *)v6 + 16) )
    {
      v17 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)v6 + 15, *((unsigned int *)v6 + 34), 0x18uLL);
      if ( !v17 )
        ATL::AtlThrowImpl(-2147024882);
      v18 = *((_DWORD *)v6 + 34);
      v19 = (_QWORD *)((char *)v17 + 16 * (v18 - 1) + 8 * (unsigned int)(v18 - 1) + 8);
      for ( LODWORD(v15) = v18 - 1; (int)v15 >= 0; LODWORD(v15) = (_DWORD)v15 - 1 )
      {
        *v19 = *((_QWORD *)v6 + 16);
        *((_QWORD *)v6 + 16) = v19;
        v19 -= 3;
      }
    }
    v20 = (__int64 *)*((_QWORD *)v6 + 16);
    TargetHandle = v20;
    v21 = *v20;
    if ( v20 )
      v20[2] = (__int64)v14;
    *((_QWORD *)v6 + 16) = v21;
    v20[1] = 0LL;
    *v20 = v16;
    ++*((_QWORD *)v6 + 14);
    v22 = *((_QWORD *)v6 + 12);
    if ( v22 )
      *(_QWORD *)(v22 + 8) = v20;
    else
      *((_QWORD *)v6 + 13) = v20;
    *((_QWORD *)v6 + 12) = v20;
  }
  catch ( ATL::CAtlException *v53 )
  {
    v15 = v44;
    v27 = v53[0];
    if ( *(_DWORD *)v53[0] == -1073741571 )
      _resetstkoflw();
    LODWORD(TargetHandle) = *(_DWORD *)v27;
    StreamInstance = (int)TargetHandle;
    v6 = v54;
    if ( (int)TargetHandle < 0 )
    {
      v39 = *((_QWORD *)v54 + 32);
      if ( v39 )
      {
        ATL::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>::CComQIPtr<ISaDeviceInternal,&__s_GUID const _GUID_f023913b_e06a_4278_a498_925381e3c23a>(
          &v54,
          v39);
        v14 = hObject;
        CStreamInstance::DisconnectFromSaDevice((struct CPipeInstance **)hObject, v54);
        if ( v54 )
          (*(void (__fastcall **)(struct CStreamInstance *))(*(_QWORD *)v54 + 16LL))(v54);
        v7 = v47;
        v8 = v48;
        goto LABEL_95;
      }
      v7 = v47;
      v8 = v48;
      goto LABEL_94;
    }
    v7 = v47;
    v8 = v48;
    v14 = hObject;
  }
  v23 = (HANDLE *)v56;
  *((_QWORD *)v56 + 5) = v14[1];
  v14 = 0LL;
  if ( StreamInstance < 0 )
  {
LABEL_96:
    v56 = v14;
    v40 = ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::Find((char *)v6 + 96, &v56);
    if ( v40 )
    {
      ATL::CAtlList<CStreamInstance *,ATL::CElementTraits<CStreamInstance *>>::RemoveAt((char *)v6 + 96, v40);
      v41 = &WPP_GLOBAL_Control;
    }
    if ( v23[3] )
    {
      v56 = 0LL;
      v42 = GetCurrentProcess();
      DuplicateHandle(v8, v23[3], v42, &v56, 0, 0, 1u);
      v23[3] = 0LL;
      if ( v56 )
        CloseHandle(v56);
      v41 = &WPP_GLOBAL_Control;
    }
    if ( v23[4] )
    {
      v56 = 0LL;
      v43 = GetCurrentProcess();
      DuplicateHandle(v8, v23[4], v43, &v56, 0, 0, 1u);
      v23[4] = 0LL;
      if ( v56 )
        CloseHandle(v56);
      v41 = &WPP_GLOBAL_Control;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)v41
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        14LL,
        &WPP_076b1de22f212f5ff1194b9e602964d1_Traceguids,
        (unsigned int)StreamInstance);
    }
  }
  if ( !v14 )
    goto LABEL_42;
  v29 = (CStreamInstance *)v14;
LABEL_111:
  CStreamInstance::`scalar deleting destructor'(v29, (unsigned int)v15);
LABEL_42:
  PublishDeviceGraphWnfState();
  if ( v51 )
    LeaveCriticalSection(lpCriticalSection);
  v24 = (unsigned int)Timer;
  if ( Timer )
  {
    DeleteTimerQueueTimer(0LL, Timer, 0LL);
    Timer = 0LL;
  }
  if ( v8 )
    CloseHandle(v8);
  if ( v7 )
    CPipeInstance::`scalar deleting destructor'(v7, v24);
  return (unsigned int)StreamInstance;
}
