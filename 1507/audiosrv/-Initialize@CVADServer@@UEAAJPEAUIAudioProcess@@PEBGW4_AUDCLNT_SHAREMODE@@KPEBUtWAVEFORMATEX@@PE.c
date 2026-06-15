/*
 * XREFs of ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800153A0
 * Callers:
 *     AudioServerInitialize @ 0x18000A980 (AudioServerInitialize.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?GetProcessId@CProcess@@UEAAKXZ @ 0x180010DD0 (-GetProcessId@CProcess@@UEAAKXZ.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z @ 0x1800163D0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KKPEAPEAG@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180017740 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180017928 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001ED50 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18001FA00 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAU_GUID@@444@Z @ 0x180020690 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180022A10 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800307FC (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180034BE8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_SD @ 0x18006BA28 (WPP_SF_SD.c)
 *     ?ClearMixFormats@CPolicyConfig@@SAJPEBG@Z @ 0x180084E40 (-ClearMixFormats@CPolicyConfig@@SAJPEBG@Z.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEBGPEBUtWAVEFORMATEX@@PEAPEAU1@H@Z @ 0x18008A904 (-GetAcceptableSPDIFTypeForDevice@@YAJPEBGPEBUtWAVEFORMATEX@@PEAPEAU1@H@Z.c)
 *     ?InitializeEngine@CVADServer@@IEAAJPEAUIAudioProcess@@PEBGW4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@U_GUID@@5W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008AD3C (-InitializeEngine@CVADServer@@IEAAJPEAUIAudioProcess@@PEBGW4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT.c)
 *     ?IsExclusiveModeDisabled@@YAHPEBG@Z @ 0x18008B42C (-IsExclusiveModeDisabled@@YAHPEBG@Z.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x18008B4BC (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?IsSPDIFEndpoint@@YAHPEBG@Z @ 0x18008BB34 (-IsSPDIFEndpoint@@YAHPEBG@Z.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008BC58 (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall CVADServer::Initialize(
        CVADServer *this,
        struct IAudioProcess *a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        const struct tWAVEFORMATEX *Src,
        const struct _GUID *a7,
        unsigned int a8,
        struct VadServerSettings *a9,
        unsigned __int16 **a10)
{
  int AliasedEndpointCharacteristics; // r14d
  CEndpointCharacteristics *v14; // rdi
  struct IMMDevice *v15; // rsi
  CEndpointCharacteristicsCache *v16; // rcx
  __int64 v17; // rcx
  struct tWAVEFORMATEX *v18; // rdx
  char **v19; // r8
  __int64 v20; // rbx
  __int64 v21; // r15
  char *v22; // rax
  unsigned __int64 v23; // r9
  char *v24; // rcx
  __int64 v25; // rax
  char **v26; // r15
  const unsigned __int16 *v27; // rdx
  char *v28; // rax
  unsigned __int64 v29; // r8
  char *v30; // rcx
  __int64 (__fastcall *v31)(CProcess *); // rbx
  int ProcessId; // eax
  int v33; // eax
  struct VadServerSettings *v34; // rdx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v35; // edx
  void (__fastcall ***v36)(_QWORD, GUID *, __int128 *); // r14
  __int64 v37; // rbx
  void (__fastcall ***v38)(_QWORD, GUID *, LPVOID *); // r14
  LPVOID v39; // rbx
  BOOL v40; // r14d
  __int64 v41; // r15
  char *v42; // rax
  int v43; // r15d
  int v44; // ebx
  unsigned int v45; // r14d
  struct tWAVEFORMATEX *v46; // rcx
  const struct tWAVEFORMATEX *v47; // r15
  __int128 v48; // xmm6
  __int128 v49; // xmm7
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // r9
  int v53; // r9d
  struct IAudioProcess *v54; // rbx
  int v55; // eax
  unsigned int v56; // eax
  struct tWAVEFORMATEX **v57; // rdx
  __int64 cbSize; // rbx
  void *v59; // rax
  void *v60; // r15
  int v62; // [rsp+48h] [rbp-160h]
  int v63; // [rsp+48h] [rbp-160h]
  unsigned int v64; // [rsp+60h] [rbp-148h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-140h] BYREF
  struct tWAVEFORMATEX *v66[2]; // [rsp+70h] [rbp-138h] BYREF
  __int128 v67; // [rsp+80h] [rbp-128h] BYREF
  int v68; // [rsp+90h] [rbp-118h] BYREF
  CEndpointCharacteristics *v69; // [rsp+98h] [rbp-110h] BYREF
  struct tWAVEFORMATEX *v70; // [rsp+A0h] [rbp-108h] BYREF
  int v71; // [rsp+A8h] [rbp-100h]
  __int64 v72; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v73; // [rsp+B8h] [rbp-F0h]
  __int64 v74; // [rsp+C0h] [rbp-E8h]
  __int128 v75; // [rsp+C8h] [rbp-E0h]
  int v76; // [rsp+D8h] [rbp-D0h]
  int v77; // [rsp+DCh] [rbp-CCh]
  __int64 v78; // [rsp+E0h] [rbp-C8h]
  __int64 v79; // [rsp+E8h] [rbp-C0h]
  __int64 v80; // [rsp+F0h] [rbp-B8h]
  __int64 v81; // [rsp+F8h] [rbp-B0h]
  struct IMMDevice *v82; // [rsp+100h] [rbp-A8h]
  PROPVARIANT pvar; // [rsp+108h] [rbp-A0h] BYREF
  __int64 v84; // [rsp+110h] [rbp-98h]
  __int64 v85; // [rsp+118h] [rbp-90h]
  PROPVARIANT v86[5]; // [rsp+128h] [rbp-80h] BYREF
  unsigned int v87; // [rsp+1B0h] [rbp+8h]

  v86[3] = (PROPVARIANT)-2LL;
  AliasedEndpointCharacteristics = 0;
  v70 = 0LL;
  v14 = 0LL;
  v69 = 0LL;
  v15 = 0LL;
  v82 = 0LL;
  if ( g_u32AEWMILogLevel >= 3 )
  {
    v72 = 0x500000050LL;
    v73 = 0LL;
    v74 = 0LL;
    v76 = 0;
    v79 = 0LL;
    v77 = 0x20000;
    v75 = AEWMIGUID_PERFORMANCE;
    v78 = 0LL;
    v80 = 0LL;
    v81 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, &v72);
  }
  *a10 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  if ( *((_DWORD *)this + 54) )
  {
    AliasedEndpointCharacteristics = -2004287486;
LABEL_145:
    v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    goto LABEL_146;
  }
  if ( a4 > 1 )
    goto LABEL_145;
  AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(v16, a3, &v69);
  if ( AliasedEndpointCharacteristics < 0 )
  {
    v14 = v69;
    goto LABEL_145;
  }
  pv = 0LL;
  v14 = v69;
  AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)v69 + 2) + 40LL))(
                                     *((_QWORD *)v69 + 2),
                                     &pv);
  if ( AliasedEndpointCharacteristics < 0 )
  {
    CoTaskMemFree(pv);
    v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_146:
    if ( *a10 )
    {
      operator delete(*a10);
      *a10 = 0LL;
      v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    }
    if ( (struct _GUID *)v17 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v17 + 28) & 0x100) != 0
      && *(_BYTE *)(v17 + 25) >= 4u )
    {
      WPP_SF_SD(
        *(_QWORD *)(v17 + 16),
        41,
        (unsigned int)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
        *((_QWORD *)this + 30),
        AliasedEndpointCharacteristics);
    }
    goto LABEL_152;
  }
  v18 = (struct tWAVEFORMATEX *)pv;
  v66[0] = (struct tWAVEFORMATEX *)pv;
  v19 = (char **)((char *)this + 240);
  v20 = -1LL;
  if ( !pv )
    goto LABEL_22;
  v21 = -1LL;
  do
    ++v21;
  while ( *((_WORD *)pv + v21) );
  if ( (_DWORD)v21 )
  {
    v22 = *v19;
    v64 = *((_DWORD *)*v19 - 4);
    v23 = ((_BYTE *)pv - v22) >> 1;
    *(_QWORD *)&v67 = v23;
    if ( ((1 - *((_DWORD *)v22 - 2)) | (*((_DWORD *)v22 - 3) - (int)v21)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((char *)this + 240, (unsigned int)v21);
      v18 = v66[0];
      v19 = (char **)((char *)this + 240);
      v23 = v67;
    }
    v24 = *v19;
    v66[0] = (struct tWAVEFORMATEX *)(2LL * (int)v21);
    if ( v23 > v64 )
      memcpy_s(v24, 2LL * (int)v21, v18, (const rsize_t)v66[0]);
    else
      memmove_s(v24, 2LL * (int)v21, &v24[2 * v23], (const rsize_t)v66[0]);
    if ( (int)v21 < 0 || (v25 = *((_QWORD *)this + 30), (int)v21 > *(_DWORD *)(v25 - 12)) )
      ATL::AtlThrowImpl(-2147024809);
    *(_DWORD *)(v25 - 16) = v21;
    *(WORD *)((char *)&v66[0]->wFormatTag + *((_QWORD *)this + 30)) = 0;
  }
  else
  {
LABEL_22:
    ATL::CSimpleStringT<unsigned short,0>::Empty((char *)this + 240);
  }
  v26 = (char **)((char *)this + 232);
  v27 = a3;
  if ( !a3 )
    goto LABEL_35;
  do
    ++v20;
  while ( a3[v20] );
  if ( (_DWORD)v20 )
  {
    v28 = *v26;
    v64 = *((_DWORD *)*v26 - 4);
    v29 = ((char *)a3 - v28) >> 1;
    v66[0] = (struct tWAVEFORMATEX *)v29;
    if ( ((1 - *((_DWORD *)v28 - 2)) | (*((_DWORD *)v28 - 3) - (int)v20)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((char *)this + 232, (unsigned int)v20);
      v27 = a3;
      v29 = (unsigned __int64)v66[0];
    }
    v30 = *v26;
    v66[0] = (struct tWAVEFORMATEX *)(2LL * (int)v20);
    if ( v29 > v64 )
      memcpy_s(v30, 2LL * (int)v20, v27, (const rsize_t)v66[0]);
    else
      memmove_s(v30, 2LL * (int)v20, &v30[2 * v29], (const rsize_t)v66[0]);
    if ( (int)v20 < 0 || (int)v20 > *((_DWORD *)*v26 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)*v26 - 4) = v20;
    *(WORD *)((char *)&v66[0]->wFormatTag + (unsigned __int64)*v26) = 0;
  }
  else
  {
LABEL_35:
    ATL::CSimpleStringT<unsigned short,0>::Empty((char *)this + 232);
  }
  CoTaskMemFree(pv);
  v31 = *(__int64 (__fastcall **)(CProcess *))(*(_QWORD *)a2 + 40LL);
  if ( v31 == CProcess::GetProcessId )
    ProcessId = CProcess::GetProcessId(a2);
  else
    ProcessId = v31(a2);
  *((_DWORD *)this + 16) = ProcessId;
  AliasedEndpointCharacteristics = 0;
  if ( !g_PolicyManager )
  {
    AliasedEndpointCharacteristics = -2147418113;
    goto LABEL_145;
  }
  v33 = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 64LL))(
          g_PolicyManager,
          *(unsigned int *)a9);
  v34 = a9;
  if ( !v33
    || !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a9 + 1)) )
  {
    AliasedEndpointCharacteristics = -2147024809;
  }
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_145;
  *((_OWORD *)this + 19) = *(_OWORD *)v34;
  *((_DWORD *)this + 80) = *((_DWORD *)v34 + 4);
  AliasedEndpointCharacteristics = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, struct IAudioProcess *, _QWORD))(*(_QWORD *)g_PolicyManager + 128LL))(
                                     g_PolicyManager,
                                     a2,
                                     *((_QWORD *)this + 30));
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_145;
  AliasedEndpointCharacteristics = ValidateWaveFormatEx(Src);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_145;
  if ( Src->nChannels > 2u && ((Src->wFormatTag - 1) & 0xFFFD) == 0 )
  {
    AliasedEndpointCharacteristics = -2147024809;
    goto LABEL_145;
  }
  AliasedEndpointCharacteristics = CVADServer::InitializePolicy(this, a2, a7, a5, a8, a10);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_145;
  if ( *((_DWORD *)v14 + 93) )
    v87 = 1;
  else
    v87 = HIWORD(a5) & 2;
  v15 = (struct IMMDevice *)*((_QWORD *)v14 + 2);
  v82 = v15;
  ((void (__fastcall *)(struct IMMDevice *))v15->lpVtbl->AddRef)(v15);
  v68 = 0;
  v36 = (void (__fastcall ***)(_QWORD, GUID *, __int128 *))*((_QWORD *)v14 + 2);
  v37 = 0LL;
  *(_QWORD *)&v67 = 0LL;
  if ( v36 )
  {
    (**v36)(v36, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &v67);
    v37 = v67;
  }
  if ( v37 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 88LL))(v37, &v68);
    v37 = v67;
  }
  v71 = v68;
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  v64 = 0;
  v38 = (void (__fastcall ***)(_QWORD, GUID *, LPVOID *))*((_QWORD *)v14 + 2);
  v39 = 0LL;
  pv = 0LL;
  if ( v38 )
  {
    (**v38)(v38, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &pv);
    v39 = pv;
  }
  if ( v39 )
  {
    (*(void (__fastcall **)(LPVOID, unsigned int *))(*(_QWORD *)v39 + 88LL))(v39, &v64);
    v39 = pv;
  }
  if ( !v64 )
  {
    if ( *((_DWORD *)v14 + 93) )
      goto LABEL_76;
    v40 = 1;
    v41 = *((_QWORD *)v14 + 7);
    if ( !v41 )
      goto LABEL_72;
    pvar = 0LL;
    v84 = 0LL;
    v85 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v41 + 40LL))(
           v41,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pvar) >= 0
      && (_WORD)pvar == 19 )
    {
      v40 = v84 == 0;
    }
    PropVariantClear(&pvar);
    v39 = pv;
    v42 = (char *)v14 + 128;
    if ( v40 )
LABEL_72:
      v42 = (char *)v14 + 64;
    if ( *((_DWORD *)v42 + 2) <= 1u )
      goto LABEL_76;
    if ( !(unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(v14) )
    {
      v39 = pv;
LABEL_76:
      v43 = 0;
      goto LABEL_81;
    }
  }
  v43 = 1;
  memset(v86, 0, 24);
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)v14 + 4) + 40LL))(
         *((_QWORD *)v14 + 4),
         &PKEY_Endpoint_HWAudioEngine_Loopback_ConnectorId,
         v86) < 0
    || LOWORD(v86[0]) != 19 )
  {
    v43 = 0;
  }
  PropVariantClear(v86);
  v39 = pv;
LABEL_81:
  if ( v39 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v39 + 16LL))(v39);
  if ( (a5 & 0x400000) != 0 )
  {
    v44 = 3;
    v45 = a4;
  }
  else if ( v43 && (a5 & 0x20000) != 0 )
  {
    v44 = 2;
    v45 = a4;
  }
  else
  {
    v45 = a4;
    if ( a4 == 1 )
    {
      v46 = 0LL;
      v66[0] = 0LL;
      if ( v71 )
      {
        v47 = Src;
        if ( !IsFormatSupportedByHwAudioEngine(v15, v35, Src, v66) )
        {
          CoTaskMemFree(v66[0]);
          v44 = a4;
          goto LABEL_96;
        }
        v46 = v66[0];
      }
      CoTaskMemFree(v46);
    }
    v44 = ((unsigned __int8)~(_BYTE)a5 >> 1) & 1;
  }
  v47 = Src;
LABEL_96:
  AliasedEndpointCharacteristics = DeriveAudioProcessingModeConfiguration(
                                     *((unsigned int *)this + 76),
                                     *((unsigned int *)this + 78),
                                     v14,
                                     v87,
                                     v45,
                                     v44,
                                     0,
                                     &v67,
                                     v66,
                                     (char *)this + 324,
                                     0LL);
  if ( AliasedEndpointCharacteristics < 0 )
    goto LABEL_145;
  v48 = *(_OWORD *)v66;
  v49 = v67;
  v50 = InitializeStreamAndModeDescriptors(v14, a4, a5, v87, v44, &v67, v66, (char *)this + 176, (char *)this + 184);
  AliasedEndpointCharacteristics = v50;
  if ( v50 < 0 )
  {
    v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
      goto LABEL_146;
    }
    v51 = 35LL;
    goto LABEL_102;
  }
  if ( g_UseNewGraphBuilder )
  {
    v54 = a2;
  }
  else
  {
    if ( !(unsigned int)IsSPDIFFormat(v47) || !(unsigned int)IsSPDIFEndpoint(*((const unsigned __int16 **)this + 30)) )
    {
      *(_OWORD *)v66 = v48;
      v67 = v49;
      v63 = v44;
      v54 = a2;
      v55 = CVADServer::InitializeEngine(this, a2, *((_QWORD *)this + 30), v87, a4, a5, v47, &v67, v66, v63);
      AliasedEndpointCharacteristics = v55;
      if ( v55 == -2005139372 )
      {
        CPolicyConfig::ClearMixFormats(*((const unsigned __int16 **)this + 30));
      }
      else if ( v55 >= 0 )
      {
        goto LABEL_122;
      }
      v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
      {
        goto LABEL_146;
      }
      v51 = 37LL;
      v52 = (unsigned int)AliasedEndpointCharacteristics;
      goto LABEL_103;
    }
    if ( GetAcceptableSPDIFTypeForDevice(*((const unsigned __int16 **)this + 30), v47, &v70, v53) )
    {
      AliasedEndpointCharacteristics = -2004287480;
      goto LABEL_145;
    }
    *(_OWORD *)v66 = v48;
    v67 = v49;
    v62 = v44;
    v54 = a2;
    v50 = CVADServer::InitializeEngine(this, a2, *((_QWORD *)this + 30), v87, a4, a5, v70, &v67, v66, v62);
    AliasedEndpointCharacteristics = v50;
    if ( v50 < 0 )
    {
      v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
        || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) == 0
        || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
      {
        goto LABEL_146;
      }
      v51 = 36LL;
LABEL_102:
      v52 = (unsigned int)v50;
LABEL_103:
      WPP_SF_D(*(_QWORD *)(v17 + 16), v51, &WPP_1ce008ef94d310117402048c610b448c_Traceguids, v52);
      goto LABEL_145;
    }
  }
LABEL_122:
  v56 = a4;
  if ( a4 == 1 )
  {
    if ( (unsigned int)IsExclusiveModeDisabled(*((const unsigned __int16 **)this + 30))
      || !(*(unsigned int (__fastcall **)(struct IAudioProcess *, _QWORD, __int64))(*(_QWORD *)v54 + 128LL))(
            a2,
            *(unsigned int *)a9,
            1LL) )
    {
      AliasedEndpointCharacteristics = -2004287474;
      goto LABEL_145;
    }
    v56 = 1;
  }
  if ( g_UseNewGraphBuilder )
  {
    cbSize = v47->cbSize;
    v59 = CoTaskMemAlloc(cbSize + 18);
    v60 = v59;
    if ( v59 )
    {
      memcpy_0(v59, Src, cbSize + 18);
      AliasedEndpointCharacteristics = 0;
    }
    else
    {
      AliasedEndpointCharacteristics = -2147024882;
    }
    *((_QWORD *)this + 26) = v60;
  }
  else
  {
    v57 = (struct tWAVEFORMATEX **)((char *)this + 208);
    if ( v56 )
      AliasedEndpointCharacteristics = CloneWaveFormat(*((const struct tWAVEFORMATEX **)this + 25), v57);
    else
      AliasedEndpointCharacteristics = CloneWaveFormat(v47, v57);
  }
  if ( AliasedEndpointCharacteristics < 0 )
  {
    v17 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) < 4u )
    {
      goto LABEL_146;
    }
    v51 = 38LL;
    v52 = (unsigned int)AliasedEndpointCharacteristics;
    goto LABEL_103;
  }
  *((_DWORD *)this + 72) = a4;
  *((_DWORD *)this + 54) = 1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x27u,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids);
  }
LABEL_152:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  if ( v70 )
    CoTaskMemFree(v70);
  if ( g_u32AEWMILogLevel >= 3 )
  {
    v72 = 0x600000050LL;
    v73 = 0LL;
    v74 = 0LL;
    v76 = 0;
    v77 = 0x20000;
    v75 = AEWMIGUID_PERFORMANCE;
    v78 = 0LL;
    v79 = 0LL;
    v80 = 0LL;
    v81 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, &v72);
  }
  if ( AliasedEndpointCharacteristics < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      40LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      (unsigned int)AliasedEndpointCharacteristics);
  }
  if ( v15 )
    ((void (__fastcall *)(struct IMMDevice *))v15->lpVtbl->Release)(v15);
  if ( v14 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)AliasedEndpointCharacteristics;
}
