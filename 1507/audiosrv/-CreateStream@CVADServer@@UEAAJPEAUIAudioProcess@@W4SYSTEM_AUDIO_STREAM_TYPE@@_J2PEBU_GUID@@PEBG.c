/*
 * XREFs of ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014990
 * Callers:
 *     AudioServerCreateStream @ 0x18002F590 (AudioServerCreateStream.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?IsMuted@CProcess@@UEAAHXZ @ 0x180010ED0 (-IsMuted@CProcess@@UEAAHXZ.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180013A50 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18001D380 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?AddClientReference@CAudioStream@@UEAAKXZ @ 0x18001DE50 (-AddClientReference@CAudioStream@@UEAAKXZ.c)
 *     ??0CAudioStream@@QEAA@_N00K00W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18001E2A0 (--0CAudioStream@@QEAA@_N00K00W4SYSTEM_AUDIO_STREAM_TYPE@@@Z.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18001E630 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F1A0 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?ValidateAudioServerCategoryForStreamType@CWindowsPolicyManager@@UEAAJW4SYSTEM_AUDIO_STREAM_TYPE@@K@Z @ 0x180021D70 (-ValidateAudioServerCategoryForStreamType@CWindowsPolicyManager@@UEAAJW4SYSTEM_AUDIO_STREAM_TYPE.c)
 *     ?GetAudioResourcePriority@CWindowsPolicyManager@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHHPEAK@Z @ 0x180021E50 (-GetAudioResourcePriority@CWindowsPolicyManager@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180022A10 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024370 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180025240 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 *     ?Initialize@CPerStreamVolumeAudioStream@@UEAAJPEAVCVADServer@@PEBUtWAVEFORMATEX@@@Z @ 0x18002F370 (-Initialize@CPerStreamVolumeAudioStream@@UEAAJPEAVCVADServer@@PEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z @ 0x1800667D8 (-SetAudioHandle@CAudioStream@@QEAAJ_KPEAUIAudioDeviceGraph@@0K@Z.c)
 *     ?UpdateStreamControls@CAudioStream@@QEAAJXZ @ 0x180082DAC (-UpdateStreamControls@CAudioStream@@QEAAJXZ.c)
 *     ?GetStreamDescriptor@CVADServer@@IEAAJPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x18008AB58 (-GetStreamDescriptor@CVADServer@@IEAAJPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z.c)
 *     TemplateEventDescriptor @ 0x18008DB28 (TemplateEventDescriptor.c)
 *     Template_zqttq @ 0x18008DB44 (Template_zqttq.c)
 */

__int64 __fastcall CVADServer::CreateStream(
        __int64 a1,
        struct IAudioProcess *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        struct _GUID *a6,
        unsigned __int16 *a7,
        struct SYSTEM_AUDIO_STREAM *a8)
{
  unsigned int v8; // r12d
  char v9; // bl
  char *v10; // r13
  unsigned __int16 *v12; // r15
  unsigned int v13; // esi
  __int64 (__fastcall *v14)(CWindowsPolicyManager *, _QWORD, _QWORD); // rdi
  int v15; // eax
  signed int StreamDescriptor; // r12d
  HANDLE ProcessHeap; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  const unsigned __int16 *v22; // rdx
  unsigned int v23; // eax
  CEndpointCharacteristics *v24; // rdi
  __int64 v25; // rsi
  void (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // r15
  void (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // r15
  __int64 v28; // rbx
  __int64 v29; // r15
  BOOL v30; // r12d
  char *v31; // rax
  int v32; // r12d
  int v33; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v34; // r12d
  struct IMMDevice *v35; // rbx
  struct _GUID v36; // xmm6
  __int64 (__fastcall *v37)(CPerStreamVolumeAudioStream *__hidden, struct CVADServer *, const struct tWAVEFORMATEX *); // rbx
  int v38; // eax
  void (__fastcall *v39)(CEndpointCharacteristics *); // rbx
  struct _GUID *v40; // rdx
  __int64 v41; // rax
  CEndpointCharacteristicsCache *v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rdi
  CProcess *v45; // rsi
  _BOOL8 (__fastcall *v46)(CProcess *); // rbx
  int IsMuted; // eax
  unsigned int v48; // r12d
  __int64 (__fastcall *v49)(CWindowsPolicyManager *__hidden, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001, unsigned int, int, int, unsigned int *); // rdi
  int AudioResourcePriority; // eax
  struct tWAVEFORMATEX *v51; // rcx
  enum _AUDCLNT_SHAREMODE v52; // edx
  unsigned int v53; // r8d
  int v54; // r9d
  int v55; // r10d
  unsigned int v56; // r11d
  __int64 (__fastcall *v57)(CAudioResourceManager *__hidden, struct IAudioProcess *, struct IAudioStreamInfo *, unsigned int, int, int, struct CEndpointCharacteristics *, unsigned int, enum _AUDCLNT_SHAREMODE, struct IAudioGraphCallback *, struct tWAVEFORMATEX *, __int64, __int64, const struct _GUID *, unsigned int, const unsigned __int16 *, unsigned int, struct SYSTEM_AUDIO_STREAM *); // r15
  unsigned int v58; // ebx
  struct SYSTEM_AUDIO_STREAM *v59; // r15
  struct CEndpointCharacteristics *v60; // rbx
  signed int Stream; // eax
  void (__fastcall *v62)(struct CEndpointCharacteristics *); // rdi
  unsigned int (__fastcall *v63)(CAudioStream *__hidden); // rbx
  __int64 (__fastcall *v64)(const void **, struct CAudioStream *); // rdi
  signed int v65; // eax
  signed __int64 v66; // rax
  HANDLE EventW; // rax
  LPVOID v68; // rcx
  unsigned int (__fastcall *v69)(CAudioStream *__hidden); // rbx
  __int64 v70; // rcx
  __int64 v72; // r15
  __int64 (__fastcall *v73)(CEndpointCharacteristics *); // rdi
  void (__fastcall *v74)(CEndpointCharacteristics *); // rbx
  struct CEndpointCharacteristics *v75; // rcx
  struct SYSTEM_AUDIO_STREAM *v76; // r15
  __int64 v77; // rdi
  RPC_STATUS v78; // eax
  __int64 v79; // rdi
  void (__fastcall *v80)(struct CEndpointCharacteristics *); // rdi
  signed int LastError; // eax
  char *v82; // rcx
  int v83; // [rsp+30h] [rbp-E8h]
  int v84; // [rsp+38h] [rbp-E0h]
  unsigned int v85; // [rsp+78h] [rbp-A0h]
  unsigned int v86; // [rsp+78h] [rbp-A0h]
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v87; // [rsp+98h] [rbp-80h]
  struct CEndpointCharacteristics *v88; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v89; // [rsp+A8h] [rbp-70h] BYREF
  LPVOID pv; // [rsp+B0h] [rbp-68h] BYREF
  int v91; // [rsp+B8h] [rbp-60h] BYREF
  struct _GUID *v92; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v93; // [rsp+C8h] [rbp-50h] BYREF
  int v94; // [rsp+D0h] [rbp-48h] BYREF
  int v95; // [rsp+D4h] [rbp-44h]
  unsigned int v96; // [rsp+D8h] [rbp-40h]
  CEndpointCharacteristics *v97; // [rsp+E0h] [rbp-38h] BYREF
  int v98; // [rsp+E8h] [rbp-30h]
  unsigned int v99; // [rsp+ECh] [rbp-2Ch]
  PROPVARIANT pvar; // [rsp+F0h] [rbp-28h] BYREF
  __int64 v101; // [rsp+F8h] [rbp-20h]
  __int64 v102; // [rsp+100h] [rbp-18h]
  struct IMMDevice *v103; // [rsp+108h] [rbp-10h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+110h] [rbp-8h]
  PROPVARIANT v105[3]; // [rsp+118h] [rbp+0h] BYREF
  struct tWAVEFORMATEX *v106; // [rsp+130h] [rbp+18h]
  struct _GUID v107; // [rsp+138h] [rbp+20h] BYREF
  __int64 v108; // [rsp+148h] [rbp+30h]
  unsigned int v109; // [rsp+1B8h] [rbp+A0h] BYREF
  struct IAudioProcess *v110; // [rsp+1C0h] [rbp+A8h]
  unsigned int v111; // [rsp+1C8h] [rbp+B0h]
  __int64 v112; // [rsp+1D0h] [rbp+B8h]

  v112 = a4;
  v111 = a3;
  v110 = a2;
  v8 = a3;
  v9 = 0;
  v10 = 0LL;
  v12 = 0LL;
  v92 = 0LL;
  pv = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    Template_zqttq(
      a1,
      (unsigned int)&VadServer_CreateStream_Task_Start,
      *(_QWORD *)(a1 + 232),
      *(_DWORD *)(a1 + 304),
      *(_DWORD *)(a1 + 312),
      *(_DWORD *)(a1 + 320),
      *(_DWORD *)(a1 + 308));
  memset_0(a8, 0, 0x48uLL);
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 248));
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x2Au,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids);
  }
  if ( !*(_DWORD *)(a1 + 216) )
  {
    StreamDescriptor = -2004287487;
    goto LABEL_145;
  }
  if ( *(_QWORD *)(a1 + 224) )
  {
    StreamDescriptor = -2004287486;
    goto LABEL_145;
  }
  if ( g_UseNewGraphBuilder )
  {
    v92 = *(struct _GUID **)(a1 + 176);
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(a1 + 192) )
  {
    StreamDescriptor = -2004287487;
    goto LABEL_145;
  }
  StreamDescriptor = CVADServer::GetStreamDescriptor((CVADServer *)a1, (struct SYSTEM_AUDIO_STREAM_DESCRIPTOR **)&v92);
  if ( StreamDescriptor >= 0 )
  {
    v8 = v111;
LABEL_11:
    v13 = *(_DWORD *)(a1 + 304);
    v14 = *(__int64 (__fastcall **)(CWindowsPolicyManager *, _QWORD, _QWORD))(*(_QWORD *)g_PolicyManager + 96LL);
    if ( (char *)v14 == (char *)CWindowsPolicyManager::ValidateAudioServerCategoryForStreamType )
      v15 = CWindowsPolicyManager::ValidateAudioServerCategoryForStreamType(g_PolicyManager, v8, v13);
    else
      v15 = v14(g_PolicyManager, v8, v13);
    StreamDescriptor = v15;
    if ( v15 < 0 )
      goto LABEL_144;
    ProcessHeap = GetProcessHeap();
    v10 = (char *)HeapAlloc(ProcessHeap, 0, 0x158uLL);
    if ( v10 )
    {
      v21 = *(_DWORD *)(a1 + 292);
      LOBYTE(v19) = (v21 & 0x200000) != 0 || v111 == 2;
      LOBYTE(v84) = *(_DWORD *)(a1 + 320) != 0;
      LOBYTE(v83) = *(_DWORD *)(a1 + 316) != 0;
      LOBYTE(v18) = *(_DWORD *)(a1 + 288) == 1;
      LOBYTE(v20) = (v21 & 1) != 0;
      CAudioStream::CAudioStream(v10, v18, v19, v20, *(_DWORD *)(a1 + 304), v83, v84, v111);
      *(_QWORD *)v10 = &CPerStreamVolumeAudioStream::`vftable'{for `IAudioGraphCallback'};
      *((_QWORD *)v10 + 1) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
      *((_QWORD *)v10 + 2) = &CPerStreamVolumeAudioStream::`vftable'{for `CUnknown'};
      *((_QWORD *)v10 + 40) = 0LL;
      *((_QWORD *)v10 + 41) = 0LL;
      v10[336] = 0;
    }
    else
    {
      v10 = 0LL;
    }
    if ( !v10 )
    {
      v9 = 0;
      StreamDescriptor = -2147024882;
      goto LABEL_145;
    }
    if ( *(_DWORD *)(a1 + 288) == 1 )
    {
      StreamDescriptor = (*(__int64 (__fastcall **)(char *, __int64, _QWORD))(*(_QWORD *)v10 + 136LL))(
                           v10,
                           a1,
                           *(_QWORD *)(a1 + 208));
      if ( StreamDescriptor < 0 )
        goto LABEL_128;
LABEL_60:
      v40 = v92;
      *(_QWORD *)v92[4].Data4 = *(_QWORD *)(a1 + 208);
      v41 = v112;
      v40[4].Data1 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 208) + 16LL) + 18;
      *(_QWORD *)&v40[2].Data1 = v41;
      *(_QWORD *)v40[2].Data4 = a5;
      *(_DWORD *)&v40->Data4[4] = *(_DWORD *)(a1 + 64);
      *(_QWORD *)&v40[1].Data1 = a7;
      *(_QWORD *)&v40[6].Data1 = *(_QWORD *)(a1 + 232);
      v42 = *(CEndpointCharacteristicsCache **)(a1 + 184);
      if ( v42 )
      {
        *((_QWORD *)v42 + 3) = *(_QWORD *)(a1 + 240);
        v42 = (CEndpointCharacteristicsCache *)((unsigned int)v12[8] + 18);
        *(_DWORD *)(*(_QWORD *)(a1 + 184) + 8LL) = (_DWORD)v42;
        *(_QWORD *)(*(_QWORD *)(a1 + 184) + 16LL) = v12;
      }
      if ( !g_UseNewGraphBuilder )
      {
        v78 = RpcImpersonateClient(0LL);
        StreamDescriptor = v78;
        if ( v78 )
        {
          if ( v78 > 0 )
            StreamDescriptor = (unsigned __int16)v78 | 0x80070000;
          if ( StreamDescriptor < 0 )
            goto LABEL_128;
        }
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_q(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            43LL,
            &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
            *(_QWORD *)(a1 + 192));
        }
        v59 = a8;
        StreamDescriptor = (*(__int64 (__fastcall **)(_QWORD, struct _GUID *, _QWORD, char *, struct SYSTEM_AUDIO_STREAM *))(**(_QWORD **)(a1 + 192) + 48LL))(
                             *(_QWORD *)(a1 + 192),
                             v92,
                             *(_QWORD *)(a1 + 184),
                             v10,
                             a8);
        RpcRevertToSelf();
        if ( StreamDescriptor >= 0 )
        {
          StreamDescriptor = CAudioStream::SetAudioHandle(
                               (CAudioStream *)v10,
                               *((_QWORD *)v59 + 5),
                               *(struct IAudioDeviceGraph **)(a1 + 192),
                               0LL,
                               0xFFFFFFFF);
          if ( StreamDescriptor >= 0 )
          {
            v79 = *(_QWORD *)(a1 + 192);
            if ( v79 )
            {
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v79 + 16LL))(*(_QWORD *)(a1 + 192));
              *(_QWORD *)(a1 + 192) = 0LL;
            }
LABEL_77:
            if ( *(_DWORD *)(a1 + 288)
              || (*(_BYTE *)(a1 + 292) & 1) == 0
              || (StreamDescriptor = CAudioStream::UpdateStreamControls((CAudioStream *)v10), StreamDescriptor >= 0) )
            {
              v63 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v10 + 64LL);
              if ( v63 == CAudioStream::AddClientReference )
                CAudioStream::AddClientReference((CAudioStream *)v10);
              else
                v63((CAudioStream *)v10);
              *(_QWORD *)(a1 + 224) = v10;
              if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
                && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
                && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
              {
                WPP_SF_q(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                  44LL,
                  &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
                  *((_QWORD *)v59 + 5));
              }
              v64 = *(__int64 (__fastcall **)(const void **, struct CAudioStream *))(**(_QWORD **)(a1 + 168) + 240LL);
              v65 = v64 == CPerStreamVolumeAudioSession::AddStream
                  ? CPerStreamVolumeAudioSession::AddStream(*(const void ***)(a1 + 168), (struct CAudioStream *)v10)
                  : v64(*(const void ***)(a1 + 168), (struct CAudioStream *)v10);
              StreamDescriptor = v65;
              if ( !v65 )
              {
                v9 = 1;
                StreamDescriptor = 0;
                do
                {
                  v66 = _InterlockedExchangeAdd64(&CAudioStream::s_llStreamIdentifier, 1uLL);
                  *((_QWORD *)v10 + 37) = v66 + 1;
                }
                while ( v66 == -1 );
                EventW = CreateEventW(0LL, 1, 0, 0LL);
                *((_QWORD *)v10 + 36) = EventW;
                if ( !EventW )
                {
                  LastError = GetLastError();
                  StreamDescriptor = LastError;
                  if ( LastError > 0 )
                    StreamDescriptor = (unsigned __int16)LastError | 0x80070000;
                  if ( StreamDescriptor >= 0 )
                    goto LABEL_92;
                  v82 = (char *)*((_QWORD *)v10 + 36);
                  if ( (unsigned __int64)(v82 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                  {
                    CloseHandle(v82);
                    *((_QWORD *)v10 + 36) = 0LL;
                  }
                  *((_QWORD *)v10 + 37) = 0LL;
                }
                if ( StreamDescriptor >= 0 )
                {
LABEL_92:
                  *((_QWORD *)v59 + 6) = *((_QWORD *)v10 + 37);
                  goto LABEL_93;
                }
                goto LABEL_145;
              }
            }
LABEL_128:
            v9 = 0;
            goto LABEL_145;
          }
        }
LABEL_144:
        v9 = 0;
        goto LABEL_145;
      }
      v88 = 0LL;
      v43 = *(_QWORD *)(a1 + 168);
      v44 = *(_QWORD *)(v43 + 712);
      if ( v44 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v44 + 8LL))(*(_QWORD *)(v43 + 712));
      v45 = *(CProcess **)(v43 + 712);
      StreamDescriptor = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                           v42,
                           *(const unsigned __int16 **)(a1 + 240),
                           &v88);
      if ( StreamDescriptor < 0 )
      {
        if ( !v45 )
        {
LABEL_172:
          v60 = v88;
LABEL_173:
          if ( !v60 )
            goto LABEL_144;
          v80 = *(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v60 + 16LL);
          if ( (char *)v80 != (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
          {
            v80(v60);
            goto LABEL_144;
          }
          v75 = v60;
LABEL_143:
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v75);
          goto LABEL_144;
        }
      }
      else
      {
        v109 = -1;
        v87 = v111 - 1 <= 1;
        v46 = *(_BOOL8 (__fastcall **)(CProcess *))(*(_QWORD *)v45 + 112LL);
        if ( v46 == CProcess::IsMuted )
          IsMuted = CProcess::IsMuted(v45);
        else
          IsMuted = v46(v45);
        v48 = *(_DWORD *)(a1 + 304);
        v49 = *(__int64 (__fastcall **)(CWindowsPolicyManager *__hidden, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001, unsigned int, int, int, unsigned int *))(*(_QWORD *)g_PolicyManager + 56LL);
        if ( v49 == CWindowsPolicyManager::GetAudioResourcePriority )
          AudioResourcePriority = CWindowsPolicyManager::GetAudioResourcePriority(
                                    g_PolicyManager,
                                    v87,
                                    v48,
                                    0,
                                    IsMuted,
                                    &v109);
        else
          AudioResourcePriority = v49(g_PolicyManager, v87, v48, 0, IsMuted, &v109);
        StreamDescriptor = AudioResourcePriority;
        if ( AudioResourcePriority >= 0 )
        {
          v51 = *(struct tWAVEFORMATEX **)(a1 + 208);
          v52 = *(_DWORD *)(a1 + 288);
          v53 = *(_DWORD *)(a1 + 292);
          v54 = *(_DWORD *)(a1 + 320);
          v55 = *(_DWORD *)(a1 + 312);
          v56 = *(_DWORD *)(a1 + 304);
          v57 = *(__int64 (__fastcall **)(CAudioResourceManager *__hidden, struct IAudioProcess *, struct IAudioStreamInfo *, unsigned int, int, int, struct CEndpointCharacteristics *, unsigned int, enum _AUDCLNT_SHAREMODE, struct IAudioGraphCallback *, struct tWAVEFORMATEX *, __int64, __int64, const struct _GUID *, unsigned int, const unsigned __int16 *, unsigned int, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)g_AudioResourceManager + 24LL);
          v58 = *(_DWORD *)(a1 + 64);
          v106 = v51;
          v96 = v53;
          v95 = v54;
          v98 = v55;
          v99 = v56;
          if ( v57 == CAudioResourceManager::CreateStream )
          {
            v59 = a8;
            v85 = v58;
            v60 = v88;
            Stream = CAudioResourceManager::CreateStream(
                       g_AudioResourceManager,
                       v110,
                       (struct IAudioStreamInfo *)(v10 + 8),
                       v56,
                       v55,
                       v54,
                       v88,
                       v53,
                       v52,
                       (struct IAudioGraphCallback *)v10,
                       v51,
                       v112,
                       a5,
                       a6,
                       v85,
                       a7,
                       v109,
                       a8);
          }
          else
          {
            v86 = v58;
            v60 = v88;
            Stream = v57(
                       g_AudioResourceManager,
                       v110,
                       (struct IAudioStreamInfo *)(v10 + 8),
                       v99,
                       v98,
                       v95,
                       v88,
                       v96,
                       v52,
                       (struct IAudioGraphCallback *)v10,
                       v106,
                       v112,
                       a5,
                       a6,
                       v86,
                       a7,
                       v109,
                       a8);
            v59 = a8;
          }
          StreamDescriptor = Stream;
          (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v45 + 16LL))(v45);
          if ( StreamDescriptor >= 0 )
          {
            if ( v60 )
            {
              v62 = *(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v60 + 16LL);
              if ( (char *)v62 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
                Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v60);
              else
                v62(v60);
            }
            goto LABEL_77;
          }
          goto LABEL_173;
        }
      }
      (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v45 + 16LL))(v45);
      goto LABEL_172;
    }
    v22 = *(const unsigned __int16 **)(a1 + 240);
    v23 = (*(_BYTE *)(a1 + 292) & 1) != 0;
    v97 = 0LL;
    v109 = v23;
    StreamDescriptor = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                         (CEndpointCharacteristicsCache *)1,
                         v22,
                         &v97);
    if ( StreamDescriptor < 0 )
    {
      if ( v97 )
      {
        v73 = *(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v97 + 16LL);
        if ( (char *)v73 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
        {
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v97);
          v9 = 0;
          goto LABEL_145;
        }
        v73(v97);
      }
      goto LABEL_128;
    }
    v24 = v97;
    v25 = *((_QWORD *)v97 + 2);
    v108 = v25;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
    v26 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v24 + 2);
    v94 = 0;
    v93 = 0LL;
    if ( v26 )
    {
      (**v26)(v26, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &v93);
      if ( v93 )
      {
        (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v93 + 88LL))(v93, &v94);
        if ( v93 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v93 + 16LL))(v93);
      }
    }
    v27 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v24 + 2);
    v28 = 0LL;
    v91 = 0;
    v89 = 0LL;
    if ( !v27 )
      goto LABEL_37;
    (**v27)(v27, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &v89);
    v28 = v89;
    if ( v89 )
    {
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v89 + 88LL))(v89, &v91);
      v28 = v89;
    }
    if ( !v91 )
    {
LABEL_37:
      if ( *((_DWORD *)v24 + 93) )
        goto LABEL_38;
      v29 = *((_QWORD *)v24 + 7);
      v30 = 1;
      if ( !v29 )
        goto LABEL_36;
      pvar = 0LL;
      v101 = 0LL;
      v102 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v29 + 40LL))(
             v29,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &pvar) >= 0
        && (_WORD)pvar == 19 )
      {
        v30 = v101 == 0;
      }
      PropVariantClear(&pvar);
      v28 = v89;
      if ( !v30 )
        v31 = (char *)v24 + 128;
      else
LABEL_36:
        v31 = (char *)v24 + 64;
      if ( *((_DWORD *)v31 + 2) <= 1u )
        goto LABEL_38;
      if ( !(unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(v24) )
      {
        v28 = v89;
LABEL_38:
        v32 = 0;
        goto LABEL_39;
      }
    }
    v72 = *((_QWORD *)v24 + 4);
    memset(v105, 0, sizeof(v105));
    v32 = 1;
    if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v72 + 40LL))(
           v72,
           &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
           v105) < 0
      || LOWORD(v105[0]) != 19 )
    {
      v32 = 0;
    }
    PropVariantClear(v105);
    v28 = v89;
LABEL_39:
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    v33 = *(_DWORD *)(a1 + 292);
    if ( (v33 & 0x400000) != 0 )
    {
      v34 = eKeywordDetectorConnector;
    }
    else if ( v32 && (v33 & 0x20000) != 0 )
    {
      v34 = eLoopbackConnector;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 288) == 1 )
        CoTaskMemFree(0LL);
      v34 = (v33 & 2) == 0;
    }
    v35 = 0LL;
    v36 = *(struct _GUID *)(a1 + 324);
    v88 = g_PolicyConfig;
    v103 = 0LL;
    if ( &pv )
    {
      v35 = (struct IMMDevice *)*((_QWORD *)v24 + 2);
      pv = 0LL;
      v103 = v35;
      ((void (__fastcall *)(struct IMMDevice *))v35->lpVtbl->AddRef)(v35);
      v107 = v36;
      StreamDescriptor = CPolicyConfig::GetMixFormatInternal(v88, v35, v34, &v107, (struct tWAVEFORMATEX **)&pv);
      if ( StreamDescriptor >= 0 )
        goto LABEL_48;
    }
    else
    {
      StreamDescriptor = -2147467261;
    }
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        32LL,
        &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
        (unsigned int)StreamDescriptor);
    }
LABEL_48:
    if ( v35 )
      ((void (__fastcall *)(struct IMMDevice *))v35->lpVtbl->Release)(v35);
    if ( StreamDescriptor < 0 )
    {
      if ( v25 )
LABEL_139:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    else
    {
      if ( v109 || *(_DWORD *)(a1 + 320) )
      {
        v38 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD))(*(_QWORD *)v10 + 136LL))(
                v10,
                a1,
                *(_QWORD *)(a1 + 208));
        v12 = (unsigned __int16 *)pv;
      }
      else
      {
        v37 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *__hidden, struct CVADServer *, const struct tWAVEFORMATEX *))(*(_QWORD *)v10 + 136LL);
        v12 = (unsigned __int16 *)pv;
        if ( v37 == CPerStreamVolumeAudioStream::Initialize )
          v38 = CPerStreamVolumeAudioStream::Initialize(
                  (CPerStreamVolumeAudioStream *)v10,
                  (struct CVADServer *)a1,
                  (const struct tWAVEFORMATEX *)pv);
        else
          v38 = v37((CPerStreamVolumeAudioStream *)v10, (struct CVADServer *)a1, (const struct tWAVEFORMATEX *)pv);
      }
      StreamDescriptor = v38;
      if ( v38 >= 0 )
      {
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        v39 = *(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v24 + 16LL);
        if ( (char *)v39 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v24);
        else
          v39(v24);
        goto LABEL_60;
      }
      if ( v25 )
        goto LABEL_139;
    }
    v74 = *(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v24 + 16LL);
    if ( (char *)v74 != (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
    {
      v74(v24);
      goto LABEL_144;
    }
    v75 = v24;
    goto LABEL_143;
  }
LABEL_145:
  v76 = a8;
  if ( *((_QWORD *)a8 + 5) && v10 )
  {
    CAudioStream::CloseAudioHandle((CAudioStream *)v10);
    if ( v9 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 168) + 264LL))(
        *(_QWORD *)(a1 + 168),
        *(_QWORD *)(a1 + 224),
        0LL);
    v77 = *(_QWORD *)(a1 + 224);
    if ( v77 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v77 + 72LL))(*(_QWORD *)(a1 + 224));
      *(_QWORD *)(a1 + 224) = 0LL;
    }
  }
  memset_0(v76, 0, 0x48uLL);
LABEL_93:
  LeaveCriticalSection(lpCriticalSection);
  v68 = pv;
  if ( pv )
    CoTaskMemFree(pv);
  if ( v10 )
  {
    v69 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)v10 + 72LL);
    if ( v69 == CAudioStream::ReleaseClientReference )
      CAudioStream::ReleaseClientReference((CAudioStream *)v10);
    else
      v69((CAudioStream *)v10);
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v68, &VadServer_CreateStream_Task_Stop);
  v70 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      45LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      (unsigned int)StreamDescriptor);
    v70 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( StreamDescriptor < 0
    && (struct _GUID *)v70 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(v70 + 28) & 0x100) != 0
    && *(_BYTE *)(v70 + 25) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(v70 + 16),
      46LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      (unsigned int)StreamDescriptor);
  }
  return (unsigned int)StreamDescriptor;
}
