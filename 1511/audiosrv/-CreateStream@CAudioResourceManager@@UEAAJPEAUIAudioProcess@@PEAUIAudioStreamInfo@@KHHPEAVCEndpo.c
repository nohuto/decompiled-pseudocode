/*
 * XREFs of ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180008A60
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180022650 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     _TlgKeywordOn @ 0x180005DB8 (_TlgKeywordOn.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180005DE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x1800080BC (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ??C?$CAutoPtr@USaDeviceParams@@@ATL@@QEBAPEAUSaDeviceParams@@XZ @ 0x18000BBF4 (--C-$CAutoPtr@USaDeviceParams@@@ATL@@QEBAPEAUSaDeviceParams@@XZ.c)
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18000E5B0 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180010180 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18001127C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800129D0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@PEAI333@Z @ 0x180012E10 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180013734 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001A800 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ??1?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@QEAA@XZ @ 0x180039564 (--1-$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@QEAA@XZ.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003FE88 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180047938 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     memcmp_0 @ 0x180048C3E (memcmp_0.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800643BC (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180064528 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800645E8 (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18006558C (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180065958 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180069C8C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _TlgWrite @ 0x180069F24 (_TlgWrite.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x1800880EC (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     TemplateEventDescriptor @ 0x18008A638 (TemplateEventDescriptor.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18008B80C (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18008F7B8 (-GetSaDeviceForExclusiveStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     ?GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_NPEAUIAudioProcess@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x18008F980 (-GetSaDeviceForOffloadedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaD.c)
 *     WPP_SF_Idd @ 0x180090F98 (WPP_SF_Idd.c)
 */

__int64 __fastcall CAudioResourceManager::CreateStream(
        CAudioResourceManager *this,
        struct IAudioProcess *a2,
        struct IAudioStreamInfo *a3,
        unsigned int a4,
        int a5,
        int a6,
        struct CEndpointCharacteristics *a7,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a8,
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
  __int64 v18; // r15
  __int64 v19; // r13
  __int64 *v20; // rdi
  __int64 v21; // rax
  __int64 (__fastcall *v22)(__int64 *, LPVOID *); // rbx
  signed int SharedModeEnginePeriodicity; // r12d
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  const GUID *v26; // r8
  void (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v28; // rbx
  int v29; // r14d
  void (__fastcall ***v30)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v31; // rbx
  __int64 v32; // rsi
  BOOL v33; // edi
  char *v34; // rax
  int v35; // esi
  enum _AUDCLNT_SHAREMODE v36; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v37; // ebx
  void *v38; // rcx
  int v39; // eax
  GUID v40; // xmm10
  GUID v41; // xmm9
  GUID v42; // xmm7
  GUID v43; // xmm8
  __int64 v44; // rsi
  BOOL v45; // edi
  int v46; // eax
  char *v47; // rax
  int v48; // edx
  int v49; // ecx
  BOOL v50; // edi
  int v51; // eax
  char *v52; // rax
  int v53; // edx
  int v54; // ecx
  struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedConnectorModes; // rax
  __int64 v56; // rsi
  BOOL v57; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v58; // eax
  char *v59; // rax
  int v60; // edx
  int v61; // ecx
  GUID *v62; // rax
  struct _GUID v63; // xmm0
  __int64 v64; // r14
  BOOL v65; // edi
  __int64 v66; // rsi
  struct CEndpointCharacteristics *v67; // rsi
  char *v68; // rax
  int v69; // edx
  int v70; // ecx
  __int64 v71; // rsi
  BOOL v72; // edi
  char *v73; // rax
  int v74; // ecx
  BOOL v75; // edi
  __int64 v76; // rsi
  char *v77; // rax
  int v78; // ecx
  bool v79; // zf
  GUID *v80; // rax
  struct _GUID v81; // xmm0
  LPVOID *v82; // rsi
  struct tWAVEFORMATEX *v83; // r14
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v84; // r8d
  CEndpointCharacteristics *v85; // rbx
  int v86; // eax
  int **v87; // rax
  int *v88; // rcx
  int v89; // r9d
  char v90; // r10
  struct tWAVEFORMATEX *v91; // rax
  signed int v92; // r12d
  __int64 v93; // rdi
  __int16 **v94; // rsi
  unsigned __int16 *v95; // rcx
  __int128 v96; // xmm1
  __int16 v97; // bx
  __int64 v98; // xmm0_8
  int v99; // r11d
  WORD nChannels; // r9
  WORD wBitsPerSample; // r8
  __int128 v102; // xmm0
  unsigned __int16 v103; // r8
  __int128 v104; // xmm1
  __int16 v105; // r10
  __int64 v106; // xmm0_8
  int v107; // r8d
  unsigned __int16 v108; // r9
  __int128 v109; // xmm0
  int v110; // ecx
  __int16 v111; // ax
  bool v112; // bl
  unsigned int v113; // eax
  int v114; // edi
  unsigned int v115; // ebx
  unsigned int v116; // r12d
  __int64 v117; // rsi
  struct tWAVEFORMATEX *v118; // rbx
  int MixFormatInternal; // eax
  struct tWAVEFORMATEX *v120; // rdi
  __int64 v121; // r8
  signed int v122; // eax
  struct tWAVEFORMATEX *v123; // rax
  struct tWAVEFORMATEX *v124; // rax
  const GUID *v125; // r9
  void *v126; // rbx
  void *v127; // rbx
  __int64 v128; // rdi
  void *v129; // rax
  void *v130; // r12
  _QWORD *v131; // rax
  _QWORD *v132; // rdi
  LPVOID v133; // rbx
  LPVOID v134; // r9
  const struct tWAVEFORMATEX *v135; // r12
  const struct tWAVEFORMATEX *v136; // rax
  char *v137; // rbx
  int SaDeviceForOffloadedStream; // r12d
  CBackgroundSessionCallbacks *v139; // rbx
  bool v140; // bl
  __int64 v141; // rdi
  signed __int32 v142; // eax
  struct ISaDeviceProxy *v143; // r8
  LPVOID *v144; // rdi
  CAudioResourceManager *v145; // rcx
  int SaDeviceForExclusiveStream; // eax
  char v147; // bl
  signed __int32 v148; // eax
  struct CAudioSessionManager *v149; // rcx
  BOOL v150; // ecx
  __int64 v151; // rax
  HANDLE v152; // rax
  CAudioResourceManager *v153; // rcx
  struct ISaDeviceProxy *v154; // rdi
  struct CAudioSessionManager *v155; // r12
  char v156; // di
  char v157; // al
  const struct _TlgProvider_t *v158; // rcx
  __int64 v159; // rax
  TraceLoggingHProvider v160; // rcx
  LPCGUID v161; // r8
  LPCGUID v162; // r9
  LPVOID v163; // rbx
  HANDLE ProcessHeap; // rax
  bool v165; // al
  __int64 v166; // rdi
  struct tWAVEFORMATEX *v167; // rbx
  RPC_STATUS v168; // eax
  struct ISaDeviceProxy *v169; // rdi
  __int64 v170; // rdi
  __int64 v171; // rdi
  HANDLE v172; // rax
  PVOID pvData; // [rsp+30h] [rbp-D8h]
  struct tWAVEFORMATEX *v175; // [rsp+40h] [rbp-C8h]
  bool v176; // [rsp+40h] [rbp-C8h]
  bool v177; // [rsp+60h] [rbp-A8h]
  char v178; // [rsp+78h] [rbp-90h]
  bool v179; // [rsp+78h] [rbp-90h]
  char v180; // [rsp+78h] [rbp-90h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v181; // [rsp+7Ch] [rbp-8Ch]
  bool v182; // [rsp+80h] [rbp-88h]
  char v183; // [rsp+81h] [rbp-87h]
  unsigned int v184; // [rsp+84h] [rbp-84h]
  int v185; // [rsp+84h] [rbp-84h]
  int v186; // [rsp+84h] [rbp-84h]
  unsigned int v187; // [rsp+90h] [rbp-78h] BYREF
  struct ISaDeviceProxy *v188; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v189; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v190; // [rsp+A8h] [rbp-60h] BYREF
  LPVOID v191; // [rsp+B0h] [rbp-58h] BYREF
  LPVOID lpMem; // [rsp+B8h] [rbp-50h] BYREF
  struct CAudioSessionManager *v193; // [rsp+C0h] [rbp-48h] BYREF
  void *v194; // [rsp+C8h] [rbp-40h] BYREF
  struct tWAVEFORMATEX *v195; // [rsp+D0h] [rbp-38h] BYREF
  struct tWAVEFORMATEX *v196; // [rsp+D8h] [rbp-30h] BYREF
  struct IAudioStreamInfo *v197; // [rsp+E0h] [rbp-28h]
  __int64 v198; // [rsp+E8h] [rbp-20h] BYREF
  BOOL v199; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v200; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v201; // [rsp+100h] [rbp-8h] BYREF
  __int64 v202; // [rsp+108h] [rbp+0h] BYREF
  struct SYSTEM_AUDIO_STREAM *v203; // [rsp+110h] [rbp+8h]
  LPVOID v204; // [rsp+118h] [rbp+10h] BYREF
  LPVOID v205; // [rsp+120h] [rbp+18h] BYREF
  int v206; // [rsp+128h] [rbp+20h] BYREF
  __int64 v207; // [rsp+130h] [rbp+28h] BYREF
  int v208; // [rsp+138h] [rbp+30h] BYREF
  __int64 v209; // [rsp+140h] [rbp+38h] BYREF
  void *Src; // [rsp+148h] [rbp+40h] BYREF
  struct tWAVEFORMATEX *v211; // [rsp+150h] [rbp+48h] BYREF
  struct tWAVEFORMATEX *v212; // [rsp+158h] [rbp+50h] BYREF
  struct tWAVEFORMATEX *v213; // [rsp+160h] [rbp+58h] BYREF
  struct _GUID v214; // [rsp+168h] [rbp+60h] BYREF
  struct _GUID v215; // [rsp+178h] [rbp+70h] BYREF
  DWORD pcbData; // [rsp+188h] [rbp+80h] BYREF
  struct IAudioProcess *v217; // [rsp+190h] [rbp+88h]
  LPVOID pv; // [rsp+198h] [rbp+90h] BYREF
  unsigned int v219; // [rsp+1A0h] [rbp+98h]
  __int64 v220; // [rsp+1A8h] [rbp+A0h] BYREF
  struct tWAVEFORMATEX *v221; // [rsp+1B0h] [rbp+A8h] BYREF
  struct IMMDevice *v222; // [rsp+1B8h] [rbp+B0h]
  struct IAudioGraphCallback *v223; // [rsp+1C0h] [rbp+B8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+1C8h] [rbp+C0h] BYREF
  char v225; // [rsp+1D0h] [rbp+C8h]
  struct tWAVEFORMATEX *v226; // [rsp+1D8h] [rbp+D0h] BYREF
  PROPVARIANT pvar; // [rsp+1E0h] [rbp+D8h] BYREF
  __int64 v228; // [rsp+1E8h] [rbp+E0h]
  __int64 v229; // [rsp+1F0h] [rbp+E8h]
  PROPVARIANT v230; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 v231; // [rsp+200h] [rbp+F8h]
  __int64 v232; // [rsp+208h] [rbp+100h]
  PROPVARIANT v233; // [rsp+210h] [rbp+108h] BYREF
  __int64 v234; // [rsp+218h] [rbp+110h]
  __int64 v235; // [rsp+220h] [rbp+118h]
  PROPVARIANT v236; // [rsp+228h] [rbp+120h] BYREF
  __int64 v237; // [rsp+230h] [rbp+128h]
  __int64 v238; // [rsp+238h] [rbp+130h]
  PROPVARIANT v239; // [rsp+240h] [rbp+138h] BYREF
  __int64 v240; // [rsp+248h] [rbp+140h]
  __int64 v241; // [rsp+250h] [rbp+148h]
  PROPVARIANT v242; // [rsp+258h] [rbp+150h] BYREF
  __int64 v243; // [rsp+260h] [rbp+158h]
  __int64 v244; // [rsp+268h] [rbp+160h]
  PROPVARIANT v245; // [rsp+270h] [rbp+168h] BYREF
  __int64 v246; // [rsp+278h] [rbp+170h]
  __int64 v247; // [rsp+280h] [rbp+178h]
  PROPVARIANT v248; // [rsp+288h] [rbp+180h] BYREF
  __int64 v249; // [rsp+290h] [rbp+188h]
  __int64 v250; // [rsp+298h] [rbp+190h]
  PROPVARIANT v251[3]; // [rsp+2A0h] [rbp+198h] BYREF
  unsigned int v252; // [rsp+2B8h] [rbp+1B0h]
  unsigned int v253; // [rsp+2BCh] [rbp+1B4h]
  unsigned int v254; // [rsp+2C0h] [rbp+1B8h]
  LPCRITICAL_SECTION v255; // [rsp+2C8h] [rbp+1C0h] BYREF
  int v256; // [rsp+2D0h] [rbp+1C8h]
  __int128 v257; // [rsp+2D8h] [rbp+1D0h]
  __int128 v258; // [rsp+2E8h] [rbp+1E0h]
  GUID v259; // [rsp+2F8h] [rbp+1F0h]
  GUID v260; // [rsp+308h] [rbp+200h]
  GUID v261; // [rsp+318h] [rbp+210h]
  GUID v262; // [rsp+328h] [rbp+220h]
  GUID v263; // [rsp+338h] [rbp+230h]
  GUID v264; // [rsp+348h] [rbp+240h]
  struct _GUID v265; // [rsp+358h] [rbp+250h] BYREF
  struct _GUID v266; // [rsp+368h] [rbp+260h] BYREF
  struct _GUID v267; // [rsp+378h] [rbp+270h] BYREF
  struct _GUID v268; // [rsp+388h] [rbp+280h] BYREF
  struct _GUID v269; // [rsp+398h] [rbp+290h] BYREF
  struct _GUID v270; // [rsp+3A8h] [rbp+2A0h] BYREF
  struct _GUID v271; // [rsp+3B8h] [rbp+2B0h] BYREF
  struct _GUID v272; // [rsp+3C8h] [rbp+2C0h] BYREF
  GUID v273; // [rsp+3D8h] [rbp+2D0h]
  GUID v274; // [rsp+3E8h] [rbp+2E0h] BYREF
  GUID v275; // [rsp+3F8h] [rbp+2F0h]
  struct _GUID v276; // [rsp+408h] [rbp+300h] BYREF
  struct _GUID v277; // [rsp+418h] [rbp+310h] BYREF
  struct _GUID v278; // [rsp+428h] [rbp+320h] BYREF
  GUID v279; // [rsp+438h] [rbp+330h] BYREF
  GUID v280; // [rsp+448h] [rbp+340h]
  struct _GUID v281; // [rsp+458h] [rbp+350h] BYREF
  GUID v282; // [rsp+468h] [rbp+360h]
  __int128 Buf1; // [rsp+478h] [rbp+370h] BYREF
  _OWORD v284[2]; // [rsp+488h] [rbp+380h]
  struct _GUID v285; // [rsp+4A8h] [rbp+3A0h] BYREF
  __int128 Buf2; // [rsp+4B8h] [rbp+3B0h] BYREF
  _OWORD v287[2]; // [rsp+4C8h] [rbp+3C0h]
  GUID v288; // [rsp+4E8h] [rbp+3E0h] BYREF
  EVENT_DATA_DESCRIPTOR v289; // [rsp+4F8h] [rbp+3F0h] BYREF
  const struct _GUID *v290; // [rsp+518h] [rbp+410h]
  __int64 v291; // [rsp+520h] [rbp+418h]
  __int64 v292; // [rsp+528h] [rbp+420h]
  __int64 v293; // [rsp+530h] [rbp+428h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+538h] [rbp+430h] BYREF
  BOOL *v295; // [rsp+558h] [rbp+450h]
  __int64 v296; // [rsp+560h] [rbp+458h]

  v18 = 0LL;
  v223 = a10;
  v19 = 0LL;
  v20 = (__int64 *)*((_QWORD *)a7 + 2);
  v195 = a11;
  v203 = a18;
  v217 = a2;
  v204 = 0LL;
  v21 = *v20;
  v189 = a4;
  v197 = a3;
  v22 = *(__int64 (__fastcall **)(__int64 *, LPVOID *))(v21 + 40);
  v200 = 0LL;
  v202 = 0LL;
  v183 = 0;
  SharedModeEnginePeriodicity = v22(v20, &v204);
  if ( *((_DWORD *)a7 + 93) )
    v184 = 1;
  else
    v184 = ((unsigned int)a8 >> 16) & 2;
  v222 = (struct IMMDevice *)*((_QWORD *)a7 + 2);
  ((void (__fastcall *)(struct IMMDevice *))v222->lpVtbl->AddRef)(v222);
  v27 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a7 + 2);
  v28 = 0LL;
  v206 = 0;
  v220 = 0LL;
  if ( v27 )
  {
    (**v27)(v27, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &v220);
    v28 = v220;
    if ( v220 )
    {
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v220 + 88LL))(v220, &v206);
      v28 = v220;
    }
  }
  v29 = v206;
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  v30 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a7 + 2);
  v208 = 0;
  v31 = 0LL;
  v201 = 0LL;
  if ( v30 )
  {
    (**v30)(v30, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &v201);
    v31 = v201;
    if ( v201 )
    {
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v201 + 88LL))(v201, &v208);
      v31 = v201;
    }
    if ( v208 )
      goto LABEL_23;
  }
  if ( *((_DWORD *)a7 + 93) )
    goto LABEL_28;
  v32 = *((_QWORD *)a7 + 7);
  v33 = 1;
  if ( !v32 )
    goto LABEL_20;
  pvar = 0LL;
  v228 = 0LL;
  v229 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v32 + 40LL))(
         v32,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && (_WORD)pvar == 19 )
  {
    v33 = v228 == 0;
  }
  PropVariantClear(&pvar);
  v31 = v201;
  if ( v33 )
  {
LABEL_20:
    v25 = (unsigned __int64)a7;
    v34 = (char *)a7 + 64;
  }
  else
  {
    v25 = (unsigned __int64)a7;
    v34 = (char *)a7 + 128;
  }
  if ( *((_DWORD *)v34 + 2) <= 1u )
  {
LABEL_28:
    v35 = 0;
    goto LABEL_29;
  }
  if ( !(unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled((CEndpointCharacteristics *)v25) )
  {
    v31 = v201;
    goto LABEL_28;
  }
LABEL_23:
  memset(v251, 0, sizeof(v251));
  v35 = 1;
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)a7 + 4) + 40LL))(
         *((_QWORD *)a7 + 4),
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         v251) < 0
    || LOWORD(v251[0]) != 19 )
  {
    v35 = 0;
  }
  PropVariantClear(v251);
  v31 = v201;
LABEL_29:
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  v219 = a8 & 0x400000;
  if ( (a8 & 0x400000) != 0 )
  {
    v36 = a9;
    v37 = eKeywordDetectorConnector;
    goto LABEL_43;
  }
  if ( v35 && (a8 & 0x20000) != 0 )
  {
    v36 = a9;
    v37 = eLoopbackConnector;
    goto LABEL_43;
  }
  v36 = a9;
  if ( a9 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    pv = 0LL;
    v38 = 0LL;
    if ( v29 )
    {
      if ( v195 )
      {
        v39 = IsFormatSupportedByHwAudioEngine(
                v222,
                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v24,
                v195,
                (struct tWAVEFORMATEX **)&pv);
        v38 = pv;
        if ( !v39 )
        {
          CoTaskMemFree(pv);
          v37 = a9;
          goto LABEL_43;
        }
      }
    }
    CoTaskMemFree(v38);
  }
  v37 = ((unsigned __int8)~(_BYTE)a8 >> 1) & 1;
LABEL_43:
  v181 = v37;
  v273 = GUID_00000000_0000_0000_0000_000000000000;
  v40 = GUID_00000000_0000_0000_0000_000000000000;
  v275 = GUID_00000000_0000_0000_0000_000000000000;
  v41 = GUID_00000000_0000_0000_0000_000000000000;
  v280 = GUID_00000000_0000_0000_0000_000000000000;
  v42 = GUID_00000000_0000_0000_0000_000000000000;
  v282 = GUID_00000000_0000_0000_0000_000000000000;
  v43 = GUID_00000000_0000_0000_0000_000000000000;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    LODWORD(v44) = 0;
    v285 = GUID_00000000_0000_0000_0000_000000000000;
    v198 = 0LL;
    SharedModeEnginePeriodicity = 0;
    v215 = GUID_00000000_0000_0000_0000_000000000000;
    v214 = GUID_00000000_0000_0000_0000_000000000000;
    if ( v36 == AUDCLNT_SHAREMODE_EXCLUSIVE )
    {
      CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(a7, v37, &v285, &v215, &v214);
      v40 = v285;
LABEL_146:
      v42 = v214;
      v41 = v215;
      v43 = v214;
      v275 = v215;
      v280 = v214;
      v282 = v214;
      v273 = v40;
      goto LABEL_147;
    }
    if ( v184 == 2 )
    {
      CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
        a7,
        eHostProcessConnector,
        &v285,
        &v215,
        &v214);
      v40 = v285;
      goto LABEL_146;
    }
    if ( a5 )
    {
      v267 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      if ( (unsigned int)CEndpointCharacteristics::IsConnectorModeSupported(a7, v37, &v267) )
      {
        v40 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        v285 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        v215 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        v214 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      }
      else
      {
        SharedModeEnginePeriodicity = -2004287449;
      }
      goto LABEL_146;
    }
    v263 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    if ( v37 )
      goto LABEL_59;
    v44 = *((_QWORD *)a7 + 7);
    v45 = 1;
    if ( !v44 )
      goto LABEL_59;
    v239 = 0LL;
    v240 = 0LL;
    v241 = 0LL;
    v46 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v44 + 40LL))(
            v44,
            &PKEY_AudioEndpoint_Disable_SysFx,
            &v239);
    LODWORD(v44) = 0;
    if ( v46 >= 0 && (_WORD)v239 == 19 )
      v45 = v240 == 0;
    PropVariantClear(&v239);
    if ( v45 )
LABEL_59:
      v47 = (char *)a7 + 16 * v37 + 64;
    else
      v47 = (char *)a7 + 128;
    v48 = *((_DWORD *)v47 + 2);
    v49 = v44;
    if ( v48 <= 0 )
      goto LABEL_63;
    while ( *(_OWORD *)(*(_QWORD *)v47 + 16LL * v49) != *(_OWORD *)&v263 )
    {
      if ( ++v49 >= v48 )
        goto LABEL_63;
    }
    if ( v49 == -1 )
    {
LABEL_63:
      v262 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      if ( v37 )
        goto LABEL_72;
      v44 = *((_QWORD *)a7 + 7);
      v50 = 1;
      if ( !v44 )
        goto LABEL_72;
      v230 = 0LL;
      v231 = 0LL;
      v232 = 0LL;
      v51 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v44 + 40LL))(
              v44,
              &PKEY_AudioEndpoint_Disable_SysFx,
              &v230);
      LODWORD(v44) = 0;
      if ( v51 >= 0 && (_WORD)v230 == 19 )
        v50 = v231 == 0;
      PropVariantClear(&v230);
      if ( v50 )
LABEL_72:
        v52 = (char *)a7 + 16 * v37 + 64;
      else
        v52 = (char *)a7 + 128;
      v53 = *((_DWORD *)v52 + 2);
      v54 = v44;
      if ( v53 <= 0 )
        goto LABEL_76;
      while ( *(_OWORD *)(*(_QWORD *)v52 + 16LL * v54) != *(_OWORD *)&v262 )
      {
        if ( ++v54 >= v53 )
          goto LABEL_76;
      }
      if ( v54 == -1 )
      {
LABEL_76:
        SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(a7, v37);
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
    v56 = *((_QWORD *)a7 + 7);
    v57 = 1;
    v264 = v40;
    v288 = v40;
    v259 = v40;
    if ( v56 )
    {
      v236 = 0LL;
      v237 = 0LL;
      v238 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v56 + 40LL))(
             v56,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &v236) >= 0
        && (_WORD)v236 == 19 )
      {
        v57 = v237 == 0;
      }
      PropVariantClear(&v236);
      v58 = v37;
      if ( !v57 && v37 != eKeywordDetectorConnector )
      {
        v59 = (char *)a7 + 336;
        goto LABEL_88;
      }
    }
    else
    {
      v58 = v37;
    }
    v59 = (char *)a7 + 16 * v58 + 208;
LABEL_88:
    v60 = *((_DWORD *)v59 + 2);
    v61 = 0;
    if ( v60 <= 0 )
      goto LABEL_93;
    while ( *(_OWORD *)(*(_QWORD *)v59 + 16LL * v61) != *(_OWORD *)&v259 )
    {
      if ( ++v61 >= v60 )
        goto LABEL_93;
    }
    v62 = &v288;
    if ( v61 == -1 )
LABEL_93:
      v62 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v63 = *v62;
    v285 = v40;
    v215 = v63;
    v214 = v40;
    if ( (*(int (__fastcall **)(CWindowsPolicyManager *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 88LL))(
           g_PolicyManager,
           v184,
           v189,
           &v198) >= 0 )
    {
      v25 = 0LL;
      v187 = 0;
      if ( *(_DWORD *)v198 )
      {
        while ( 1 )
        {
          v64 = 2LL * (unsigned int)v25;
          v257 = *(_OWORD *)(*(_QWORD *)(v198 + 8) + 16LL * (unsigned int)v25);
          if ( v37 )
            goto LABEL_103;
          v65 = 1;
          v66 = *((_QWORD *)a7 + 7);
          if ( !v66 )
            goto LABEL_103;
          v242 = 0LL;
          v243 = 0LL;
          v244 = 0LL;
          if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v66 + 40LL))(
                 v66,
                 &PKEY_AudioEndpoint_Disable_SysFx,
                 &v242) >= 0
            && (_WORD)v242 == 19 )
          {
            v65 = v243 == 0;
          }
          PropVariantClear(&v242);
          v37 = v181;
          if ( v65 )
          {
LABEL_103:
            v67 = a7;
            v68 = (char *)a7 + 16 * v37 + 64;
          }
          else
          {
            v67 = a7;
            v68 = (char *)a7 + 128;
          }
          v69 = *((_DWORD *)v68 + 2);
          v70 = 0;
          if ( v69 > 0 )
          {
            v26 = (const GUID *)*((_QWORD *)&v257 + 1);
            while ( *(_OWORD *)(*(_QWORD *)v68 + 16LL * v70) != v257 )
            {
              if ( ++v70 >= v69 )
                goto LABEL_110;
            }
            if ( v70 != -1 )
              break;
          }
LABEL_110:
          v261 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
          if ( v37 )
            goto LABEL_117;
          v71 = *((_QWORD *)v67 + 7);
          v72 = 1;
          if ( !v71 )
            goto LABEL_117;
          v248 = 0LL;
          v249 = 0LL;
          v250 = 0LL;
          if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v71 + 40LL))(
                 v71,
                 &PKEY_AudioEndpoint_Disable_SysFx,
                 &v248) >= 0
            && (_WORD)v248 == 19 )
          {
            v72 = v249 == 0;
          }
          PropVariantClear(&v248);
          v37 = v181;
          if ( v72 )
LABEL_117:
            v73 = (char *)a7 + 16 * v37 + 64;
          else
            v73 = (char *)a7 + 128;
          v24 = *((unsigned int *)v73 + 2);
          v74 = 0;
          if ( (int)v24 > 0 )
          {
            v26 = *(const GUID **)v261.Data4;
            while ( *(_OWORD *)(*(_QWORD *)v73 + 16LL * v74) != *(_OWORD *)&v261 )
            {
              if ( ++v74 >= (int)v24 )
                goto LABEL_138;
            }
            if ( v74 != -1 )
            {
              v75 = 1;
              v258 = *(_OWORD *)(*(_QWORD *)(v198 + 8) + 8 * v64);
              v76 = *((_QWORD *)a7 + 7);
              if ( !v76 )
                goto LABEL_131;
              v245 = 0LL;
              v246 = 0LL;
              v247 = 0LL;
              if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v76 + 40LL))(
                     v76,
                     &PKEY_AudioEndpoint_Disable_SysFx,
                     &v245) >= 0
                && (_WORD)v245 == 19 )
              {
                v75 = v246 == 0;
              }
              PropVariantClear(&v245);
              v37 = v181;
              if ( v75 || v181 == eKeywordDetectorConnector )
LABEL_131:
                v77 = (char *)a7 + 16 * v37 + 208;
              else
                v77 = (char *)a7 + 336;
              v24 = *((unsigned int *)v77 + 2);
              v78 = 0;
              if ( (int)v24 > 0 )
              {
                v26 = (const GUID *)*((_QWORD *)&v258 + 1);
                while ( *(_OWORD *)(*(_QWORD *)v77 + 16LL * v78) != v258 )
                {
                  if ( ++v78 >= (int)v24 )
                    goto LABEL_138;
                }
                if ( v78 != -1 )
                {
                  v40 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                  v24 = 2LL * v187;
                  v25 = *(_QWORD *)(v198 + 8);
                  v285 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                  v81 = *(struct _GUID *)(v25 + 16LL * v187);
                  v214 = v81;
                  goto LABEL_144;
                }
              }
            }
          }
LABEL_138:
          v25 = v187 + 1;
          v187 = v25;
          if ( (unsigned int)v25 >= *(_DWORD *)v198 )
            goto LABEL_145;
        }
        v40 = *(GUID *)(*(_QWORD *)(v198 + 8) + 16LL * v187);
        v285 = v40;
        v271 = v40;
        v79 = CEndpointCharacteristics::IsAPOModeSupported(v67, &v271, v37) == 0;
        v214 = v40;
        v80 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        v25 = (unsigned __int64)&v285;
        if ( !v79 )
          v80 = &v285;
        v81 = *v80;
LABEL_144:
        v215 = v81;
      }
    }
LABEL_145:
    v36 = a9;
    goto LABEL_146;
  }
LABEL_147:
  v82 = 0LL;
  v221 = 0LL;
  v83 = 0LL;
  Src = 0LL;
  v196 = 0LL;
  if ( SharedModeEnginePeriodicity < 0 )
    goto LABEL_258;
  v84 = v37;
  v85 = a7;
  v265 = v40;
  v281 = v41;
  v269 = v42;
  v86 = DeriveDeviceGraphFormatsForStream(
          a7,
          a6 != 0,
          v84,
          v36,
          &v269,
          &v281,
          &v265,
          v195,
          &v221,
          (struct tWAVEFORMATEX **)&Src,
          &v196);
  v83 = v196;
  SharedModeEnginePeriodicity = v86;
  if ( v86 < 0 )
  {
LABEL_258:
    v112 = 0;
    goto LABEL_259;
  }
  if ( v36 )
  {
    v117 = a13;
    goto LABEL_252;
  }
  if ( (a8 & 1) != 0 )
  {
    v117 = a13;
    if ( !a13 )
      v117 = a12;
LABEL_252:
    if ( SharedModeEnginePeriodicity >= 0 )
      goto LABEL_255;
    goto LABEL_253;
  }
  v87 = (int **)((char *)a7 + 424);
  v260 = v40;
  if ( v181 != eKeywordDetectorConnector )
    v87 = (int **)((char *)a7 + 416);
  v88 = *v87;
  v89 = 0;
  v90 = 0;
  v187 = 0;
  v178 = 0;
  v26 = 0LL;
  v191 = v88;
  if ( v88[2] > 0 )
  {
    v24 = 0LL;
    v211 = (struct tWAVEFORMATEX *)v88[2];
    v194 = 0LL;
    do
    {
      if ( v24 < 0 || (int)v26 >= v88[2] )
      {
        ATL::_AtlRaiseException(0xC000008C, v24);
        JUMPOUT(0x18000AEABLL);
      }
      v91 = *(struct tWAVEFORMATEX **)(*(_QWORD *)v88 + 8 * v24);
      v213 = v91;
      if ( *(_OWORD *)&v91->wFormatTag == *(_OWORD *)&v260 )
      {
        v89 = 0;
        v212 = (struct tWAVEFORMATEX *)*(int *)((char *)&v91[1].nSamplesPerSec + 2);
        v90 = 1;
        v178 = 1;
        v92 = 0;
        v93 = 0LL;
        if ( (__int64)v212 > 0 )
        {
          while ( 1 )
          {
            if ( v93 < 0 || v92 >= *(signed int *)((char *)&v91[1].nSamplesPerSec + 2) )
            {
              ATL::_AtlRaiseException(0xC000008C, v24);
              __debugbreak();
            }
            v94 = *(__int16 ***)(*(_QWORD *)&v91->cbSize + 8 * v93);
            v95 = (unsigned __int16 *)*v94;
            if ( v83 )
            {
              if ( !v95 || !&Buf1 )
                goto LABEL_217;
              LODWORD(v24) = v83->wFormatTag;
              if ( (_WORD)v24 == 0xFFFE )
              {
                if ( v83->cbSize != 22
                  && (*(_QWORD *)((char *)&v83[1].nSamplesPerSec + 2) != *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
                   || *(_QWORD *)&v83[1].wBitsPerSample != *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4)
                  && (*(_QWORD *)((char *)&v83[1].nSamplesPerSec + 2) != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
                   || *(_QWORD *)&v83[1].wBitsPerSample != *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4) )
                {
                  goto LABEL_217;
                }
                v96 = *(_OWORD *)&v83->cbSize;
                Buf1 = *(_OWORD *)&v83->wFormatTag;
                v97 = Buf1;
                v98 = *(_QWORD *)&v83[1].wBitsPerSample;
                v284[0] = v96;
                LOWORD(v284[0]) = 22;
                v99 = DWORD1(v96);
                *(_QWORD *)&v284[1] = v98;
              }
              else
              {
                if ( v83->cbSize && (((_WORD)v24 - 1) & 0xFFFD) != 0 )
                  goto LABEL_217;
                nChannels = v83->nChannels;
                if ( (unsigned __int16)(nChannels - 1) > 1u
                  || (wBitsPerSample = v83->wBitsPerSample, ((wBitsPerSample - 8) & 0xFFE7) != 0) )
                {
                  v89 = 0;
                  goto LABEL_217;
                }
                v102 = *(_OWORD *)&v83->wFormatTag;
                LOWORD(v284[0]) = 22;
                v97 = -2;
                *(GUID *)((char *)v284 + 8) = GUID_00000000_0000_0010_8000_00aa00389b71;
                DWORD2(v284[0]) = (unsigned __int16)v24;
                WORD1(v284[0]) = wBitsPerSample;
                v99 = (nChannels == 1) + 3;
                Buf1 = v102;
                DWORD1(v284[0]) = v99;
                v89 = 0;
                LOWORD(Buf1) = -2;
              }
              if ( &Buf2 )
              {
                v103 = *v95;
                if ( *v95 == 0xFFFE )
                {
                  if ( v95[8] != 22
                    && (*((_QWORD *)v95 + 3) != *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
                     || *((_QWORD *)v95 + 4) != *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4)
                    && (*((_QWORD *)v95 + 3) != *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
                     || *((_QWORD *)v95 + 4) != *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4) )
                  {
                    goto LABEL_217;
                  }
                  v104 = *((_OWORD *)v95 + 1);
                  Buf2 = *(_OWORD *)v95;
                  v105 = Buf2;
                  v106 = *((_QWORD *)v95 + 4);
                  v287[0] = v104;
                  v107 = DWORD1(v104);
                  *(_QWORD *)&v287[1] = v106;
                  LOWORD(v287[0]) = 22;
LABEL_191:
                  v89 = 0;
                  if ( WORD1(Buf1) )
                  {
                    LODWORD(v24) = WORD1(Buf2);
                  }
                  else
                  {
                    LODWORD(v24) = 0;
                    DWORD2(Buf2) = 0;
                    WORD1(Buf2) = 0;
                    WORD6(Buf2) = 0;
                  }
                  if ( DWORD1(Buf1) )
                  {
                    v110 = DWORD1(Buf2);
                  }
                  else
                  {
                    v110 = 0;
                    *(_QWORD *)((char *)&Buf2 + 4) = 0LL;
                  }
                  if ( HIWORD(Buf1) )
                  {
                    v111 = HIWORD(Buf2);
                  }
                  else
                  {
                    v111 = 0;
                    HIDWORD(Buf2) = 0;
                  }
                  if ( !v99 )
                    v107 = 0;
                  DWORD1(v287[0]) = v107;
                  if ( !v97 )
                  {
                    v105 = 0;
                    LOWORD(Buf2) = 0;
                  }
                  if ( !(_WORD)v24 )
                  {
                    WORD1(Buf1) = 0;
                    DWORD2(Buf1) = 0;
                    WORD6(Buf1) = 0;
                  }
                  if ( !v110 )
                    *(_QWORD *)((char *)&Buf1 + 4) = 0LL;
                  if ( !v111 )
                    HIDWORD(Buf1) = 0;
                  if ( !v107 )
                    v99 = 0;
                  DWORD1(v284[0]) = v99;
                  if ( !v105 )
                    LOWORD(Buf1) = 0;
                  if ( *(_OWORD *)((char *)v284 + 8) != *(_OWORD *)((char *)v287 + 8) )
                    goto LABEL_217;
                  if ( !memcmp_0(&Buf1, &Buf2, 0x28uLL) )
                  {
LABEL_230:
                    v113 = *((_DWORD *)v94 + 2);
                    v114 = *((_DWORD *)v94 + 3);
                    v115 = *((_DWORD *)v94 + 4);
                    v116 = *((_DWORD *)v94 + 5);
                    v117 = a13;
                    v256 = v114;
                    v189 = v113;
                    v252 = v113;
                    v254 = v115;
                    v253 = v116;
                    if ( !a13 )
                    {
                      v117 = (unsigned int)(int)((double)v114 * 10000000.0 / (double)(int)v83->nSamplesPerSec + 0.5);
                      goto LABEL_232;
                    }
                    v187 = 0;
                    pcbData = 4;
                    RegGetValueW(
                      HKEY_LOCAL_MACHINE,
                      L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
                      L"SkipPeriodicityValidation",
                      0x18u,
                      0LL,
                      &v187,
                      &pcbData);
                    v25 = (unsigned int)(int)((double)(int)v83->nSamplesPerSec * (double)(int)a13 / 10000000.0 + 0.5);
                    if ( !v187
                      && ((unsigned int)v25 < v115
                       || (unsigned int)v25 > v116
                       || (v24 = (unsigned int)v25 % v189) != 0
                       && (_DWORD)v25 != v114
                       && (_DWORD)v25 != v115
                       && (_DWORD)v25 != v116) )
                    {
                      v112 = 0;
                      SharedModeEnginePeriodicity = -2004287456;
                      v82 = 0LL;
                      goto LABEL_259;
                    }
LABEL_232:
                    if ( a6 )
                    {
                      v118 = 0LL;
                      v226 = 0LL;
                      v212 = 0LL;
                      v268 = v42;
                      MixFormatInternal = CPolicyConfig::GetMixFormatInternal(g_PolicyConfig, a7, v181, &v268, &v226);
                      v120 = v226;
                      SharedModeEnginePeriodicity = MixFormatInternal;
                      if ( MixFormatInternal >= 0 )
                      {
                        v213 = 0LL;
                        v211 = 0LL;
                        v276 = v40;
                        v270 = v41;
                        v278 = v42;
                        SharedModeEnginePeriodicity = DeriveDeviceGraphFormatsForStream(
                                                        a7,
                                                        0,
                                                        v181,
                                                        AUDCLNT_SHAREMODE_SHARED,
                                                        &v278,
                                                        &v270,
                                                        &v276,
                                                        v226,
                                                        &v213,
                                                        &v211,
                                                        &v212);
                        CoTaskMemFree(v211);
                        CoTaskMemFree(v213);
                        v118 = v212;
                      }
                      v189 = 0;
                      if ( SharedModeEnginePeriodicity >= 0 )
                      {
                        v272 = v40;
                        SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                                        a7,
                                                        v181,
                                                        v118,
                                                        &v272,
                                                        &v189,
                                                        0LL,
                                                        0LL,
                                                        0LL);
                        if ( SharedModeEnginePeriodicity >= 0 )
                        {
                          v121 = (unsigned int)(int)((double)(int)v189 * 10000000.0 / (double)(int)v118->nSamplesPerSec
                                                   + 0.5);
                          SharedModeEnginePeriodicity = 0;
                          if ( v117 - v121 > 5 * v121 / 100 )
                            SharedModeEnginePeriodicity = -2004287448;
                        }
                      }
                      CoTaskMemFree(v118);
                      CoTaskMemFree(v120);
                      v85 = a7;
                      v36 = a9;
                      goto LABEL_252;
                    }
                    v85 = a7;
                    v36 = a9;
LABEL_255:
                    v279 = v41;
                    v274 = v40;
                    v122 = InitializeStreamAndModeDescriptors(v85, v36, a8, v184, v181, &v274, &v279, &v200, &v202);
                    v18 = v200;
                    SharedModeEnginePeriodicity = v122;
                    v123 = v195;
                    *(_QWORD *)(v200 + 80) = v195;
                    *(_DWORD *)(v18 + 72) = v123->cbSize + 18;
                    *(_QWORD *)(v18 + 40) = a12;
                    *(_QWORD *)(v18 + 48) = v117;
                    *(_DWORD *)(v18 + 16) = a15;
                    *(_QWORD *)(v18 + 24) = a16;
                    *(_QWORD *)(v18 + 64) = a14;
                    v19 = v202;
                    LOBYTE(v24) = *(_DWORD *)(v18 + 132) != 0;
                    v183 = v24;
                    if ( v202 )
                    {
                      v124 = v221;
                      v25 = (unsigned int)v221->cbSize + 18;
                      *(_DWORD *)(v202 + 8) = v25;
                      *(_QWORD *)(v19 + 16) = v124;
                      if ( !(_BYTE)v24 )
                      {
                        v112 = *(_DWORD *)(v19 + 52) != 0;
                        v82 = 0LL;
                        v183 = v112;
                        goto LABEL_259;
                      }
                    }
LABEL_253:
                    v112 = v183;
                    v82 = 0LL;
                    goto LABEL_259;
                  }
                }
                else
                {
                  if ( v95[8] )
                  {
                    LODWORD(v24) = 65533;
                    if ( ((v103 - 1) & 0xFFFD) != 0 )
                      goto LABEL_217;
                  }
                  v108 = v95[1];
                  if ( (unsigned __int16)(v108 - 1) <= 1u )
                  {
                    LODWORD(v24) = v95[7];
                    v105 = -2;
                    if ( (((_WORD)v24 - 8) & 0xFFE7) == 0 )
                    {
                      v109 = *(_OWORD *)v95;
                      WORD1(v287[0]) = v95[7];
                      LOWORD(v287[0]) = 22;
                      *(GUID *)((char *)v287 + 8) = GUID_00000000_0000_0010_8000_00aa00389b71;
                      DWORD2(v287[0]) = v103;
                      Buf2 = v109;
                      LOWORD(Buf2) = -2;
                      v107 = (v108 == 1) + 3;
                      goto LABEL_191;
                    }
                  }
                }
                v89 = 0;
              }
            }
            else if ( !v95 )
            {
              goto LABEL_230;
            }
LABEL_217:
            v91 = v213;
            ++v92;
            if ( ++v93 >= (__int64)v212 )
            {
              v24 = (__int64)v194;
              LODWORD(v26) = v187;
              v88 = (int *)v191;
              goto LABEL_223;
            }
          }
        }
        v88 = (int *)v191;
      }
      else
      {
        v89 = 0;
LABEL_223:
        v90 = v178;
      }
      v26 = (const GUID *)(unsigned int)((_DWORD)v26 + 1);
      ++v24;
      v187 = (unsigned int)v26;
      v194 = (void *)v24;
    }
    while ( v24 < (__int64)v211 );
  }
  v25 = (unsigned __int64)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    LOBYTE(v89) = v90 != 0;
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11LL,
      &WPP_3a6e6d7d967de63f72de1f5a056e09fa_Traceguids,
      (unsigned int)(v89 - 2005139366));
  }
  v112 = 0;
  SharedModeEnginePeriodicity = -2004287480;
  v82 = 0LL;
LABEL_259:
  if ( (unsigned int)dword_1800E5500 > 4 && TlgKeywordOn((TraceLoggingHProvider)v25, 0LL) )
  {
    v199 = v112;
    v295 = &v199;
    v296 = 4LL;
    TlgWrite((TraceLoggingHProvider)v25, &unk_1800C4B73, v26, v125, 3u, &pData);
  }
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    v179 = a9 == AUDCLNT_SHAREMODE_EXCLUSIVE
        || v181 == eOffloadConnector && !v112 && g_AudioSrvEnableInProcOffloadIfPossible;
    v191 = *(LPVOID *)(v18 + 48);
    v126 = 0LL;
    v205 = 0LL;
    SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(_QWORD, LPVOID *, const GUID *))(**((_QWORD **)a7 + 2)
                                                                                            + 40LL))(
                                    *((_QWORD *)a7 + 2),
                                    &v205,
                                    v26);
    if ( SharedModeEnginePeriodicity >= 0 )
    {
      v127 = Src;
      v128 = *((unsigned __int16 *)Src + 8);
      v129 = CoTaskMemAlloc(v128 + 18);
      v194 = v129;
      v130 = v129;
      if ( v129 )
      {
        memcpy_0(v129, v127, v128 + 18);
        v126 = v130;
        v131 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
        v132 = v131;
        if ( v131 )
        {
          *v131 = 0LL;
          SharedModeEnginePeriodicity = 0;
          v131[2] = 0LL;
          v133 = v205;
          v205 = 0LL;
          CoTaskMemFree((LPVOID)*v131);
          *v132 = v133;
          v126 = 0LL;
          *((_BYTE *)v132 + 49) = v181 == eKeywordDetectorConnector;
          CoTaskMemFree((LPVOID)v132[2]);
          v82 = (LPVOID *)v132;
          v134 = v191;
          v132[2] = v194;
          *((_BYTE *)v132 + 50) = a8 & 1;
          v132[3] = v134;
          *((GUID *)v132 + 2) = v43;
          *((_BYTE *)v132 + 48) = v179;
          *((_DWORD *)v132 + 2) = v184;
        }
        else
        {
          SharedModeEnginePeriodicity = -2147024882;
        }
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Idd(*((_QWORD *)WPP_GLOBAL_Control + 2));
        }
      }
      else
      {
        v126 = 0LL;
        SharedModeEnginePeriodicity = -2147024882;
      }
    }
    CoTaskMemFree(0LL);
    CoTaskMemFree(v205);
    v205 = 0LL;
    CoTaskMemFree(v126);
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v25, &AudioResourceManager_StreamSettings_Derived, v26);
  if ( SharedModeEnginePeriodicity >= 0 )
    SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(CDeviceGraphManager *, struct IAudioStreamInfo *, _QWORD, _QWORD, struct IAudioGraphCallback *, unsigned int, __int64, __int64, LPVOID *, struct SYSTEM_AUDIO_STREAM *))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
                                    g_DeviceGraphManager,
                                    v197,
                                    (unsigned int)a8,
                                    (unsigned int)a9,
                                    v223,
                                    a17,
                                    v19,
                                    v18,
                                    v82,
                                    v203);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v25, &AudioResourceManager_Stream_Created, v26);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_18ace55440119747b554b8cf58a0f74c_Traceguids,
      (unsigned int)SharedModeEnginePeriodicity);
  }
  if ( SharedModeEnginePeriodicity >= 0 )
    SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, struct SYSTEM_AUDIO_STREAM *, _QWORD))(*(_QWORD *)v197 + 96LL))(
                                    v197,
                                    v203,
                                    a17);
  v209 = 0LL;
  if ( SharedModeEnginePeriodicity >= 0 )
  {
    SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(CDeviceGraphStore *, LPVOID, __int64 *))(*(_QWORD *)g_DeviceGraphStore + 24LL))(
                                    g_DeviceGraphStore,
                                    v204,
                                    &v209);
    if ( SharedModeEnginePeriodicity >= 0 )
    {
      (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v209 + 88LL))(v209, &v255);
      v190 = 0LL;
      SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(*(_QWORD *)v197 + 104LL))(
                                      v197,
                                      &v190);
      v188 = 0LL;
      if ( SharedModeEnginePeriodicity < 0 )
        goto LABEL_359;
      SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v190
                                                                                                 + 176LL))(
                                      v190,
                                      &v188);
      if ( SharedModeEnginePeriodicity < 0 )
        goto LABEL_359;
      if ( v188 && (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v197 + 120LL))(v197) )
      {
        v194 = 0LL;
        v185 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, void **))(*(_QWORD *)v188 + 104LL))(v188, &v194);
        SharedModeEnginePeriodicity = v185;
        if ( v185 >= 0 )
        {
          v135 = *(const struct tWAVEFORMATEX **)(ATL::CAutoPtr<SaDeviceParams>::operator->(&v194) + 24);
          v136 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v190 + 40LL))(v190);
          if ( (unsigned int)CompareWaveFormat(v135, v136) )
          {
            SharedModeEnginePeriodicity = v185;
          }
          else
          {
            SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(CDeviceGraphManager *, __int64, struct ISaDeviceProxy *))(*(_QWORD *)g_DeviceGraphManager + 48LL))(
                                            g_DeviceGraphManager,
                                            v190,
                                            v188);
            if ( SharedModeEnginePeriodicity >= 0 )
              Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v188);
          }
        }
        v137 = (char *)v194;
        if ( v194 )
        {
          ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>((char *)v194 + 24);
          ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>(v137 + 16);
          ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>(v137);
          operator delete(v137);
        }
      }
      if ( SharedModeEnginePeriodicity < 0 )
        goto LABEL_359;
      if ( v188 )
      {
LABEL_351:
        if ( SharedModeEnginePeriodicity >= 0 && v188 )
        {
          v191 = 0LL;
          if ( (*(int (__fastcall **)(struct ISaDeviceProxy *, LPVOID *))(*(_QWORD *)v188 + 104LL))(v188, &v191) >= 0
            && (unsigned int)dword_1800E5500 > 4
            && TlgKeywordOn(v158, 0x400000000000uLL) )
          {
            v290 = a14;
            v291 = 16LL;
            v159 = ATL::CAutoPtr<SaDeviceParams>::operator->(&v191);
            v293 = 16LL;
            v292 = v159 + 80;
            TlgWrite(v160, &unk_1800C4B44, v161, v162, 4u, &v289);
          }
          v163 = v191;
          if ( v191 )
          {
            CoTaskMemFree(*((LPVOID *)v191 + 3));
            *((_QWORD *)v163 + 3) = 0LL;
            CoTaskMemFree(*((LPVOID *)v163 + 2));
            *((_QWORD *)v163 + 2) = 0LL;
            CoTaskMemFree(*(LPVOID *)v163);
            *(_QWORD *)v163 = 0LL;
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, v163);
          }
        }
LABEL_359:
        v165 = v219 || v203 && !*((_DWORD *)v203 + 18) && (a8 & 1) != 0;
        if ( SharedModeEnginePeriodicity >= 0 && v165 )
        {
          v166 = v190;
          v195 = 0LL;
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v195);
          SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(__int64, struct tWAVEFORMATEX **))(*(_QWORD *)v166 + 176LL))(
                                          v166,
                                          &v195);
          if ( SharedModeEnginePeriodicity >= 0 )
          {
            v167 = v195;
            if ( v195 )
            {
              v207 = 0LL;
              Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v207);
              SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(struct tWAVEFORMATEX *, __int64 *))(*(_QWORD *)&v167->wFormatTag + 56LL))(
                                              v167,
                                              &v207);
              if ( SharedModeEnginePeriodicity >= 0 )
              {
                v168 = RpcImpersonateClient(0LL);
                SharedModeEnginePeriodicity = v168;
                if ( v168 > 0 )
                  SharedModeEnginePeriodicity = (unsigned __int16)v168 | 0x80070000;
                if ( SharedModeEnginePeriodicity >= 0 )
                {
                  SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v207 + 32LL))(
                                                  v207,
                                                  a15,
                                                  (__int64)v203 + 64);
                  RpcRevertToSelf();
                  if ( SharedModeEnginePeriodicity >= 0 )
                  {
                    if ( *((_QWORD *)v203 + 8) )
                    {
                      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
                        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
                        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                      {
                        WPP_SF_(
                          *((_QWORD *)WPP_GLOBAL_Control + 2),
                          0x10u,
                          (__int64)&WPP_18ace55440119747b554b8cf58a0f74c_Traceguids);
                      }
                      if ( v181 == eOffloadConnector )
                      {
                        SharedModeEnginePeriodicity = (*(__int64 (__fastcall **)(struct IAudioGraphCallback *, __int64))(*(_QWORD *)v223 + 32LL))(
                                                        v223,
                                                        v207);
                        if ( SharedModeEnginePeriodicity < 0
                          && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
                          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
                          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                        {
                          WPP_SF_D(
                            *((_QWORD *)WPP_GLOBAL_Control + 2),
                            17LL,
                            &WPP_18ace55440119747b554b8cf58a0f74c_Traceguids,
                            (unsigned int)SharedModeEnginePeriodicity);
                        }
                      }
                    }
                  }
                }
              }
              Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v207);
            }
          }
          Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v195);
        }
        v169 = v188;
        if ( v188 )
        {
          v188 = 0LL;
          (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v169 + 16LL))(v169);
        }
        v170 = v190;
        if ( v190 )
        {
          v190 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v170 + 16LL))(v170);
        }
        if ( v255 )
          LeaveCriticalSection(v255);
        goto LABEL_393;
      }
      v175 = (struct tWAVEFORMATEX *)v82[3];
      lpMem = 0LL;
      v277 = v41;
      v266 = v40;
      v186 = DeriveSaDeviceParametersForStream(
               a7,
               a9,
               v181,
               &v266,
               &v277,
               v83,
               (struct tWAVEFORMATEX *)Src,
               (__int64)v175,
               (struct SaDeviceParams **)&lpMem);
      SaDeviceForOffloadedStream = v186;
      v193 = 0LL;
      if ( v186 >= 0 )
      {
        v225 = 0;
        lpCriticalSection = (LPCRITICAL_SECTION)&g_SessionManagerProviderLock;
        ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
        v139 = g_SingletonAudioSessionManagerProvider;
        if ( g_SingletonAudioSessionManagerProvider )
        {
          (*(void (__fastcall **)(CBackgroundSessionCallbacks *))(*(_QWORD *)g_SingletonAudioSessionManagerProvider + 8LL))(g_SingletonAudioSessionManagerProvider);
          ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
          SaDeviceForOffloadedStream = (*(__int64 (__fastcall **)(CBackgroundSessionCallbacks *, LPVOID, struct CAudioSessionManager **))(*(_QWORD *)v139 + 40LL))(
                                         v139,
                                         v204,
                                         &v193);
          v186 = SaDeviceForOffloadedStream;
          (*(void (__fastcall **)(CBackgroundSessionCallbacks *))(*(_QWORD *)v139 + 16LL))(v139);
        }
        else
        {
          if ( v225 )
            LeaveCriticalSection(lpCriticalSection);
          SaDeviceForOffloadedStream = -2147467259;
          v186 = -2147467259;
        }
      }
      v140 = 1;
      v182 = 1;
      v141 = *((_QWORD *)a7 + 4);
      if ( v141 )
      {
        v233 = 0LL;
        v234 = 0LL;
        v235 = 0LL;
        if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v141 + 40LL))(
               v141,
               &PKEY_Endpoint_AllowPreemption,
               &v233) < 0
          || (((_WORD)v233 - 11) & 0xFFF7) != 0 )
        {
          v140 = 1;
        }
        else
        {
          v140 = (_WORD)v234 != 0;
          v182 = (_WORD)v234 != 0;
        }
        PropVariantClear(&v233);
      }
      v180 = 0;
      if ( SaDeviceForOffloadedStream >= 0 )
      {
        if ( !v140 )
          goto LABEL_324;
        if ( a9 == AUDCLNT_SHAREMODE_EXCLUSIVE )
        {
          v142 = _InterlockedCompareExchange((volatile signed __int32 *)v193 + 63, GetCurrentThreadId(), 0);
          v18 = v200;
          v19 = v202;
          v83 = v196;
          if ( !v142 )
          {
            v140 = v182;
            v180 = 1;
            goto LABEL_324;
          }
        }
        else
        {
          v26 = 0LL;
          v148 = _InterlockedCompareExchange((volatile signed __int32 *)v193 + 63, 0, 0);
          v18 = v200;
          v19 = v202;
          v83 = v196;
          if ( !v148 )
          {
LABEL_324:
            *(_BYTE *)(ATL::CAutoPtr<SaDeviceParams>::operator->(&lpMem) + 96) = v183;
            if ( a9 == AUDCLNT_SHAREMODE_EXCLUSIVE )
            {
              Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v188);
              v144 = (LPVOID *)lpMem;
              SaDeviceForExclusiveStream = CAudioResourceManager::GetSaDeviceForExclusiveStream(
                                             v145,
                                             a7,
                                             (struct SaDeviceParams *)lpMem,
                                             a8,
                                             AUDCLNT_SHAREMODE_EXCLUSIVE,
                                             (unsigned __int64)pvData,
                                             a17,
                                             v140,
                                             v217,
                                             v193,
                                             &v188);
              v147 = v180;
              SaDeviceForOffloadedStream = SaDeviceForExclusiveStream;
              v186 = SaDeviceForExclusiveStream;
            }
            else if ( (a8 & 1) != 0 )
            {
              Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v188);
              v144 = (LPVOID *)lpMem;
              v147 = v180;
              SaDeviceForOffloadedStream = CAudioResourceManager::GetSaDeviceForOffloadedStream(
                                             v153,
                                             a7,
                                             (struct SaDeviceParams *)lpMem,
                                             a8,
                                             a9,
                                             (unsigned __int64)pvData,
                                             a17,
                                             v176,
                                             v217,
                                             v193,
                                             &v188);
              v186 = SaDeviceForOffloadedStream;
            }
            else
            {
              v154 = v188;
              if ( v188 )
              {
                v188 = v143;
                (*(void (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v154 + 16LL))(v154);
              }
              v155 = v193;
              v156 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v197 + 120LL))(v197);
              v157 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v197 + 112LL))(v197);
              v177 = v156;
              v144 = (LPVOID *)lpMem;
              v147 = v180;
              SaDeviceForOffloadedStream = CAudioResourceManager::GetSaDeviceForSharedStream(
                                             (CAudioResourceManager *)&v188,
                                             (struct _GUID *)a7,
                                             (struct SaDeviceParams *)lpMem,
                                             a8,
                                             a9,
                                             (unsigned __int64)pvData,
                                             a17,
                                             v176,
                                             v217,
                                             v155,
                                             v157,
                                             v177,
                                             &v188);
              v186 = SaDeviceForOffloadedStream;
            }
            goto LABEL_329;
          }
        }
        SaDeviceForOffloadedStream = -2005139389;
        v186 = -2005139389;
      }
      v144 = (LPVOID *)lpMem;
      v147 = 0;
LABEL_329:
      v149 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          15LL,
          &WPP_18ace55440119747b554b8cf58a0f74c_Traceguids,
          (unsigned int)SaDeviceForOffloadedStream);
      }
      if ( v147 )
      {
        v149 = v193;
        _InterlockedExchange((volatile __int32 *)v193 + 63, 0);
        v18 = v200;
        v19 = v202;
        v83 = v196;
        v144 = (LPVOID *)lpMem;
      }
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        TemplateEventDescriptor(v149, &AudioResourceManager_SaDevice_Created, v26);
      if ( SaDeviceForOffloadedStream >= 0 )
      {
        v150 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v190 + 208LL))(v190) == 0;
        v151 = *(_QWORD *)g_DeviceGraphManager;
        v199 = v150;
        v186 = (*(__int64 (__fastcall **)(CDeviceGraphManager *, __int64, struct ISaDeviceProxy *, BOOL, struct SYSTEM_AUDIO_STREAM *))(v151 + 40))(
                 g_DeviceGraphManager,
                 v190,
                 v188,
                 v150,
                 v203);
      }
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        TemplateEventDescriptor(v149, &AudioResourceManager_SaDevice_Connected, v26);
      if ( v193 )
        (*(void (__fastcall **)(struct CAudioSessionManager *))(*(_QWORD *)v193 + 16LL))(v193);
      if ( v144 )
      {
        CoTaskMemFree(v144[3]);
        v144[3] = 0LL;
        CoTaskMemFree(v144[2]);
        v144[2] = 0LL;
        CoTaskMemFree(*v144);
        *v144 = 0LL;
        v152 = GetProcessHeap();
        HeapFree(v152, 0, v144);
      }
      SharedModeEnginePeriodicity = v186;
      goto LABEL_351;
    }
  }
LABEL_393:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      18LL,
      &WPP_18ace55440119747b554b8cf58a0f74c_Traceguids,
      (unsigned int)SharedModeEnginePeriodicity);
  }
  v171 = v209;
  if ( v209 )
  {
    v209 = 0LL;
    (*(void (__fastcall **)(__int64, __int64, const GUID *))(*(_QWORD *)v171 + 16LL))(v171, v24, v26);
  }
  if ( v82 )
  {
    CoTaskMemFree(v82[2]);
    v82[2] = 0LL;
    CoTaskMemFree(*v82);
    *v82 = 0LL;
    v172 = GetProcessHeap();
    HeapFree(v172, 0, v82);
  }
  CoTaskMemFree(v83);
  CoTaskMemFree(Src);
  CoTaskMemFree(v221);
  if ( v222 )
    ((void (__fastcall *)(struct IMMDevice *))v222->lpVtbl->Release)(v222);
  CoTaskMemFree(v204);
  v204 = 0LL;
  CoTaskMemFree((LPVOID)v19);
  CoTaskMemFree((LPVOID)v18);
  return (unsigned int)SharedModeEnginePeriodicity;
}
