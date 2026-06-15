/*
 * XREFs of AudioServerIsFormatSupported @ 0x180019680
 * Callers:
 *     AudioServerGetSharedModeEnginePeriod @ 0x180089FA0 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18000E948 (-IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18000E9A0 (-IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18001127C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180013734 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001A800 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x18001B9C0 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x1800210E0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x180029B80 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAU_GUID@@444@Z @ 0x1800317E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800380D0 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x18003A8F4 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003FE88 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800643BC (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180064528 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180080A50 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x180081AB4 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800877C8 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x180088608 (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 *     TemplateEventDescriptor @ 0x18008A638 (TemplateEventDescriptor.c)
 *     Template_zqttq @ 0x18008A654 (Template_zqttq.c)
 *     WPP_SF_dddd @ 0x18008A74C (WPP_SF_dddd.c)
 */

__int64 __fastcall AudioServerIsFormatSupported(
        void *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned __int16 *Src,
        struct tWAVEFORMATEX **a6)
{
  struct tWAVEFORMATEX **v6; // rax
  int v7; // ebx
  __int64 v8; // rcx
  struct IMMDevice *v9; // rsi
  struct CEndpointCharacteristics *v10; // rdi
  int AcceptableSPDIFTypeForDevice; // r12d
  unsigned int v12; // r13d
  __int64 (__fastcall *v13)(CWindowsPolicyManager *__hidden, unsigned int); // r15
  int AliasedEndpointCharacteristics; // eax
  __int64 v15; // rbx
  struct CEndpointCharacteristics *v16; // rax
  struct CEndpointCharacteristics *v17; // r15
  __int64 v18; // r8
  unsigned int *v19; // r13
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v20; // r11d
  struct tWAVEFORMATEX *v21; // r13
  struct _GUID *v22; // r8
  __int128 v23; // xmm1
  bool v24; // zf
  BOOL v25; // r13d
  struct _GUID v26; // xmm6
  GUID v27; // xmm8
  GUID v28; // xmm7
  __int64 v29; // r15
  BOOL v30; // r14d
  char *v31; // rax
  int v32; // edx
  int v33; // ecx
  __int64 v34; // r9
  __int64 v35; // r15
  BOOL v36; // r14d
  char *v37; // rax
  int v38; // edx
  int v39; // ecx
  __int64 v40; // r9
  struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedConnectorModes; // rax
  __int64 v42; // r15
  BOOL v43; // r14d
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v44; // r11d
  char *v45; // rax
  int v46; // edx
  int v47; // ecx
  __int64 v48; // r9
  GUID *v49; // rax
  __int64 (__fastcall *v50)(CWindowsPolicyManager *, BOOL, _QWORD, void **); // rbx
  int v51; // r8d
  int v52; // eax
  unsigned int v53; // ecx
  __int64 v54; // r13
  __int64 v55; // r15
  BOOL v56; // r14d
  char *v57; // rax
  int v58; // edx
  int v59; // ecx
  __int64 v60; // r9
  __int64 v61; // r15
  BOOL v62; // r14d
  char *v63; // rax
  int v64; // edx
  int v65; // ecx
  __int64 v66; // r9
  BOOL v67; // r14d
  __int64 v68; // r15
  char *v69; // rax
  int v70; // edx
  int v71; // ecx
  __int64 v72; // r9
  GUID *v73; // rax
  _DWORD *v74; // r13
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v75; // r8d
  int MixFormatInternal; // eax
  struct tWAVEFORMATEX **v77; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v78; // r8d
  struct tWAVEFORMATEX **v79; // rcx
  struct KSDATAFORMAT_WAVEFORMATEX *v80; // r15
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v81; // edx
  int v82; // eax
  BOOL v83; // r14d
  int v84; // r15d
  __int64 (__fastcall *v85)(CWindowsPolicyManager *__hidden, void *, struct IAudioProcess **); // r12
  int Process; // eax
  unsigned int v87; // r13d
  __int64 (__fastcall *v88)(CProcess *__hidden, unsigned int, enum ResourceType); // r14
  int v89; // eax
  unsigned int v90; // r12d
  __int64 (__fastcall *v91)(CProcess *__hidden, unsigned int, enum ResourceType); // r15
  int v92; // eax
  struct tWAVEFORMATEX **v94; // [rsp+28h] [rbp-E0h]
  struct tWAVEFORMATEX **v95; // [rsp+28h] [rbp-E0h]
  int v96; // [rsp+68h] [rbp-A0h]
  unsigned int v97; // [rsp+68h] [rbp-A0h]
  unsigned int v98; // [rsp+68h] [rbp-A0h]
  struct CEndpointCharacteristics *v99[3]; // [rsp+70h] [rbp-98h] BYREF
  struct KSDATAFORMAT_WAVEFORMATEX *v100; // [rsp+88h] [rbp-80h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v101[2]; // [rsp+90h] [rbp-78h]
  void *v102; // [rsp+98h] [rbp-70h] BYREF
  struct IAudioProcess *v103; // [rsp+A0h] [rbp-68h] BYREF
  _DWORD *v104; // [rsp+A8h] [rbp-60h]
  struct tWAVEFORMATEX **v105[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v106; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v107; // [rsp+D0h] [rbp-38h] BYREF
  LPVOID pv[2]; // [rsp+D8h] [rbp-30h] BYREF
  PROPVARIANT v109; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v110; // [rsp+F0h] [rbp-18h]
  __int64 v111; // [rsp+F8h] [rbp-10h]
  PROPVARIANT pvar; // [rsp+100h] [rbp-8h] BYREF
  __int64 v113; // [rsp+108h] [rbp+0h]
  __int64 v114; // [rsp+110h] [rbp+8h]
  PROPVARIANT v115; // [rsp+118h] [rbp+10h] BYREF
  __int64 v116; // [rsp+120h] [rbp+18h]
  __int64 v117; // [rsp+128h] [rbp+20h]
  PROPVARIANT v118; // [rsp+130h] [rbp+28h] BYREF
  __int64 v119; // [rsp+138h] [rbp+30h]
  __int64 v120; // [rsp+140h] [rbp+38h]
  PROPVARIANT v121; // [rsp+148h] [rbp+40h] BYREF
  __int64 v122; // [rsp+150h] [rbp+48h]
  __int64 v123; // [rsp+158h] [rbp+50h]
  PROPVARIANT v124[2]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v125; // [rsp+178h] [rbp+70h]
  struct _GUID v126; // [rsp+188h] [rbp+80h] BYREF

  v6 = a6;
  v7 = a3;
  v102 = a1;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v104 = a4;
  v96 = a3;
  *(_QWORD *)v101 = a2;
  v105[0] = a6;
  pv[0] = 0LL;
  *(_QWORD *)&v126.Data1 = 0LL;
  v100 = 0LL;
  v106 = 0LL;
  v107 = 0LL;
  v103 = 0LL;
  v99[0] = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
  {
    Template_zqttq(0, (unsigned int)&AudioSrv_IsFormatSupported_Task_Start, a2, *a4, a4[2], a4[4], a4[1]);
    a4 = v104;
    v8 = 0LL;
    v6 = v105[0];
  }
  if ( v7 || v6 )
  {
    AcceptableSPDIFTypeForDevice = 0;
    if ( !g_PolicyManager )
    {
      AcceptableSPDIFTypeForDevice = -2147418113;
      goto LABEL_198;
    }
    v12 = *a4;
    v13 = *(__int64 (__fastcall **)(CWindowsPolicyManager *__hidden, unsigned int))(*(_QWORD *)g_PolicyManager + 64LL);
    if ( v13 == CWindowsPolicyManager::IsValidAudioServerStreamCategory )
    {
      if ( v12 < 0x15 )
        goto LABEL_15;
    }
    else if ( (unsigned int)v13(g_PolicyManager, v12) )
    {
LABEL_13:
      if ( AcceptableSPDIFTypeForDevice < 0 )
        goto LABEL_198;
      v8 = 0LL;
LABEL_15:
      if ( v105[0] )
        *v105[0] = 0LL;
      if ( *Src == 0xFFFE && Src[8] < 0x16u )
      {
        AcceptableSPDIFTypeForDevice = -2147024809;
        goto LABEL_198;
      }
      AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                         g_pEndpointCharacteristicsCache,
                                         *(const unsigned __int16 **)v101,
                                         v99);
      v10 = v99[0];
      AcceptableSPDIFTypeForDevice = AliasedEndpointCharacteristics;
      if ( AliasedEndpointCharacteristics < 0 )
        goto LABEL_198;
      v9 = (struct IMMDevice *)*((_QWORD *)v99[0] + 2);
      ((void (__fastcall *)(struct IMMDevice *))v9->lpVtbl->AddRef)(v9);
      if ( Src[1] > 2u && ((*Src - 1) & 0xFFFD) == 0 )
      {
        AcceptableSPDIFTypeForDevice = -2004287480;
        goto LABEL_207;
      }
      v15 = Src[8];
      v16 = (struct CEndpointCharacteristics *)CoTaskMemAlloc(v15 + 18);
      v99[0] = v16;
      v17 = v16;
      if ( !v16 )
      {
        AcceptableSPDIFTypeForDevice = -2147024882;
        goto LABEL_198;
      }
      memcpy_0(v16, Src, v15 + 18);
      v18 = *(unsigned __int16 *)v17;
      if ( (_WORD)v18 == 0xFFFE )
        v18 = *((unsigned __int16 *)v17 + 12);
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_dddd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          WPP_GLOBAL_Control,
          v18,
          (unsigned __int16)v18,
          *((unsigned __int16 *)v17 + 1),
          *((_DWORD *)v17 + 1),
          *((unsigned __int16 *)v17 + 7));
      }
      v19 = v104;
      v20 = v104[1];
      v101[0] = v20;
      if ( v20 == eOffloadConnector )
      {
        AcceptableSPDIFTypeForDevice = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager + 32LL))(
                                         g_PolicyManager,
                                         v102,
                                         &v103);
        if ( AcceptableSPDIFTypeForDevice >= 0 )
        {
          if ( (*(unsigned int (__fastcall **)(struct IAudioProcess *, _QWORD, _QWORD))(*(_QWORD *)v103 + 128LL))(
                 v103,
                 *v19,
                 0LL) )
          {
            if ( v103 )
            {
              (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v103 + 16LL))(v103);
              v103 = 0LL;
            }
            LODWORD(v94) = v96;
            AcceptableSPDIFTypeForDevice = DeriveAudioProcessingModeConfiguration(*v19, v19[2], v10, 0LL);
            if ( AcceptableSPDIFTypeForDevice >= 0 )
            {
              v23 = *(_OWORD *)v124;
              *(_OWORD *)v105 = *(_OWORD *)&v99[1];
              *(_OWORD *)v124 = *(_OWORD *)pv;
              *(_OWORD *)&v99[1] = v23;
              AcceptableSPDIFTypeForDevice = DeriveOffloadConnectorFormatFromStreamFormat(
                                               v10,
                                               (struct tWAVEFORMATEX *)v17,
                                               v22,
                                               (struct _GUID *)&v99[1],
                                               (struct _GUID *)v94,
                                               (struct tWAVEFORMATEX **)&v126);
              v21 = (struct tWAVEFORMATEX *)v17;
              goto LABEL_165;
            }
          }
          else
          {
            AcceptableSPDIFTypeForDevice = 1;
          }
        }
        v21 = (struct tWAVEFORMATEX *)v17;
LABEL_165:
        v80 = v100;
LABEL_166:
        CoTaskMemFree(v21);
        if ( v80 )
          CoTaskMemFree(v80);
        goto LABEL_198;
      }
      if ( v96 )
      {
        v83 = IsExclusiveModeDisabled(v9) == 0;
        v84 = IsOffloadDisabled(v9);
        if ( !v84 || v83 )
        {
          if ( g_PolicyManager )
          {
            v85 = *(__int64 (__fastcall **)(CWindowsPolicyManager *__hidden, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager + 32LL);
            if ( v85 == CWindowsPolicyManager::RpcGetProcess )
              Process = CWindowsPolicyManager::RpcGetProcess(g_PolicyManager, v102, &v103);
            else
              Process = v85(g_PolicyManager, v102, &v103);
            AcceptableSPDIFTypeForDevice = Process;
            if ( Process < 0 )
              goto LABEL_164;
            if ( v83 )
            {
              v87 = *v19;
              v88 = *(__int64 (__fastcall **)(CProcess *__hidden, unsigned int, enum ResourceType))(*(_QWORD *)v103
                                                                                                  + 128LL);
              if ( v88 == CProcess::UseOfResourceAllowed )
                v89 = CProcess::UseOfResourceAllowed(v103, v87, ResourceTypeTheme);
              else
                v89 = v88(v103, v87, ResourceTypeTheme);
              v19 = v104;
              v83 = v89;
            }
            if ( !v84 )
            {
              v90 = *v19;
              v91 = *(__int64 (__fastcall **)(CProcess *__hidden, unsigned int, enum ResourceType))(*(_QWORD *)v103
                                                                                                  + 128LL);
              if ( v91 == CProcess::UseOfResourceAllowed )
                v92 = CProcess::UseOfResourceAllowed(v103, v90, ResourceTypeStatic);
              else
                v92 = v91(v103, v90, ResourceTypeStatic);
              v84 = v92 == 0;
            }
            if ( v103 )
            {
              (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v103 + 16LL))(v103);
              v103 = 0LL;
            }
          }
          if ( v83 )
          {
            v21 = (struct tWAVEFORMATEX *)v99[0];
            if ( (unsigned int)IsSPDIFFormat((const struct tWAVEFORMATEX *)v99[0]) && (unsigned int)IsSPDIFEndpoint(v9) )
            {
              AcceptableSPDIFTypeForDevice = GetAcceptableSPDIFTypeForDevice(v9, v21, 0LL, v84);
            }
            else
            {
              v95 = (struct tWAVEFORMATEX **)&v106;
              AcceptableSPDIFTypeForDevice = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v9->lpVtbl->Activate)(
                                               v9,
                                               &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
                                               23LL);
              if ( AcceptableSPDIFTypeForDevice >= 0 )
              {
                AcceptableSPDIFTypeForDevice = CreateKSFormatFromWFXFormat(v21, &v100);
                if ( AcceptableSPDIFTypeForDevice >= 0 )
                {
                  LODWORD(v95) = v84;
                  v80 = v100;
                  AcceptableSPDIFTypeForDevice = (*(__int64 (__fastcall **)(__int64, struct KSDATAFORMAT_WAVEFORMATEX *, _QWORD, _QWORD, struct tWAVEFORMATEX **, __int64 *))(*(_QWORD *)v106 + 80LL))(
                                                   v106,
                                                   v100,
                                                   v100->DataFormat.FormatSize,
                                                   0LL,
                                                   v95,
                                                   &v107);
                  if ( AcceptableSPDIFTypeForDevice < 0 )
                    AcceptableSPDIFTypeForDevice = -2004287480;
                  goto LABEL_166;
                }
              }
            }
            goto LABEL_165;
          }
        }
        AcceptableSPDIFTypeForDevice = -2004287474;
LABEL_164:
        v21 = (struct tWAVEFORMATEX *)v99[0];
        goto LABEL_165;
      }
      v24 = *((_DWORD *)v10 + 93) == 1;
      v102 = 0LL;
      v25 = v24;
      v97 = *v104;
      v126 = GUID_00000000_0000_0000_0000_000000000000;
      *(GUID *)v124 = GUID_00000000_0000_0000_0000_000000000000;
      *(GUID *)&v99[1] = GUID_00000000_0000_0000_0000_000000000000;
      if ( v24 == 2 )
      {
        CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
          v10,
          eHostProcessConnector,
          &v126,
          (struct _GUID *)v124,
          (struct _GUID *)&v99[1]);
        v26 = v126;
        v27 = *(GUID *)v124;
        v28 = *(GUID *)&v99[1];
LABEL_158:
        v74 = v104;
        if ( v104[4] )
        {
          v81 = v104[1];
          v105[0] = 0LL;
          *(struct _GUID *)&v99[1] = v26;
          *(GUID *)v124 = v27;
          v126 = v28;
          v82 = DeriveConnectorFormatFromStreamFormat(
                  v10,
                  v81,
                  (struct tWAVEFORMATEX *)v17,
                  &v126,
                  (struct _GUID *)v124,
                  (struct _GUID *)&v99[1],
                  1,
                  (struct tWAVEFORMATEX **)v105);
          v79 = v105[0];
          AcceptableSPDIFTypeForDevice = v82;
        }
        else
        {
          v75 = v104[1];
          *(GUID *)&v99[1] = v28;
          MixFormatInternal = CPolicyConfig::GetMixFormatInternal(
                                g_PolicyConfig,
                                v10,
                                v75,
                                (struct _GUID *)&v99[1],
                                (struct tWAVEFORMATEX **)pv);
          v77 = (struct tWAVEFORMATEX **)pv[0];
          AcceptableSPDIFTypeForDevice = MixFormatInternal;
          if ( MixFormatInternal >= 0 )
          {
            v78 = v74[1];
            *(GUID *)&v99[1] = v27;
            AcceptableSPDIFTypeForDevice = IsStreamFormatSupportedForMixFormat(
                                             v10,
                                             (struct _GUID *)&v99[1],
                                             v78,
                                             (const struct tWAVEFORMATEX *)pv[0],
                                             (const struct tWAVEFORMATEX *)v17,
                                             v105[0]);
          }
          if ( !v77 )
            goto LABEL_164;
          v79 = v77;
        }
        CoTaskMemFree(v79);
        goto LABEL_164;
      }
      if ( v104[2] )
      {
        *(GUID *)&v99[1] = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        if ( !CEndpointCharacteristics::IsConnectorModeSupported(v10, v20, (struct _GUID *)&v99[1]) )
        {
          AcceptableSPDIFTypeForDevice = -2004287449;
          v21 = (struct tWAVEFORMATEX *)v17;
          goto LABEL_165;
        }
        v26 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        v27 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        v28 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        goto LABEL_158;
      }
      *(GUID *)&v99[1] = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      if ( v20 )
        goto LABEL_54;
      v29 = *((_QWORD *)v10 + 7);
      v30 = 1;
      if ( !v29 )
        goto LABEL_54;
      pvar = 0LL;
      v113 = 0LL;
      v114 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v29 + 40LL))(
             v29,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &pvar) >= 0
        && (_WORD)pvar == 19 )
      {
        v30 = v113 == 0;
      }
      PropVariantClear(&pvar);
      v20 = v101[0];
      if ( v30 )
LABEL_54:
        v31 = (char *)v10 + 16 * v20 + 64;
      else
        v31 = (char *)v10 + 128;
      v32 = *((_DWORD *)v31 + 2);
      v33 = 0;
      if ( v32 <= 0 )
        goto LABEL_60;
      v34 = *(_QWORD *)v31;
      while ( *(struct CEndpointCharacteristics **)(v34 + 16LL * v33) != v99[1]
           || *(struct CEndpointCharacteristics **)(v34 + 16LL * v33 + 8) != v99[2] )
      {
        if ( ++v33 >= v32 )
          goto LABEL_60;
      }
      if ( v33 == -1 )
      {
LABEL_60:
        *(GUID *)&v99[1] = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        if ( v20 )
          goto LABEL_69;
        v35 = *((_QWORD *)v10 + 7);
        v36 = 1;
        if ( !v35 )
          goto LABEL_69;
        v109 = 0LL;
        v110 = 0LL;
        v111 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v35 + 40LL))(
               v35,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v109) >= 0
          && (_WORD)v109 == 19 )
        {
          v36 = v110 == 0;
        }
        PropVariantClear(&v109);
        v20 = v101[0];
        if ( v36 )
LABEL_69:
          v37 = (char *)v10 + 16 * v20 + 64;
        else
          v37 = (char *)v10 + 128;
        v38 = *((_DWORD *)v37 + 2);
        v39 = 0;
        if ( v38 <= 0 )
          goto LABEL_75;
        v40 = *(_QWORD *)v37;
        while ( *(struct CEndpointCharacteristics **)(v40 + 16LL * v39) != v99[1]
             || *(struct CEndpointCharacteristics **)(v40 + 16LL * v39 + 8) != v99[2] )
        {
          if ( ++v39 >= v38 )
            goto LABEL_75;
        }
        if ( v39 == -1 )
        {
LABEL_75:
          SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(v10, v20);
          v26 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                   (__int64)SupportedConnectorModes,
                                   0);
        }
        else
        {
          v26 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        }
      }
      else
      {
        v26 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
      v42 = *((_QWORD *)v10 + 7);
      v43 = 1;
      *(struct _GUID *)v124 = v26;
      *(struct _GUID *)&v99[1] = v26;
      if ( v42 )
      {
        v115 = 0LL;
        v116 = 0LL;
        v117 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v42 + 40LL))(
               v42,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v115) >= 0
          && (_WORD)v115 == 19 )
        {
          v43 = v116 == 0;
        }
        PropVariantClear(&v115);
        v44 = v101[0];
        if ( !v43 && v101[0] != eKeywordDetectorConnector )
        {
          v45 = (char *)v10 + 336;
LABEL_87:
          v46 = *((_DWORD *)v45 + 2);
          v47 = 0;
          if ( v46 <= 0 )
            goto LABEL_94;
          v48 = *(_QWORD *)v45;
          while ( *(struct CEndpointCharacteristics **)(v48 + 16LL * v47) != v99[1]
               || *(struct CEndpointCharacteristics **)(v48 + 16LL * v47 + 8) != v99[2] )
          {
            if ( ++v47 >= v46 )
              goto LABEL_94;
          }
          v49 = (GUID *)v124;
          if ( v47 == -1 )
LABEL_94:
            v49 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
          v27 = *v49;
          v28 = v26;
          v50 = *(__int64 (__fastcall **)(CWindowsPolicyManager *, BOOL, _QWORD, void **))(*(_QWORD *)g_PolicyManager
                                                                                         + 88LL);
          if ( (char *)v50 == (char *)&CWindowsPolicyManager::GetModePriorityList )
          {
            v51 = 0;
            if ( v25 )
            {
              if ( v25 && v97 < 0x15 )
              {
                v102 = *(&off_1800C6AE0 + v97);
                goto LABEL_104;
              }
              goto LABEL_101;
            }
            if ( v97 >= 0x15 )
            {
LABEL_101:
              v51 = -2147024809;
              goto LABEL_104;
            }
            v102 = *(&off_1800B8CB0 + v97);
          }
          else
          {
            v52 = v50(g_PolicyManager, v25, v97, &v102);
            v44 = v101[0];
            v51 = v52;
          }
LABEL_104:
          if ( v51 >= 0 )
          {
            v53 = 0;
            v98 = 0;
            if ( *(_DWORD *)v102 )
            {
              while ( 1 )
              {
                v54 = 2LL * v53;
                *(_OWORD *)&v99[1] = *(_OWORD *)(*((_QWORD *)v102 + 1) + 16LL * v53);
                if ( v44 )
                  goto LABEL_113;
                v55 = *((_QWORD *)v10 + 7);
                v56 = 1;
                if ( !v55 )
                  goto LABEL_113;
                v124[0] = 0LL;
                v124[1] = 0LL;
                v125 = 0LL;
                if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v55 + 40LL))(
                       v55,
                       &PKEY_AudioEndpoint_Disable_SysFx,
                       v124) >= 0
                  && LOWORD(v124[0]) == 19 )
                {
                  v56 = LODWORD(v124[1]) == 0;
                }
                PropVariantClear(v124);
                v44 = v101[0];
                if ( v56 )
LABEL_113:
                  v57 = (char *)v10 + 16 * v44 + 64;
                else
                  v57 = (char *)v10 + 128;
                v58 = *((_DWORD *)v57 + 2);
                v59 = 0;
                if ( v58 > 0 )
                {
                  v60 = *(_QWORD *)v57;
                  while ( *(struct CEndpointCharacteristics **)(v60 + 16LL * v59) != v99[1]
                       || *(struct CEndpointCharacteristics **)(v60 + 16LL * v59 + 8) != v99[2] )
                  {
                    if ( ++v59 >= v58 )
                      goto LABEL_121;
                  }
                  if ( v59 != -1 )
                    break;
                }
LABEL_121:
                *(GUID *)&v99[1] = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                if ( v44 )
                  goto LABEL_128;
                v61 = *((_QWORD *)v10 + 7);
                v62 = 1;
                if ( !v61 )
                  goto LABEL_128;
                v121 = 0LL;
                v122 = 0LL;
                v123 = 0LL;
                if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v61 + 40LL))(
                       v61,
                       &PKEY_AudioEndpoint_Disable_SysFx,
                       &v121) >= 0
                  && (_WORD)v121 == 19 )
                {
                  v62 = v122 == 0;
                }
                PropVariantClear(&v121);
                v44 = v101[0];
                if ( v62 )
LABEL_128:
                  v63 = (char *)v10 + 16 * v44 + 64;
                else
                  v63 = (char *)v10 + 128;
                v64 = *((_DWORD *)v63 + 2);
                v65 = 0;
                if ( v64 > 0 )
                {
                  v66 = *(_QWORD *)v63;
                  while ( *(struct CEndpointCharacteristics **)(v66 + 16LL * v65) != v99[1]
                       || *(struct CEndpointCharacteristics **)(v66 + 16LL * v65 + 8) != v99[2] )
                  {
                    if ( ++v65 >= v64 )
                      goto LABEL_151;
                  }
                  if ( v65 != -1 )
                  {
                    v67 = 1;
                    v68 = *((_QWORD *)v10 + 7);
                    *(_OWORD *)&v99[1] = *(_OWORD *)(*((_QWORD *)v102 + 1) + 8 * v54);
                    if ( !v68 )
                      goto LABEL_143;
                    v118 = 0LL;
                    v119 = 0LL;
                    v120 = 0LL;
                    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v68 + 40LL))(
                           v68,
                           &PKEY_AudioEndpoint_Disable_SysFx,
                           &v118) >= 0
                      && (_WORD)v118 == 19 )
                    {
                      v67 = v119 == 0;
                    }
                    PropVariantClear(&v118);
                    v44 = v101[0];
                    if ( v67 || v101[0] == eKeywordDetectorConnector )
LABEL_143:
                      v69 = (char *)v10 + 16 * v44 + 208;
                    else
                      v69 = (char *)v10 + 336;
                    v70 = *((_DWORD *)v69 + 2);
                    v71 = 0;
                    if ( v70 > 0 )
                    {
                      v72 = *(_QWORD *)v69;
                      while ( *(struct CEndpointCharacteristics **)(v72 + 16LL * v71) != v99[1]
                           || *(struct CEndpointCharacteristics **)(v72 + 16LL * v71 + 8) != v99[2] )
                      {
                        if ( ++v71 >= v70 )
                          goto LABEL_151;
                      }
                      if ( v71 != -1 )
                      {
                        v26 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                        v27 = *(GUID *)(*((_QWORD *)v102 + 1) + 16LL * v98);
                        v28 = v27;
                        goto LABEL_157;
                      }
                    }
                  }
                }
LABEL_151:
                v53 = v98 + 1;
                v98 = v53;
                if ( v53 >= *(_DWORD *)v102 )
                  goto LABEL_157;
              }
              v26 = *(struct _GUID *)(*((_QWORD *)v102 + 1) + 16LL * v98);
              v126 = v26;
              *(struct _GUID *)&v99[1] = v26;
              v24 = CEndpointCharacteristics::IsAPOModeSupported(v10, (struct _GUID *)&v99[1], v44) == 0;
              v73 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
              v28 = v26;
              if ( !v24 )
                v73 = &v126;
              v27 = *v73;
            }
          }
LABEL_157:
          v17 = v99[0];
          goto LABEL_158;
        }
      }
      else
      {
        v44 = v101[0];
      }
      v45 = (char *)v10 + 16 * v44 + 208;
      goto LABEL_87;
    }
    AcceptableSPDIFTypeForDevice = -2147024809;
    goto LABEL_13;
  }
  AcceptableSPDIFTypeForDevice = -2147024809;
LABEL_198:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v8, &AudioSrv_IsFormatSupported_Task_Stop, a3);
  if ( AcceptableSPDIFTypeForDevice < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      100LL,
      &WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      (unsigned int)AcceptableSPDIFTypeForDevice);
  }
  if ( v103 )
  {
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v103 + 16LL))(v103);
    v103 = 0LL;
  }
LABEL_207:
  if ( v10 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v107 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v107 + 16LL))(v107);
  if ( v106 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v106 + 16LL))(v106);
  if ( v9 )
    ((void (__fastcall *)(struct IMMDevice *))v9->lpVtbl->Release)(v9);
  return (unsigned int)AcceptableSPDIFTypeForDevice;
}
