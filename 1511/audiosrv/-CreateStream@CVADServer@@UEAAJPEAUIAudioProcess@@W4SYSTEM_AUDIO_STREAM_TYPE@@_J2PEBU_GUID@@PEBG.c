/*
 * XREFs of ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180022650
 * Callers:
 *     AudioServerCreateStream @ 0x18002B8A0 (AudioServerCreateStream.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180008A60 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800129D0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180019650 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001A800 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?ValidateAudioServerCategoryForStreamType@CWindowsPolicyManager@@UEAAJW4SYSTEM_AUDIO_STREAM_TYPE@@K@Z @ 0x18001B870 (-ValidateAudioServerCategoryForStreamType@CWindowsPolicyManager@@UEAAJW4SYSTEM_AUDIO_STREAM_TYPE.c)
 *     ?GetAudioResourcePriority@CWindowsPolicyManager@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHHPEAK@Z @ 0x18001B950 (-GetAudioResourcePriority@CWindowsPolicyManager@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BEC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?Initialize@CPerStreamVolumeAudioStream@@UEAAJPEAVCVADServer@@PEBUtWAVEFORMATEX@@@Z @ 0x18001CED0 (-Initialize@CPerStreamVolumeAudioStream@@UEAAJPEAVCVADServer@@PEBUtWAVEFORMATEX@@@Z.c)
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18001FA60 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?AddClientReference@CAudioStream@@UEAAKXZ @ 0x180020580 (-AddClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x180020BA8 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?AddPendingStreamCreate@CAudioSession@@QEAAJPEAVCAudioStream@@@Z @ 0x1800258B0 (-AddPendingStreamCreate@CAudioSession@@QEAAJPEAVCAudioStream@@@Z.c)
 *     ?IsMuted@CProcess@@UEAAHXZ @ 0x180028C80 (-IsMuted@CProcess@@UEAAHXZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAU_GUID@@444@Z @ 0x1800317E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180035A40 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     ?RemovePendingStreamCreate@CAudioSession@@QEAAJPEAVCAudioStream@@@Z @ 0x180064C10 (-RemovePendingStreamCreate@CAudioSession@@QEAAJPEAVCAudioStream@@@Z.c)
 *     WPP_SF_qdd @ 0x1800779F8 (WPP_SF_qdd.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x180081AB4 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     TemplateEventDescriptor @ 0x18008A638 (TemplateEventDescriptor.c)
 *     Template_zqttq @ 0x18008A654 (Template_zqttq.c)
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
  __int32 v8; // eax
  char v9; // bl
  __int64 v10; // rsi
  char *v11; // r13
  struct CEndpointCharacteristics *v12; // r14
  CProcess *v13; // r15
  int AliasedEndpointCharacteristics; // r12d
  unsigned int v15; // r12d
  __int64 (__fastcall *v16)(__int64, int, unsigned int); // rdi
  int v17; // eax
  HANDLE ProcessHeap; // rax
  int v19; // eax
  bool v20; // di
  bool v21; // r12
  bool v22; // dl
  bool v23; // zf
  int v24; // ebx
  const unsigned __int16 *v25; // rdx
  __int64 (__fastcall *v26)(volatile signed __int32 *); // rdi
  CEndpointCharacteristics *v27; // rdi
  __int64 v28; // rbx
  void (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // r12
  void (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // r12
  __int64 v31; // rsi
  struct tWAVEFORMATEX *v32; // rax
  BOOL v33; // r12d
  char *v34; // rax
  __int64 v35; // r12
  int v36; // r12d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v37; // eax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct _GUID *v41; // r8
  struct tWAVEFORMATEX *v42; // rdx
  __int64 (__fastcall *v43)(CPerStreamVolumeAudioStream *, struct CVADServer *, const struct tWAVEFORMATEX *); // r12
  __int64 v44; // rdx
  int v45; // ecx
  __int64 v46; // rcx
  unsigned __int16 *v47; // rdx
  __int64 v48; // r15
  __int64 v49; // rdi
  __int64 (__fastcall *v50)(CProcess *__hidden); // rbx
  int IsMuted; // eax
  __int64 (__fastcall *v52)(CWindowsPolicyManager *, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001, unsigned int, int, int, unsigned int *); // r14
  int AudioResourcePriority; // eax
  struct tWAVEFORMATEX *v54; // rcx
  enum _AUDCLNT_SHAREMODE v55; // edx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v56; // r8d
  int v57; // r9d
  int v58; // r10d
  unsigned int v59; // r11d
  __int64 (__fastcall *v60)(CAudioResourceManager *, struct IAudioProcess *, struct IAudioStreamInfo *, unsigned int, int, int, struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, enum _AUDCLNT_SHAREMODE, struct IAudioGraphCallback *, struct tWAVEFORMATEX *, __int64, __int64, const struct _GUID *, unsigned int, const unsigned __int16 *, unsigned int, struct SYSTEM_AUDIO_STREAM *); // rdi
  unsigned int v61; // r14d
  int Stream; // eax
  __int64 (__fastcall *v63)(CAudioStream *); // rbx
  __int64 (__fastcall *v64)(CPerStreamVolumeAudioSession *__hidden, struct CAudioStream *); // rdi
  int v65; // eax
  signed __int64 v66; // rax
  HANDLE EventW; // rax
  signed int LastError; // eax
  char *v69; // rcx
  __int64 v70; // rdi
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 (__fastcall *v73)(CAudioStream *); // rbx
  TraceLoggingHProvider v74; // rcx
  struct tWAVEFORMATEX **v76; // [rsp+20h] [rbp-F0h]
  int v77; // [rsp+30h] [rbp-E0h]
  GUID *v78; // [rsp+38h] [rbp-D8h]
  GUID *v79; // [rsp+40h] [rbp-D0h]
  struct IAudioGraphCallback *v80; // [rsp+48h] [rbp-C8h]
  struct tWAVEFORMATEX *v81; // [rsp+50h] [rbp-C0h]
  unsigned int v82; // [rsp+70h] [rbp-A0h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v83; // [rsp+90h] [rbp-80h]
  int v84; // [rsp+90h] [rbp-80h]
  char v85; // [rsp+94h] [rbp-7Ch]
  unsigned int v86; // [rsp+98h] [rbp-78h] BYREF
  __int64 v87; // [rsp+A0h] [rbp-70h] BYREF
  struct CEndpointCharacteristics *v88; // [rsp+A8h] [rbp-68h] BYREF
  int v89; // [rsp+B0h] [rbp-60h] BYREF
  LPVOID pv; // [rsp+B8h] [rbp-58h] BYREF
  struct tWAVEFORMATEX *v91; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v92; // [rsp+C8h] [rbp-48h] BYREF
  int v93; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v94; // [rsp+D8h] [rbp-38h]
  CEndpointCharacteristics *v95; // [rsp+E0h] [rbp-30h] BYREF
  int v96; // [rsp+E8h] [rbp-28h]
  int v97; // [rsp+ECh] [rbp-24h]
  PROPVARIANT pvar; // [rsp+F0h] [rbp-20h] BYREF
  __int64 v99; // [rsp+F8h] [rbp-18h]
  __int64 v100; // [rsp+100h] [rbp-10h]
  PROPVARIANT v101[3]; // [rsp+108h] [rbp-8h] BYREF
  struct tWAVEFORMATEX *v102; // [rsp+120h] [rbp+10h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+128h] [rbp+18h]
  GUID v104; // [rsp+130h] [rbp+20h] BYREF
  GUID v105; // [rsp+140h] [rbp+30h] BYREF
  GUID v106; // [rsp+150h] [rbp+40h] BYREF
  struct _GUID v107; // [rsp+160h] [rbp+50h] BYREF
  struct _GUID v108; // [rsp+170h] [rbp+60h] BYREF
  __int64 v109; // [rsp+180h] [rbp+70h]
  GUID v110; // [rsp+190h] [rbp+80h]
  GUID v111; // [rsp+1A0h] [rbp+90h]

  v8 = *(_DWORD *)(a1 + 288);
  v9 = 0;
  pv = 0LL;
  v10 = a1;
  v11 = 0LL;
  v88 = 0LL;
  v12 = 0LL;
  v83 = v8;
  v13 = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    Template_zqttq(
      a1,
      (unsigned int)&VadServer_CreateStream_Task_Start,
      *(_QWORD *)(a1 + 216),
      *(_DWORD *)(a1 + 284),
      *(_DWORD *)(a1 + 292),
      *(_DWORD *)(a1 + 300),
      v8);
  memset_0(a8, 0, 0x50uLL);
  lpCriticalSection = (LPCRITICAL_SECTION)(v10 + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)(v10 + 232));
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x28u, (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids);
  }
  if ( *(_DWORD *)(v10 + 200) )
  {
    if ( *(_QWORD *)(v10 + 208) )
    {
      AliasedEndpointCharacteristics = -2004287486;
      goto LABEL_131;
    }
    v15 = *(_DWORD *)(v10 + 284);
    v94 = *(_QWORD *)(v10 + 176);
    v16 = *(__int64 (__fastcall **)(__int64, int, unsigned int))(*(_QWORD *)g_PolicyManager + 96LL);
    if ( v16 == CWindowsPolicyManager::ValidateAudioServerCategoryForStreamType )
      v17 = CWindowsPolicyManager::ValidateAudioServerCategoryForStreamType((__int64)g_PolicyManager, a3, v15);
    else
      v17 = v16((__int64)g_PolicyManager, a3, v15);
    AliasedEndpointCharacteristics = v17;
    if ( v17 < 0 )
    {
LABEL_130:
      v9 = 0;
      goto LABEL_131;
    }
    ProcessHeap = GetProcessHeap();
    v11 = (char *)HeapAlloc(ProcessHeap, 0, 0x158uLL);
    if ( v11 )
    {
      v19 = *(_DWORD *)(v10 + 276);
      v20 = *(_DWORD *)(v10 + 300) != 0;
      v21 = *(_DWORD *)(v10 + 296) != 0;
      v22 = (v19 & 0x200000) != 0 || a3 == 2;
      v23 = *(_DWORD *)(v10 + 272) == 1;
      v24 = *(_DWORD *)(v10 + 284);
      *((_DWORD *)v11 + 6) = 1;
      *(_QWORD *)v11 = &CAudioStream::`vftable'{for `IAudioGraphCallback'};
      *((_QWORD *)v11 + 1) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
      v11[40] = v23;
      v11[41] = v19 & 1;
      *((_QWORD *)v11 + 2) = &CAudioStream::`vftable'{for `CUnknown'};
      *((_QWORD *)v11 + 6) = 0LL;
      *((_DWORD *)v11 + 9) = 1;
      v11[42] = v22;
      *((_QWORD *)v11 + 7) = 0LL;
      *((_QWORD *)v11 + 8) = 0LL;
      *((_QWORD *)v11 + 9) = 0LL;
      *((_DWORD *)v11 + 20) = 1065353216;
      v11[84] = 0;
      *((_QWORD *)v11 + 12) = 0LL;
      v11[104] = 0;
      *((_DWORD *)v11 + 27) = 0;
      ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(v11 + 112));
      *((_QWORD *)v11 + 19) = 0LL;
      *((_QWORD *)v11 + 20) = 0LL;
      *((_QWORD *)v11 + 21) = 0LL;
      *((_QWORD *)v11 + 22) = 0LL;
      v11[184] = 0;
      *((_DWORD *)v11 + 47) = -1;
      ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(v11 + 192));
      *((_DWORD *)v11 + 68) = 10;
      *((_QWORD *)v11 + 29) = 0LL;
      *((_QWORD *)v11 + 30) = 0LL;
      *((_QWORD *)v11 + 31) = 0LL;
      *((_QWORD *)v11 + 32) = 0LL;
      *((_QWORD *)v11 + 33) = 0LL;
      *((_QWORD *)v11 + 35) = 0LL;
      *((_QWORD *)v11 + 36) = 0LL;
      *((_QWORD *)v11 + 37) = 0LL;
      *((_DWORD *)v11 + 77) = a3;
      *((_DWORD *)v11 + 76) = v24;
      v11[312] = v21;
      v11[313] = v20;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10LL,
          &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
          v11,
          a3,
          v24);
      }
      *(_QWORD *)v11 = &CPerStreamVolumeAudioStream::`vftable'{for `IAudioGraphCallback'};
      *((_QWORD *)v11 + 1) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
      *((_QWORD *)v11 + 2) = &CPerStreamVolumeAudioStream::`vftable'{for `CUnknown'};
      *((_QWORD *)v11 + 40) = 0LL;
      *((_QWORD *)v11 + 41) = 0LL;
      v11[336] = 0;
    }
    else
    {
      v11 = 0LL;
    }
    if ( !v11 )
    {
      AliasedEndpointCharacteristics = -2147024882;
      goto LABEL_130;
    }
    AliasedEndpointCharacteristics = CAudioSession::AddPendingStreamCreate(
                                       *(CAudioSession **)(v10 + 168),
                                       (struct CAudioStream *)v11);
    if ( AliasedEndpointCharacteristics < 0 )
      goto LABEL_130;
    if ( *(_DWORD *)(v10 + 272) == 1 )
    {
      AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(char *, __int64, _QWORD))(*(_QWORD *)v11 + 144LL))(
                                         v11,
                                         v10,
                                         *(_QWORD *)(v10 + 192));
      if ( AliasedEndpointCharacteristics < 0 )
        goto LABEL_130;
LABEL_90:
      v44 = v94;
      *(_QWORD *)(v94 + 80) = *(_QWORD *)(v10 + 192);
      v45 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 192) + 16LL) + 18;
      *(_QWORD *)(v44 + 40) = a4;
      *(_QWORD *)(v44 + 48) = a5;
      *(_DWORD *)(v44 + 72) = v45;
      *(_DWORD *)(v44 + 16) = *(_DWORD *)(v10 + 64);
      *(_QWORD *)(v44 + 24) = a7;
      *(_QWORD *)(v44 + 104) = *(_QWORD *)(v10 + 216);
      *(_DWORD *)(v44 + 12) = v83;
      v46 = *(_QWORD *)(v10 + 184);
      if ( v46 )
      {
        v47 = (unsigned __int16 *)pv;
        *(_QWORD *)(v46 + 24) = *(_QWORD *)(v10 + 224);
        *(_DWORD *)(*(_QWORD *)(v10 + 184) + 8LL) = v47[8] + 18;
        *(_QWORD *)(*(_QWORD *)(v10 + 184) + 16LL) = v47;
      }
      v48 = *(_QWORD *)(v10 + 168);
      v49 = *(_QWORD *)(v48 + 864);
      if ( v49 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v49 + 8LL))(*(_QWORD *)(v48 + 864));
      v13 = *(CProcess **)(v48 + 864);
      AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                         (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                         *(const unsigned __int16 **)(v10 + 224),
                                         &v88);
      if ( AliasedEndpointCharacteristics < 0
        || ((v86 = -1,
             v50 = *(__int64 (__fastcall **)(CProcess *__hidden))(*(_QWORD *)v13 + 112LL),
             v50 != CProcess::IsMuted)
          ? (IsMuted = v50(v13))
          : (IsMuted = CProcess::IsMuted(v13)),
            (v52 = *(__int64 (__fastcall **)(CWindowsPolicyManager *, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001, unsigned int, int, int, unsigned int *))(*(_QWORD *)g_PolicyManager + 56LL),
             v52 != CWindowsPolicyManager::GetAudioResourcePriority)
          ? (AudioResourcePriority = ((__int64 (__fastcall *)(CWindowsPolicyManager *, bool, _QWORD, _QWORD, int, unsigned int *, int, GUID *, GUID *, struct IAudioGraphCallback *, struct tWAVEFORMATEX *))v52)(
                                       g_PolicyManager,
                                       a3 - 1 <= 1,
                                       *(unsigned int *)(v10 + 284),
                                       0LL,
                                       IsMuted,
                                       &v86,
                                       v77,
                                       v78,
                                       v79,
                                       v80,
                                       v81))
          : (AudioResourcePriority = CWindowsPolicyManager::GetAudioResourcePriority(
                                       g_PolicyManager,
                                       (enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001)(a3 - 1 <= 1),
                                       *(_DWORD *)(v10 + 284),
                                       0,
                                       IsMuted,
                                       &v86)),
            AliasedEndpointCharacteristics = AudioResourcePriority,
            AudioResourcePriority < 0) )
      {
        v12 = v88;
        goto LABEL_130;
      }
      v54 = *(struct tWAVEFORMATEX **)(v10 + 192);
      v55 = *(_DWORD *)(v10 + 272);
      v56 = *(_DWORD *)(v10 + 276);
      v57 = *(_DWORD *)(v10 + 300);
      v58 = *(_DWORD *)(v10 + 292);
      v59 = *(_DWORD *)(v10 + 284);
      v60 = *(__int64 (__fastcall **)(CAudioResourceManager *, struct IAudioProcess *, struct IAudioStreamInfo *, unsigned int, int, int, struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, enum _AUDCLNT_SHAREMODE, struct IAudioGraphCallback *, struct tWAVEFORMATEX *, __int64, __int64, const struct _GUID *, unsigned int, const unsigned __int16 *, unsigned int, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)g_AudioResourceManager + 24LL);
      v61 = *(_DWORD *)(v10 + 64);
      v102 = v54;
      v96 = v57;
      v97 = v58;
      LODWORD(v94) = v59;
      v82 = v61;
      v12 = v88;
      if ( v60 == CAudioResourceManager::CreateStream )
      {
        Stream = CAudioResourceManager::CreateStream(
                   g_AudioResourceManager,
                   a2,
                   (struct IAudioStreamInfo *)(v11 + 8),
                   v59,
                   v58,
                   v57,
                   v88,
                   v56,
                   v55,
                   (struct IAudioGraphCallback *)v11,
                   v54,
                   a4,
                   a5,
                   a6,
                   v82,
                   a7,
                   v86,
                   a8);
      }
      else
      {
        LODWORD(v79) = v55;
        LODWORD(v78) = v56;
        Stream = v60(
                   g_AudioResourceManager,
                   a2,
                   (struct IAudioStreamInfo *)(v11 + 8),
                   v94,
                   v97,
                   v96,
                   v88,
                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v78,
                   (enum _AUDCLNT_SHAREMODE)v79,
                   (struct IAudioGraphCallback *)v11,
                   v102,
                   a4,
                   a5,
                   a6,
                   v82,
                   a7,
                   v86,
                   a8);
      }
      AliasedEndpointCharacteristics = Stream;
      if ( Stream < 0 )
        goto LABEL_130;
      v63 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v11 + 64LL);
      if ( v63 == CAudioStream::AddClientReference )
        CAudioStream::AddClientReference((CAudioStream *)v11);
      else
        v63((CAudioStream *)v11);
      *(_QWORD *)(v10 + 208) = v11;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          41LL,
          &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
          *((_QWORD *)a8 + 5));
      }
      v64 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioSession *__hidden, struct CAudioStream *))(**(_QWORD **)(v10 + 168) + 240LL);
      v65 = v64 == CPerStreamVolumeAudioSession::AddStream
          ? CPerStreamVolumeAudioSession::AddStream(
              *(CPerStreamVolumeAudioSession **)(v10 + 168),
              (struct CAudioStream *)v11)
          : v64(*(CPerStreamVolumeAudioSession **)(v10 + 168), (struct CAudioStream *)v11);
      AliasedEndpointCharacteristics = v65;
      if ( v65 )
        goto LABEL_130;
      v9 = 1;
      AliasedEndpointCharacteristics = 0;
      do
      {
        v66 = _InterlockedExchangeAdd64(&CAudioStream::s_llStreamIdentifier, 1uLL);
        *((_QWORD *)v11 + 37) = v66 + 1;
      }
      while ( v66 == -1 );
      EventW = CreateEventW(0LL, 1, 0, 0LL);
      *((_QWORD *)v11 + 35) = EventW;
      if ( !EventW )
      {
        LastError = GetLastError();
        AliasedEndpointCharacteristics = LastError;
        if ( LastError > 0 )
          AliasedEndpointCharacteristics = (unsigned __int16)LastError | 0x80070000;
        if ( AliasedEndpointCharacteristics >= 0 )
          goto LABEL_127;
        v69 = (char *)*((_QWORD *)v11 + 35);
        if ( (unsigned __int64)(v69 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          CloseHandle(v69);
          *((_QWORD *)v11 + 35) = 0LL;
        }
        *((_QWORD *)v11 + 37) = 0LL;
      }
      if ( AliasedEndpointCharacteristics < 0 )
      {
        v12 = v88;
        goto LABEL_131;
      }
LABEL_127:
      v12 = v88;
      *((_QWORD *)a8 + 6) = *((_QWORD *)v11 + 37);
      goto LABEL_141;
    }
    v25 = *(const unsigned __int16 **)(v10 + 224);
    v85 = *(_BYTE *)(v10 + 276) & 1;
    v95 = 0LL;
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                       v25,
                                       &v95);
    if ( AliasedEndpointCharacteristics < 0 )
    {
      if ( v95 )
      {
        v26 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v95 + 16LL);
        if ( v26 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v95);
        else
          v26((volatile signed __int32 *)v95);
      }
      goto LABEL_130;
    }
    v27 = v95;
    v28 = *((_QWORD *)v95 + 2);
    v109 = v28;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
    v29 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v27 + 2);
    v93 = 0;
    v92 = 0LL;
    if ( v29 )
    {
      (**v29)(v29, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &v92);
      if ( v92 )
      {
        (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v92 + 88LL))(v92, &v93);
        if ( v92 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 16LL))(v92);
      }
    }
    v30 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v27 + 2);
    v31 = 0LL;
    v89 = 0;
    v87 = 0LL;
    if ( v30 )
    {
      (**v30)(v30, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &v87);
      v31 = v87;
      if ( v87 )
      {
        (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v87 + 88LL))(v87, &v89);
        v31 = v87;
      }
      if ( v89 )
        goto LABEL_54;
    }
    if ( !*((_DWORD *)v27 + 93) )
    {
      v32 = (struct tWAVEFORMATEX *)*((_QWORD *)v27 + 7);
      v33 = 1;
      v91 = v32;
      if ( !v32 )
        goto LABEL_51;
      pvar = 0LL;
      v99 = 0LL;
      v100 = 0LL;
      if ( (*(int (__fastcall **)(struct tWAVEFORMATEX *, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)&v32->wFormatTag
                                                                                             + 40LL))(
             v91,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &pvar) >= 0
        && (_WORD)pvar == 19 )
      {
        v33 = v99 == 0;
      }
      PropVariantClear(&pvar);
      v31 = v87;
      v34 = (char *)v27 + 128;
      if ( v33 )
LABEL_51:
        v34 = (char *)v27 + 64;
      if ( *((_DWORD *)v34 + 2) > 1u )
      {
        if ( CEndpointCharacteristics::AreEnhancementsEnabled(v27) )
        {
LABEL_54:
          v35 = *((_QWORD *)v27 + 4);
          memset(v101, 0, sizeof(v101));
          v84 = 1;
          if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v35 + 40LL))(
                 v35,
                 &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
                 v101) < 0
            || LOWORD(v101[0]) != 19 )
          {
            v84 = 0;
          }
          PropVariantClear(v101);
          v31 = v87;
LABEL_60:
          if ( v31 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          v10 = a1;
          v36 = *(_DWORD *)(a1 + 276);
          if ( (v36 & 0x400000) != 0 )
          {
            v37 = eKeywordDetectorConnector;
          }
          else if ( v84 && (v36 & 0x20000) != 0 )
          {
            v37 = eLoopbackConnector;
          }
          else
          {
            if ( *(_DWORD *)(a1 + 272) == 1 )
              CoTaskMemFree(0LL);
            v37 = ((unsigned __int8)~(_BYTE)v36 >> 1) & 1;
          }
          v83 = v37;
          v108 = *(struct _GUID *)(a1 + 304);
          AliasedEndpointCharacteristics = CPolicyConfig::GetMixFormatInternal(
                                             g_PolicyConfig,
                                             v27,
                                             v37,
                                             &v108,
                                             (struct tWAVEFORMATEX **)&pv);
          if ( AliasedEndpointCharacteristics < 0 )
            goto LABEL_71;
          if ( *(_DWORD *)(a1 + 300) )
          {
            v38 = (*(__int64 (__fastcall **)(char *, __int64, _QWORD))(*(_QWORD *)v11 + 144LL))(
                    v11,
                    a1,
                    *(_QWORD *)(a1 + 192));
          }
          else if ( v85 )
          {
            v39 = *(unsigned int *)(a1 + 292);
            v81 = 0LL;
            v80 = (struct IAudioGraphCallback *)&v105;
            v79 = &v106;
            v78 = &v104;
            v77 = 0;
            v91 = 0LL;
            LODWORD(v76) = 0;
            v40 = *(unsigned int *)(a1 + 284);
            v104 = GUID_00000000_0000_0000_0000_000000000000;
            v106 = GUID_00000000_0000_0000_0000_000000000000;
            v105 = GUID_00000000_0000_0000_0000_000000000000;
            AliasedEndpointCharacteristics = DeriveAudioProcessingModeConfiguration(v40, v39, v27, 0LL);
            if ( AliasedEndpointCharacteristics < 0
              || (v42 = *(struct tWAVEFORMATEX **)(a1 + 192),
                  v110 = v104,
                  v111 = v105,
                  v107 = v106,
                  AliasedEndpointCharacteristics = DeriveOffloadConnectorFormatFromStreamFormat(
                                                     v27,
                                                     v42,
                                                     v41,
                                                     &v107,
                                                     (struct _GUID *)v76,
                                                     &v91),
                  AliasedEndpointCharacteristics < 0) )
            {
LABEL_71:
              if ( v28 )
              {
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
                v10 = a1;
              }
              (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v27 + 16LL))(v27);
              goto LABEL_130;
            }
            v38 = (*(__int64 (__fastcall **)(char *, __int64, struct tWAVEFORMATEX *))(*(_QWORD *)v11 + 144LL))(
                    v11,
                    a1,
                    v91);
          }
          else
          {
            v43 = *(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *, struct CVADServer *, const struct tWAVEFORMATEX *))(*(_QWORD *)v11 + 144LL);
            if ( v43 == CPerStreamVolumeAudioStream::Initialize )
              v38 = CPerStreamVolumeAudioStream::Initialize(
                      (CPerStreamVolumeAudioStream *)v11,
                      (struct CVADServer *)a1,
                      (const struct tWAVEFORMATEX *)pv);
            else
              v38 = v43((CPerStreamVolumeAudioStream *)v11, (struct CVADServer *)a1, (const struct tWAVEFORMATEX *)pv);
          }
          AliasedEndpointCharacteristics = v38;
          if ( v38 < 0 )
          {
            if ( v28 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
            (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v27 + 16LL))(v27);
            v10 = a1;
            goto LABEL_130;
          }
          if ( v28 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
          (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v27 + 16LL))(v27);
          v10 = a1;
          goto LABEL_90;
        }
        v31 = v87;
      }
    }
    v84 = 0;
    goto LABEL_60;
  }
  AliasedEndpointCharacteristics = -2004287487;
LABEL_131:
  if ( *((_QWORD *)a8 + 5) )
  {
    if ( v11 )
    {
      CAudioStream::CloseAudioHandle((CAudioStream *)v11);
      if ( v9 )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v10 + 168) + 264LL))(
          *(_QWORD *)(v10 + 168),
          *(_QWORD *)(v10 + 208),
          0LL);
      else
        CAudioSession::RemovePendingStreamCreate(*(CAudioSession **)(v10 + 168), (struct CAudioStream *)v11);
      v70 = *(_QWORD *)(v10 + 208);
      if ( v70 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v70 + 72LL))(*(_QWORD *)(v10 + 208));
        *(_QWORD *)(v10 + 208) = 0LL;
      }
    }
  }
  else if ( v11 )
  {
    CAudioSession::RemovePendingStreamCreate(*(CAudioSession **)(v10 + 168), (struct CAudioStream *)v11);
  }
  memset_0(a8, 0, 0x50uLL);
LABEL_141:
  LeaveCriticalSection(lpCriticalSection);
  if ( pv )
    CoTaskMemFree(pv);
  if ( v11 )
  {
    v73 = *(__int64 (__fastcall **)(CAudioStream *))(*(_QWORD *)v11 + 72LL);
    if ( v73 == CAudioStream::ReleaseClientReference )
      CAudioStream::ReleaseClientReference((CAudioStream *)v11);
    else
      v73((CAudioStream *)v11);
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v71, &VadServer_CreateStream_Task_Stop, v72);
  v74 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      42LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)AliasedEndpointCharacteristics);
    v74 = WPP_GLOBAL_Control;
  }
  if ( AliasedEndpointCharacteristics < 0
    && v74 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)v74 + 7) & 0x100) != 0
    && *((_BYTE *)v74 + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)v74 + 2),
      43LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)AliasedEndpointCharacteristics);
  }
  if ( v13 )
    (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v12 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)AliasedEndpointCharacteristics;
}
