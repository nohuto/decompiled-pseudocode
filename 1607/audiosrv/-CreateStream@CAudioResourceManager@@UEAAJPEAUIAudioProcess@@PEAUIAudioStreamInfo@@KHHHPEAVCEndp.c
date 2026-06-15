/*
 * XREFs of ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKHPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18001EF80
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180009F10 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800038A4 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800039E4 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180003B80 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     _TlgKeywordOn @ 0x180004A28 (_TlgKeywordOn.c)
 *     TemplateEventDescriptor @ 0x180008958 (TemplateEventDescriptor.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18000DBC0 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x18000FA40 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ @ 0x180018560 (-GetUniqueStreamIdentifier@CAudioStream@@UEAA_JXZ.c)
 *     ?GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x180018570 (-GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ?SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x180019A40 (-SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 *     ?IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ @ 0x18001A130 (-IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ.c)
 *     ?IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ @ 0x18001A140 (-IsStrictPeriodicityClient@CAudioStream@@UEAA_NXZ.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18001B214 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18001B5C0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001B720 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18001C9C4 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     ?DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ @ 0x18001DA60 (-DoesExclusiveModeOverrideShared@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18001DAE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x18001EE2C (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x1800213E0 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?LockForStreamGroupConnectionDisconnection@CDeviceGraphObjectsStore@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x180021970 (-LockForStreamGroupConnectionDisconnection@CDeviceGraphObjectsStore@@UEAA-AVSyncLockCriticalSect.c)
 *     ?GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z @ 0x180022350 (-GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022AD0 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180022B30 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x180022EE0 (-GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x180023350 (-IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     ?ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023A70 (-ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProx.c)
 *     ?CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUStreamGroupParams@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023D90 (-CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioG.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180024740 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180025004 (-InternalRelease@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x1800257B8 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18002765C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMMDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x180028E54 (-InternalRelease@-$ComPtr@UIMMDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _TlgCreateWsz @ 0x180028F18 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002B6C0 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18002B750 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180036700 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x180036D30 (memset.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18004EF3C (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x180071844 (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180077D18 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180077EE4 (-GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     WPP_SF_Idd @ 0x1800796FC (WPP_SF_Idd.c)
 */

__int64 __fastcall CAudioResourceManager::CreateStream(
        CAudioResourceManager *this,
        struct IAudioProcess *a2,
        struct IAudioStreamInfo *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        struct CEndpointCharacteristics *a8,
        unsigned int a9,
        enum _AUDCLNT_SHAREMODE a10,
        struct IAudioGraphCallback *a11,
        struct tWAVEFORMATEX *a12,
        __int64 a13,
        __int64 a14,
        const struct _GUID *a15,
        unsigned int a16,
        const unsigned __int16 *a17,
        unsigned int a18,
        unsigned int a19,
        struct SYSTEM_AUDIO_STREAM *a20)
{
  CEndpointCharacteristics *v20; // rsi
  int v21; // ebx
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v23; // r15
  struct AUDIO_DEVICE_MODE_DESCRIPTOR *v24; // r13
  __int64 *v25; // rcx
  __int64 v26; // rax
  __int64 (__fastcall *v27)(__int64 *, unsigned __int16 **); // rax
  int SharedModeEnginePeriodicity; // r12d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v29; // edx
  void (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // r9
  __int64 v31; // rcx
  int v32; // edi
  void (__fastcall ***v33)(_QWORD, GUID *, __int64 *); // r9
  __int64 v34; // rcx
  __int64 v35; // r9
  BOOL v36; // ebx
  char *v37; // rax
  enum _AUDCLNT_SHAREMODE v38; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v39; // eax
  GUID v40; // xmm8
  GUID v41; // xmm9
  GUID v42; // xmm6
  GUID v43; // xmm7
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v44; // ebx
  __int64 v45; // rcx
  BOOL v46; // edi
  char *v47; // rax
  int v48; // r8d
  int v49; // ecx
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  BOOL v53; // edi
  char *v54; // rax
  int v55; // r8d
  int v56; // edx
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 v59; // rcx
  _BOOL8 v60; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v61; // edx
  char *v62; // rax
  int v63; // r8d
  int v64; // ecx
  __int64 v65; // r9
  __int64 v66; // rdx
  GUID *v67; // rax
  struct _GUID v68; // xmm0
  __int64 v69; // rax
  unsigned int v70; // r14d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v71; // r10d
  __int64 v72; // rcx
  BOOL v73; // ebx
  char *v74; // rax
  int v75; // r8d
  int v76; // ecx
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // rcx
  BOOL v80; // ebx
  char *v81; // rax
  int v82; // r8d
  int v83; // edx
  __int64 v84; // r9
  __int64 v85; // rcx
  BOOL v86; // ebx
  __int64 v87; // rcx
  char *v88; // rax
  int v89; // r8d
  int v90; // edx
  __int64 v91; // r9
  __int64 v92; // rcx
  __int64 v93; // rcx
  struct _GUID v94; // xmm0
  struct tWAVEFORMATEX *v95; // r14
  enum _AUDCLNT_SHAREMODE v96; // r9d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v97; // ebx
  enum _AUDCLNT_SHAREMODE v98; // edi
  int v99; // eax
  __int64 v100; // r12
  struct SaDeviceParams *v101; // rax
  int v102; // ecx
  char *v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rdi
  __int64 v106; // rax
  int v107; // eax
  __int64 v108; // rbx
  int (*v109)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  int v110; // eax
  int v111; // edi
  unsigned int v112; // r12d
  unsigned int v113; // ebx
  __int64 v114; // rsi
  int v115; // eax
  struct tWAVEFORMATEX *v116; // rax
  struct tWAVEFORMATEX *v117; // rax
  __int64 v118; // rcx
  void *v119; // rbx
  void *v120; // rax
  struct _RTL_CRITICAL_SECTION *v121; // rdi
  __int64 v122; // rcx
  void *v123; // rdi
  __int64 v124; // rsi
  struct _RTL_CRITICAL_SECTION *v125; // rax
  struct _RTL_CRITICAL_SECTION *v126; // r12
  void *v127; // rax
  void *v128; // rsi
  LPVOID v129; // rbx
  void *v130; // r9
  unsigned int v131; // edx
  int (*v132)(CDeviceGraphManager *__hidden, struct IAudioStreamInfo *, unsigned int, enum _AUDCLNT_SHAREMODE, struct IAudioGraphCallback *, unsigned int, struct AUDIO_DEVICE_MODE_DESCRIPTOR *, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct StreamGroupParams *, struct SYSTEM_AUDIO_STREAM *); // rax
  int Stream; // eax
  CAudioStream *v134; // rdi
  __int64 (__fastcall *v135)(CAudioStream *, struct SYSTEM_AUDIO_STREAM *, unsigned int); // rax
  int (*v136)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rax
  int v137; // eax
  void (__fastcall *v138)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *); // rax
  __int64 (__fastcall *v139)(CAudioStream *, struct IStreamGroupProxy **); // rax
  int StreamGroup; // eax
  CSaDeviceProxy *v141; // rdi
  __int64 (__fastcall *v142)(CBaseStreamGroupProxy *__hidden, struct ISaDeviceProxy **); // rax
  int v143; // eax
  bool (__fastcall *v144)(CAudioStream *); // rax
  char IsFormatSensitiveClient; // al
  __int64 (__fastcall *v146)(CSaDeviceProxy *__hidden, struct SaDeviceParams **); // rax
  int SaDeviceParams; // eax
  __int64 v148; // rax
  __int64 (*v149)(void); // rax
  __int64 UniqueStreamIdentifier; // rax
  struct SaDeviceParams *v151; // rdi
  struct SYSTEM_AUDIO_STREAM *v152; // rsi
  bool v153; // al
  CBaseStreamGroupProxy *v154; // rcx
  struct IDeviceGraphObjectsStore *v155; // rcx
  void (*v156)(void); // rax
  enum _AUDCLNT_SHAREMODE v158; // edi
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v160; // rdi
  __int64 (__fastcall *v161)(CAudioSessionManagerProvider *, const unsigned __int16 *, struct CAudioSessionManager **); // rax
  int AudioSessionManager; // eax
  void (__fastcall *v163)(struct CAudioSessionManagerProvider *); // rax
  bool DoesExclusiveModeOverrideShared; // al
  __int64 v165; // rdx
  __int64 v166; // r8
  signed __int32 v167; // eax
  CAudioStream *v168; // rdi
  bool (__fastcall *v169)(CAudioStream *); // rax
  bool v170; // al
  bool v171; // r12
  bool (__fastcall *v172)(CAudioStream *); // rax
  bool IsStrictPeriodicityClient; // al
  CAudioResourceManager *v174; // rcx
  bool v175; // di
  LPVOID *v176; // rdi
  int SaDeviceForSharedStream; // eax
  CAudioSessionManager *v178; // rcx
  CBaseStreamGroupProxy *v179; // rsi
  bool (__fastcall *v180)(CBaseStreamGroupProxy *__hidden); // rax
  char IsPeriodicitySensitive; // al
  _BOOL8 v182; // r9
  __int64 (__fastcall *v183)(CDeviceGraphManager *, CBaseStreamGroupProxy *, struct ISaDeviceProxy *, _BOOL8, struct SYSTEM_AUDIO_STREAM *); // rax
  int v184; // eax
  __int64 (__fastcall *v185)(CAudioSessionManager *); // rax
  __int64 v186; // rcx
  struct tWAVEFORMATEX *v187; // rcx
  int v188; // eax
  struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedConnectorModes; // rax
  bool v190; // zf
  GUID *v191; // rax
  unsigned int v192; // ecx
  struct tWAVEFORMATEX *v193; // rbx
  int MixFormat; // eax
  struct tWAVEFORMATEX *v195; // rdi
  __int64 v196; // r8
  WORD wFormatTag; // ax
  LPCGUID v198; // r8
  LPCGUID v199; // r9
  LPCGUID v200; // r8
  LPCGUID v201; // r9
  const struct tWAVEFORMATEX *v202; // rdi
  const struct tWAVEFORMATEX *v203; // rax
  void *v204; // rdi
  signed __int32 v205; // eax
  CAudioResourceManager *v206; // rcx
  int SaDeviceForExclusiveStream; // eax
  CAudioResourceManager *v208; // rcx
  int SaDeviceForOffloadedStream; // eax
  CBaseStreamGroupProxy *v210; // rdi
  struct tWAVEFORMATEX *v211; // rdi
  RPC_STATUS v212; // eax
  int v213; // eax
  enum _AUDCLNT_SHAREMODE pdwType; // [rsp+28h] [rbp-E0h]
  PVOID pvData; // [rsp+30h] [rbp-D8h]
  bool v216; // [rsp+40h] [rbp-C8h]
  struct tWAVEFORMATEX **v217; // [rsp+48h] [rbp-C0h]
  bool v218; // [rsp+58h] [rbp-B0h]
  bool v219; // [rsp+78h] [rbp-90h]
  unsigned __int8 v220; // [rsp+78h] [rbp-90h]
  char v221; // [rsp+79h] [rbp-8Fh]
  bool v222; // [rsp+79h] [rbp-8Fh]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v223; // [rsp+7Ch] [rbp-8Ch]
  char v224; // [rsp+80h] [rbp-88h]
  struct ISaDeviceProxy *v225; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v226; // [rsp+90h] [rbp-78h] BYREF
  CEndpointCharacteristics *v227; // [rsp+98h] [rbp-70h]
  int v228; // [rsp+A0h] [rbp-68h] BYREF
  int v229; // [rsp+A4h] [rbp-64h] BYREF
  struct tWAVEFORMATEX *v230; // [rsp+A8h] [rbp-60h] BYREF
  CBaseStreamGroupProxy *v231; // [rsp+B0h] [rbp-58h] BYREF
  CAudioStream *v232; // [rsp+B8h] [rbp-50h]
  CAudioSessionManager *v233; // [rsp+C0h] [rbp-48h] BYREF
  void *v234; // [rsp+C8h] [rbp-40h] BYREF
  struct SaDeviceParams *v235; // [rsp+D0h] [rbp-38h] BYREF
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v236; // [rsp+D8h] [rbp-30h] BYREF
  struct AUDIO_DEVICE_MODE_DESCRIPTOR *v237; // [rsp+E0h] [rbp-28h] BYREF
  struct SYSTEM_AUDIO_STREAM *v238; // [rsp+E8h] [rbp-20h]
  struct tWAVEFORMATEX *v239; // [rsp+F0h] [rbp-18h] BYREF
  DWORD pcbData; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v241; // [rsp+100h] [rbp-8h] BYREF
  __int64 v242; // [rsp+108h] [rbp+0h] BYREF
  unsigned __int16 *v243; // [rsp+110h] [rbp+8h] BYREF
  struct SaDeviceParams *v244; // [rsp+118h] [rbp+10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+120h] [rbp+18h] BYREF
  int v246; // [rsp+128h] [rbp+20h] BYREF
  int v247; // [rsp+12Ch] [rbp+24h] BYREF
  LPVOID pv; // [rsp+130h] [rbp+28h] BYREF
  __int64 v249; // [rsp+138h] [rbp+30h] BYREF
  struct IDeviceGraphObjectsStore *v250; // [rsp+140h] [rbp+38h] BYREF
  void *Src; // [rsp+148h] [rbp+40h] BYREF
  struct _GUID v252; // [rsp+158h] [rbp+50h] BYREF
  struct _GUID v253; // [rsp+168h] [rbp+60h] BYREF
  int v254; // [rsp+178h] [rbp+70h] BYREF
  struct tWAVEFORMATEX *v255; // [rsp+180h] [rbp+78h] BYREF
  unsigned int v256; // [rsp+188h] [rbp+80h]
  __int64 v257; // [rsp+190h] [rbp+88h] BYREF
  struct tWAVEFORMATEX *v258; // [rsp+198h] [rbp+90h] BYREF
  struct IAudioProcess *v259; // [rsp+1A0h] [rbp+98h]
  struct IAudioGraphCallback *v260; // [rsp+1A8h] [rbp+A0h]
  struct IMMDevice *v261; // [rsp+1B0h] [rbp+A8h]
  struct tWAVEFORMATEX *v262; // [rsp+1B8h] [rbp+B0h] BYREF
  struct tWAVEFORMATEX *v263; // [rsp+1C0h] [rbp+B8h] BYREF
  struct tWAVEFORMATEX *v264; // [rsp+1C8h] [rbp+C0h] BYREF
  struct tWAVEFORMATEX *v265; // [rsp+1D0h] [rbp+C8h] BYREF
  struct CAudioSessionManagerProvider *v266; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v267; // [rsp+1E0h] [rbp+D8h] BYREF
  PROPVARIANT v268; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v269; // [rsp+1F0h] [rbp+E8h]
  __int64 v270; // [rsp+1F8h] [rbp+F0h]
  PROPVARIANT v271; // [rsp+200h] [rbp+F8h] BYREF
  __int64 v272; // [rsp+208h] [rbp+100h]
  __int64 v273; // [rsp+210h] [rbp+108h]
  PROPVARIANT pvar; // [rsp+218h] [rbp+110h] BYREF
  __int64 v275; // [rsp+220h] [rbp+118h]
  __int64 v276; // [rsp+228h] [rbp+120h]
  PROPVARIANT v277; // [rsp+230h] [rbp+128h] BYREF
  __int64 v278; // [rsp+238h] [rbp+130h]
  __int64 v279; // [rsp+240h] [rbp+138h]
  PROPVARIANT v280; // [rsp+248h] [rbp+140h] BYREF
  __int64 v281; // [rsp+250h] [rbp+148h]
  __int64 v282; // [rsp+258h] [rbp+150h]
  PROPVARIANT v283; // [rsp+260h] [rbp+158h] BYREF
  __int64 v284; // [rsp+268h] [rbp+160h]
  __int64 v285; // [rsp+270h] [rbp+168h]
  PROPVARIANT v286; // [rsp+278h] [rbp+170h] BYREF
  __int64 v287; // [rsp+280h] [rbp+178h]
  __int64 v288; // [rsp+288h] [rbp+180h]
  int v289; // [rsp+290h] [rbp+188h]
  unsigned int v290; // [rsp+294h] [rbp+18Ch]
  PROPVARIANT v291[3]; // [rsp+298h] [rbp+190h] BYREF
  unsigned int v292; // [rsp+2B0h] [rbp+1A8h]
  int v293; // [rsp+2B4h] [rbp+1ACh]
  _DWORD v294[2]; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int64 v295; // [rsp+2C0h] [rbp+1B8h]
  GUID v296; // [rsp+2C8h] [rbp+1C0h]
  GUID v297; // [rsp+2D8h] [rbp+1D0h]
  GUID v298; // [rsp+2E8h] [rbp+1E0h]
  GUID v299; // [rsp+2F8h] [rbp+1F0h]
  __int128 v300; // [rsp+308h] [rbp+200h]
  GUID v301; // [rsp+318h] [rbp+210h]
  __int128 v302; // [rsp+328h] [rbp+220h]
  GUID v303; // [rsp+338h] [rbp+230h]
  struct _GUID v304; // [rsp+348h] [rbp+240h] BYREF
  struct _GUID v305; // [rsp+358h] [rbp+250h] BYREF
  struct _GUID v306; // [rsp+368h] [rbp+260h] BYREF
  struct _GUID v307; // [rsp+378h] [rbp+270h] BYREF
  struct _GUID v308; // [rsp+388h] [rbp+280h] BYREF
  struct _GUID v309; // [rsp+398h] [rbp+290h] BYREF
  GUID v310; // [rsp+3A8h] [rbp+2A0h] BYREF
  GUID v311; // [rsp+3B8h] [rbp+2B0h] BYREF
  GUID v312; // [rsp+3C8h] [rbp+2C0h] BYREF
  struct _GUID v313; // [rsp+3D8h] [rbp+2D0h] BYREF
  struct _GUID v314; // [rsp+3E8h] [rbp+2E0h] BYREF
  GUID v315; // [rsp+3F8h] [rbp+2F0h]
  GUID v316; // [rsp+408h] [rbp+300h]
  GUID v317; // [rsp+418h] [rbp+310h]
  GUID v318; // [rsp+428h] [rbp+320h]
  struct _GUID v319; // [rsp+438h] [rbp+330h] BYREF
  struct _GUID v320; // [rsp+448h] [rbp+340h] BYREF
  struct _GUID v321; // [rsp+458h] [rbp+350h] BYREF
  struct _GUID v322; // [rsp+468h] [rbp+360h] BYREF
  GUID v323; // [rsp+478h] [rbp+370h] BYREF
  GUID v324; // [rsp+488h] [rbp+380h] BYREF
  void *v325; // [rsp+498h] [rbp+390h] BYREF
  int v326; // [rsp+4A0h] [rbp+398h]
  int v327; // [rsp+4A4h] [rbp+39Ch]
  void *v328; // [rsp+4A8h] [rbp+3A0h]
  int v329; // [rsp+4B0h] [rbp+3A8h]
  int v330; // [rsp+4B4h] [rbp+3ACh]
  const struct _GUID *v331; // [rsp+4B8h] [rbp+3B0h]
  __int64 v332; // [rsp+4C0h] [rbp+3B8h]
  char *v333; // [rsp+4C8h] [rbp+3C0h]
  __int64 v334; // [rsp+4D0h] [rbp+3C8h]
  unsigned int *v335; // [rsp+4D8h] [rbp+3D0h]
  __int64 v336; // [rsp+4E0h] [rbp+3D8h]
  __int64 *v337; // [rsp+4E8h] [rbp+3E0h]
  __int64 v338; // [rsp+4F0h] [rbp+3E8h]
  EVENT_DATA_DESCRIPTOR v339; // [rsp+4F8h] [rbp+3F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v340; // [rsp+518h] [rbp+410h] BYREF
  WORD *p_nChannels; // [rsp+528h] [rbp+420h]
  __int64 v342; // [rsp+530h] [rbp+428h]
  DWORD *p_nSamplesPerSec; // [rsp+538h] [rbp+430h]
  __int64 v344; // [rsp+540h] [rbp+438h]
  DWORD *p_nAvgBytesPerSec; // [rsp+548h] [rbp+440h]
  __int64 v346; // [rsp+550h] [rbp+448h]
  char *v347; // [rsp+558h] [rbp+450h]
  __int64 v348; // [rsp+560h] [rbp+458h]
  int *v349; // [rsp+568h] [rbp+460h]
  __int64 v350; // [rsp+570h] [rbp+468h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+578h] [rbp+470h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+598h] [rbp+490h] BYREF
  WORD *v353; // [rsp+5A8h] [rbp+4A0h]
  __int64 v354; // [rsp+5B0h] [rbp+4A8h]
  DWORD *v355; // [rsp+5B8h] [rbp+4B0h]
  __int64 v356; // [rsp+5C0h] [rbp+4B8h]
  DWORD *v357; // [rsp+5C8h] [rbp+4C0h]
  __int64 v358; // [rsp+5D0h] [rbp+4C8h]
  GUID *v359; // [rsp+5D8h] [rbp+4D0h]
  __int64 v360; // [rsp+5E0h] [rbp+4D8h]

  v20 = a8;
  v21 = 0;
  v260 = a11;
  v23 = 0LL;
  v24 = 0LL;
  v25 = (__int64 *)*((_QWORD *)a8 + 2);
  v239 = a12;
  v238 = a20;
  v243 = 0LL;
  v26 = *v25;
  v259 = a2;
  v232 = a3;
  v227 = a8;
  v27 = *(__int64 (__fastcall **)(__int64 *, unsigned __int16 **))(v26 + 40);
  v236 = 0LL;
  v237 = 0LL;
  SharedModeEnginePeriodicity = v27(v25, &v243);
  if ( *((_DWORD *)a8 + 93) )
  {
    v226 = 1;
  }
  else if ( (a9 & 0x20000) != 0 )
  {
    v226 = 2;
  }
  else
  {
    v226 = 0;
  }
  v261 = (struct IMMDevice *)*((_QWORD *)a8 + 2);
  ((void (__fastcall *)(struct IMMDevice *))v261->lpVtbl->AddRef)(v261);
  v30 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a8 + 2);
  v31 = 0LL;
  v246 = 0;
  v257 = 0LL;
  if ( v30 )
  {
    (**v30)(v30, &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990, &v257);
    v31 = v257;
    if ( v257 )
    {
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v257 + 88LL))(v257, &v246);
      v31 = v257;
    }
  }
  v32 = v246;
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  v33 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a8 + 2);
  v34 = 0LL;
  v247 = 0;
  v241 = 0LL;
  if ( !v33 )
    goto LABEL_434;
  (**v33)(v33, &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990, &v241);
  v34 = v241;
  if ( v241 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v241 + 88LL))(v241, &v247);
    v34 = v241;
  }
  if ( !v247 )
  {
LABEL_434:
    if ( *((_DWORD *)a8 + 93) )
      goto LABEL_22;
    v35 = *((_QWORD *)a8 + 7);
    v36 = 1;
    if ( !v35 )
      goto LABEL_19;
    pvar = 0LL;
    v275 = 0LL;
    v276 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v35 + 40LL))(
           v35,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v36 = v275 == 0;
    }
    PropVariantClear(&pvar);
    v34 = v241;
    if ( !v36 )
      v37 = (char *)a8 + 128;
    else
LABEL_19:
      v37 = (char *)a8 + 64;
    if ( *((_DWORD *)v37 + 2) <= 1u )
      goto LABEL_21;
    if ( !CEndpointCharacteristics::AreEnhancementsEnabled(a8) )
    {
      v34 = v241;
LABEL_21:
      v21 = 0;
      goto LABEL_22;
    }
  }
  v186 = *((_QWORD *)a8 + 4);
  memset(v291, 0, sizeof(v291));
  v21 = 1;
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v186 + 40LL))(
         v186,
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         v291) < 0
    || LOWORD(v291[0]) != 19 )
  {
    v21 = 0;
  }
  PropVariantClear(v291);
  v34 = v241;
LABEL_22:
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  v256 = a9 & 0x400000;
  if ( (a9 & 0x400000) != 0 )
  {
    v38 = a10;
    v39 = eKeywordDetectorConnector;
    goto LABEL_28;
  }
  if ( v21 && (a9 & 0x20000) != 0 )
  {
    v38 = a10;
    v39 = eLoopbackConnector;
    goto LABEL_28;
  }
  v38 = a10;
  if ( a10 != AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
LABEL_27:
    v39 = (a9 & 2) == 0;
LABEL_28:
    v223 = v39;
    goto LABEL_29;
  }
  v258 = 0LL;
  v187 = 0LL;
  if ( !v32 || !v239 || (v188 = IsFormatSupportedByHwAudioEngine(v261, v29, v239, &v258), v187 = v258, v188) )
  {
    CoTaskMemFree(v187);
    goto LABEL_27;
  }
  CoTaskMemFree(v258);
  v39 = eOffloadConnector;
  v223 = eOffloadConnector;
LABEL_29:
  v318 = GUID_00000000_0000_0000_0000_000000000000;
  v40 = GUID_00000000_0000_0000_0000_000000000000;
  v317 = GUID_00000000_0000_0000_0000_000000000000;
  v41 = GUID_00000000_0000_0000_0000_000000000000;
  v316 = GUID_00000000_0000_0000_0000_000000000000;
  v42 = GUID_00000000_0000_0000_0000_000000000000;
  v315 = GUID_00000000_0000_0000_0000_000000000000;
  v43 = GUID_00000000_0000_0000_0000_000000000000;
  if ( SharedModeEnginePeriodicity < 0 )
    goto LABEL_120;
  v242 = 0LL;
  SharedModeEnginePeriodicity = 0;
  v322 = GUID_00000000_0000_0000_0000_000000000000;
  v253 = GUID_00000000_0000_0000_0000_000000000000;
  v252 = GUID_00000000_0000_0000_0000_000000000000;
  if ( v38 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(a8, v39, &v322, &v253, &v252);
    v40 = v322;
  }
  else if ( v226 == 2 )
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      a8,
      eHostProcessConnector,
      &v322,
      &v253,
      &v252);
    v40 = v322;
  }
  else
  {
    if ( !a5 )
    {
      v44 = v39;
      if ( v39 == eLoopbackConnector )
        v44 = eHostProcessConnector;
      v296 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      if ( v44 )
        goto LABEL_41;
      v45 = *((_QWORD *)a8 + 7);
      v46 = 1;
      if ( !v45 )
        goto LABEL_41;
      v271 = 0LL;
      v272 = 0LL;
      v273 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v45 + 40LL))(
             v45,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &v271) >= 0
        && (_WORD)v271 == 19 )
      {
        v46 = v272 == 0;
      }
      PropVariantClear(&v271);
      if ( v46 )
LABEL_41:
        v47 = (char *)a8 + 16 * v44 + 64;
      else
        v47 = (char *)a8 + 128;
      v48 = *((_DWORD *)v47 + 2);
      v49 = 0;
      if ( v48 <= 0 )
        goto LABEL_48;
      v50 = *(_QWORD *)v47;
      while ( 1 )
      {
        v51 = *(_QWORD *)(v50 + 16LL * v49) - *(_QWORD *)&v296.Data1;
        if ( !v51 )
          v51 = *(_QWORD *)(v50 + 16LL * v49 + 8) - *(_QWORD *)v296.Data4;
        if ( !v51 )
          break;
        if ( ++v49 >= v48 )
          goto LABEL_48;
      }
      if ( v49 == -1 )
      {
LABEL_48:
        v297 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        if ( v44 )
          goto LABEL_54;
        v52 = *((_QWORD *)a8 + 7);
        v53 = 1;
        if ( !v52 )
          goto LABEL_54;
        v268 = 0LL;
        v269 = 0LL;
        v270 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v52 + 40LL))(
               v52,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v268) >= 0
          && (_WORD)v268 == 19 )
        {
          v53 = v269 == 0;
        }
        PropVariantClear(&v268);
        if ( v53 )
LABEL_54:
          v54 = (char *)a8 + 16 * v44 + 64;
        else
          v54 = (char *)a8 + 128;
        v55 = *((_DWORD *)v54 + 2);
        v56 = 0;
        if ( v55 <= 0 )
          goto LABEL_303;
        v57 = *(_QWORD *)v54;
        while ( 1 )
        {
          v58 = *(_QWORD *)(v57 + 16LL * v56) - *(_QWORD *)&v297.Data1;
          if ( !v58 )
            v58 = *(_QWORD *)(v57 + 16LL * v56 + 8) - *(_QWORD *)v297.Data4;
          if ( !v58 )
            break;
          if ( ++v56 >= v55 )
            goto LABEL_303;
        }
        if ( v56 == -1 )
        {
LABEL_303:
          SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(a8, v44);
          v40 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                           SupportedConnectorModes,
                           0LL);
        }
        else
        {
          v40 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        }
      }
      else
      {
        v40 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
      v59 = *((_QWORD *)a8 + 7);
      LODWORD(v60) = 1;
      v298 = v40;
      v324 = v40;
      v299 = v40;
      if ( v59 )
      {
        v286 = 0LL;
        v287 = 0LL;
        v288 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v59 + 40LL))(
               v59,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v286) >= 0
          && (_WORD)v286 == 19 )
        {
          v60 = (_DWORD)v287 == 0;
        }
        PropVariantClear(&v286);
        v61 = v223;
        if ( !v60 && v223 != eKeywordDetectorConnector )
        {
          v62 = (char *)a8 + 336;
LABEL_68:
          v63 = *((_DWORD *)v62 + 2);
          v64 = 0;
          if ( v63 <= 0 )
            goto LABEL_74;
          v65 = *(_QWORD *)v62;
          while ( 1 )
          {
            v66 = *(_QWORD *)(v65 + 16LL * v64) - *(_QWORD *)&v299.Data1;
            if ( !v66 )
              v66 = *(_QWORD *)(v65 + 16LL * v64 + 8) - *(_QWORD *)v299.Data4;
            if ( !v66 )
              break;
            if ( ++v64 >= v63 )
              goto LABEL_74;
          }
          v67 = &v324;
          if ( v64 == -1 )
LABEL_74:
            v67 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
          v68 = *v67;
          v69 = *(_QWORD *)g_PolicyManager;
          v322 = v40;
          v253 = v68;
          v252 = v40;
          if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, _QWORD, __int64 *))(v69 + 80))(
                 g_PolicyManager,
                 v226,
                 a4,
                 a19,
                 &v242) >= 0 )
          {
            v70 = 0;
            if ( *(_DWORD *)v242 )
            {
              v71 = v223;
              while ( 1 )
              {
                v300 = *(_OWORD *)(*(_QWORD *)(v242 + 8) + 16LL * v70);
                if ( v71 )
                  goto LABEL_84;
                v72 = *((_QWORD *)a8 + 7);
                v73 = 1;
                if ( !v72 )
                  goto LABEL_84;
                v280 = 0LL;
                v281 = 0LL;
                v282 = 0LL;
                if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v72 + 40LL))(
                       v72,
                       &PKEY_AudioEndpoint_Disable_SysFx,
                       &v280) >= 0
                  && (_WORD)v280 == 19 )
                {
                  v73 = v281 == 0;
                }
                PropVariantClear(&v280);
                v71 = v223;
                if ( v73 )
LABEL_84:
                  v74 = (char *)a8 + 16 * v71 + 64;
                else
                  v74 = (char *)a8 + 128;
                v75 = *((_DWORD *)v74 + 2);
                v76 = 0;
                if ( v75 > 0 )
                {
                  v77 = *(_QWORD *)v74;
                  while ( 1 )
                  {
                    v78 = *(_QWORD *)(v77 + 16LL * v76) - v300;
                    if ( !v78 )
                      v78 = *(_QWORD *)(v77 + 16LL * v76 + 8) - *((_QWORD *)&v300 + 1);
                    if ( !v78 )
                      break;
                    if ( ++v76 >= v75 )
                      goto LABEL_91;
                  }
                  if ( v76 != -1 )
                    break;
                }
LABEL_91:
                v301 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                if ( v71 )
                  goto LABEL_97;
                v79 = *((_QWORD *)a8 + 7);
                v80 = 1;
                if ( !v79 )
                  goto LABEL_97;
                v283 = 0LL;
                v284 = 0LL;
                v285 = 0LL;
                if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v79 + 40LL))(
                       v79,
                       &PKEY_AudioEndpoint_Disable_SysFx,
                       &v283) >= 0
                  && (_WORD)v283 == 19 )
                {
                  v80 = v284 == 0;
                }
                PropVariantClear(&v283);
                v71 = v223;
                if ( v80 )
LABEL_97:
                  v81 = (char *)a8 + 16 * v71 + 64;
                else
                  v81 = (char *)a8 + 128;
                v82 = *((_DWORD *)v81 + 2);
                v83 = 0;
                if ( v82 > 0 )
                {
                  v84 = *(_QWORD *)v81;
                  while ( 1 )
                  {
                    v85 = *(_QWORD *)(v84 + 16LL * v83) - *(_QWORD *)&v301.Data1;
                    if ( !v85 )
                      v85 = *(_QWORD *)(v84 + 16LL * v83 + 8) - *(_QWORD *)v301.Data4;
                    if ( !v85 )
                      break;
                    if ( ++v83 >= v82 )
                      goto LABEL_316;
                  }
                  if ( v83 != -1 )
                  {
                    v86 = 1;
                    v87 = *((_QWORD *)a8 + 7);
                    v302 = *(_OWORD *)(*(_QWORD *)(v242 + 8) + 16LL * v70);
                    if ( !v87 )
                      goto LABEL_109;
                    v277 = 0LL;
                    v278 = 0LL;
                    v279 = 0LL;
                    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v87 + 40LL))(
                           v87,
                           &PKEY_AudioEndpoint_Disable_SysFx,
                           &v277) >= 0
                      && (_WORD)v277 == 19 )
                    {
                      v86 = v278 == 0;
                    }
                    PropVariantClear(&v277);
                    v71 = v223;
                    if ( v86 || v223 == eKeywordDetectorConnector )
LABEL_109:
                      v88 = (char *)a8 + 16 * v71 + 208;
                    else
                      v88 = (char *)a8 + 336;
                    v89 = *((_DWORD *)v88 + 2);
                    v90 = 0;
                    if ( v89 > 0 )
                    {
                      v91 = *(_QWORD *)v88;
                      while ( 1 )
                      {
                        v92 = *(_QWORD *)(v91 + 16LL * v90) - v302;
                        if ( !v92 )
                          v92 = *(_QWORD *)(v91 + 16LL * v90 + 8) - *((_QWORD *)&v302 + 1);
                        if ( !v92 )
                          break;
                        if ( ++v90 >= v89 )
                          goto LABEL_316;
                      }
                      if ( v90 != -1 )
                      {
                        v40 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                        v93 = *(_QWORD *)(v242 + 8);
                        v322 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                        v94 = *(struct _GUID *)(16LL * v70 + v93);
                        v252 = v94;
                        goto LABEL_117;
                      }
                    }
                  }
                }
LABEL_316:
                if ( ++v70 >= *(_DWORD *)v242 )
                  goto LABEL_118;
              }
              v40 = *(GUID *)(*(_QWORD *)(v242 + 8) + 16LL * v70);
              v322 = v40;
              v319 = v40;
              v190 = !CEndpointCharacteristics::IsAPOModeSupported(a8, &v319, v71);
              v252 = v40;
              v191 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
              if ( !v190 )
                v191 = &v322;
              v94 = *v191;
LABEL_117:
              v253 = v94;
            }
          }
LABEL_118:
          v38 = a10;
          goto LABEL_119;
        }
      }
      else
      {
        v61 = v223;
      }
      v62 = (char *)a8 + 16 * v61 + 208;
      goto LABEL_68;
    }
    v304 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    if ( (unsigned int)CEndpointCharacteristics::IsConnectorModeSupported(a8, v39, &v304) )
    {
      v40 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v322 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v253 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v252 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    else
    {
      SharedModeEnginePeriodicity = -2004287449;
    }
  }
LABEL_119:
  v42 = v252;
  v41 = v253;
  v43 = v252;
  v317 = v253;
  v316 = v252;
  v315 = v252;
  v318 = v40;
LABEL_120:
  v255 = 0LL;
  v95 = 0LL;
  Src = 0LL;
  v230 = 0LL;
  if ( SharedModeEnginePeriodicity < 0 )
  {
LABEL_354:
    v98 = a10;
  }
  else
  {
    v320 = v40;
    v96 = v38;
    v97 = v223;
    v321 = v41;
    v305 = v42;
    v98 = a10;
    SharedModeEnginePeriodicity = DeriveDeviceGraphFormatsForStream(
                                    a8,
                                    a7 != 0,
                                    v223,
                                    v96,
                                    &v305,
                                    &v321,
                                    &v320,
                                    v239,
                                    &v255,
                                    (struct tWAVEFORMATEX **)&Src,
                                    &v230);
    if ( SharedModeEnginePeriodicity >= 0 )
    {
      v99 = a9;
      if ( a10 )
      {
        v114 = a14;
      }
      else
      {
        if ( (a9 & 1) == 0 )
        {
          v100 = 0LL;
          v303 = v40;
          pcbData = a6 != 0;
          if ( v223 == eKeywordDetectorConnector )
            v101 = (struct CEndpointCharacteristics *)((char *)a8 + 416);
          else
            v101 = (struct CEndpointCharacteristics *)((char *)a8 + 408);
          v95 = v230;
          v102 = 0;
          v244 = v101;
          v103 = 0LL;
          v221 = 0;
          while ( 1 )
          {
            v104 = *(_QWORD *)v101;
            v234 = v103;
            v229 = v102;
            if ( v102 >= *(_DWORD *)(v104 + 8) )
            {
              if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
              {
                WPP_SF_D(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  12LL,
                  &WPP_3dded2e6bf653ecbc334b4283f1211e8_Traceguids,
                  (unsigned int)(v221 != 0) - 2005139366);
              }
              wFormatTag = v95->wFormatTag;
              SharedModeEnginePeriodicity = -2004287480;
              if ( v95->wFormatTag == 0xFFFE )
              {
                if ( dword_1800CA040 > 2u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800CA040, 0x200000000000uLL) )
                {
                  TlgCreateWsz(&v340, L"WAVEFORMATEXTENSIBLE");
                  v342 = 2LL;
                  p_nSamplesPerSec = &v95->nSamplesPerSec;
                  p_nChannels = &v95->nChannels;
                  p_nAvgBytesPerSec = &v95->nAvgBytesPerSec;
                  v347 = (char *)&v95[1].nSamplesPerSec + 2;
                  v254 = *(_DWORD *)&v95[1].nChannels;
                  v349 = &v254;
                  v344 = 4LL;
                  v346 = 4LL;
                  v348 = 16LL;
                  v350 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A8441, v200, v201, 8u, &v339);
                }
              }
              else
              {
                v323 = GUID_00000000_0000_0010_8000_00aa00389b71;
                v323.Data1 = wFormatTag;
                if ( dword_1800CA040 > 2u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800CA040, 0x200000000000uLL) )
                {
                  TlgCreateWsz(&pDesc, L"WAVEFORMATEX");
                  v354 = 2LL;
                  v355 = &v95->nSamplesPerSec;
                  v353 = &v95->nChannels;
                  v357 = &v95->nAvgBytesPerSec;
                  v359 = &v323;
                  v356 = 4LL;
                  v358 = 4LL;
                  v360 = 16LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A84C1, v198, v199, 7u, &pData);
                }
              }
              goto LABEL_354;
            }
            if ( (__int64)v103 < 0 || v102 >= *(_DWORD *)(v104 + 8) )
            {
              RaiseException(0xC000008C, 1u, 0, 0LL);
              JUMPOUT(0x1800469A0LL);
            }
            v105 = *(_QWORD *)&v103[*(_QWORD *)v104];
            v106 = *(_QWORD *)v105 - *(_QWORD *)&v303.Data1;
            if ( *(_QWORD *)v105 == *(_QWORD *)&v303.Data1 )
              v106 = *(_QWORD *)(v105 + 8) - *(_QWORD *)v303.Data4;
            if ( !v106 )
            {
              v107 = 0;
              v221 = 1;
              v228 = 0;
              if ( *(int *)(v105 + 24) > 0 )
                break;
            }
LABEL_285:
            v101 = v244;
            ++v102;
            v103 += 8;
          }
          while ( 1 )
          {
            if ( v100 < 0 || v107 >= *(_DWORD *)(v105 + 24) )
            {
              RaiseException(0xC000008C, 1u, 0, 0LL);
              JUMPOUT(0x18004698ALL);
            }
            v108 = *(_QWORD *)(v100 + *(_QWORD *)(v105 + 16));
            if ( (unsigned int)CompareWaveFormat(v95, *(const struct tWAVEFORMATEX **)v108) )
              break;
            v100 += 8LL;
            v107 = v228 + 1;
            v228 = v107;
            if ( v107 >= *(_DWORD *)(v105 + 24) )
            {
              v102 = v229;
              v100 = 0LL;
              v103 = (char *)v234;
              goto LABEL_285;
            }
          }
          v110 = *(_DWORD *)(v108 + 8);
          v111 = *(_DWORD *)(v108 + 12);
          v112 = *(_DWORD *)(v108 + 16);
          v289 = v111;
          v228 = v110;
          v293 = v110;
          v292 = v112;
          if ( pcbData )
            v113 = *(_DWORD *)(v108 + 24);
          else
            v113 = *(_DWORD *)(v108 + 20);
          v114 = a14;
          v290 = v113;
          if ( a14 )
          {
            pcbData = 4;
            v229 = 0;
            RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
              L"SkipPeriodicityValidation",
              0x18u,
              0LL,
              &v229,
              &pcbData);
            v192 = (int)((double)(int)v95->nSamplesPerSec * (double)(int)a14 / 10000000.0 + 0.5);
            lpCriticalSection = (LPCRITICAL_SECTION)v192;
            if ( !v229 )
            {
              if ( v192 < v112 || v192 > v113 || v192 % v228 && v192 != v111 && v192 != v112 && v192 != v113 )
              {
                v20 = v227;
                SharedModeEnginePeriodicity = -2004287456;
                goto LABEL_354;
              }
              if ( (*(unsigned __int8 (__fastcall **)(CAudioStream *))(*(_QWORD *)v232 + 136LL))(v232)
                && (unsigned int)lpCriticalSection < v111 )
              {
                v20 = v227;
                v119 = 0LL;
                v219 = 0;
                SharedModeEnginePeriodicity = -2004287456;
                goto LABEL_158;
              }
            }
          }
          else
          {
            v114 = (unsigned int)(int)((double)v111 * 10000000.0 / (double)(int)v95->nSamplesPerSec + 0.5);
          }
          if ( !a7 )
          {
            v97 = v223;
            v98 = a10;
            v99 = a9;
            goto LABEL_143;
          }
          v262 = 0LL;
          v193 = 0LL;
          v265 = 0LL;
          v306 = v42;
          MixFormat = CEndpointCharacteristics::GetMixFormat(v227, v223, &v306, v109, &v262);
          v195 = v262;
          SharedModeEnginePeriodicity = MixFormat;
          if ( MixFormat >= 0 )
          {
            v264 = 0LL;
            v263 = 0LL;
            v307 = v40;
            v308 = v41;
            v309 = v42;
            SharedModeEnginePeriodicity = DeriveDeviceGraphFormatsForStream(
                                            v227,
                                            0,
                                            v223,
                                            AUDCLNT_SHAREMODE_SHARED,
                                            &v309,
                                            &v308,
                                            &v307,
                                            v262,
                                            &v264,
                                            &v263,
                                            &v265);
            CoTaskMemFree(v263);
            CoTaskMemFree(v264);
            v193 = v265;
          }
          v228 = 0;
          if ( SharedModeEnginePeriodicity >= 0 )
          {
            v310 = v40;
            SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                            (__int64)v227,
                                            v223,
                                            v193,
                                            &v310,
                                            0,
                                            &v228,
                                            0LL,
                                            0LL,
                                            0LL);
            if ( SharedModeEnginePeriodicity >= 0 )
            {
              SharedModeEnginePeriodicity = 0;
              v196 = (unsigned int)(int)((double)v228 * 10000000.0 / (double)(int)v193->nSamplesPerSec + 0.5);
              if ( v114 - v196 > 5 * v196 / 100 )
                SharedModeEnginePeriodicity = -2004287448;
            }
          }
          CoTaskMemFree(v193);
          CoTaskMemFree(v195);
          v99 = a9;
          v97 = v223;
          v98 = a10;
          goto LABEL_363;
        }
        v114 = a14;
        if ( !a14 )
          v114 = a13;
      }
      v95 = v230;
LABEL_363:
      if ( SharedModeEnginePeriodicity >= 0 )
      {
LABEL_143:
        v311 = v41;
        v312 = v40;
        v115 = InitializeStreamAndModeDescriptors(v227, v98, v99, v226, v97, &v312, &v311, (GUID **)&v236, &v237);
        v23 = v236;
        SharedModeEnginePeriodicity = v115;
        v116 = v239;
        v24 = v237;
        *((_QWORD *)v236 + 9) = v239;
        *((_DWORD *)v23 + 16) = v116->cbSize + 18;
        *((_QWORD *)v23 + 4) = a13;
        *((_QWORD *)v23 + 5) = v114;
        *((_DWORD *)v23 + 3) = a16;
        *((_QWORD *)v23 + 2) = a17;
        *((_QWORD *)v23 + 7) = a15;
        if ( v24 )
        {
          v117 = v255;
          *((_DWORD *)v24 + 2) = v255->cbSize + 18;
          *((_QWORD *)v24 + 2) = v117;
        }
      }
      v20 = v227;
      goto LABEL_146;
    }
    v95 = v230;
  }
LABEL_146:
  v118 = 0LL;
  v219 = 0;
  v119 = 0LL;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    v224 = v98 == AUDCLNT_SHAREMODE_EXCLUSIVE;
    if ( (a9 & 1) != 0 )
    {
      if ( *((_DWORD *)v23 + 31) || v24 && *((_DWORD *)v24 + 13) || !g_AudioSrvEnableInProcOffloadIfPossible )
      {
        v219 = 1;
      }
      else
      {
        v219 = 0;
        LOBYTE(v118) = 1;
      }
      v224 = v118 | (v98 == AUDCLNT_SHAREMODE_EXCLUSIVE);
    }
    v120 = (void *)*((_QWORD *)v23 + 5);
    pv = 0LL;
    v121 = 0LL;
    v122 = *((_QWORD *)v20 + 2);
    v234 = v120;
    SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v122 + 40LL))(v122, &pv);
    if ( SharedModeEnginePeriodicity >= 0 )
    {
      v123 = Src;
      v124 = *((unsigned __int16 *)Src + 8);
      v125 = (struct _RTL_CRITICAL_SECTION *)CoTaskMemAlloc(v124 + 18);
      lpCriticalSection = v125;
      v126 = v125;
      if ( v125 )
      {
        memcpy_0(v125, v123, v124 + 18);
        v121 = v126;
        v127 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
        v128 = v127;
        if ( v127 )
        {
          memset(v127, 0, 0x38uLL);
          v121 = 0LL;
          *(_QWORD *)v128 = 0LL;
          SharedModeEnginePeriodicity = 0;
          *((_QWORD *)v128 + 2) = 0LL;
          v129 = pv;
          pv = 0LL;
          CoTaskMemFree(*(LPVOID *)v128);
          *(_QWORD *)v128 = v129;
          *((_BYTE *)v128 + 49) = v223 == eKeywordDetectorConnector;
          CoTaskMemFree(*((LPVOID *)v128 + 2));
          v119 = v128;
          v130 = v234;
          v131 = v226;
          *((_QWORD *)v128 + 2) = lpCriticalSection;
          *((_BYTE *)v128 + 50) = (a9 & 1) != 0;
          *((_QWORD *)v128 + 3) = v130;
          *((GUID *)v128 + 2) = v43;
          *((_BYTE *)v128 + 48) = v224;
          *((_DWORD *)v128 + 2) = v131;
        }
        else
        {
          SharedModeEnginePeriodicity = -2147024882;
        }
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Idd(*((_QWORD *)WPP_GLOBAL_Control + 2));
        }
      }
      else
      {
        v121 = 0LL;
        SharedModeEnginePeriodicity = -2147024882;
      }
      v20 = v227;
    }
    CoTaskMemFree(0LL);
    CoTaskMemFree(pv);
    pv = 0LL;
    CoTaskMemFree(v121);
  }
LABEL_158:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v118, (__int64)&AudioResourceManager_StreamSettings_Derived);
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    v132 = *(int (**)(CDeviceGraphManager *__hidden, struct IAudioStreamInfo *, unsigned int, enum _AUDCLNT_SHAREMODE, struct IAudioGraphCallback *, unsigned int, struct AUDIO_DEVICE_MODE_DESCRIPTOR *, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct StreamGroupParams *, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)g_DeviceGraphManager + 24LL);
    if ( v132 == CDeviceGraphManager::CreateStream )
      Stream = CDeviceGraphManager::CreateStream(
                 g_DeviceGraphManager,
                 v232,
                 a9,
                 a10,
                 v260,
                 a18,
                 v24,
                 v23,
                 (struct StreamGroupParams *)v119,
                 v238);
    else
      Stream = ((__int64 (__fastcall *)(CDeviceGraphManager *, CAudioStream *, _QWORD, _QWORD, struct IAudioGraphCallback *, unsigned int, struct AUDIO_DEVICE_MODE_DESCRIPTOR *, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, void *, struct SYSTEM_AUDIO_STREAM *))v132)(
                 g_DeviceGraphManager,
                 v232,
                 a9,
                 (unsigned int)a10,
                 v260,
                 a18,
                 v24,
                 v23,
                 v119,
                 v238);
    SharedModeEnginePeriodicity = Stream;
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v118, (__int64)&AudioResourceManager_Stream_Created);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids,
      (unsigned int)SharedModeEnginePeriodicity);
  }
  if ( SharedModeEnginePeriodicity < 0 )
  {
    v134 = v232;
  }
  else
  {
    v134 = v232;
    v135 = *(__int64 (__fastcall **)(CAudioStream *, struct SYSTEM_AUDIO_STREAM *, unsigned int))(*(_QWORD *)v232 + 104LL);
    if ( v135 == CAudioStream::SetAudioHandle )
      SharedModeEnginePeriodicity = CAudioStream::SetAudioHandle(v232, v238, a18);
    else
      SharedModeEnginePeriodicity = v135(v232, v238, a18);
  }
  v250 = 0LL;
  if ( SharedModeEnginePeriodicity < 0 )
    goto LABEL_428;
  v136 = *(int (**)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
  v137 = v136 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint
       ? CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(g_DeviceGraphStore, v243, &v250)
       : ((__int64 (__fastcall *)(CDeviceGraphStore *, unsigned __int16 *, struct IDeviceGraphObjectsStore **))v136)(
           g_DeviceGraphStore,
           v243,
           &v250);
  SharedModeEnginePeriodicity = v137;
  if ( v137 < 0 )
    goto LABEL_428;
  v138 = *(void (__fastcall **)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)v250 + 88LL);
  if ( (char *)v138 == (char *)CDeviceGraphObjectsStore::LockForStreamGroupConnectionDisconnection )
    CDeviceGraphObjectsStore::LockForStreamGroupConnectionDisconnection(v250, &lpCriticalSection);
  else
    v138(v250, &lpCriticalSection);
  v231 = 0LL;
  v139 = *(__int64 (__fastcall **)(CAudioStream *, struct IStreamGroupProxy **))(*(_QWORD *)v134 + 112LL);
  if ( v139 == CAudioStream::GetStreamGroup )
    StreamGroup = CAudioStream::GetStreamGroup(v134, &v231);
  else
    StreamGroup = v139(v134, &v231);
  SharedModeEnginePeriodicity = StreamGroup;
  v225 = 0LL;
  v141 = 0LL;
  if ( StreamGroup < 0 )
    goto LABEL_205;
  v142 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *__hidden, struct ISaDeviceProxy **))(*(_QWORD *)v231 + 176LL);
  v143 = v142 == CBaseStreamGroupProxy::GetConnectedSaDevice
       ? CBaseStreamGroupProxy::GetConnectedSaDevice(v231, &v225)
       : v142(v231, &v225);
  v141 = v225;
  SharedModeEnginePeriodicity = v143;
  if ( v143 < 0 )
    goto LABEL_205;
  if ( v225 )
  {
    v144 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)v232 + 128LL);
    if ( v144 == CAudioStream::IsFormatSensitiveClient )
    {
      IsFormatSensitiveClient = CAudioStream::IsFormatSensitiveClient(v232);
    }
    else
    {
      IsFormatSensitiveClient = ((__int64 (__fastcall *)(CAudioStream *, bool (__fastcall *)(CAudioStream *)))v144)(
                                  v232,
                                  CAudioStream::IsFormatSensitiveClient);
      v141 = v225;
    }
    if ( IsFormatSensitiveClient )
    {
      v234 = 0LL;
      SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(CSaDeviceProxy *, void **))(*(_QWORD *)v141 + 104LL))(
                                      v141,
                                      &v234);
      if ( SharedModeEnginePeriodicity >= 0 )
      {
        v202 = (const struct tWAVEFORMATEX *)*((_QWORD *)v234 + 3);
        v203 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v231 + 40LL))(v231);
        if ( !(unsigned int)CompareWaveFormat(v202, v203) )
        {
          SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(CDeviceGraphManager *, CBaseStreamGroupProxy *, struct ISaDeviceProxy *))(*(_QWORD *)g_DeviceGraphManager + 48LL))(
                                          g_DeviceGraphManager,
                                          v231,
                                          v225);
          if ( SharedModeEnginePeriodicity >= 0 )
            Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(&v225);
        }
      }
      v204 = v234;
      if ( v234 )
      {
        CoTaskMemFree(*((LPVOID *)v234 + 3));
        *((_QWORD *)v204 + 3) = 0LL;
        CoTaskMemFree(*((LPVOID *)v204 + 2));
        *((_QWORD *)v204 + 2) = 0LL;
        CoTaskMemFree(*(LPVOID *)v204);
        *(_QWORD *)v204 = 0LL;
        operator delete(v204, (const struct std::nothrow_t *)0x68);
      }
      v141 = v225;
    }
  }
  if ( SharedModeEnginePeriodicity < 0 )
    goto LABEL_205;
  if ( !v141 )
  {
    v158 = a10;
    v235 = 0LL;
    v217 = (struct tWAVEFORMATEX **)*((_QWORD *)v119 + 3);
    v313 = v41;
    v314 = v40;
    SharedModeEnginePeriodicity = DeriveSaDeviceParametersForStream(
                                    v20,
                                    a10,
                                    v223,
                                    v219,
                                    &v314,
                                    &v313,
                                    v95,
                                    (struct tWAVEFORMATEX *)Src,
                                    (__int64)v217,
                                    &v235);
    v233 = 0LL;
    if ( SharedModeEnginePeriodicity >= 0 )
    {
      v266 = 0LL;
      AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v266);
      v160 = v266;
      SharedModeEnginePeriodicity = AudioSessionManagerProvider;
      if ( AudioSessionManagerProvider >= 0 )
      {
        v161 = *(__int64 (__fastcall **)(CAudioSessionManagerProvider *, const unsigned __int16 *, struct CAudioSessionManager **))(*(_QWORD *)v266 + 40LL);
        if ( v161 == CAudioSessionManagerProvider::GetAudioSessionManager )
          AudioSessionManager = CAudioSessionManagerProvider::GetAudioSessionManager(v266, v243, &v233);
        else
          AudioSessionManager = v161(v266, v243, &v233);
        SharedModeEnginePeriodicity = AudioSessionManager;
      }
      if ( v160 )
      {
        v163 = *(void (__fastcall **)(struct CAudioSessionManagerProvider *))(*(_QWORD *)v160 + 16LL);
        if ( (char *)v163 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
          ATL::CComObject<CAudioSessionManagerProvider>::Release(v160);
        else
          v163(v160);
      }
      v158 = a10;
    }
    DoesExclusiveModeOverrideShared = CEndpointCharacteristics::DoesExclusiveModeOverrideShared(v20);
    LOBYTE(v165) = 0;
    v222 = DoesExclusiveModeOverrideShared;
    v220 = 0;
    if ( SharedModeEnginePeriodicity >= 0 )
    {
      if ( !DoesExclusiveModeOverrideShared )
        goto LABEL_244;
      if ( v158 != AUDCLNT_SHAREMODE_EXCLUSIVE )
      {
        v166 = 0LL;
        v167 = _InterlockedCompareExchange((volatile signed __int32 *)v233 + 63, 0, 0);
        v23 = v236;
        v24 = v237;
        v95 = v230;
        if ( !v167 )
        {
LABEL_244:
          if ( v158 != AUDCLNT_SHAREMODE_EXCLUSIVE )
          {
            if ( (a9 & 1) != 0 )
            {
              Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(&v225);
              pdwType = v158;
              v176 = (LPVOID *)v235;
              SaDeviceForOffloadedStream = CAudioResourceManager::GetSaDeviceForOffloadedStream(
                                             v208,
                                             v20,
                                             v235,
                                             a9,
                                             pdwType,
                                             (unsigned __int64)pvData,
                                             a18,
                                             v216,
                                             v259,
                                             v233,
                                             &v225);
              LOBYTE(v165) = 0;
              SharedModeEnginePeriodicity = SaDeviceForOffloadedStream;
              v166 = 0LL;
            }
            else
            {
              v168 = v232;
              v169 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)v232 + 128LL);
              if ( v169 == CAudioStream::IsFormatSensitiveClient )
                v170 = CAudioStream::IsFormatSensitiveClient(v232);
              else
                v170 = v169(v232);
              v171 = v170;
              v172 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)v168 + 120LL);
              if ( v172 == CAudioStream::IsStrictPeriodicityClient )
                IsStrictPeriodicityClient = CAudioStream::IsStrictPeriodicityClient(v168);
              else
                IsStrictPeriodicityClient = v172(v168);
              v174 = v225;
              v175 = IsStrictPeriodicityClient;
              if ( v225 )
              {
                v225 = 0LL;
                (*(void (__fastcall **)(CAudioResourceManager *))(*(_QWORD *)v174 + 16LL))(v174);
              }
              v218 = v175;
              v176 = (LPVOID *)v235;
              SaDeviceForSharedStream = CAudioResourceManager::GetSaDeviceForSharedStream(
                                          v174,
                                          v20,
                                          v235,
                                          a9,
                                          a10,
                                          (unsigned __int64)pvData,
                                          a18,
                                          v216,
                                          v259,
                                          v233,
                                          v218,
                                          v171,
                                          &v225);
              LOBYTE(v165) = 0;
              SharedModeEnginePeriodicity = SaDeviceForSharedStream;
              v166 = 0LL;
            }
            goto LABEL_253;
          }
          goto LABEL_397;
        }
        SharedModeEnginePeriodicity = -2005139364;
LABEL_395:
        v176 = (LPVOID *)v235;
        goto LABEL_253;
      }
      v205 = _InterlockedCompareExchange((volatile signed __int32 *)v233 + 63, GetCurrentThreadId(), 0);
      v23 = v236;
      v24 = v237;
      v95 = v230;
      if ( !v205 )
      {
        v220 = 1;
LABEL_397:
        Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(&v225);
        v176 = (LPVOID *)v235;
        SaDeviceForExclusiveStream = CAudioResourceManager::GetSaDeviceForExclusiveStream(
                                       v206,
                                       v20,
                                       v235,
                                       a9,
                                       AUDCLNT_SHAREMODE_EXCLUSIVE,
                                       (unsigned __int64)pvData,
                                       a18,
                                       v222,
                                       v259,
                                       v233,
                                       &v225);
        v165 = v220;
        SharedModeEnginePeriodicity = SaDeviceForExclusiveStream;
        v166 = 0LL;
LABEL_253:
        v178 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            14LL,
            &WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids,
            (unsigned int)SharedModeEnginePeriodicity);
          v165 = v220;
          v166 = 0LL;
        }
        if ( (_BYTE)v165 )
        {
          v178 = v233;
          _InterlockedExchange((volatile __int32 *)v233 + 63, 0);
          v23 = v236;
          v24 = v237;
          v95 = v230;
          v176 = (LPVOID *)v235;
        }
        if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
          TemplateEventDescriptor((__int64)v178, (__int64)&AudioResourceManager_SaDevice_Created);
        if ( SharedModeEnginePeriodicity >= 0 )
        {
          v179 = v231;
          v180 = *(bool (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)v231 + 208LL);
          if ( v180 == CBaseStreamGroupProxy::IsPeriodicitySensitive )
          {
            IsPeriodicitySensitive = CBaseStreamGroupProxy::IsPeriodicitySensitive(v231);
          }
          else
          {
            IsPeriodicitySensitive = ((__int64 (__fastcall *)(CBaseStreamGroupProxy *, __int64, __int64))v180)(
                                       v231,
                                       v165,
                                       v166);
            v179 = v231;
          }
          v182 = IsPeriodicitySensitive == 0;
          v183 = *(__int64 (__fastcall **)(CDeviceGraphManager *, CBaseStreamGroupProxy *, struct ISaDeviceProxy *, _BOOL8, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)g_DeviceGraphManager + 40LL);
          if ( (char *)v183 == (char *)CDeviceGraphManager::ConnectStreamGroupToSaDevice )
            v184 = CDeviceGraphManager::ConnectStreamGroupToSaDevice(g_DeviceGraphManager, v179, v225, v182, v238);
          else
            v184 = v183(g_DeviceGraphManager, v179, v225, v182, v238);
          v20 = v227;
          SharedModeEnginePeriodicity = v184;
        }
        if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
          TemplateEventDescriptor((__int64)v178, (__int64)&AudioResourceManager_SaDevice_Connected);
        if ( v233 )
        {
          v185 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v233 + 16LL);
          if ( v185 == CAudioSessionManager::Release )
            CAudioSessionManager::Release(v233);
          else
            ((void (__fastcall *)(CAudioSessionManager *, __int64 (__fastcall *)(CAudioSessionManager *), __int64))v185)(
              v233,
              CAudioSessionManager::Release,
              v166);
        }
        if ( v176 )
        {
          CoTaskMemFree(v176[3]);
          v176[3] = 0LL;
          CoTaskMemFree(v176[2]);
          v176[2] = 0LL;
          CoTaskMemFree(*v176);
          *v176 = 0LL;
          operator delete(v176, (const struct std::nothrow_t *)0x68);
        }
        v141 = v225;
        goto LABEL_191;
      }
      LOBYTE(v165) = 0;
      SharedModeEnginePeriodicity = -2005139364;
      v220 = 0;
    }
    v166 = 0LL;
    goto LABEL_395;
  }
LABEL_191:
  if ( SharedModeEnginePeriodicity >= 0 && v141 )
  {
    v244 = 0LL;
    v146 = *(__int64 (__fastcall **)(CSaDeviceProxy *__hidden, struct SaDeviceParams **))(*(_QWORD *)v141 + 104LL);
    if ( v146 == CSaDeviceProxy::GetSaDeviceParams )
      SaDeviceParams = CSaDeviceProxy::GetSaDeviceParams(v141, &v244);
    else
      SaDeviceParams = v146(v141, &v244);
    if ( SaDeviceParams >= 0
      && dword_1800CA040 > 4u
      && (qword_1800CA050 & 0x400000000000LL) != 0
      && (qword_1800CA058 & 0x400000000000LL) == qword_1800CA058 )
    {
      v331 = a15;
      v332 = 16LL;
      v333 = (char *)v244 + 80;
      v226 = *((_DWORD *)v20 + 93);
      v335 = &v226;
      v148 = *(_QWORD *)v232;
      v334 = 16LL;
      v336 = 4LL;
      v149 = *(__int64 (**)(void))(v148 + 72);
      if ( (char *)v149 == (char *)CAudioStream::GetUniqueStreamIdentifier )
        UniqueStreamIdentifier = CAudioStream::GetUniqueStreamIdentifier(v232);
      else
        UniqueStreamIdentifier = v149();
      v267 = UniqueStreamIdentifier;
      v337 = &v267;
      v338 = 8LL;
      v294[1] = 4;
      v295 = 0x400000000000LL;
      v325 = off_1800CA048;
      v294[0] = ((unsigned int)&unk_1800A83F8 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v326 = *(unsigned __int16 *)off_1800CA048;
      v328 = &unk_1800A8403;
      v330 = 1;
      v327 = 2;
      v329 = 61;
      EtwEventWriteTransfer(qword_1800CA060, v294, 0LL, 0LL, 6, &v325);
      v23 = v236;
      v24 = v237;
      v95 = v230;
    }
    v151 = v244;
    if ( v244 )
    {
      CoTaskMemFree(*((LPVOID *)v244 + 3));
      *((_QWORD *)v151 + 3) = 0LL;
      CoTaskMemFree(*((LPVOID *)v151 + 2));
      *((_QWORD *)v151 + 2) = 0LL;
      CoTaskMemFree(*(LPVOID *)v151);
      *(_QWORD *)v151 = 0LL;
      operator delete(v151, (const struct std::nothrow_t *)0x68);
    }
    v141 = v225;
  }
LABEL_205:
  v152 = v238;
  v153 = v256 || v238 && !*((_DWORD *)v238 + 22) && (a9 & 1) != 0;
  if ( SharedModeEnginePeriodicity >= 0 && v153 )
  {
    v210 = v231;
    v239 = 0LL;
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(&v239);
    SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(CBaseStreamGroupProxy *, struct tWAVEFORMATEX **))(*(_QWORD *)v210 + 176LL))(
                                    v210,
                                    &v239);
    if ( SharedModeEnginePeriodicity >= 0 )
    {
      v211 = v239;
      if ( v239 )
      {
        v249 = 0LL;
        Microsoft::WRL::ComPtr<IMMDevice>::InternalRelease(&v249);
        SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(struct tWAVEFORMATEX *, __int64 *))(*(_QWORD *)&v211->wFormatTag + 56LL))(
                                        v211,
                                        &v249);
        if ( SharedModeEnginePeriodicity >= 0 )
        {
          v212 = RpcImpersonateClient(0LL);
          SharedModeEnginePeriodicity = v212;
          if ( v212 > 0 )
            SharedModeEnginePeriodicity = (unsigned __int16)v212 | 0x80070000;
          if ( SharedModeEnginePeriodicity >= 0 )
          {
            SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v249 + 32LL))(
                                            v249,
                                            a16,
                                            (__int64)v152 + 72,
                                            (__int64)v152 + 80);
            RpcRevertToSelf();
            if ( SharedModeEnginePeriodicity >= 0 )
            {
              if ( *((_QWORD *)v152 + 9) )
              {
                if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
                  && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids);
                }
                if ( v223 == eOffloadConnector )
                {
                  v213 = (*(__int64 (__fastcall **)(struct IAudioGraphCallback *, __int64))(*(_QWORD *)v260 + 32LL))(
                           v260,
                           v249);
                  SharedModeEnginePeriodicity = v213;
                  if ( v213 < 0
                    && WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
                    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
                    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                  {
                    WPP_SF_D(
                      *((_QWORD *)WPP_GLOBAL_Control + 2),
                      16LL,
                      &WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids,
                      (unsigned int)v213);
                  }
                }
              }
            }
          }
        }
        Microsoft::WRL::ComPtr<IMMDevice>::InternalRelease(&v249);
      }
    }
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(&v239);
    v141 = v225;
  }
  if ( v141 )
  {
    v225 = 0LL;
    (*(void (__fastcall **)(CSaDeviceProxy *))(*(_QWORD *)v141 + 16LL))(v141);
  }
  v154 = v231;
  if ( v231 )
  {
    v231 = 0LL;
    (*(void (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v154 + 16LL))(v154);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( SharedModeEnginePeriodicity < 0 )
LABEL_428:
    AudSrvTraceLoggingErrorHelper("CAudioResourceManager::CreateStream", 0x4E0u, SharedModeEnginePeriodicity);
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      17LL,
      &WPP_c7d29aab855135f4e4ca21d8656ed7ad_Traceguids,
      (unsigned int)SharedModeEnginePeriodicity);
  }
  v155 = v250;
  if ( v250 )
  {
    v250 = 0LL;
    v156 = *(void (**)(void))(*(_QWORD *)v155 + 16LL);
    if ( (char *)v156 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
    else
      v156();
  }
  if ( v119 )
  {
    CoTaskMemFree(*((LPVOID *)v119 + 2));
    *((_QWORD *)v119 + 2) = 0LL;
    CoTaskMemFree(*(LPVOID *)v119);
    *(_QWORD *)v119 = 0LL;
    operator delete(v119, (const struct std::nothrow_t *)0x38);
  }
  CoTaskMemFree(v95);
  CoTaskMemFree(Src);
  CoTaskMemFree(v255);
  if ( v261 )
    ((void (__fastcall *)(struct IMMDevice *))v261->lpVtbl->Release)(v261);
  CoTaskMemFree(v243);
  v243 = 0LL;
  CoTaskMemFree(v24);
  CoTaskMemFree(v23);
  return (unsigned int)SharedModeEnginePeriodicity;
}
