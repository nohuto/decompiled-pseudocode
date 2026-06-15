/*
 * XREFs of ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180025240
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014990 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?AddRef@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18000AF90 (-AddRef@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?Release@CAudioSessionManager@@UEAAKXZ @ 0x180019460 (-Release@CAudioSessionManager@@UEAAKXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x18001D470 (-GetStreamGroup@CAudioStream@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ?SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z @ 0x18001DEC0 (-SetAudioHandle@CAudioStream@@UEAAJPEAUSYSTEM_AUDIO_STREAM@@K@Z.c)
 *     ?IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ @ 0x18001E760 (-IsFormatSensitiveClient@CAudioStream@@UEAA_NXZ.c)
 *     ?IsPeriodicitySensitiveClient@CAudioStream@@UEAA_NXZ @ 0x18001E770 (-IsPeriodicitySensitiveClient@CAudioStream@@UEAA_NXZ.c)
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F934 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18001FA00 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAU_GUID@@444@Z @ 0x180020690 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180022A10 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180024F60 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ?GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z @ 0x180026630 (-GetConnectedSaDevice@CBaseStreamGroupProxy@@UEAAJPEAPEAUISaDeviceProxy@@@Z.c)
 *     ?IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ @ 0x180026B80 (-IsPeriodicitySensitive@CBaseStreamGroupProxy@@UEAA_NXZ.c)
 *     ?GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z @ 0x180026D80 (-GetSaDeviceParams@CSaDeviceProxy@@UEAAJPEAPEAUSaDeviceParams@@@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800275B0 (-Release@-$RuntimeClass@U-$InterfaceList@UIDeviceGraphObjectsStore@@VNil@Details@WRL@Microsoft@@.c)
 *     ?LockForStreamGroupConnectionDisconnection@CDeviceGraphObjectsStore@@UEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@Wrappers@WRL@Microsoft@@XZ @ 0x180027720 (-LockForStreamGroupConnectionDisconnection@CDeviceGraphObjectsStore@@UEAA-AV-$SyncLockT@UCritica.c)
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x180028050 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_NPEAUtWAVEFORMATEX@@PEAPEAUStreamGroupParams@@@Z @ 0x180028A50 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@W4STREAMGROUP_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180029040 (-ConnectStreamGroupToSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProx.c)
 *     ?CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUStreamGroupParams@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800293B0 (-CreateStream@CDeviceGraphManager@@UEAAJPEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioG.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18002AF40 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18002B1B0 (-GetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z.c)
 *     ?Release@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ @ 0x18002CAF0 (-Release@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@UEAAKXZ.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180030080 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     _TlgWrite @ 0x1800315C0 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     memcmp_0 @ 0x1800449EE (memcmp_0.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@PEAI333@Z @ 0x180066460 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180066D84 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006714C (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x18008B4BC (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     TemplateEventDescriptor @ 0x18008DB28 (TemplateEventDescriptor.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18008ECDC (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180091F28 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800920F0 (-GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 */

__int64 __fastcall CAudioResourceManager::CreateStream(
        CAudioResourceManager *this,
        struct IAudioProcess *a2,
        struct IAudioStreamInfo *a3,
        int a4,
        int a5,
        int a6,
        struct CEndpointCharacteristics *a7,
        unsigned int a8,
        enum _AUDCLNT_SHAREMODE a9,
        struct IAudioGraphCallback *a10,
        struct tWAVEFORMATEX *a11,
        __int64 a12,
        __int64 a13,
        const struct _GUID *a14,
        unsigned int a15,
        const unsigned __int16 *a16,
        unsigned int a17,
        struct SYSTEM_AUDIO_STREAM *a18)
{
  __int64 *v19; // rdi
  GUID *v20; // r15
  __int64 v21; // r13
  __int64 v22; // rax
  signed int SharedModeEnginePeriodicity; // esi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v24; // edx
  unsigned __int64 v25; // rcx
  void (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v27; // rbx
  void (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v29; // rbx
  BOOL v30; // r14d
  __int64 v31; // rdi
  struct _GUID *v32; // rax
  int v33; // r14d
  enum _AUDCLNT_SHAREMODE v34; // edi
  struct tWAVEFORMATEX *v35; // r14
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v36; // eax
  GUID v37; // xmm6
  struct _GUID *v38; // rbx
  GUID v39; // xmm9
  GUID v40; // xmm7
  GUID v41; // xmm8
  signed int v42; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v43; // r12d
  int v44; // edx
  unsigned int **Data4; // rax
  signed int v46; // r8d
  signed int v47; // eax
  struct tWAVEFORMATEX *v48; // r9
  __int64 i; // rdx
  struct tWAVEFORMATEX *v50; // rcx
  __int64 v51; // rax
  signed int v52; // esi
  __int64 v53; // rdi
  __int16 **v54; // r12
  unsigned __int16 *v55; // rcx
  WORD wFormatTag; // dx
  __int128 v57; // xmm1
  __int16 v58; // r11
  __int64 v59; // xmm0_8
  int v60; // r10d
  unsigned __int16 v61; // dx
  __int128 v62; // xmm1
  __int16 v63; // bx
  __int64 v64; // xmm0_8
  int v65; // r8d
  __int16 v66; // dx
  int v67; // ecx
  __int16 v68; // ax
  __int64 v69; // rax
  unsigned int v70; // eax
  int v71; // ebx
  unsigned int v72; // edi
  unsigned int v73; // esi
  __int64 v74; // r12
  signed int v75; // eax
  struct tWAVEFORMATEX *v76; // rax
  struct tWAVEFORMATEX *v77; // rax
  __int64 v78; // rdi
  __int64 v79; // r9
  signed int v80; // eax
  int (*v81)(CDeviceGraphManager *__hidden, struct IAudioStreamInfo *, unsigned int, enum _AUDCLNT_SHAREMODE, struct IAudioGraphCallback *, unsigned int, struct AUDIO_DEVICE_MODE_DESCRIPTOR *, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct StreamGroupParams *, struct SYSTEM_AUDIO_STREAM *); // rsi
  unsigned int v82; // r12d
  __int64 (__fastcall *v83)(CAudioStream *, struct SYSTEM_AUDIO_STREAM *, unsigned int); // rbx
  unsigned int v84; // r8d
  CAudioStream *v85; // r12
  int (*v86)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **); // rsi
  int v87; // eax
  void (__fastcall *v88)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *); // rsi
  __int64 (__fastcall *v89)(CAudioStream *, struct IStreamGroupProxy **); // rbx
  int StreamGroup; // eax
  CSaDeviceProxy *v91; // r12
  __int64 (__fastcall *v92)(CBaseStreamGroupProxy *__hidden, struct ISaDeviceProxy **); // rsi
  int v93; // eax
  int v94; // eax
  CAudioSessionManagerProvider *v95; // rbx
  __int64 (__fastcall *v96)(__int64); // rsi
  __int64 (__fastcall *v97)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **); // rsi
  signed int AudioSessionManager; // eax
  void (__fastcall *v99)(CAudioSessionManagerProvider *); // r12
  bool v100; // bl
  __int64 v101; // r12
  char v102; // r12
  __int64 v103; // rdx
  signed __int32 v104; // eax
  CAudioStream *v105; // rsi
  bool (__fastcall *v106)(CAudioStream *); // rbx
  bool v107; // al
  bool (__fastcall *v108)(CAudioStream *); // rbx
  bool IsPeriodicitySensitiveClient; // al
  CAudioResourceManager *v110; // rcx
  struct ISaDeviceProxy *v111; // rsi
  bool v112; // r12
  LPVOID *v113; // rbx
  signed int SaDeviceForSharedStream; // eax
  CAudioSessionManager *v115; // rcx
  CBaseStreamGroupProxy *v116; // rsi
  bool (__fastcall *v117)(CBaseStreamGroupProxy *__hidden); // r12
  char IsPeriodicitySensitive; // al
  unsigned int v119; // ecx
  signed int v120; // eax
  __int64 (__fastcall *v121)(CAudioSessionManager *); // r12
  HANDLE ProcessHeap; // rax
  __int64 (__fastcall *v123)(CSaDeviceProxy *__hidden, struct SaDeviceParams **); // rbx
  int SaDeviceParams; // eax
  const struct _TlgProvider_t *v125; // rcx
  const GUID *v126; // r8
  const GUID *v127; // r9
  __int64 v128; // rbx
  HANDLE v129; // rax
  CBaseStreamGroupProxy *v130; // r12
  struct IDeviceGraphObjectsStore *v131; // rbx
  void (__fastcall *v132)(struct IDeviceGraphObjectsStore *); // r12
  HANDLE v133; // rax
  bool (__fastcall *v135)(CAudioStream *); // rbx
  char IsFormatSensitiveClient; // al
  unsigned __int16 v137; // r9
  __int128 v138; // xmm0
  struct tWAVEFORMATEX *v139; // rcx
  int v140; // eax
  __int64 v141; // rax
  __int64 v142; // rax
  WORD nChannels; // r9
  WORD wBitsPerSample; // r8
  __int128 v145; // xmm0
  __int64 v146; // rax
  __int64 v147; // rax
  struct tWAVEFORMATEX *v148; // rbx
  int MixFormatInternal; // eax
  struct tWAVEFORMATEX *v150; // rdi
  __int64 v151; // r8
  __int64 v152; // r8
  int v153; // eax
  const struct tWAVEFORMATEX *v154; // r12
  const struct tWAVEFORMATEX *v155; // rax
  void *v156; // rbx
  signed __int32 v157; // eax
  CAudioResourceManager *v158; // rcx
  CAudioResourceManager *v159; // rcx
  CBaseStreamGroupProxy *v160; // rsi
  struct tWAVEFORMATEX *v161; // rbx
  RPC_STATUS v162; // eax
  EVENT_DATA_DESCRIPTOR *pData; // [rsp+30h] [rbp-D8h]
  EVENT_DATA_DESCRIPTOR *pDataa; // [rsp+30h] [rbp-D8h]
  struct tWAVEFORMATEX *Srca; // [rsp+40h] [rbp-C8h]
  bool Src; // [rsp+40h] [rbp-C8h]
  bool Srcb; // [rsp+40h] [rbp-C8h]
  bool v168; // [rsp+78h] [rbp-90h]
  bool v169; // [rsp+78h] [rbp-90h]
  struct ISaDeviceProxy *v170; // [rsp+80h] [rbp-88h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v171[2]; // [rsp+88h] [rbp-80h] BYREF
  struct _GUID *v172; // [rsp+90h] [rbp-78h]
  CAudioSessionManager *v173; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v174; // [rsp+A0h] [rbp-68h] BYREF
  signed int pvData; // [rsp+A4h] [rbp-64h] BYREF
  CBaseStreamGroupProxy *v176; // [rsp+A8h] [rbp-60h] BYREF
  struct tWAVEFORMATEX *v177; // [rsp+B0h] [rbp-58h] BYREF
  CAudioStream *v178; // [rsp+B8h] [rbp-50h]
  LPVOID lpMem; // [rsp+C0h] [rbp-48h] BYREF
  struct tWAVEFORMATEX *v180; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v181; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v182; // [rsp+D8h] [rbp-30h]
  struct SYSTEM_AUDIO_STREAM *v183; // [rsp+E0h] [rbp-28h]
  GUID *v184; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int16 *v185; // [rsp+F0h] [rbp-18h] BYREF
  struct IAudioGraphCallback *v186; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v187; // [rsp+100h] [rbp-8h] BYREF
  struct tWAVEFORMATEX *v188; // [rsp+108h] [rbp+0h] BYREF
  void *v189; // [rsp+110h] [rbp+8h] BYREF
  struct IDeviceGraphObjectsStore *v190; // [rsp+118h] [rbp+10h] BYREF
  int v191; // [rsp+120h] [rbp+18h] BYREF
  unsigned int v192; // [rsp+124h] [rbp+1Ch] BYREF
  unsigned int v193; // [rsp+128h] [rbp+20h]
  struct tWAVEFORMATEX *v194; // [rsp+130h] [rbp+28h] BYREF
  struct tWAVEFORMATEX *v195; // [rsp+138h] [rbp+30h] BYREF
  LPVOID pv; // [rsp+140h] [rbp+38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+148h] [rbp+40h] BYREF
  struct IAudioProcess *v198; // [rsp+150h] [rbp+48h]
  DWORD pcbData; // [rsp+158h] [rbp+50h] BYREF
  unsigned int v200; // [rsp+15Ch] [rbp+54h]
  struct tWAVEFORMATEX *v201; // [rsp+160h] [rbp+58h] BYREF
  __int64 v202; // [rsp+168h] [rbp+60h] BYREF
  struct tWAVEFORMATEX *v203; // [rsp+170h] [rbp+68h] BYREF
  struct IMMDevice *v204; // [rsp+178h] [rbp+70h]
  LPCRITICAL_SECTION v205; // [rsp+180h] [rbp+78h] BYREF
  char v206; // [rsp+188h] [rbp+80h]
  struct tWAVEFORMATEX *v207; // [rsp+190h] [rbp+88h] BYREF
  PROPVARIANT v208; // [rsp+198h] [rbp+90h] BYREF
  __int64 v209; // [rsp+1A0h] [rbp+98h]
  __int64 v210; // [rsp+1A8h] [rbp+A0h]
  PROPVARIANT pvar; // [rsp+1B0h] [rbp+A8h] BYREF
  __int64 v212; // [rsp+1B8h] [rbp+B0h]
  __int64 v213; // [rsp+1C0h] [rbp+B8h]
  unsigned int v214; // [rsp+1C8h] [rbp+C0h]
  unsigned int v215; // [rsp+1CCh] [rbp+C4h]
  int v216; // [rsp+1D0h] [rbp+C8h]
  unsigned int v217; // [rsp+1D4h] [rbp+CCh]
  PROPVARIANT v218[4]; // [rsp+1D8h] [rbp+D0h] BYREF
  GUID v219; // [rsp+1F8h] [rbp+F0h] BYREF
  GUID v220; // [rsp+208h] [rbp+100h] BYREF
  GUID v221; // [rsp+218h] [rbp+110h] BYREF
  GUID v222; // [rsp+228h] [rbp+120h]
  GUID v223; // [rsp+238h] [rbp+130h] BYREF
  struct _GUID v224; // [rsp+248h] [rbp+140h] BYREF
  struct _GUID v225; // [rsp+258h] [rbp+150h] BYREF
  struct _GUID v226; // [rsp+268h] [rbp+160h] BYREF
  struct _GUID v227; // [rsp+278h] [rbp+170h] BYREF
  struct _GUID v228; // [rsp+288h] [rbp+180h] BYREF
  struct _GUID v229; // [rsp+298h] [rbp+190h] BYREF
  struct _GUID v230; // [rsp+2A8h] [rbp+1A0h] BYREF
  GUID v231; // [rsp+2B8h] [rbp+1B0h] BYREF
  struct _GUID v232; // [rsp+2C8h] [rbp+1C0h] BYREF
  GUID v233; // [rsp+2D8h] [rbp+1D0h] BYREF
  struct _GUID v234; // [rsp+2E8h] [rbp+1E0h] BYREF
  GUID v235; // [rsp+2F8h] [rbp+1F0h] BYREF
  struct _GUID v236; // [rsp+308h] [rbp+200h] BYREF
  GUID v237; // [rsp+318h] [rbp+210h]
  __int128 Buf1; // [rsp+328h] [rbp+220h] BYREF
  _BYTE v239[24]; // [rsp+338h] [rbp+230h]
  __int128 Buf2; // [rsp+350h] [rbp+248h] BYREF
  _BYTE v241[24]; // [rsp+360h] [rbp+258h]
  EVENT_DATA_DESCRIPTOR v242; // [rsp+378h] [rbp+270h] BYREF
  const struct _GUID *v243; // [rsp+398h] [rbp+290h]
  __int64 v244; // [rsp+3A0h] [rbp+298h]
  __int64 v245; // [rsp+3A8h] [rbp+2A0h]
  __int64 v246; // [rsp+3B0h] [rbp+2A8h]

  v186 = a10;
  v180 = a11;
  v19 = (__int64 *)*((_QWORD *)a7 + 2);
  v183 = a18;
  v20 = 0LL;
  v184 = 0LL;
  v21 = 0LL;
  v187 = 0LL;
  v185 = 0LL;
  v22 = *v19;
  v178 = a3;
  v198 = a2;
  v172 = (struct _GUID *)a7;
  SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(__int64 *, unsigned __int16 **))(v22 + 40))(v19, &v185);
  v171[0] = eLoopbackConnector;
  v193 = 1;
  if ( *((_DWORD *)a7 + 93) )
  {
    LODWORD(v173) = 1;
  }
  else if ( (a8 & 0x20000) != 0 )
  {
    LODWORD(v173) = 2;
  }
  else
  {
    LODWORD(v173) = 0;
  }
  v204 = (struct IMMDevice *)*((_QWORD *)a7 + 2);
  ((void (__fastcall *)(struct IMMDevice *))v204->lpVtbl->AddRef)(v204);
  v26 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a7 + 2);
  v192 = 0;
  v27 = 0LL;
  v202 = 0LL;
  if ( v26 )
  {
    (**v26)(v26, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &v202);
    v27 = v202;
    if ( v202 )
    {
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v202 + 88LL))(v202, &v192);
      v27 = v202;
    }
  }
  v174 = v192;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  v28 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a7 + 2);
  v191 = 0;
  v29 = 0LL;
  v181 = 0LL;
  if ( !v28 )
    goto LABEL_20;
  (**v28)(v28, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &v181);
  v29 = v181;
  if ( v181 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v181 + 88LL))(v181, &v191);
    v29 = v181;
  }
  if ( !v191 )
  {
LABEL_20:
    if ( *((_DWORD *)a7 + 93) )
      goto LABEL_21;
    v25 = (unsigned __int64)v172;
    v30 = 1;
    v31 = *(_QWORD *)v172[3].Data4;
    if ( !v31 )
      goto LABEL_19;
    pvar = 0LL;
    v212 = 0LL;
    v213 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v31 + 40LL))(
           v31,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v30 = v212 == 0;
    }
    PropVariantClear(&pvar);
    v25 = (unsigned __int64)v172;
    v29 = v181;
    if ( !v30 )
      v32 = v172 + 8;
    else
LABEL_19:
      v32 = (struct _GUID *)(v25 + 64);
    if ( *(_DWORD *)v32->Data4 <= 1u )
      goto LABEL_21;
    if ( !CEndpointCharacteristics::AreEnhancementsEnabled((CEndpointCharacteristics *)v25) )
    {
      v29 = v181;
LABEL_21:
      v33 = 0;
      goto LABEL_22;
    }
  }
  memset(v218, 0, 24);
  v33 = 1;
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**(_QWORD **)&v172[2].Data1 + 40LL))(
         *(_QWORD *)&v172[2].Data1,
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         v218) < 0
    || LOWORD(v218[0]) != 19 )
  {
    v33 = 0;
  }
  PropVariantClear(v218);
  v29 = v181;
LABEL_22:
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  v200 = a8 & 0x400000;
  if ( (a8 & 0x400000) != 0 )
  {
    v34 = a9;
    v36 = eKeywordDetectorConnector;
    v35 = 0LL;
  }
  else
  {
    if ( v33 && (a8 & 0x20000) != 0 )
    {
      v34 = a9;
      v36 = eLoopbackConnector;
      v35 = 0LL;
      goto LABEL_29;
    }
    v34 = a9;
    v35 = 0LL;
    if ( a9 == AUDCLNT_SHAREMODE_EXCLUSIVE )
    {
      v139 = 0LL;
      v201 = 0LL;
      if ( v174 )
      {
        if ( v180 )
        {
          v140 = IsFormatSupportedByHwAudioEngine(v204, v24, v180, &v201);
          v139 = v201;
          if ( !v140 )
          {
            CoTaskMemFree(v201);
            v36 = eOffloadConnector;
            goto LABEL_28;
          }
        }
      }
      CoTaskMemFree(v139);
    }
    v36 = (a8 & 2) == 0;
  }
LABEL_28:
  v171[0] = v36;
LABEL_29:
  v37 = GUID_00000000_0000_0000_0000_000000000000;
  v38 = v172;
  v39 = GUID_00000000_0000_0000_0000_000000000000;
  v223 = GUID_00000000_0000_0000_0000_000000000000;
  v40 = GUID_00000000_0000_0000_0000_000000000000;
  v220 = GUID_00000000_0000_0000_0000_000000000000;
  v41 = GUID_00000000_0000_0000_0000_000000000000;
  v221 = GUID_00000000_0000_0000_0000_000000000000;
  v219 = GUID_00000000_0000_0000_0000_000000000000;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    v42 = DeriveAudioProcessingModeConfiguration(
            a4,
            a5,
            (CEndpointCharacteristics *)v172,
            (unsigned int)v173,
            v34,
            v36,
            0,
            &v223,
            &v220,
            &v221,
            &v219);
    v37 = v223;
    SharedModeEnginePeriodicity = v42;
    v39 = v220;
    v40 = v221;
    v41 = v219;
  }
  v203 = 0LL;
  pv = 0LL;
  v177 = 0LL;
  if ( SharedModeEnginePeriodicity < 0 )
    goto LABEL_89;
  v43 = v171[0];
  v234 = v37;
  v224 = v39;
  v236 = v40;
  SharedModeEnginePeriodicity = DeriveDeviceGraphFormatsForStream(
                                  (struct CEndpointCharacteristics *)v172,
                                  a6 != 0,
                                  v171[0],
                                  v34,
                                  &v236,
                                  &v224,
                                  &v234,
                                  v180,
                                  &v203,
                                  (struct tWAVEFORMATEX **)&pv,
                                  &v177);
  if ( SharedModeEnginePeriodicity < 0 )
  {
    v35 = v177;
    goto LABEL_90;
  }
  v44 = a8;
  if ( v34 || (a8 & 1) != 0 )
  {
    v74 = a13;
    v35 = v177;
    goto LABEL_281;
  }
  v222 = v37;
  if ( v171[0] == eKeywordDetectorConnector )
    Data4 = (unsigned int **)v172[26].Data4;
  else
    Data4 = (unsigned int **)&v172[26];
  v25 = (unsigned __int64)*Data4;
  v35 = v177;
  v46 = 0;
  pvData = 0;
  v174 = *(_DWORD *)(v25 + 8);
  v47 = v174;
  v48 = (struct tWAVEFORMATEX *)(int)v174;
  v195 = (struct tWAVEFORMATEX *)(int)v174;
  v194 = (struct tWAVEFORMATEX *)v25;
  for ( i = 0LL; ; ++i )
  {
    v189 = (void *)i;
    if ( i >= (__int64)v48 )
    {
      SharedModeEnginePeriodicity = -2004287480;
LABEL_269:
      v38 = v172;
      goto LABEL_89;
    }
    if ( i < 0 || v46 >= v47 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x180058D3CLL);
    }
    v50 = *(struct tWAVEFORMATEX **)(*(_QWORD *)v25 + 8 * i);
    v188 = v50;
    v51 = *(_QWORD *)&v50->wFormatTag - *(_QWORD *)&v222.Data1;
    if ( *(_QWORD *)&v50->wFormatTag == *(_QWORD *)&v222.Data1 )
      v51 = *(_QWORD *)&v50->nAvgBytesPerSec - *(_QWORD *)v222.Data4;
    if ( !v51 )
    {
      v52 = 0;
      lpCriticalSection = (LPCRITICAL_SECTION)*(int *)((char *)&v50[1].nSamplesPerSec + 2);
      v53 = 0LL;
      if ( (__int64)lpCriticalSection > 0 )
        break;
    }
LABEL_220:
    v47 = v174;
    ++v46;
    v25 = (unsigned __int64)v194;
    pvData = v46;
  }
  while ( 1 )
  {
    if ( v53 < 0 || v52 >= *(signed int *)((char *)&v50[1].nSamplesPerSec + 2) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x180058D26LL);
    }
    v54 = *(__int16 ***)(*(_QWORD *)&v50->cbSize + 8 * v53);
    v55 = (unsigned __int16 *)*v54;
    if ( !v35 )
    {
      if ( !v55 )
        goto LABEL_83;
      goto LABEL_81;
    }
    if ( v55 && &Buf1 )
    {
      wFormatTag = v35->wFormatTag;
      if ( v35->wFormatTag == 0xFFFE )
      {
        if ( v35->cbSize != 22 )
        {
          v141 = *(_QWORD *)((char *)&v35[1].nSamplesPerSec + 2)
               - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
          if ( !v141 )
            v141 = *(_QWORD *)&v35[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
          if ( v141 )
          {
            v142 = *(_QWORD *)((char *)&v35[1].nSamplesPerSec + 2)
                 - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
            if ( !v142 )
              v142 = *(_QWORD *)&v35[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
            if ( v142 )
              goto LABEL_81;
          }
        }
        v57 = *(_OWORD *)&v35->cbSize;
        Buf1 = *(_OWORD *)&v35->wFormatTag;
        v58 = Buf1;
        v59 = *(_QWORD *)&v35[1].wBitsPerSample;
        *(_OWORD *)v239 = v57;
        *(_WORD *)v239 = 22;
        v60 = DWORD1(v57);
        *(_QWORD *)&v239[16] = v59;
      }
      else
      {
        if ( v35->cbSize && ((wFormatTag - 1) & 0xFFFD) != 0 )
          goto LABEL_81;
        nChannels = v35->nChannels;
        if ( (unsigned __int16)(nChannels - 1) > 1u )
          goto LABEL_81;
        wBitsPerSample = v35->wBitsPerSample;
        if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
          goto LABEL_81;
        v145 = *(_OWORD *)&v35->wFormatTag;
        *(_WORD *)v239 = 22;
        v58 = -2;
        *(GUID *)&v239[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
        *(_DWORD *)&v239[8] = wFormatTag;
        *(_WORD *)&v239[2] = wBitsPerSample;
        v60 = (nChannels == 1) + 3;
        Buf1 = v145;
        *(_DWORD *)&v239[4] = v60;
        LOWORD(Buf1) = -2;
      }
      if ( &Buf2 )
        break;
    }
LABEL_81:
    v50 = v188;
    ++v52;
    if ( ++v53 >= (__int64)lpCriticalSection )
    {
      i = (__int64)v189;
      v46 = pvData;
      v48 = v195;
      goto LABEL_220;
    }
  }
  v61 = *v55;
  if ( *v55 != 0xFFFE )
  {
    if ( !v55[8] || ((v61 - 1) & 0xFFFD) == 0 )
    {
      v137 = v55[1];
      if ( (unsigned __int16)(v137 - 1) <= 1u )
      {
        v63 = -2;
        if ( ((v55[7] - 8) & 0xFFE7) == 0 )
        {
          *(_WORD *)&v241[2] = v55[7];
          *(_WORD *)v241 = 22;
          v138 = *(_OWORD *)v55;
          *(GUID *)&v241[8] = GUID_00000000_0000_0010_8000_00aa00389b71;
          *(_DWORD *)&v241[8] = v61;
          Buf2 = v138;
          LOWORD(Buf2) = -2;
          if ( v137 == 1 )
            v65 = 4;
          else
            v65 = 3;
          *(_DWORD *)&v241[4] = v65;
          goto LABEL_57;
        }
      }
    }
    goto LABEL_81;
  }
  if ( v55[8] != 22 )
  {
    v146 = *((_QWORD *)v55 + 3) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v146 )
      v146 = *((_QWORD *)v55 + 4) - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( v146 )
    {
      v147 = *((_QWORD *)v55 + 3) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v147 )
        v147 = *((_QWORD *)v55 + 4) - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( v147 )
        goto LABEL_81;
    }
  }
  v62 = *((_OWORD *)v55 + 1);
  Buf2 = *(_OWORD *)v55;
  v63 = Buf2;
  v64 = *((_QWORD *)v55 + 4);
  *(_OWORD *)v241 = v62;
  v65 = DWORD1(v62);
  *(_QWORD *)&v241[16] = v64;
  *(_WORD *)v241 = 22;
LABEL_57:
  if ( WORD1(Buf1) )
  {
    v66 = WORD1(Buf2);
  }
  else
  {
    v66 = 0;
    WORD1(Buf2) = 0;
    DWORD2(Buf2) = 0;
    WORD6(Buf2) = 0;
  }
  if ( DWORD1(Buf1) )
  {
    v67 = DWORD1(Buf2);
  }
  else
  {
    v67 = 0;
    *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
  }
  if ( HIWORD(Buf1) )
  {
    v68 = HIWORD(Buf2);
  }
  else
  {
    v68 = 0;
    HIDWORD(Buf2) = 0;
  }
  if ( !v60 )
  {
    v65 = 0;
    *(_DWORD *)&v241[4] = 0;
  }
  if ( !v58 )
  {
    v63 = 0;
    LOWORD(Buf2) = 0;
  }
  if ( !v66 )
  {
    WORD1(Buf1) = 0;
    DWORD2(Buf1) = 0;
    WORD6(Buf1) = 0;
  }
  if ( !v67 )
    *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
  if ( !v68 )
    HIDWORD(Buf1) = 0;
  if ( !v65 )
    *(_DWORD *)&v239[4] = 0;
  if ( !v63 )
    LOWORD(Buf1) = 0;
  v69 = *(_QWORD *)&v239[8] - *(_QWORD *)&v241[8];
  if ( *(_QWORD *)&v239[8] == *(_QWORD *)&v241[8] )
    v69 = *(_QWORD *)&v239[16] - *(_QWORD *)&v241[16];
  if ( v69 || memcmp_0(&Buf1, &Buf2, 0x28uLL) )
    goto LABEL_81;
LABEL_83:
  v70 = *((_DWORD *)v54 + 2);
  v71 = *((_DWORD *)v54 + 3);
  v72 = *((_DWORD *)v54 + 4);
  v73 = *((_DWORD *)v54 + 5);
  v74 = a13;
  v216 = v71;
  v174 = v70;
  v214 = v70;
  v217 = v72;
  v215 = v73;
  if ( !a13 )
  {
    v74 = (unsigned int)(int)((double)v71 * 10000000.0 / (double)(int)v35->nSamplesPerSec + 0.5);
    goto LABEL_85;
  }
  pcbData = 4;
  pvData = 0;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"SkipPeriodicityValidation",
    0x18u,
    0LL,
    &pvData,
    &pcbData);
  v25 = (unsigned int)(int)((double)(int)v35->nSamplesPerSec * (double)(int)a13 / 10000000.0 + 0.5);
  if ( !pvData
    && ((unsigned int)v25 < v72
     || (unsigned int)v25 > v73
     || (unsigned int)v25 % v174 && (_DWORD)v25 != v71 && (_DWORD)v25 != v72 && (_DWORD)v25 != v73) )
  {
    SharedModeEnginePeriodicity = -2004287456;
    goto LABEL_269;
  }
LABEL_85:
  if ( a6 )
  {
    v148 = 0LL;
    v207 = 0LL;
    v188 = 0LL;
    v229 = v40;
    MixFormatInternal = CPolicyConfig::GetMixFormatInternal(
                          g_PolicyConfig,
                          (struct CEndpointCharacteristics *)v172,
                          v171[0],
                          &v229,
                          &v207);
    v150 = v207;
    SharedModeEnginePeriodicity = MixFormatInternal;
    if ( MixFormatInternal >= 0 )
    {
      v195 = 0LL;
      v194 = 0LL;
      v228 = v37;
      v227 = v39;
      v230 = v40;
      SharedModeEnginePeriodicity = DeriveDeviceGraphFormatsForStream(
                                      (struct CEndpointCharacteristics *)v172,
                                      0,
                                      v171[0],
                                      AUDCLNT_SHAREMODE_SHARED,
                                      &v230,
                                      &v227,
                                      &v228,
                                      v207,
                                      &v195,
                                      &v194,
                                      &v188);
      CoTaskMemFree(v194);
      CoTaskMemFree(v195);
      v148 = v188;
    }
    v174 = 0;
    if ( SharedModeEnginePeriodicity >= 0 )
    {
      v232 = v37;
      SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                      (CEndpointCharacteristics *)v172,
                                      v171[0],
                                      v148,
                                      &v232,
                                      &v174,
                                      0LL,
                                      0LL,
                                      0LL);
      if ( SharedModeEnginePeriodicity >= 0 )
      {
        v151 = (unsigned int)(int)((double)(int)v174 * 10000000.0 / (double)(int)v148->nSamplesPerSec + 0.5);
        SharedModeEnginePeriodicity = 0;
        if ( v74 - v151 > 5 * v151 / 100 )
          SharedModeEnginePeriodicity = -2004287448;
      }
    }
    CoTaskMemFree(v148);
    CoTaskMemFree(v150);
    v44 = a8;
    v38 = v172;
    v34 = a9;
LABEL_281:
    if ( SharedModeEnginePeriodicity >= 0 )
      goto LABEL_87;
    goto LABEL_89;
  }
  v38 = v172;
  v34 = a9;
  v44 = a8;
LABEL_87:
  v233 = v39;
  v231 = v37;
  v75 = InitializeStreamAndModeDescriptors(
          (CEndpointCharacteristics *)v38,
          v34,
          v44,
          (unsigned int)v173,
          v171[0],
          &v231,
          &v233,
          &v184,
          &v187);
  v20 = v184;
  SharedModeEnginePeriodicity = v75;
  v76 = v180;
  v21 = v187;
  *(_QWORD *)v184[4].Data4 = v180;
  v20[4].Data1 = v76->cbSize + 18;
  *(_QWORD *)&v20[2].Data1 = a12;
  *(_QWORD *)v20[2].Data4 = v74;
  *(_DWORD *)&v20->Data4[4] = a15;
  *(_QWORD *)&v20[1].Data1 = a16;
  *(_QWORD *)v20[3].Data4 = a14;
  if ( v21 )
  {
    v77 = v203;
    v25 = (unsigned int)v203->cbSize + 18;
    *(_DWORD *)(v21 + 8) = v25;
    *(_QWORD *)(v21 + 16) = v77;
  }
LABEL_89:
  v43 = v171[0];
LABEL_90:
  v182 = 0LL;
  v78 = 0LL;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    v79 = *(_QWORD *)v20[2].Data4;
    pData = (EVENT_DATA_DESCRIPTOR *)&v235;
    v235 = v41;
    v237 = v37;
    v80 = DeriveStreamGroupParametersForStream(v38, (unsigned int)v43, (unsigned int)v173, v79);
    v78 = v182;
    SharedModeEnginePeriodicity = v80;
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v25, &AudioResourceManager_StreamSettings_Derived);
  if ( SharedModeEnginePeriodicity < 0 )
  {
    v82 = a17;
  }
  else
  {
    v81 = *(int (**)(CDeviceGraphManager *__hidden, struct IAudioStreamInfo *, unsigned int, enum _AUDCLNT_SHAREMODE, struct IAudioGraphCallback *, unsigned int, struct AUDIO_DEVICE_MODE_DESCRIPTOR *, struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *, struct StreamGroupParams *, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)g_DeviceGraphManager + 24LL);
    v82 = a17;
    if ( v81 == CDeviceGraphManager::CreateStream )
    {
      SharedModeEnginePeriodicity = CDeviceGraphManager::CreateStream(
                                      g_DeviceGraphManager,
                                      v178,
                                      a8,
                                      a9,
                                      v186,
                                      a17,
                                      (struct AUDIO_DEVICE_MODE_DESCRIPTOR *)v21,
                                      (struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *)v20,
                                      (struct StreamGroupParams *)v78,
                                      v183);
    }
    else
    {
      LODWORD(pData) = a17;
      SharedModeEnginePeriodicity = ((__int64 (__fastcall *)(CDeviceGraphManager *, CAudioStream *, _QWORD, _QWORD, struct IAudioGraphCallback *, EVENT_DATA_DESCRIPTOR *, __int64, GUID *, __int64, struct SYSTEM_AUDIO_STREAM *))v81)(
                                      g_DeviceGraphManager,
                                      v178,
                                      a8,
                                      (unsigned int)a9,
                                      v186,
                                      pData,
                                      v21,
                                      v20,
                                      v78,
                                      v183);
    }
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v25, &AudioResourceManager_Stream_Created);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      11LL,
      &WPP_87a960f07f9f0e33e55207b25344727f_Traceguids,
      (unsigned int)SharedModeEnginePeriodicity);
  }
  if ( SharedModeEnginePeriodicity < 0 )
  {
    v85 = v178;
  }
  else
  {
    v83 = *(__int64 (__fastcall **)(CAudioStream *, struct SYSTEM_AUDIO_STREAM *, unsigned int))(*(_QWORD *)v178 + 96LL);
    if ( v83 == CAudioStream::SetAudioHandle )
    {
      v84 = v82;
      v85 = v178;
      SharedModeEnginePeriodicity = CAudioStream::SetAudioHandle(v178, v183, v84);
    }
    else
    {
      v152 = v82;
      v85 = v178;
      SharedModeEnginePeriodicity = v83(v178, v183, v152);
    }
  }
  v190 = 0LL;
  if ( SharedModeEnginePeriodicity < 0 )
    goto LABEL_187;
  v86 = *(int (**)(CDeviceGraphStore *__hidden, const unsigned __int16 *, struct IDeviceGraphObjectsStore **))(*(_QWORD *)g_DeviceGraphStore + 24LL);
  v87 = v86 == CDeviceGraphStore::GetDeviceGraphStoreForEndpoint
      ? CDeviceGraphStore::GetDeviceGraphStoreForEndpoint(g_DeviceGraphStore, v185, &v190)
      : ((__int64 (__fastcall *)(CDeviceGraphStore *, unsigned __int16 *, struct IDeviceGraphObjectsStore **))v86)(
          g_DeviceGraphStore,
          v185,
          &v190);
  SharedModeEnginePeriodicity = v87;
  if ( v87 < 0 )
    goto LABEL_187;
  v88 = *(void (__fastcall **)(struct IDeviceGraphObjectsStore *, LPCRITICAL_SECTION *))(*(_QWORD *)v190 + 88LL);
  if ( (char *)v88 == (char *)CDeviceGraphObjectsStore::LockForStreamGroupConnectionDisconnection )
    CDeviceGraphObjectsStore::LockForStreamGroupConnectionDisconnection(v190, &lpCriticalSection);
  else
    v88(v190, &lpCriticalSection);
  v176 = 0LL;
  v89 = *(__int64 (__fastcall **)(CAudioStream *, struct IStreamGroupProxy **))(*(_QWORD *)v85 + 104LL);
  if ( v89 == CAudioStream::GetStreamGroup )
    StreamGroup = CAudioStream::GetStreamGroup(v85, &v176);
  else
    StreamGroup = v89(v85, &v176);
  SharedModeEnginePeriodicity = StreamGroup;
  v170 = 0LL;
  v91 = 0LL;
  if ( StreamGroup < 0 )
    goto LABEL_181;
  v92 = *(__int64 (__fastcall **)(CBaseStreamGroupProxy *__hidden, struct ISaDeviceProxy **))(*(_QWORD *)v176 + 152LL);
  v93 = v92 == CBaseStreamGroupProxy::GetConnectedSaDevice
      ? CBaseStreamGroupProxy::GetConnectedSaDevice(v176, &v170)
      : v92(v176, &v170);
  v91 = v170;
  SharedModeEnginePeriodicity = v93;
  if ( v93 < 0 )
    goto LABEL_181;
  if ( v170 )
  {
    v135 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)v178 + 120LL);
    if ( v135 == CAudioStream::IsFormatSensitiveClient )
    {
      IsFormatSensitiveClient = CAudioStream::IsFormatSensitiveClient(v178);
    }
    else
    {
      IsFormatSensitiveClient = ((__int64 (__fastcall *)(CAudioStream *, bool (__fastcall *)(CAudioStream *)))v135)(
                                  v178,
                                  CAudioStream::IsFormatSensitiveClient);
      v91 = v170;
    }
    if ( IsFormatSensitiveClient )
    {
      v189 = 0LL;
      v153 = (*(__int64 (__fastcall **)(CSaDeviceProxy *, void **))(*(_QWORD *)v91 + 104LL))(v91, &v189);
      LODWORD(v173) = v153;
      SharedModeEnginePeriodicity = v153;
      if ( v153 >= 0 )
      {
        v154 = (const struct tWAVEFORMATEX *)*((_QWORD *)v189 + 3);
        v155 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v176 + 40LL))(v176);
        if ( (unsigned int)CompareWaveFormat(v154, v155) )
        {
          SharedModeEnginePeriodicity = (int)v173;
        }
        else
        {
          SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(CDeviceGraphManager *, CBaseStreamGroupProxy *, struct ISaDeviceProxy *))(*(_QWORD *)g_DeviceGraphManager + 48LL))(
                                          g_DeviceGraphManager,
                                          v176,
                                          v170);
          if ( SharedModeEnginePeriodicity >= 0 )
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v170);
        }
      }
      v156 = v189;
      if ( v189 )
      {
        CoTaskMemFree(*((LPVOID *)v189 + 3));
        *((_QWORD *)v156 + 3) = 0LL;
        CoTaskMemFree(*((LPVOID *)v156 + 2));
        *((_QWORD *)v156 + 2) = 0LL;
        CoTaskMemFree(*(LPVOID *)v156);
        *(_QWORD *)v156 = 0LL;
        operator delete(v156);
      }
      v91 = v170;
    }
  }
  if ( SharedModeEnginePeriodicity < 0 )
    goto LABEL_181;
  if ( v91 )
    goto LABEL_171;
  Srca = *(struct tWAVEFORMATEX **)(v78 + 32);
  lpMem = 0LL;
  v225 = v39;
  v226 = v37;
  v94 = DeriveSaDeviceParametersForStream(
          (struct CEndpointCharacteristics *)v172,
          a9,
          v171[0],
          &v226,
          &v225,
          v35,
          (struct tWAVEFORMATEX *)pv,
          (__int64)Srca,
          (struct SaDeviceParams **)&lpMem);
  v173 = 0LL;
  SharedModeEnginePeriodicity = v94;
  if ( v94 >= 0 )
  {
    v206 = 0;
    v205 = (LPCRITICAL_SECTION)&g_SessionManagerProviderLock;
    ATL::CCritSecLock::Lock(&v205);
    v95 = g_SingletonAudioSessionManagerProvider;
    if ( g_SingletonAudioSessionManagerProvider )
    {
      v96 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)g_SingletonAudioSessionManagerProvider + 8LL);
      if ( v96 == ATL::CComObject<CAudioSessionManagerProvider>::AddRef )
        ATL::CComObject<CAudioSessionManagerProvider>::AddRef((__int64)g_SingletonAudioSessionManagerProvider);
      else
        v96((__int64)g_SingletonAudioSessionManagerProvider);
      ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v205);
      v97 = *(__int64 (__fastcall **)(CAudioSessionManagerProvider *__hidden, const unsigned __int16 *, struct CAudioSessionManager **))(*(_QWORD *)v95 + 40LL);
      if ( v97 == CAudioSessionManagerProvider::GetAudioSessionManager )
        AudioSessionManager = CAudioSessionManagerProvider::GetAudioSessionManager(v95, v185, &v173);
      else
        AudioSessionManager = v97(v95, v185, &v173);
      SharedModeEnginePeriodicity = AudioSessionManager;
      v99 = *(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)v95 + 16LL);
      if ( (char *)v99 == (char *)ATL::CComObject<CAudioSessionManagerProvider>::Release )
        ATL::CComObject<CAudioSessionManagerProvider>::Release(v95);
      else
        v99(v95);
    }
    else
    {
      if ( v206 )
        LeaveCriticalSection(v205);
      SharedModeEnginePeriodicity = -2147467259;
    }
  }
  v100 = 1;
  v168 = 1;
  v101 = *(_QWORD *)&v172[2].Data1;
  if ( v101 )
  {
    v208 = 0LL;
    v209 = 0LL;
    v210 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v101 + 40LL))(
           v101,
           &PKEY_Endpoint_AllowPreemption,
           &v208) < 0
      || (((_WORD)v208 - 11) & 0xFFF7) != 0 )
    {
      v100 = 1;
    }
    else
    {
      v100 = (_WORD)v209 != 0;
      v168 = (_WORD)v209 != 0;
    }
    PropVariantClear(&v208);
  }
  v102 = 0;
  if ( SharedModeEnginePeriodicity < 0 )
  {
LABEL_307:
    v103 = 0LL;
LABEL_308:
    v113 = (LPVOID *)lpMem;
    goto LABEL_147;
  }
  if ( !v100 )
    goto LABEL_138;
  if ( a9 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    v157 = _InterlockedCompareExchange((volatile signed __int32 *)v173 + 63, GetCurrentThreadId(), 0);
    v20 = v184;
    v21 = v187;
    v35 = v177;
    v78 = v182;
    if ( !v157 )
    {
      v100 = v168;
      v102 = 1;
      goto LABEL_310;
    }
    SharedModeEnginePeriodicity = -2005139389;
    v102 = 0;
    goto LABEL_307;
  }
  v103 = 0LL;
  v104 = _InterlockedCompareExchange((volatile signed __int32 *)v173 + 63, 0, 0);
  v20 = v184;
  v21 = v187;
  v35 = v177;
  v78 = v182;
  if ( v104 )
  {
    SharedModeEnginePeriodicity = -2005139389;
    goto LABEL_308;
  }
LABEL_138:
  if ( a9 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
LABEL_310:
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v170);
    Srcb = v100;
    v113 = (LPVOID *)lpMem;
    SharedModeEnginePeriodicity = CAudioResourceManager::GetSaDeviceForExclusiveStream(
                                    v158,
                                    (struct CEndpointCharacteristics *)v172,
                                    (struct SaDeviceParams *)lpMem,
                                    a8,
                                    AUDCLNT_SHAREMODE_EXCLUSIVE,
                                    (unsigned __int64)pDataa,
                                    a17,
                                    Srcb,
                                    v198,
                                    v173,
                                    &v170);
    v103 = 0LL;
    goto LABEL_147;
  }
  if ( (a8 & 1) != 0 )
  {
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v170);
    v113 = (LPVOID *)lpMem;
    SharedModeEnginePeriodicity = CAudioResourceManager::GetSaDeviceForOffloadedStream(
                                    v159,
                                    (struct CEndpointCharacteristics *)v172,
                                    (struct SaDeviceParams *)lpMem,
                                    a8,
                                    a9,
                                    (unsigned __int64)pDataa,
                                    a17,
                                    Src,
                                    v198,
                                    v173,
                                    &v170);
    v103 = 0LL;
  }
  else
  {
    v105 = v178;
    v106 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)v178 + 120LL);
    if ( v106 == CAudioStream::IsFormatSensitiveClient )
      v107 = CAudioStream::IsFormatSensitiveClient(v178);
    else
      v107 = v106(v178);
    v169 = v107;
    v108 = *(bool (__fastcall **)(CAudioStream *))(*(_QWORD *)v105 + 112LL);
    if ( v108 == CAudioStream::IsPeriodicitySensitiveClient )
      IsPeriodicitySensitiveClient = CAudioStream::IsPeriodicitySensitiveClient(v105);
    else
      IsPeriodicitySensitiveClient = v108(v105);
    v111 = v170;
    v112 = IsPeriodicitySensitiveClient;
    if ( v170 )
    {
      v170 = 0LL;
      (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v111 + 16LL))(v111);
    }
    v113 = (LPVOID *)lpMem;
    SaDeviceForSharedStream = CAudioResourceManager::GetSaDeviceForSharedStream(
                                v110,
                                v172,
                                (struct SaDeviceParams *)lpMem,
                                a8,
                                a9,
                                (unsigned __int64)pDataa,
                                a17,
                                Src,
                                v198,
                                v173,
                                v112,
                                v169,
                                &v170);
    v102 = 0;
    SharedModeEnginePeriodicity = SaDeviceForSharedStream;
    v103 = 0LL;
  }
LABEL_147:
  v115 = *(CAudioSessionManager **)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      12LL,
      &WPP_87a960f07f9f0e33e55207b25344727f_Traceguids,
      (unsigned int)SharedModeEnginePeriodicity);
    v103 = 0LL;
  }
  if ( v102 )
  {
    v115 = v173;
    _InterlockedExchange((volatile __int32 *)v173 + 63, 0);
    v20 = v184;
    v21 = v187;
    v35 = v177;
    v78 = v182;
    v113 = (LPVOID *)lpMem;
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v115, &AudioResourceManager_SaDevice_Created);
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    v116 = v176;
    v117 = *(bool (__fastcall **)(CBaseStreamGroupProxy *__hidden))(*(_QWORD *)v176 + 184LL);
    if ( v117 == CBaseStreamGroupProxy::IsPeriodicitySensitive )
    {
      IsPeriodicitySensitive = CBaseStreamGroupProxy::IsPeriodicitySensitive(v176);
    }
    else
    {
      IsPeriodicitySensitive = ((__int64 (__fastcall *)(CBaseStreamGroupProxy *, __int64))v117)(v176, v103);
      v116 = v176;
    }
    if ( IsPeriodicitySensitive )
    {
      v119 = 0;
      v193 = 0;
    }
    else
    {
      v119 = 1;
    }
    v188 = *(struct tWAVEFORMATEX **)(*(_QWORD *)g_DeviceGraphManager + 40LL);
    if ( v188 == (struct tWAVEFORMATEX *)CDeviceGraphManager::ConnectStreamGroupToSaDevice )
      v120 = CDeviceGraphManager::ConnectStreamGroupToSaDevice(g_DeviceGraphManager, v116, v170, v119, v183);
    else
      v120 = ((__int64 (__fastcall *)(CDeviceGraphManager *, CBaseStreamGroupProxy *, struct ISaDeviceProxy *, _QWORD, struct SYSTEM_AUDIO_STREAM *))v188)(
               g_DeviceGraphManager,
               v116,
               v170,
               v193,
               v183);
    SharedModeEnginePeriodicity = v120;
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v115, &AudioResourceManager_SaDevice_Connected);
  if ( v173 )
  {
    v121 = *(__int64 (__fastcall **)(CAudioSessionManager *))(*(_QWORD *)v173 + 16LL);
    if ( v121 == CAudioSessionManager::Release )
      CAudioSessionManager::Release(v173);
    else
      ((void (__fastcall *)(CAudioSessionManager *, __int64))v121)(v173, v103);
  }
  if ( v113 )
  {
    CoTaskMemFree(v113[3]);
    v113[3] = 0LL;
    CoTaskMemFree(v113[2]);
    v113[2] = 0LL;
    CoTaskMemFree(*v113);
    *v113 = 0LL;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v113);
  }
  v91 = v170;
LABEL_171:
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    if ( v91 )
    {
      *(_QWORD *)v171 = 0LL;
      v123 = *(__int64 (__fastcall **)(CSaDeviceProxy *__hidden, struct SaDeviceParams **))(*(_QWORD *)v91 + 104LL);
      if ( v123 == CSaDeviceProxy::GetSaDeviceParams )
        SaDeviceParams = CSaDeviceProxy::GetSaDeviceParams(v91, (struct SaDeviceParams **)v171);
      else
        SaDeviceParams = v123(v91, (struct SaDeviceParams **)v171);
      if ( SaDeviceParams >= 0
        && (unsigned int)dword_1800E7500 > 5
        && (qword_1800E7510 & 0x400000000000LL) != 0
        && (qword_1800E7518 & 0x400000000000LL) == qword_1800E7518 )
      {
        v243 = a14;
        v244 = 16LL;
        v245 = *(_QWORD *)v171 + 80LL;
        v246 = 16LL;
        TlgWrite(v125, &unk_1800C6694, v126, v127, 4u, &v242);
      }
      v128 = *(_QWORD *)v171;
      if ( *(_QWORD *)v171 )
      {
        CoTaskMemFree(*(LPVOID *)(*(_QWORD *)v171 + 24LL));
        *(_QWORD *)(v128 + 24) = 0LL;
        CoTaskMemFree(*(LPVOID *)(v128 + 16));
        *(_QWORD *)(v128 + 16) = 0LL;
        CoTaskMemFree(*(LPVOID *)v128);
        *(_QWORD *)v128 = 0LL;
        v129 = GetProcessHeap();
        HeapFree(v129, 0, (LPVOID)v128);
      }
      v91 = v170;
    }
    if ( v200 )
    {
      v160 = v176;
      v180 = 0LL;
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v180);
      SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(CBaseStreamGroupProxy *, struct tWAVEFORMATEX **))(*(_QWORD *)v160 + 152LL))(
                                      v160,
                                      &v180);
      if ( SharedModeEnginePeriodicity >= 0 )
      {
        v161 = v180;
        if ( v180 )
        {
          v186 = 0LL;
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v186);
          SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(struct tWAVEFORMATEX *, struct IAudioGraphCallback **))(*(_QWORD *)&v161->wFormatTag + 56LL))(
                                          v161,
                                          &v186);
          if ( SharedModeEnginePeriodicity >= 0 )
          {
            v162 = RpcImpersonateClient(0LL);
            SharedModeEnginePeriodicity = v162;
            if ( v162 > 0 )
              SharedModeEnginePeriodicity = (unsigned __int16)v162 | 0x80070000;
            if ( SharedModeEnginePeriodicity >= 0 )
            {
              SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(struct IAudioGraphCallback *, _QWORD, char *))(*(_QWORD *)v186 + 32LL))(
                                              v186,
                                              a15,
                                              (char *)v183 + 64);
              RpcRevertToSelf();
            }
          }
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v186);
        }
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v180);
      v91 = v170;
    }
  }
LABEL_181:
  if ( v91 )
  {
    v170 = 0LL;
    (*(void (__fastcall **)(CSaDeviceProxy *))(*(_QWORD *)v91 + 16LL))(v91);
  }
  v130 = v176;
  if ( v176 )
  {
    v176 = 0LL;
    (*(void (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)v130 + 16LL))(v130);
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
LABEL_187:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      13LL,
      &WPP_87a960f07f9f0e33e55207b25344727f_Traceguids,
      (unsigned int)SharedModeEnginePeriodicity);
  }
  v131 = v190;
  if ( v190 )
  {
    v190 = 0LL;
    v132 = *(void (__fastcall **)(struct IDeviceGraphObjectsStore *))(*(_QWORD *)v131 + 16LL);
    if ( (char *)v132 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IDeviceGraphObjectsStore,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v131);
    else
      v132(v131);
  }
  if ( v78 )
  {
    CoTaskMemFree(*(LPVOID *)(v78 + 24));
    *(_QWORD *)(v78 + 24) = 0LL;
    CoTaskMemFree(*(LPVOID *)(v78 + 8));
    *(_QWORD *)(v78 + 8) = 0LL;
    CoTaskMemFree(*(LPVOID *)v78);
    *(_QWORD *)v78 = 0LL;
    v133 = GetProcessHeap();
    HeapFree(v133, 0, (LPVOID)v78);
  }
  CoTaskMemFree(v35);
  CoTaskMemFree(pv);
  CoTaskMemFree(v203);
  if ( v204 )
    ((void (__fastcall *)(struct IMMDevice *))v204->lpVtbl->Release)(v204);
  CoTaskMemFree(v185);
  v185 = 0LL;
  CoTaskMemFree((LPVOID)v21);
  CoTaskMemFree(v20);
  return (unsigned int)SharedModeEnginePeriodicity;
}
