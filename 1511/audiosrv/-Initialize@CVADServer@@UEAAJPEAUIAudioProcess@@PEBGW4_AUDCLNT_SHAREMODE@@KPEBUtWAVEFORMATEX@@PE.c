/*
 * XREFs of ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800235C0
 * Callers:
 *     AudioServerInitialize @ 0x18002BC30 (AudioServerInitialize.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x180005DE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800110D0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18001127C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800129D0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180013734 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800186F0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800188B0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?IsValidAudioServerStreamCategory@CWindowsPolicyManager@@UEAAHK@Z @ 0x18001B940 (-IsValidAudioServerStreamCategory@CWindowsPolicyManager@@UEAAHK@Z.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x180024BE0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?GetProcessId@CProcess@@UEAAKXZ @ 0x180028B80 (-GetProcessId@CProcess@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003FE88 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800643BC (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180064528 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800645E8 (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 *     ?IsExclusiveModeDisabled@@YAHPEBG@Z @ 0x18008805C (-IsExclusiveModeDisabled@@YAHPEBG@Z.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x1800880EC (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall CVADServer::Initialize(
        CVADServer *this,
        struct IAudioProcess *a2,
        const unsigned __int16 *a3,
        enum _AUDCLNT_SHAREMODE a4,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a5,
        struct tWAVEFORMATEX *a6,
        struct _GUID *a7,
        unsigned int a8,
        struct VadServerSettings *a9,
        unsigned __int16 **a10)
{
  CVADServer *v12; // r14
  unsigned __int16 **v13; // rax
  int AliasedEndpointCharacteristics; // r15d
  CEndpointCharacteristics *v15; // rdi
  struct IMMDevice *v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  const void *v19; // r15
  __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  char *v24; // rcx
  rsize_t v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  char **v29; // r15
  char *v30; // rax
  unsigned __int64 v31; // r14
  unsigned __int64 v32; // rdx
  char *v33; // rcx
  rsize_t v34; // r9
  struct _GUID *v35; // r13
  unsigned int (__fastcall *v36)(CProcess *__hidden); // rbx
  unsigned int ProcessId; // eax
  CWindowsPolicyManager *v38; // r15
  unsigned int v39; // r14d
  _BOOL8 (__fastcall *v40)(CWindowsPolicyManager *, unsigned int); // rbx
  BOOL IsValidAudioServerStreamCategory; // eax
  bool v42; // zf
  int v43; // eax
  unsigned int *v44; // rax
  _WORD *v45; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v46; // edx
  void (__fastcall ***v47)(_QWORD, GUID *, unsigned __int64 *); // r14
  unsigned __int64 v48; // rbx
  enum _AUDCLNT_SHAREMODE v49; // r12d
  void (__fastcall ***v50)(_QWORD, GUID *, struct _GUID **); // r14
  struct _GUID *v51; // rbx
  BOOL v52; // r14d
  __int64 v53; // r15
  char *v54; // rax
  int v55; // r15d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v56; // ebx
  void *v57; // rcx
  unsigned int v58; // r12d
  GUID v59; // xmm6
  GUID v60; // xmm8
  GUID v61; // xmm7
  BOOL IsConnectorModeSupported; // eax
  int v63; // r12d
  BOOL v64; // r14d
  __int64 v65; // r15
  char *v66; // rax
  int v67; // ecx
  int v68; // edx
  __int64 v69; // r9
  BOOL v70; // r14d
  __int64 v71; // r15
  char *v72; // rax
  int v73; // ecx
  int v74; // edx
  __int64 v75; // r9
  struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedConnectorModes; // rax
  BOOL v77; // r14d
  __int64 v78; // r15
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v79; // eax
  char *v80; // rax
  int v81; // ecx
  int v82; // edx
  __int64 v83; // r9
  GUID *v84; // rax
  __int64 v85; // r8
  unsigned int v86; // ecx
  __int64 v87; // r12
  BOOL v88; // r14d
  __int64 v89; // r15
  char *v90; // rax
  int v91; // ecx
  int v92; // edx
  __int64 v93; // r9
  BOOL v94; // r14d
  __int64 v95; // r15
  char *v96; // rax
  int v97; // ecx
  int v98; // edx
  __int64 v99; // r9
  BOOL v100; // r14d
  __int64 v101; // r15
  char *v102; // rax
  int v103; // ecx
  int v104; // edx
  __int64 v105; // r9
  GUID *v106; // rax
  int v107; // r9d
  enum _AUDCLNT_SHAREMODE v108; // r12d
  int v109; // eax
  void *v110; // r15
  __int64 v111; // rbx
  void *v112; // rax
  void *v113; // r14
  unsigned __int16 **v114; // r12
  int v117; // [rsp+58h] [rbp-240h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v118; // [rsp+60h] [rbp-238h]
  LPVOID pv; // [rsp+68h] [rbp-230h] BYREF
  struct _GUID v120; // [rsp+70h] [rbp-228h] BYREF
  unsigned int v121; // [rsp+80h] [rbp-218h] BYREF
  CProcess *v122; // [rsp+88h] [rbp-210h]
  enum _AUDCLNT_SHAREMODE v123; // [rsp+90h] [rbp-208h] BYREF
  enum _AUDCLNT_SHAREMODE v124; // [rsp+98h] [rbp-200h]
  struct _GUID *v125; // [rsp+A0h] [rbp-1F8h] BYREF
  unsigned __int64 v126; // [rsp+A8h] [rbp-1F0h] BYREF
  struct IAudioProcess *v127; // [rsp+B0h] [rbp-1E8h]
  CEndpointCharacteristics *v128; // [rsp+B8h] [rbp-1E0h] BYREF
  unsigned int *v129; // [rsp+C0h] [rbp-1D8h]
  unsigned __int16 **v130; // [rsp+C8h] [rbp-1D0h]
  void *Src; // [rsp+D0h] [rbp-1C8h]
  __int64 v132; // [rsp+E0h] [rbp-1B8h] BYREF
  __int64 v133; // [rsp+E8h] [rbp-1B0h]
  __int64 v134; // [rsp+F0h] [rbp-1A8h]
  __int128 v135; // [rsp+F8h] [rbp-1A0h]
  int v136; // [rsp+108h] [rbp-190h]
  int v137; // [rsp+10Ch] [rbp-18Ch]
  __int64 v138; // [rsp+110h] [rbp-188h]
  __int64 v139; // [rsp+118h] [rbp-180h]
  __int64 v140; // [rsp+120h] [rbp-178h]
  __int64 v141; // [rsp+128h] [rbp-170h]
  struct IMMDevice *v142; // [rsp+130h] [rbp-168h]
  PROPVARIANT pvar; // [rsp+138h] [rbp-160h] BYREF
  __int64 v144; // [rsp+140h] [rbp-158h]
  __int64 v145; // [rsp+148h] [rbp-150h]
  PROPVARIANT v146; // [rsp+150h] [rbp-148h] BYREF
  __int64 v147; // [rsp+158h] [rbp-140h]
  __int64 v148; // [rsp+160h] [rbp-138h]
  PROPVARIANT v149; // [rsp+168h] [rbp-130h] BYREF
  __int64 v150; // [rsp+170h] [rbp-128h]
  __int64 v151; // [rsp+178h] [rbp-120h]
  PROPVARIANT v152; // [rsp+180h] [rbp-118h] BYREF
  __int64 v153; // [rsp+188h] [rbp-110h]
  __int64 v154; // [rsp+190h] [rbp-108h]
  PROPVARIANT v155; // [rsp+198h] [rbp-100h] BYREF
  __int64 v156; // [rsp+1A0h] [rbp-F8h]
  __int64 v157; // [rsp+1A8h] [rbp-F0h]
  PROPVARIANT v158; // [rsp+1B0h] [rbp-E8h] BYREF
  __int64 v159; // [rsp+1B8h] [rbp-E0h]
  __int64 v160; // [rsp+1C0h] [rbp-D8h]
  PROPVARIANT v161[4]; // [rsp+1D0h] [rbp-C8h] BYREF
  struct _GUID v162; // [rsp+1F0h] [rbp-A8h] BYREF
  PROPVARIANT v163[2]; // [rsp+200h] [rbp-98h] BYREF
  __int64 v164; // [rsp+210h] [rbp-88h]

  v161[3] = (PROPVARIANT)-2LL;
  v124 = a4;
  v127 = a2;
  v12 = this;
  *(_QWORD *)&v162.Data1 = this;
  v122 = a2;
  v123 = a4;
  Src = a6;
  v125 = a7;
  v129 = (unsigned int *)a9;
  v13 = a10;
  v130 = a10;
  AliasedEndpointCharacteristics = 0;
  v15 = 0LL;
  v128 = 0LL;
  v16 = 0LL;
  v142 = 0LL;
  if ( g_u32AEWMILogLevel >= 3 )
  {
    v132 = 0x500000050LL;
    v133 = 0LL;
    v134 = 0LL;
    v136 = 0;
    v139 = 0LL;
    v137 = 0x20000;
    v135 = AEWMIGUID_PERFORMANCE;
    v138 = 0LL;
    v140 = 0LL;
    v141 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, &v132);
    v13 = v130;
  }
  *v13 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v12 + 232));
  if ( *((_DWORD *)v12 + 50) )
  {
    AliasedEndpointCharacteristics = -2004287486;
LABEL_240:
    v114 = v130;
    if ( *v130 )
    {
      operator delete(*v130);
      *v114 = 0LL;
    }
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        39,
        (unsigned int)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
        *((_QWORD *)v12 + 28),
        AliasedEndpointCharacteristics);
    }
    goto LABEL_246;
  }
  if ( (unsigned int)a4 > AUDCLNT_SHAREMODE_EXCLUSIVE )
    goto LABEL_240;
  AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                     (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                     a3,
                                     &v128);
  if ( AliasedEndpointCharacteristics < 0 )
  {
    v15 = v128;
    goto LABEL_240;
  }
  pv = 0LL;
  v15 = v128;
  AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)v128 + 2) + 40LL))(
                                     *((_QWORD *)v128 + 2),
                                     &pv);
  v117 = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics < 0 )
  {
    CoTaskMemFree(pv);
    v12 = this;
    goto LABEL_240;
  }
  v19 = pv;
  v20 = -1LL;
  if ( !pv )
    goto LABEL_22;
  v21 = -1LL;
  do
    ++v21;
  while ( *((_WORD *)pv + v21) );
  if ( (_DWORD)v21 )
  {
    v22 = *((_QWORD *)this + 28);
    v121 = *(_DWORD *)(v22 - 16);
    v23 = ((__int64)pv - v22) >> 1;
    v126 = v23;
    if ( ((1 - *(_DWORD *)(v22 - 8)) | (*(_DWORD *)(v22 - 12) - (int)v21)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)this + 28, v21, v17, v18);
      v23 = v126;
    }
    v24 = (char *)*((_QWORD *)this + 28);
    v25 = 2LL * (int)v21;
    if ( v23 > v121 )
      memcpy_s(v24, 2LL * (int)v21, v19, v25);
    else
      memmove_s(v24, 2LL * (int)v21, &v24[2 * v23], v25);
    if ( (int)v21 < 0 || (v28 = *((_QWORD *)this + 28), (int)v21 > *(_DWORD *)(v28 - 12)) )
      ATL::AtlThrowImpl(-2147024809);
    *(_DWORD *)(v28 - 16) = v21;
    *(_WORD *)(2LL * (int)v21 + *((_QWORD *)this + 28)) = 0;
  }
  else
  {
LABEL_22:
    ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)this + 28);
  }
  v29 = (char **)((char *)this + 216);
  if ( !a3 )
    goto LABEL_35;
  do
    ++v20;
  while ( a3[v20] );
  if ( (_DWORD)v20 )
  {
    v30 = *v29;
    v31 = *((unsigned int *)*v29 - 4);
    v32 = ((char *)a3 - *v29) >> 1;
    v126 = v32;
    if ( ((1 - *((_DWORD *)v30 - 2)) | (*((_DWORD *)v30 - 3) - (int)v20)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)this + 27, v20, v26, v27);
      v32 = v126;
    }
    v33 = *v29;
    v34 = 2LL * (int)v20;
    if ( v32 > v31 )
      memcpy_s(v33, 2LL * (int)v20, a3, v34);
    else
      memmove_s(v33, 2LL * (int)v20, &v33[2 * v32], v34);
    if ( (int)v20 < 0 || (int)v20 > *((_DWORD *)*v29 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)*v29 - 4) = v20;
    *(_WORD *)&(*v29)[2 * (int)v20] = 0;
  }
  else
  {
LABEL_35:
    ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)this + 27);
  }
  CoTaskMemFree(pv);
  v35 = v125;
  AliasedEndpointCharacteristics = v117;
  if ( v117 < 0 )
  {
LABEL_238:
    v12 = this;
    goto LABEL_240;
  }
  v36 = *(unsigned int (__fastcall **)(CProcess *__hidden))(*(_QWORD *)v127 + 40LL);
  if ( v36 == CProcess::GetProcessId )
    ProcessId = CProcess::GetProcessId(v127);
  else
    ProcessId = v36(v127);
  *((_DWORD *)this + 16) = ProcessId;
  v38 = g_PolicyManager;
  if ( !g_PolicyManager )
  {
    AliasedEndpointCharacteristics = -2147418113;
    v12 = this;
    goto LABEL_240;
  }
  v39 = *v129;
  v40 = *(_BOOL8 (__fastcall **)(CWindowsPolicyManager *, unsigned int))(*(_QWORD *)g_PolicyManager + 64LL);
  if ( v40 == CWindowsPolicyManager::IsValidAudioServerStreamCategory )
  {
    IsValidAudioServerStreamCategory = CWindowsPolicyManager::IsValidAudioServerStreamCategory(g_PolicyManager, v39);
  }
  else
  {
    IsValidAudioServerStreamCategory = v40(g_PolicyManager, v39);
    v38 = g_PolicyManager;
  }
  v42 = !IsValidAudioServerStreamCategory;
  v43 = 0;
  if ( v42 )
    v43 = -2147024809;
  if ( v43 < 0 )
  {
    AliasedEndpointCharacteristics = v43;
    goto LABEL_238;
  }
  v44 = v129;
  *(_OWORD *)((char *)this + 284) = *(_OWORD *)v129;
  *((_DWORD *)this + 75) = v44[4];
  AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, struct IAudioProcess *, _QWORD))(*(_QWORD *)v38 + 128LL))(
                                     v38,
                                     v127,
                                     *((_QWORD *)this + 28));
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_238;
  v45 = Src;
  AliasedEndpointCharacteristics = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)Src);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_238;
  if ( v45[1] > 2u && ((*v45 - 1) & 0xFFFD) == 0 )
  {
    AliasedEndpointCharacteristics = -2147024809;
    v12 = this;
    goto LABEL_240;
  }
  v12 = this;
  AliasedEndpointCharacteristics = CVADServer::InitializePolicy(this, v127, v35, a5, a8, v130);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_240;
  if ( *((_DWORD *)v15 + 93) )
    LODWORD(v122) = 1;
  else
    LODWORD(v122) = ((unsigned int)a5 >> 16) & 2;
  v16 = (struct IMMDevice *)*((_QWORD *)v15 + 2);
  v142 = v16;
  ((void (__fastcall *)(struct IMMDevice *))v16->lpVtbl->AddRef)(v16);
  v123 = AUDCLNT_SHAREMODE_SHARED;
  v47 = (void (__fastcall ***)(_QWORD, GUID *, unsigned __int64 *))*((_QWORD *)v15 + 2);
  v48 = 0LL;
  v126 = 0LL;
  if ( v47 )
  {
    (**v47)(v47, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &v126);
    v48 = v126;
  }
  if ( v48 )
  {
    (*(void (__fastcall **)(unsigned __int64, enum _AUDCLNT_SHAREMODE *))(*(_QWORD *)v48 + 88LL))(v48, &v123);
    v48 = v126;
  }
  v49 = v123;
  if ( v48 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v48 + 16LL))(v48);
  v121 = 0;
  v50 = (void (__fastcall ***)(_QWORD, GUID *, struct _GUID **))*((_QWORD *)v15 + 2);
  v51 = 0LL;
  v125 = 0LL;
  if ( v50 )
  {
    (**v50)(v50, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &v125);
    v51 = v125;
  }
  if ( v51 )
  {
    (*(void (__fastcall **)(struct _GUID *, unsigned int *))(*(_QWORD *)&v51->Data1 + 88LL))(v51, &v121);
    v51 = v125;
  }
  if ( !v121 )
  {
    if ( *((_DWORD *)v15 + 93) )
      goto LABEL_78;
    v52 = 1;
    v53 = *((_QWORD *)v15 + 7);
    if ( !v53 )
      goto LABEL_74;
    pvar = 0LL;
    v144 = 0LL;
    v145 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v53 + 40LL))(
           v53,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v52 = v144 == 0;
    }
    PropVariantClear(&pvar);
    v51 = v125;
    v54 = (char *)v15 + 128;
    if ( v52 )
LABEL_74:
      v54 = (char *)v15 + 64;
    if ( *((_DWORD *)v54 + 2) <= 1u )
      goto LABEL_78;
    if ( !CEndpointCharacteristics::AreEnhancementsEnabled(v15) )
    {
      v51 = v125;
LABEL_78:
      v55 = 0;
      goto LABEL_83;
    }
  }
  v55 = 1;
  memset(v161, 0, 24);
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v15 + 4) + 40LL))(
         *((_QWORD *)v15 + 4),
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         v161) < 0
    || LOWORD(v161[0]) != 19 )
  {
    v55 = 0;
  }
  PropVariantClear(v161);
  v51 = v125;
LABEL_83:
  if ( v51 )
    (*(void (__fastcall **)(struct _GUID *))(*(_QWORD *)&v51->Data1 + 16LL))(v51);
  if ( (a5 & 0x400000) != 0 )
  {
    v56 = eKeywordDetectorConnector;
    goto LABEL_97;
  }
  if ( v55 && (a5 & 0x20000) != 0 )
  {
    v56 = eLoopbackConnector;
    goto LABEL_97;
  }
  if ( v124 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    v57 = 0LL;
    pv = 0LL;
    if ( v49 )
    {
      if ( !(unsigned int)IsFormatSupportedByHwAudioEngine(
                            v16,
                            v46,
                            (const struct tWAVEFORMATEX *)Src,
                            (struct tWAVEFORMATEX **)&pv) )
      {
        CoTaskMemFree(pv);
        v56 = eOffloadConnector;
        goto LABEL_97;
      }
      v57 = pv;
    }
    CoTaskMemFree(v57);
  }
  v56 = ((unsigned __int8)~(_BYTE)a5 >> 1) & 1;
LABEL_97:
  v118 = v56;
  v12 = this;
  v58 = *((_DWORD *)this + 71);
  AliasedEndpointCharacteristics = 0;
  pv = 0LL;
  v59 = GUID_00000000_0000_0000_0000_000000000000;
  v162 = GUID_00000000_0000_0000_0000_000000000000;
  v60 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)v163 = GUID_00000000_0000_0000_0000_000000000000;
  v61 = GUID_00000000_0000_0000_0000_000000000000;
  v120 = GUID_00000000_0000_0000_0000_000000000000;
  if ( v124 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(v15, v56, &v162, (struct _GUID *)v163, &v120);
    v59 = v162;
    v60 = *(GUID *)v163;
    v61 = v120;
LABEL_211:
    v63 = (int)v122;
    goto LABEL_212;
  }
  if ( (_DWORD)v122 == 2 )
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      v15,
      eHostProcessConnector,
      &v162,
      (struct _GUID *)v163,
      &v120);
    v59 = v162;
    v60 = *(GUID *)v163;
    v61 = v120;
    goto LABEL_211;
  }
  if ( !*((_DWORD *)this + 73) )
  {
    v120 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    if ( v56 )
      goto LABEL_112;
    v64 = 1;
    v65 = *((_QWORD *)v15 + 7);
    if ( !v65 )
      goto LABEL_112;
    v152 = 0LL;
    v153 = 0LL;
    v154 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v65 + 40LL))(
           v65,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &v152) >= 0
      && (_WORD)v152 == 19 )
    {
      v64 = v153 == 0;
    }
    PropVariantClear(&v152);
    if ( v64 )
LABEL_112:
      v66 = (char *)v15 + 16 * v56 + 64;
    else
      v66 = (char *)v15 + 128;
    v67 = 0;
    v68 = *((_DWORD *)v66 + 2);
    if ( v68 <= 0 )
      goto LABEL_121;
    v69 = *(_QWORD *)v66;
    while ( *(_QWORD *)(v69 + 16LL * v67) != *(_QWORD *)&v120.Data1
         || *(_QWORD *)(v69 + 16LL * v67 + 8) != *(_QWORD *)v120.Data4 )
    {
      if ( ++v67 >= v68 )
        goto LABEL_121;
    }
    if ( v67 == -1 )
    {
LABEL_121:
      v120 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      if ( v56 )
        goto LABEL_128;
      v70 = 1;
      v71 = *((_QWORD *)v15 + 7);
      if ( !v71 )
        goto LABEL_128;
      v146 = 0LL;
      v147 = 0LL;
      v148 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v71 + 40LL))(
             v71,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &v146) >= 0
        && (_WORD)v146 == 19 )
      {
        v70 = v147 == 0;
      }
      PropVariantClear(&v146);
      if ( v70 )
LABEL_128:
        v72 = (char *)v15 + 16 * v56 + 64;
      else
        v72 = (char *)v15 + 128;
      v73 = 0;
      v74 = *((_DWORD *)v72 + 2);
      if ( v74 <= 0 )
        goto LABEL_137;
      v75 = *(_QWORD *)v72;
      while ( *(_QWORD *)(v75 + 16LL * v73) != *(_QWORD *)&v120.Data1
           || *(_QWORD *)(v75 + 16LL * v73 + 8) != *(_QWORD *)v120.Data4 )
      {
        if ( ++v73 >= v74 )
          goto LABEL_137;
      }
      if ( v73 == -1 )
      {
LABEL_137:
        SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(v15, v56);
        v59 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                         (__int64)SupportedConnectorModes,
                         0);
      }
      else
      {
        v59 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      }
    }
    else
    {
      v59 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    }
    *(GUID *)v163 = v59;
    v120 = v59;
    v77 = 1;
    v78 = *((_QWORD *)v15 + 7);
    if ( v78 )
    {
      v149 = 0LL;
      v150 = 0LL;
      v151 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v78 + 40LL))(
             v78,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &v149) >= 0
        && (_WORD)v149 == 19 )
      {
        v77 = v150 == 0;
      }
      PropVariantClear(&v149);
      v79 = v56;
      if ( !v77 && v56 != eKeywordDetectorConnector )
      {
        v80 = (char *)v15 + 336;
        goto LABEL_147;
      }
    }
    else
    {
      v79 = v56;
    }
    v80 = (char *)v15 + 16 * v79 + 208;
LABEL_147:
    v81 = 0;
    v82 = *((_DWORD *)v80 + 2);
    if ( v82 <= 0 )
      goto LABEL_154;
    v83 = *(_QWORD *)v80;
    while ( *(_QWORD *)(v83 + 16LL * v81) != *(_QWORD *)&v120.Data1
         || *(_QWORD *)(v83 + 16LL * v81 + 8) != *(_QWORD *)v120.Data4 )
    {
      if ( ++v81 >= v82 )
        goto LABEL_154;
    }
    v84 = (GUID *)v163;
    if ( v81 == -1 )
LABEL_154:
      v84 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v60 = *v84;
    v61 = v59;
    v85 = v58;
    v63 = (int)v122;
    if ( (*(int (__fastcall **)(CWindowsPolicyManager *, _QWORD, __int64, LPVOID *))(*(_QWORD *)g_PolicyManager + 88LL))(
           g_PolicyManager,
           (unsigned int)v122,
           v85,
           &pv) < 0 )
    {
      AliasedEndpointCharacteristics = 0;
      v12 = this;
      goto LABEL_212;
    }
    v86 = 0;
    v162.Data1 = 0;
    if ( !*(_DWORD *)pv )
    {
      AliasedEndpointCharacteristics = 0;
      v12 = this;
      goto LABEL_212;
    }
    while ( 1 )
    {
      v87 = 2LL * v86;
      v120 = *(struct _GUID *)(*((_QWORD *)pv + 1) + 16LL * v86);
      if ( v56 )
        goto LABEL_164;
      v88 = 1;
      v89 = *((_QWORD *)v15 + 7);
      if ( !v89 )
        goto LABEL_164;
      v163[0] = 0LL;
      v163[1] = 0LL;
      v164 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v89 + 40LL))(
             v89,
             &PKEY_AudioEndpoint_Disable_SysFx,
             v163) >= 0
        && LOWORD(v163[0]) == 19 )
      {
        v88 = LODWORD(v163[1]) == 0;
      }
      PropVariantClear(v163);
      v56 = v118;
      if ( v88 )
LABEL_164:
        v90 = (char *)v15 + 16 * v56 + 64;
      else
        v90 = (char *)v15 + 128;
      v91 = 0;
      v92 = *((_DWORD *)v90 + 2);
      if ( v92 > 0 )
      {
        v93 = *(_QWORD *)v90;
        while ( *(_QWORD *)(v93 + 16LL * v91) != *(_QWORD *)&v120.Data1
             || *(_QWORD *)(v93 + 16LL * v91 + 8) != *(_QWORD *)v120.Data4 )
        {
          if ( ++v91 >= v92 )
            goto LABEL_172;
        }
        if ( v91 != -1 )
          break;
      }
LABEL_172:
      v120 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      if ( v56 )
        goto LABEL_179;
      v94 = 1;
      v95 = *((_QWORD *)v15 + 7);
      if ( !v95 )
        goto LABEL_179;
      v158 = 0LL;
      v159 = 0LL;
      v160 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v95 + 40LL))(
             v95,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &v158) >= 0
        && (_WORD)v158 == 19 )
      {
        v94 = v159 == 0;
      }
      PropVariantClear(&v158);
      v56 = v118;
      if ( v94 )
LABEL_179:
        v96 = (char *)v15 + 16 * v56 + 64;
      else
        v96 = (char *)v15 + 128;
      v97 = 0;
      v98 = *((_DWORD *)v96 + 2);
      if ( v98 > 0 )
      {
        v99 = *(_QWORD *)v96;
        while ( *(_QWORD *)(v99 + 16LL * v97) != *(_QWORD *)&v120.Data1
             || *(_QWORD *)(v99 + 16LL * v97 + 8) != *(_QWORD *)v120.Data4 )
        {
          if ( ++v97 >= v98 )
            goto LABEL_202;
        }
        if ( v97 != -1 )
        {
          v120 = *(struct _GUID *)(*((_QWORD *)pv + 1) + 8 * v87);
          v100 = 1;
          v101 = *((_QWORD *)v15 + 7);
          if ( !v101 )
            goto LABEL_194;
          v155 = 0LL;
          v156 = 0LL;
          v157 = 0LL;
          if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v101 + 40LL))(
                 v101,
                 &PKEY_AudioEndpoint_Disable_SysFx,
                 &v155) >= 0
            && (_WORD)v155 == 19 )
          {
            v100 = v156 == 0;
          }
          PropVariantClear(&v155);
          v56 = v118;
          if ( v100 || v118 == eKeywordDetectorConnector )
LABEL_194:
            v102 = (char *)v15 + 16 * v56 + 208;
          else
            v102 = (char *)v15 + 336;
          v103 = 0;
          v104 = *((_DWORD *)v102 + 2);
          if ( v104 > 0 )
          {
            v105 = *(_QWORD *)v102;
            while ( *(_QWORD *)(v105 + 16LL * v103) != *(_QWORD *)&v120.Data1
                 || *(_QWORD *)(v105 + 16LL * v103 + 8) != *(_QWORD *)v120.Data4 )
            {
              if ( ++v103 >= v104 )
                goto LABEL_202;
            }
            if ( v103 != -1 )
            {
              v59 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
              v60 = *(GUID *)(*((_QWORD *)pv + 1) + 16LL * v162.Data1);
              v61 = v60;
              goto LABEL_210;
            }
          }
        }
      }
LABEL_202:
      v86 = v162.Data1 + 1;
      v162.Data1 = v86;
      if ( v86 >= *(_DWORD *)pv )
        goto LABEL_210;
    }
    v59 = *(GUID *)(*((_QWORD *)pv + 1) + 16LL * v162.Data1);
    v162 = v59;
    v120 = v59;
    v42 = CEndpointCharacteristics::IsAPOModeSupported(v15, &v120, v56) == 0;
    v106 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    if ( !v42 )
      v106 = &v162;
    v60 = *v106;
    v61 = v59;
LABEL_210:
    AliasedEndpointCharacteristics = 0;
    v12 = this;
    goto LABEL_211;
  }
  v120 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  IsConnectorModeSupported = CEndpointCharacteristics::IsConnectorModeSupported(v15, v56, &v120);
  v63 = (int)v122;
  if ( IsConnectorModeSupported )
  {
    v59 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v60 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v61 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  else
  {
    AliasedEndpointCharacteristics = -2004287449;
  }
LABEL_212:
  if ( v12 != (CVADServer *)-304LL )
    *((GUID *)v12 + 19) = v61;
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_240;
  v120 = v60;
  *(GUID *)v163 = v59;
  v107 = v63;
  v108 = v124;
  v109 = InitializeStreamAndModeDescriptors(
           v15,
           v124,
           a5,
           v107,
           v56,
           v163,
           &v120,
           (_QWORD *)v12 + 22,
           (_QWORD *)v12 + 23);
  AliasedEndpointCharacteristics = v109;
  if ( v109 < 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        35LL,
        &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
        (unsigned int)v109);
    }
    goto LABEL_240;
  }
  if ( v108 == AUDCLNT_SHAREMODE_EXCLUSIVE
    && ((unsigned int)IsExclusiveModeDisabled(*((const unsigned __int16 **)v12 + 28))
     || !(*(unsigned int (__fastcall **)(struct IAudioProcess *, _QWORD, __int64))(*(_QWORD *)v127 + 128LL))(
           v127,
           *v129,
           1LL)) )
  {
    AliasedEndpointCharacteristics = -2004287474;
    goto LABEL_240;
  }
  v110 = Src;
  v111 = *((unsigned __int16 *)Src + 8);
  v112 = CoTaskMemAlloc(v111 + 18);
  v113 = v112;
  if ( v112 )
  {
    memcpy_0(v112, v110, v111 + 18);
    AliasedEndpointCharacteristics = 0;
  }
  else
  {
    AliasedEndpointCharacteristics = -2147024882;
  }
  *((_QWORD *)this + 24) = v113;
  if ( AliasedEndpointCharacteristics < 0 )
  {
    if ( WPP_GLOBAL_Control == (TraceLoggingHProvider)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      v12 = this;
    }
    else
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        36LL,
        &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
        (unsigned int)AliasedEndpointCharacteristics);
      v12 = this;
    }
    goto LABEL_240;
  }
  v12 = this;
  *((_DWORD *)this + 68) = v108;
  *((_DWORD *)this + 50) = 1;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids);
  }
LABEL_246:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v12 + 232));
  if ( g_u32AEWMILogLevel >= 3 )
  {
    v132 = 0x600000050LL;
    v133 = 0LL;
    v134 = 0LL;
    v136 = 0;
    v137 = 0x20000;
    v135 = AEWMIGUID_PERFORMANCE;
    v138 = 0LL;
    v139 = 0LL;
    v140 = 0LL;
    v141 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, &v132);
  }
  if ( AliasedEndpointCharacteristics < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      38LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)AliasedEndpointCharacteristics);
  }
  if ( v16 )
    ((void (__fastcall *)(struct IMMDevice *))v16->lpVtbl->Release)(v16);
  if ( v15 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)AliasedEndpointCharacteristics;
}
