/*
 * XREFs of ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x18000AB50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800038A4 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800039E4 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180003B80 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x18000C060 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCVADServer@@@Z @ 0x18000D628 (-AddHead@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAPEAU__POSI.c)
 *     ??1?$CComPtr@VCEndpointCharacteristics@@@ATL@@QEAA@XZ @ 0x18000D8D0 (--1-$CComPtr@VCEndpointCharacteristics@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x18000D90C (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180012BE0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180012CA0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180017B24 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001A650 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18001B214 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18001C9C4 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18001DAE0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18002765C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _invalid_parameter_noinfo @ 0x180036CBA (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18004EF3C (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     WPP_SF_SD @ 0x180059B60 (WPP_SF_SD.c)
 *     ?IsExclusiveModeDisabled@@YAHPEBG@Z @ 0x1800717B4 (-IsExclusiveModeDisabled@@YAHPEBG@Z.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x180071844 (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180071DFC (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 __fastcall CVADServer::Initialize(
        CVADServer *this,
        struct IAudioProcess *a2,
        char *a3,
        unsigned int a4,
        unsigned int a5,
        struct tWAVEFORMATEX *a6,
        struct _GUID *a7,
        unsigned int a8,
        struct VadServerSettings *a9,
        unsigned __int16 **a10)
{
  CVADServer *v12; // r14
  struct _GUID *v13; // r13
  int v14; // esi
  char *v15; // rdx
  CAudioSession *v16; // rcx
  const void *v17; // r14
  char **v18; // r12
  __int64 v19; // rbx
  __int64 v20; // rdi
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // rsi
  char *v23; // rcx
  __int64 v24; // rsi
  char **v25; // rsi
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rdi
  char *v28; // rcx
  __int64 v29; // rdi
  struct IAudioProcess *v30; // rdi
  struct VadServerSettings *v31; // r15
  const struct tWAVEFORMATEX *v32; // rbx
  struct IMMDevice *v33; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v34; // edx
  void (__fastcall ***v35)(_QWORD, GUID *, struct _GUID **); // r9
  struct _GUID *v36; // rcx
  unsigned int v37; // esi
  CEndpointCharacteristics *v38; // r15
  void (__fastcall ***v39)(_QWORD, GUID *, CVADServer **); // r9
  CVADServer *v40; // rcx
  BOOL v41; // edi
  __int64 v42; // r9
  char *v43; // rax
  int v44; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v45; // r13d
  enum _AUDCLNT_SHAREMODE v46; // edi
  void *v47; // rcx
  CEndpointCharacteristics *v48; // r15
  unsigned int v49; // esi
  unsigned int v50; // r14d
  GUID v51; // xmm6
  GUID v52; // xmm8
  GUID v53; // xmm7
  unsigned int v54; // ebx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v55; // edi
  BOOL v56; // ebx
  __int64 v57; // rcx
  char *v58; // rax
  int v59; // ecx
  int v60; // edx
  __int64 v61; // r9
  BOOL v62; // ebx
  __int64 v63; // rcx
  char *v64; // rax
  int v65; // ecx
  int v66; // edx
  __int64 v67; // r9
  struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedConnectorModes; // rax
  BOOL v69; // ebx
  __int64 v70; // rcx
  char *v71; // rax
  int v72; // ecx
  int v73; // edx
  __int64 v74; // r9
  GUID *v75; // rax
  BOOL v76; // ebx
  __int64 v77; // rcx
  char *v78; // rax
  int v79; // ecx
  int v80; // edx
  __int64 v81; // r9
  BOOL v82; // ebx
  __int64 v83; // rcx
  char *v84; // rax
  int v85; // ecx
  int v86; // edx
  __int64 v87; // r9
  BOOL v88; // ebx
  __int64 v89; // rcx
  char *v90; // rax
  int v91; // ecx
  int v92; // edx
  __int64 v93; // r9
  bool v94; // zf
  GUID *v95; // rax
  enum _AUDCLNT_SHAREMODE v96; // r15d
  int v97; // eax
  __int64 v98; // rdx
  __int64 v99; // r9
  void *v100; // rsi
  __int64 v101; // rbx
  void *v102; // rax
  bool v103; // r8
  void *v104; // rdi
  __int64 v105; // rcx
  unsigned __int16 **v106; // rdi
  int v108; // [rsp+50h] [rbp-258h]
  LPVOID pv; // [rsp+58h] [rbp-250h] BYREF
  struct _GUID v110; // [rsp+60h] [rbp-248h] BYREF
  CEndpointCharacteristics *v111; // [rsp+70h] [rbp-238h] BYREF
  enum _AUDCLNT_SHAREMODE v112; // [rsp+78h] [rbp-230h]
  struct IAudioProcess *v113; // [rsp+80h] [rbp-228h]
  unsigned int v114; // [rsp+88h] [rbp-220h] BYREF
  int v115; // [rsp+90h] [rbp-218h] BYREF
  CVADServer *v116; // [rsp+98h] [rbp-210h] BYREF
  CVADServer *v117; // [rsp+A0h] [rbp-208h]
  struct _GUID *v118; // [rsp+A8h] [rbp-200h] BYREF
  struct _GUID *v119; // [rsp+B0h] [rbp-1F8h] BYREF
  void *Src; // [rsp+B8h] [rbp-1F0h]
  struct IAudioProcess *v121; // [rsp+C0h] [rbp-1E8h]
  struct VadServerSettings *v122; // [rsp+C8h] [rbp-1E0h]
  unsigned __int16 **v123; // [rsp+D0h] [rbp-1D8h]
  __int64 v124; // [rsp+E0h] [rbp-1C8h] BYREF
  __int64 v125; // [rsp+E8h] [rbp-1C0h]
  __int64 v126; // [rsp+F0h] [rbp-1B8h]
  __int128 v127; // [rsp+F8h] [rbp-1B0h]
  int v128; // [rsp+108h] [rbp-1A0h]
  int v129; // [rsp+10Ch] [rbp-19Ch]
  __int64 v130; // [rsp+110h] [rbp-198h]
  __int64 v131; // [rsp+118h] [rbp-190h]
  __int64 v132; // [rsp+120h] [rbp-188h]
  __int64 v133; // [rsp+128h] [rbp-180h]
  struct IMMDevice *v134; // [rsp+130h] [rbp-178h] BYREF
  PROPVARIANT pvar; // [rsp+138h] [rbp-170h] BYREF
  __int64 v136; // [rsp+140h] [rbp-168h]
  __int64 v137; // [rsp+148h] [rbp-160h]
  PROPVARIANT v138; // [rsp+150h] [rbp-158h] BYREF
  __int64 v139; // [rsp+158h] [rbp-150h]
  __int64 v140; // [rsp+160h] [rbp-148h]
  PROPVARIANT v141; // [rsp+168h] [rbp-140h] BYREF
  __int64 v142; // [rsp+170h] [rbp-138h]
  __int64 v143; // [rsp+178h] [rbp-130h]
  PROPVARIANT v144; // [rsp+180h] [rbp-128h] BYREF
  __int64 v145; // [rsp+188h] [rbp-120h]
  __int64 v146; // [rsp+190h] [rbp-118h]
  PROPVARIANT v147; // [rsp+198h] [rbp-110h] BYREF
  __int64 v148; // [rsp+1A0h] [rbp-108h]
  __int64 v149; // [rsp+1A8h] [rbp-100h]
  PROPVARIANT v150[4]; // [rsp+1B8h] [rbp-F0h] BYREF
  _BYTE v151[24]; // [rsp+1D8h] [rbp-D0h] BYREF
  PROPVARIANT v152[2]; // [rsp+1F0h] [rbp-B8h] BYREF
  __int64 v153; // [rsp+200h] [rbp-A8h]
  PROPVARIANT v154[2]; // [rsp+210h] [rbp-98h] BYREF
  __int64 v155; // [rsp+220h] [rbp-88h]

  v150[3] = (PROPVARIANT)-2LL;
  v112 = a4;
  v121 = a2;
  v12 = this;
  v117 = this;
  v116 = this;
  v113 = a2;
  v114 = a4;
  Src = a6;
  v13 = a7;
  v118 = a7;
  v119 = a7;
  v122 = a9;
  v123 = a10;
  v14 = 0;
  v111 = 0LL;
  v134 = 0LL;
  if ( g_u32AEWMILogLevel >= 4 )
  {
    v124 = 0x40500000050LL;
    v125 = 0LL;
    v126 = 0LL;
    v128 = 0;
    v131 = 0LL;
    v129 = 0x20000;
    v127 = AEWMIGUID_PERFORMANCE;
    v130 = 0LL;
    v132 = 0LL;
    v133 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, &v124);
  }
  *a10 = 0LL;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)v151,
    (struct _RTL_CRITICAL_SECTION *)((char *)v12 + 232),
    (bool)a3);
  if ( *((_DWORD *)v12 + 50) )
  {
    v14 = -2004287486;
LABEL_244:
    v16 = WPP_GLOBAL_Control;
    goto LABEL_245;
  }
  if ( a4 > 1 )
    goto LABEL_244;
  v14 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, char *, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
          g_pEndpointCharacteristicsCache,
          a3,
          &v111);
  if ( v14 < 0 )
    goto LABEL_244;
  pv = 0LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)v111 + 2) + 40LL))(*((_QWORD *)v111 + 2), &pv);
  v108 = v14;
  if ( v14 < 0 )
  {
    CoTaskMemFree(pv);
    v16 = WPP_GLOBAL_Control;
LABEL_245:
    v106 = v123;
    if ( *v123 )
    {
      operator delete(*v123);
      *v106 = 0LL;
      v16 = WPP_GLOBAL_Control;
    }
    if ( v16 != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)v16 + 7) & 0x100) != 0
      && *((_BYTE *)v16 + 25) >= 4u )
    {
      WPP_SF_SD(
        *((_QWORD *)v16 + 2),
        32,
        (unsigned int)&WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
        *((_QWORD *)v12 + 28),
        v14);
    }
    goto LABEL_251;
  }
  v17 = pv;
  v18 = (char **)((char *)v117 + 224);
  v19 = -1LL;
  if ( !pv )
    goto LABEL_28;
  v20 = -1LL;
  do
    ++v20;
  while ( *((_WORD *)pv + v20) );
  if ( !(_DWORD)v20 )
  {
LABEL_28:
    ATL::CSimpleStringT<unsigned short,0>::Empty((char *)v117 + 224);
    goto LABEL_29;
  }
  v21 = *((unsigned int *)*v18 - 4);
  v22 = ((_BYTE *)pv - *v18) >> 1;
  if ( ((1 - *((_DWORD *)*v18 - 2)) | (*((_DWORD *)*v18 - 3) - (int)v20)) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((char *)v117 + 224, (unsigned int)v20);
  v23 = *v18;
  if ( v22 <= v21 )
  {
    v15 = &v23[2 * v22];
    v24 = 2LL * (int)v20;
    if ( !v24 )
      goto LABEL_24;
    if ( v23 && v15 )
    {
      memmove(v23, v15, 2LL * (int)v20);
      goto LABEL_24;
    }
LABEL_22:
    *(_DWORD *)_o__errno(v23, v15) = 22;
    invalid_parameter_noinfo();
    goto LABEL_24;
  }
  v24 = 2LL * (int)v20;
  if ( !v24 )
    goto LABEL_24;
  if ( !v23 )
    goto LABEL_22;
  memcpy_0(v23, v17, 2LL * (int)v20);
LABEL_24:
  if ( (int)v20 < 0 || (int)v20 > *((_DWORD *)*v18 - 3) )
    ATL::AtlThrowImpl(-2147024809);
  *((_DWORD *)*v18 - 4) = v20;
  *(_WORD *)&(*v18)[v24] = 0;
  v13 = v118;
LABEL_29:
  v12 = v117;
  v25 = (char **)((char *)v117 + 216);
  if ( !a3 )
    goto LABEL_47;
  do
    ++v19;
  while ( *(_WORD *)&a3[2 * v19] );
  if ( !(_DWORD)v19 )
  {
LABEL_47:
    ATL::CSimpleStringT<unsigned short,0>::Empty((char *)v117 + 216);
    goto LABEL_48;
  }
  v26 = *((unsigned int *)*v25 - 4);
  v27 = (a3 - *v25) >> 1;
  if ( ((1 - *((_DWORD *)*v25 - 2)) | (*((_DWORD *)*v25 - 3) - (int)v19)) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((char *)v117 + 216, (unsigned int)v19);
  v28 = *v25;
  if ( v27 <= v26 )
  {
    v15 = &v28[2 * v27];
    v29 = 2LL * (int)v19;
    if ( !v29 )
      goto LABEL_43;
    if ( v28 && v15 )
    {
      memmove(v28, v15, 2LL * (int)v19);
      goto LABEL_43;
    }
LABEL_41:
    *(_DWORD *)_o__errno(v28, v15) = 22;
    invalid_parameter_noinfo();
    goto LABEL_43;
  }
  v29 = 2LL * (int)v19;
  if ( !v29 )
    goto LABEL_43;
  if ( !v28 )
    goto LABEL_41;
  memcpy_0(v28, a3, 2LL * (int)v19);
LABEL_43:
  if ( (int)v19 < 0 || (int)v19 > *((_DWORD *)*v25 - 3) )
    ATL::AtlThrowImpl(-2147024809);
  *((_DWORD *)*v25 - 4) = v19;
  *(_WORD *)&(*v25)[v29] = 0;
  v12 = v117;
LABEL_48:
  CoTaskMemFree(pv);
  v14 = v108;
  v30 = v121;
  v31 = v122;
  v32 = (const struct tWAVEFORMATEX *)Src;
  if ( v108 < 0 )
    goto LABEL_244;
  *((_DWORD *)v12 + 16) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v121 + 40LL))(v121);
  v14 = 0;
  if ( !g_PolicyManager )
  {
    v14 = -2147418113;
    goto LABEL_244;
  }
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 64LL))(
          g_PolicyManager,
          *(unsigned int *)v31)
    || !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)v31 + 1)) )
  {
    v14 = -2147024809;
  }
  if ( v14 < 0 )
    goto LABEL_244;
  *(_OWORD *)((char *)v12 + 284) = *(_OWORD *)v31;
  *(_QWORD *)((char *)v12 + 300) = *((_QWORD *)v31 + 2);
  *((_DWORD *)v12 + 77) = *((_DWORD *)v31 + 6);
  v14 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, struct IAudioProcess *, _QWORD))(*(_QWORD *)g_PolicyManager
                                                                                                + 120LL))(
          g_PolicyManager,
          v30,
          *((_QWORD *)v12 + 28));
  if ( v14 < 0 )
    goto LABEL_244;
  v14 = ValidateWaveFormatEx(v32);
  if ( v14 < 0 )
    goto LABEL_244;
  if ( v32->nChannels > 2u && ((v32->wFormatTag - 1) & 0xFFFD) == 0 )
  {
    v14 = -2147024809;
    goto LABEL_244;
  }
  v14 = CVADServer::InitializePolicy(v12, v30, v13, a5, a8, v123);
  if ( v14 < 0 )
    goto LABEL_244;
  if ( *((_DWORD *)v111 + 93) )
    LODWORD(v113) = 1;
  else
    LODWORD(v113) = HIWORD(a5) & 2;
  v33 = (struct IMMDevice *)*((_QWORD *)v111 + 2);
  v134 = v33;
  ((void (__fastcall *)(struct IMMDevice *))v33->lpVtbl->AddRef)(v33);
  v114 = 0;
  v35 = (void (__fastcall ***)(_QWORD, GUID *, struct _GUID **))*((_QWORD *)v111 + 2);
  v36 = 0LL;
  v118 = 0LL;
  if ( v35 )
  {
    (**v35)(v35, &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990, &v118);
    v36 = v118;
  }
  if ( v36 )
  {
    (*(void (__fastcall **)(struct _GUID *, unsigned int *))(*(_QWORD *)&v36->Data1 + 88LL))(v36, &v114);
    v36 = v118;
  }
  v37 = v114;
  if ( v36 )
    (*(void (__fastcall **)(struct _GUID *))(*(_QWORD *)&v36->Data1 + 16LL))(v36);
  v38 = v111;
  v115 = 0;
  v39 = (void (__fastcall ***)(_QWORD, GUID *, CVADServer **))*((_QWORD *)v111 + 2);
  v40 = 0LL;
  v116 = 0LL;
  if ( v39 )
  {
    (**v39)(v39, &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990, &v116);
    v40 = v116;
  }
  if ( v40 )
  {
    (*(void (__fastcall **)(CVADServer *, int *))(*(_QWORD *)v40 + 88LL))(v40, &v115);
    v40 = v116;
  }
  if ( !v115 )
  {
    if ( *((_DWORD *)v38 + 93) )
      goto LABEL_85;
    v41 = 1;
    v42 = *((_QWORD *)v38 + 7);
    if ( !v42 )
      goto LABEL_81;
    pvar = 0LL;
    v136 = 0LL;
    v137 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v42 + 40LL))(
           v42,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v41 = v136 == 0;
    }
    PropVariantClear(&pvar);
    v40 = v116;
    v43 = (char *)v38 + 128;
    if ( v41 )
LABEL_81:
      v43 = (char *)v38 + 64;
    if ( *((_DWORD *)v43 + 2) <= 1u )
      goto LABEL_85;
    if ( !(unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(v38) )
    {
      v40 = v116;
LABEL_85:
      v44 = 0;
      goto LABEL_90;
    }
  }
  v44 = 1;
  memset(v150, 0, 24);
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v38 + 4) + 40LL))(
         *((_QWORD *)v38 + 4),
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         v150) < 0
    || LOWORD(v150[0]) != 19 )
  {
    v44 = 0;
  }
  PropVariantClear(v150);
  v40 = v116;
LABEL_90:
  if ( v40 )
    (*(void (__fastcall **)(CVADServer *))(*(_QWORD *)v40 + 16LL))(v40);
  if ( (a5 & 0x400000) != 0 )
  {
    v45 = eKeywordDetectorConnector;
    v46 = v112;
    goto LABEL_104;
  }
  if ( v44 && (a5 & 0x20000) != 0 )
  {
    v45 = eLoopbackConnector;
    v46 = v112;
    goto LABEL_104;
  }
  v46 = v112;
  if ( v112 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    v47 = 0LL;
    pv = 0LL;
    if ( v37 )
    {
      if ( !IsFormatSupportedByHwAudioEngine(v33, v34, (const struct tWAVEFORMATEX *)Src, (struct tWAVEFORMATEX **)&pv) )
      {
        CoTaskMemFree(pv);
        v45 = v46;
        goto LABEL_104;
      }
      v47 = pv;
    }
    CoTaskMemFree(v47);
  }
  v45 = ((unsigned __int8)~(_BYTE)a5 >> 1) & 1;
LABEL_104:
  v48 = v111;
  v119 = (struct _GUID *)((char *)v12 + 312);
  v49 = *((_DWORD *)v12 + 77);
  v50 = *((_DWORD *)v12 + 71);
  pv = 0LL;
  v51 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)v154 = GUID_00000000_0000_0000_0000_000000000000;
  v52 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)v152 = GUID_00000000_0000_0000_0000_000000000000;
  v53 = GUID_00000000_0000_0000_0000_000000000000;
  v110 = GUID_00000000_0000_0000_0000_000000000000;
  if ( v46 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(
      v111,
      v45,
      (struct _GUID *)v154,
      (struct _GUID *)v152,
      &v110);
    v51 = *(GUID *)v154;
    v52 = *(GUID *)v152;
    v53 = v110;
LABEL_216:
    v54 = (unsigned int)v113;
    goto LABEL_217;
  }
  v54 = (unsigned int)v113;
  if ( (_DWORD)v113 == 2 )
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      v111,
      eHostProcessConnector,
      (struct _GUID *)v154,
      (struct _GUID *)v152,
      &v110);
    v51 = *(GUID *)v154;
    v52 = *(GUID *)v152;
    v53 = v110;
  }
  else
  {
    if ( *((_DWORD *)v117 + 73) )
    {
      v110 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      if ( !(unsigned int)CEndpointCharacteristics::IsConnectorModeSupported(v111, v45, &v110) )
      {
        v14 = -2004287449;
        goto LABEL_218;
      }
      v51 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v52 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v53 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      goto LABEL_217;
    }
    v55 = v45;
    if ( v45 == eLoopbackConnector )
      v55 = eHostProcessConnector;
    v110 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    if ( v55 )
      goto LABEL_121;
    v56 = 1;
    v57 = *((_QWORD *)v111 + 7);
    if ( !v57 )
      goto LABEL_121;
    v138 = 0LL;
    v139 = 0LL;
    v140 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v57 + 40LL))(
           v57,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &v138) >= 0
      && (_WORD)v138 == 19 )
    {
      v56 = v139 == 0;
    }
    PropVariantClear(&v138);
    if ( v56 )
LABEL_121:
      v58 = (char *)v48 + 16 * v55 + 64;
    else
      v58 = (char *)v48 + 128;
    v59 = 0;
    v60 = *((_DWORD *)v58 + 2);
    if ( v60 <= 0 )
      goto LABEL_130;
    v61 = *(_QWORD *)v58;
    while ( *(_QWORD *)(v61 + 16LL * v59) != *(_QWORD *)&v110.Data1
         || *(_QWORD *)(v61 + 16LL * v59 + 8) != *(_QWORD *)v110.Data4 )
    {
      if ( ++v59 >= v60 )
        goto LABEL_130;
    }
    if ( v59 == -1 )
    {
LABEL_130:
      v110 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      if ( v55 )
        goto LABEL_137;
      v62 = 1;
      v63 = *((_QWORD *)v48 + 7);
      if ( !v63 )
        goto LABEL_137;
      v141 = 0LL;
      v142 = 0LL;
      v143 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v63 + 40LL))(
             v63,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &v141) >= 0
        && (_WORD)v141 == 19 )
      {
        v62 = v142 == 0;
      }
      PropVariantClear(&v141);
      if ( v62 )
LABEL_137:
        v64 = (char *)v48 + 16 * v55 + 64;
      else
        v64 = (char *)v48 + 128;
      v65 = 0;
      v66 = *((_DWORD *)v64 + 2);
      if ( v66 <= 0 )
        goto LABEL_146;
      v67 = *(_QWORD *)v64;
      while ( *(_QWORD *)(v67 + 16LL * v65) != *(_QWORD *)&v110.Data1
           || *(_QWORD *)(v67 + 16LL * v65 + 8) != *(_QWORD *)v110.Data4 )
      {
        if ( ++v65 >= v66 )
          goto LABEL_146;
      }
      if ( v65 == -1 )
      {
LABEL_146:
        SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(v48, v55);
        v51 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                         SupportedConnectorModes,
                         0LL);
      }
      else
      {
        v51 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      }
    }
    else
    {
      v51 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    }
    *(GUID *)v152 = v51;
    v110 = v51;
    v69 = 1;
    v70 = *((_QWORD *)v48 + 7);
    if ( !v70 )
      goto LABEL_154;
    v144 = 0LL;
    v145 = 0LL;
    v146 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v70 + 40LL))(
           v70,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &v144) >= 0
      && (_WORD)v144 == 19 )
    {
      v69 = v145 == 0;
    }
    PropVariantClear(&v144);
    if ( v69 || v45 == eKeywordDetectorConnector )
LABEL_154:
      v71 = (char *)v48 + 16 * v45 + 208;
    else
      v71 = (char *)v48 + 336;
    v72 = 0;
    v73 = *((_DWORD *)v71 + 2);
    if ( v73 <= 0 )
      goto LABEL_162;
    v74 = *(_QWORD *)v71;
    while ( *(_QWORD *)(v74 + 16LL * v72) != *(_QWORD *)&v110.Data1
         || *(_QWORD *)(v74 + 16LL * v72 + 8) != *(_QWORD *)v110.Data4 )
    {
      if ( ++v72 >= v73 )
        goto LABEL_162;
    }
    v75 = (GUID *)v152;
    if ( v72 == -1 )
LABEL_162:
      v75 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v52 = *v75;
    v53 = v51;
    v54 = (unsigned int)v113;
    if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, _QWORD, LPVOID *))(*(_QWORD *)g_PolicyManager
                                                                                               + 80LL))(
           g_PolicyManager,
           (unsigned int)v113,
           v50,
           v49,
           &pv) >= 0 )
    {
      v14 = 0;
      if ( !*(_DWORD *)pv )
        goto LABEL_218;
      while ( 1 )
      {
        v110 = *(struct _GUID *)(*((_QWORD *)pv + 1) + 16LL * (unsigned int)v14);
        if ( v45 )
          goto LABEL_172;
        v76 = 1;
        v77 = *((_QWORD *)v48 + 7);
        if ( !v77 )
          goto LABEL_172;
        v152[0] = 0LL;
        v152[1] = 0LL;
        v153 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v77 + 40LL))(
               v77,
               &PKEY_AudioEndpoint_Disable_SysFx,
               v152) >= 0
          && LOWORD(v152[0]) == 19 )
        {
          v76 = LODWORD(v152[1]) == 0;
        }
        PropVariantClear(v152);
        if ( v76 )
LABEL_172:
          v78 = (char *)v48 + 16 * v45 + 64;
        else
          v78 = (char *)v48 + 128;
        v79 = 0;
        v80 = *((_DWORD *)v78 + 2);
        if ( v80 > 0 )
        {
          v81 = *(_QWORD *)v78;
          while ( *(_QWORD *)(v81 + 16LL * v79) != *(_QWORD *)&v110.Data1
               || *(_QWORD *)(v81 + 16LL * v79 + 8) != *(_QWORD *)v110.Data4 )
          {
            if ( ++v79 >= v80 )
              goto LABEL_180;
          }
          if ( v79 != -1 )
            break;
        }
LABEL_180:
        v110 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        if ( v45 )
          goto LABEL_187;
        v82 = 1;
        v83 = *((_QWORD *)v48 + 7);
        if ( !v83 )
          goto LABEL_187;
        v154[0] = 0LL;
        v154[1] = 0LL;
        v155 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v83 + 40LL))(
               v83,
               &PKEY_AudioEndpoint_Disable_SysFx,
               v154) >= 0
          && LOWORD(v154[0]) == 19 )
        {
          v82 = LODWORD(v154[1]) == 0;
        }
        PropVariantClear(v154);
        if ( v82 )
LABEL_187:
          v84 = (char *)v48 + 16 * v45 + 64;
        else
          v84 = (char *)v48 + 128;
        v85 = 0;
        v86 = *((_DWORD *)v84 + 2);
        if ( v86 > 0 )
        {
          v87 = *(_QWORD *)v84;
          while ( *(_QWORD *)(v87 + 16LL * v85) != *(_QWORD *)&v110.Data1
               || *(_QWORD *)(v87 + 16LL * v85 + 8) != *(_QWORD *)v110.Data4 )
          {
            if ( ++v85 >= v86 )
              goto LABEL_210;
          }
          if ( v85 != -1 )
          {
            v110 = *(struct _GUID *)(*((_QWORD *)pv + 1) + 16LL * (unsigned int)v14);
            v88 = 1;
            v89 = *((_QWORD *)v48 + 7);
            if ( !v89 )
              goto LABEL_202;
            v147 = 0LL;
            v148 = 0LL;
            v149 = 0LL;
            if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v89 + 40LL))(
                   v89,
                   &PKEY_AudioEndpoint_Disable_SysFx,
                   &v147) >= 0
              && (_WORD)v147 == 19 )
            {
              v88 = v148 == 0;
            }
            PropVariantClear(&v147);
            if ( v88 || v45 == eKeywordDetectorConnector )
LABEL_202:
              v90 = (char *)v48 + 16 * v45 + 208;
            else
              v90 = (char *)v48 + 336;
            v91 = 0;
            v92 = *((_DWORD *)v90 + 2);
            if ( v92 > 0 )
            {
              v93 = *(_QWORD *)v90;
              while ( *(_QWORD *)(v93 + 16LL * v91) != *(_QWORD *)&v110.Data1
                   || *(_QWORD *)(v93 + 16LL * v91 + 8) != *(_QWORD *)v110.Data4 )
              {
                if ( ++v91 >= v92 )
                  goto LABEL_210;
              }
              if ( v91 != -1 )
              {
                v51 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                v52 = *(GUID *)(*((_QWORD *)pv + 1) + 16LL * (unsigned int)v14);
                v53 = v52;
                goto LABEL_216;
              }
            }
          }
        }
LABEL_210:
        if ( (unsigned int)++v14 >= *(_DWORD *)pv )
          goto LABEL_216;
      }
      v51 = *(GUID *)(*((_QWORD *)pv + 1) + 16LL * (unsigned int)v14);
      *(GUID *)v154 = v51;
      v110 = v51;
      v94 = !CEndpointCharacteristics::IsAPOModeSupported(v48, &v110, v45);
      v95 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      if ( !v94 )
        v95 = (GUID *)v154;
      v52 = *v95;
      v53 = v51;
      goto LABEL_216;
    }
  }
LABEL_217:
  v14 = 0;
LABEL_218:
  if ( v119 )
    *v119 = v53;
  v12 = v117;
  if ( v14 < 0 )
    goto LABEL_244;
  v110 = v52;
  *(GUID *)v152 = v51;
  v96 = v112;
  v97 = InitializeStreamAndModeDescriptors(
          v111,
          (unsigned int)v112,
          a5,
          v54,
          v45,
          v152,
          &v110,
          (char *)v117 + 176,
          (char *)v117 + 184);
  v14 = v97;
  if ( v97 < 0 )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_245;
    }
    v98 = 29LL;
    v99 = (unsigned int)v97;
    goto LABEL_226;
  }
  if ( v96 == AUDCLNT_SHAREMODE_EXCLUSIVE
    && ((unsigned int)IsExclusiveModeDisabled(*((const unsigned __int16 **)v12 + 28))
     || !(*(unsigned int (__fastcall **)(struct IAudioProcess *, _QWORD, __int64))(*(_QWORD *)v121 + 136LL))(
           v121,
           *(unsigned int *)v122,
           1LL)) )
  {
    v14 = -2004287474;
    goto LABEL_244;
  }
  v100 = Src;
  v101 = *((unsigned __int16 *)Src + 8);
  v102 = CoTaskMemAlloc(v101 + 18);
  v104 = v102;
  if ( v102 )
  {
    memcpy_0(v102, v100, v101 + 18);
    v14 = 0;
  }
  else
  {
    v14 = -2147024882;
  }
  *((_QWORD *)v12 + 24) = v104;
  if ( v14 < 0 )
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CAudioSession *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_245;
    }
    v98 = 30LL;
    v99 = (unsigned int)v14;
LABEL_226:
    WPP_SF_D(*((_QWORD *)v16 + 2), v98, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids, v99);
    goto LABEL_244;
  }
  *((_DWORD *)v12 + 68) = v96;
  *((_DWORD *)v12 + 50) = 1;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v110, &g_csVadList, v103);
  v119 = (struct _GUID *)v12;
  ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::AddHead(v105, &v119);
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v110);
LABEL_251:
  if ( g_u32AEWMILogLevel >= 4 )
  {
    v124 = 0x40600000050LL;
    v125 = 0LL;
    v126 = 0LL;
    v128 = 0;
    v129 = 0x20000;
    v127 = AEWMIGUID_PERFORMANCE;
    v130 = 0LL;
    v131 = 0LL;
    v132 = 0LL;
    v133 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, &v124);
  }
  if ( v14 < 0 )
    AudSrvTraceLoggingErrorHelper("CVADServer::Initialize", 0x5D7u, v14);
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)v151);
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v134);
  ATL::CComPtr<CEndpointCharacteristics>::~CComPtr<CEndpointCharacteristics>(&v111);
  return (unsigned int)v14;
}
