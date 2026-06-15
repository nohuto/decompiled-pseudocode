/*
 * XREFs of AudioServerIsFormatSupported @ 0x180022F00
 * Callers:
 *     AudioServerGetSharedModeEnginePeriod @ 0x18008D670 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z @ 0x180011C60 (-UseOfResourceAllowed@CProcess@@UEAAHKW4ResourceType@@@Z.c)
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F1A0 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x180020DA0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x180021EB0 (-RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18002D408 (-IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18002D460 (-IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800307FC (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180031424 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18003445C (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180034520 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003480C (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x180037EA0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180038138 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18008553C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x18008A5A8 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x18008B4BC (-IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x18008B984 (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008BC58 (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     TemplateEventDescriptor @ 0x18008DB28 (TemplateEventDescriptor.c)
 *     Template_zqttq @ 0x18008DB44 (Template_zqttq.c)
 */

__int64 __fastcall AudioServerIsFormatSupported(
        void *a1,
        const unsigned __int16 *a2,
        int a3,
        _DWORD *a4,
        const struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a6)
{
  struct tWAVEFORMATEX **v6; // rax
  CEndpointCharacteristicsCache *v9; // rcx
  struct IMMDevice *v10; // rsi
  struct tWAVEFORMATEX *v11; // rdi
  int AcceptableSPDIFTypeForDevice; // r12d
  unsigned int *v13; // r14
  int AliasedEndpointCharacteristics; // eax
  __int64 cbSize; // rbx
  struct tWAVEFORMATEX *v16; // rax
  struct tWAVEFORMATEX *v17; // r12
  __int64 v18; // r13
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v19; // edx
  struct IMMDevice *v20; // rbx
  unsigned int v21; // ecx
  GUID v22; // xmm6
  GUID v23; // xmm8
  GUID v24; // xmm7
  __int64 v25; // r15
  BOOL v26; // r14d
  WORD *p_nChannels; // rax
  int v28; // edx
  int v29; // ecx
  __int64 v30; // r9
  __int64 v31; // r15
  BOOL v32; // r14d
  WORD *v33; // rax
  int v34; // edx
  int v35; // ecx
  __int64 v36; // r9
  struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedConnectorModes; // rax
  bool v38; // zf
  int v39; // r14d
  __int64 v40; // r13
  BOOL v41; // r15d
  WORD *p_nBlockAlign; // rax
  int v43; // edx
  int v44; // ecx
  __int64 v45; // r9
  GUID *v46; // rax
  unsigned int v47; // ecx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v48; // r11d
  __int64 v49; // r13
  __int64 v50; // r15
  BOOL v51; // r14d
  WORD *v52; // rax
  int v53; // edx
  int v54; // ecx
  __int64 v55; // r9
  __int64 v56; // r15
  BOOL v57; // r14d
  WORD *v58; // rax
  int v59; // edx
  int v60; // ecx
  __int64 v61; // r9
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v62; // r15d
  BOOL v63; // r14d
  GUID v64; // xmm0
  __int64 v65; // r13
  WORD *v66; // rax
  int v67; // edx
  int v68; // ecx
  __int64 v69; // r9
  GUID *v70; // rax
  LPVOID v71; // r13
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v72; // r15d
  CPolicyConfig *v73; // r12
  const struct tWAVEFORMATEX *v74; // r14
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v75; // r8d
  struct tWAVEFORMATEX **v76; // rcx
  struct KSDATAFORMAT_WAVEFORMATEX *v77; // r15
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v78; // edx
  int v79; // eax
  BOOL v80; // r14d
  int v81; // r15d
  __int64 (__fastcall *v82)(CWindowsPolicyManager *, void *, struct IAudioProcess **); // r12
  int Process; // eax
  unsigned int v84; // r13d
  __int64 (__fastcall *v85)(CProcess *, unsigned int, enum ResourceType); // r14
  int v86; // eax
  unsigned int v87; // r12d
  __int64 (__fastcall *v88)(CProcess *, unsigned int, enum ResourceType); // r15
  int v89; // eax
  struct tWAVEFORMATEX **v91; // [rsp+28h] [rbp-E0h]
  unsigned int v93; // [rsp+48h] [rbp-C0h]
  unsigned int v94; // [rsp+48h] [rbp-C0h]
  GUID v95; // [rsp+58h] [rbp-B0h] BYREF
  struct KSDATAFORMAT_WAVEFORMATEX *v96; // [rsp+68h] [rbp-A0h] BYREF
  CProcess *v97; // [rsp+70h] [rbp-98h] BYREF
  LPVOID pv; // [rsp+78h] [rbp-90h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v99; // [rsp+80h] [rbp-88h]
  void *v100; // [rsp+88h] [rbp-80h] BYREF
  struct tWAVEFORMATEX *v101; // [rsp+90h] [rbp-78h] BYREF
  struct tWAVEFORMATEX **v102; // [rsp+98h] [rbp-70h] BYREF
  const struct tWAVEFORMATEX *v103; // [rsp+A0h] [rbp-68h]
  BOOL v104; // [rsp+A8h] [rbp-60h]
  __int64 v105; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v106; // [rsp+B8h] [rbp-50h] BYREF
  PROPVARIANT pvar; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v108; // [rsp+C8h] [rbp-40h]
  __int64 v109; // [rsp+D0h] [rbp-38h]
  PROPVARIANT v110; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v111; // [rsp+E0h] [rbp-28h]
  __int64 v112; // [rsp+E8h] [rbp-20h]
  PROPVARIANT v113; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v114; // [rsp+F8h] [rbp-10h]
  __int64 v115; // [rsp+100h] [rbp-8h]
  PROPVARIANT v116; // [rsp+108h] [rbp+0h] BYREF
  __int64 v117; // [rsp+110h] [rbp+8h]
  __int64 v118; // [rsp+118h] [rbp+10h]
  PROPVARIANT v119; // [rsp+120h] [rbp+18h] BYREF
  __int64 v120; // [rsp+128h] [rbp+20h]
  __int64 v121; // [rsp+130h] [rbp+28h]
  PROPVARIANT v122[2]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v123; // [rsp+148h] [rbp+40h]
  struct _GUID v124; // [rsp+158h] [rbp+50h] BYREF

  v6 = a6;
  v100 = a1;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  pv = a4;
  v102 = a6;
  v103 = 0LL;
  v96 = 0LL;
  v105 = 0LL;
  v106 = 0LL;
  v97 = 0LL;
  v101 = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
  {
    Template_zqttq(0, (unsigned int)&AudioSrv_IsFormatSupported_Task_Start, (_DWORD)a2, *a4, a4[2], a4[4], a4[1]);
    v6 = v102;
    v9 = 0LL;
  }
  if ( a3 || v6 )
  {
    AcceptableSPDIFTypeForDevice = 0;
    if ( !g_PolicyManager )
    {
      AcceptableSPDIFTypeForDevice = -2147418113;
      goto LABEL_187;
    }
    v13 = (unsigned int *)pv;
    if ( !(*(unsigned int (__fastcall **)(CWindowsPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 64LL))(
            g_PolicyManager,
            *(unsigned int *)pv)
      || !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)pv + 1)) )
    {
      AcceptableSPDIFTypeForDevice = -2147024809;
    }
    if ( AcceptableSPDIFTypeForDevice < 0 )
      goto LABEL_187;
    if ( v102 )
      *v102 = 0LL;
    if ( Src->wFormatTag == 0xFFFE && Src->cbSize < 0x16u )
    {
      AcceptableSPDIFTypeForDevice = -2147024809;
      goto LABEL_187;
    }
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       v9,
                                       a2,
                                       (struct CEndpointCharacteristics **)&v101);
    v11 = v101;
    AcceptableSPDIFTypeForDevice = AliasedEndpointCharacteristics;
    if ( AliasedEndpointCharacteristics < 0 )
      goto LABEL_187;
    v10 = *(struct IMMDevice **)&v101->cbSize;
    ((void (__fastcall *)(struct IMMDevice *))v10->lpVtbl->AddRef)(v10);
    if ( Src->nChannels > 2u && ((Src->wFormatTag - 1) & 0xFFFD) == 0 )
    {
      AcceptableSPDIFTypeForDevice = -2004287480;
      goto LABEL_196;
    }
    cbSize = Src->cbSize;
    v16 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(cbSize + 18);
    v101 = v16;
    v17 = v16;
    if ( !v16 )
    {
      AcceptableSPDIFTypeForDevice = -2147024882;
      goto LABEL_187;
    }
    memcpy_0(v16, Src, cbSize + 18);
    v18 = (int)v13[1];
    v99 = (int)v18;
    if ( (_DWORD)v18 == 1 )
    {
      AcceptableSPDIFTypeForDevice = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, void *, CProcess **))(*(_QWORD *)g_PolicyManager + 32LL))(
                                       g_PolicyManager,
                                       v100,
                                       &v97);
      if ( AcceptableSPDIFTypeForDevice >= 0 )
      {
        if ( (*(unsigned int (__fastcall **)(CProcess *, _QWORD, _QWORD))(*(_QWORD *)v97 + 128LL))(
               v97,
               *(unsigned int *)pv,
               0LL) )
        {
          if ( v97 )
          {
            (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v97 + 16LL))(v97);
            v97 = 0LL;
          }
          AcceptableSPDIFTypeForDevice = IsFormatSupportedByHwAudioEngine(v10, v19, Src, v102);
        }
        else
        {
          AcceptableSPDIFTypeForDevice = 1;
        }
      }
      goto LABEL_153;
    }
    if ( a3 )
    {
      v80 = IsExclusiveModeDisabled(v10) == 0;
      v81 = IsOffloadDisabled(v10);
      if ( v81 && !v80 )
        goto LABEL_178;
      if ( g_PolicyManager )
      {
        v82 = *(__int64 (__fastcall **)(CWindowsPolicyManager *, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                 + 32LL);
        if ( v82 == CWindowsPolicyManager::RpcGetProcess )
          Process = CWindowsPolicyManager::RpcGetProcess(g_PolicyManager, v100, &v97);
        else
          Process = v82(g_PolicyManager, v100, &v97);
        AcceptableSPDIFTypeForDevice = Process;
        if ( Process < 0 )
          goto LABEL_153;
        if ( v80 )
        {
          v84 = *(_DWORD *)pv;
          v85 = *(__int64 (__fastcall **)(CProcess *, unsigned int, enum ResourceType))(*(_QWORD *)v97 + 128LL);
          if ( v85 == CProcess::UseOfResourceAllowed )
            v86 = CProcess::UseOfResourceAllowed(v97, v84, ResourceTypeTheme);
          else
            v86 = v85(v97, v84, ResourceTypeTheme);
          v80 = v86;
        }
        if ( !v81 )
        {
          v87 = *(_DWORD *)pv;
          v88 = *(__int64 (__fastcall **)(CProcess *, unsigned int, enum ResourceType))(*(_QWORD *)v97 + 128LL);
          if ( v88 == CProcess::UseOfResourceAllowed )
            v89 = CProcess::UseOfResourceAllowed(v97, v87, ResourceTypeStatic);
          else
            v89 = v88(v97, v87, ResourceTypeStatic);
          v81 = v89 == 0;
        }
        if ( v97 )
        {
          (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v97 + 16LL))(v97);
          v97 = 0LL;
        }
        v17 = v101;
      }
      if ( v80 )
      {
        if ( (unsigned int)IsSPDIFFormat(v17) && (unsigned int)IsSPDIFEndpoint(v10) )
        {
          AcceptableSPDIFTypeForDevice = GetAcceptableSPDIFTypeForDevice(v10, v17, 0LL, v81);
        }
        else
        {
          v91 = (struct tWAVEFORMATEX **)&v105;
          AcceptableSPDIFTypeForDevice = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64))v10->lpVtbl->Activate)(
                                           v10,
                                           &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
                                           23LL);
          if ( AcceptableSPDIFTypeForDevice >= 0 )
          {
            AcceptableSPDIFTypeForDevice = CreateKSFormatFromWFXFormat(v101, &v96);
            if ( AcceptableSPDIFTypeForDevice >= 0 )
            {
              LODWORD(v91) = v81;
              v77 = v96;
              AcceptableSPDIFTypeForDevice = (*(__int64 (__fastcall **)(__int64, struct KSDATAFORMAT_WAVEFORMATEX *, _QWORD, _QWORD, struct tWAVEFORMATEX **, __int64 *))(*(_QWORD *)v105 + 80LL))(
                                               v105,
                                               v96,
                                               v96->DataFormat.FormatSize,
                                               0LL,
                                               v91,
                                               &v106);
              if ( AcceptableSPDIFTypeForDevice < 0 )
                AcceptableSPDIFTypeForDevice = -2004287480;
              goto LABEL_154;
            }
          }
        }
      }
      else
      {
LABEL_178:
        AcceptableSPDIFTypeForDevice = -2004287474;
      }
LABEL_153:
      v77 = v96;
LABEL_154:
      CoTaskMemFree(v101);
      if ( v77 )
        CoTaskMemFree(v77);
      goto LABEL_187;
    }
    v20 = 0LL;
    v21 = *v13;
    v104 = *(_DWORD *)&v11[20].nBlockAlign == 1;
    v93 = v21;
    v100 = 0LL;
    v124 = GUID_00000000_0000_0000_0000_000000000000;
    *(GUID *)v122 = GUID_00000000_0000_0000_0000_000000000000;
    v95 = GUID_00000000_0000_0000_0000_000000000000;
    if ( v13[2] )
    {
      v95 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      if ( !(unsigned int)CEndpointCharacteristics::IsConnectorModeSupported(
                            (CEndpointCharacteristics *)v11,
                            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v18,
                            &v95) )
      {
        AcceptableSPDIFTypeForDevice = -2004287449;
        goto LABEL_153;
      }
      v22 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v23 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v24 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    else
    {
      v95 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      if ( (_DWORD)v18 )
        goto LABEL_41;
      v25 = *(_QWORD *)&v11[3].nChannels;
      v26 = 1;
      if ( !v25 )
        goto LABEL_41;
      pvar = 0LL;
      v108 = 0LL;
      v109 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v25 + 40LL))(
             v25,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &pvar) >= 0
        && (_WORD)pvar == 19 )
      {
        v26 = v108 == 0;
      }
      PropVariantClear(&pvar);
      if ( v26 )
LABEL_41:
        p_nChannels = (WORD *)&v11[3].nAvgBytesPerSec + 8 * v18 + 1;
      else
        p_nChannels = &v11[7].nChannels;
      v28 = *((_DWORD *)p_nChannels + 2);
      v29 = 0;
      if ( v28 <= 0 )
        goto LABEL_47;
      v30 = *(_QWORD *)p_nChannels;
      while ( *(_QWORD *)(v30 + 16LL * v29) != *(_QWORD *)&v95.Data1
           || *(_QWORD *)(v30 + 16LL * v29 + 8) != *(_QWORD *)v95.Data4 )
      {
        if ( ++v29 >= v28 )
          goto LABEL_47;
      }
      if ( v29 == -1 )
      {
LABEL_47:
        v95 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        if ( (_DWORD)v18 )
          goto LABEL_56;
        v31 = *(_QWORD *)&v11[3].nChannels;
        v32 = 1;
        if ( !v31 )
          goto LABEL_56;
        v110 = 0LL;
        v111 = 0LL;
        v112 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v31 + 40LL))(
               v31,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v110) >= 0
          && (_WORD)v110 == 19 )
        {
          v32 = v111 == 0;
        }
        PropVariantClear(&v110);
        if ( v32 )
LABEL_56:
          v33 = (WORD *)&v11[3].nAvgBytesPerSec + 8 * v18 + 1;
        else
          v33 = &v11[7].nChannels;
        v34 = *((_DWORD *)v33 + 2);
        v35 = 0;
        if ( v34 <= 0 )
          goto LABEL_62;
        v36 = *(_QWORD *)v33;
        while ( *(_QWORD *)(v36 + 16LL * v35) != *(_QWORD *)&v95.Data1
             || *(_QWORD *)(v36 + 16LL * v35 + 8) != *(_QWORD *)v95.Data4 )
        {
          if ( ++v35 >= v34 )
            goto LABEL_62;
        }
        if ( v35 == -1 )
        {
LABEL_62:
          SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(
                                      (CEndpointCharacteristics *)v11,
                                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v18);
          v22 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                           SupportedConnectorModes,
                           0LL);
        }
        else
        {
          v22 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        }
      }
      else
      {
        v22 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
      v38 = (_DWORD)v18 == 1;
      *(GUID *)v122 = v22;
      v39 = v18;
      v95 = v22;
      v40 = *(_QWORD *)&v11[3].nChannels;
      if ( v38 )
        v39 = 0;
      v41 = 1;
      if ( !v40 )
        goto LABEL_74;
      v113 = 0LL;
      v114 = 0LL;
      v115 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v40 + 40LL))(
             v40,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &v113) >= 0
        && (_WORD)v113 == 19 )
      {
        v41 = v114 == 0;
      }
      PropVariantClear(&v113);
      if ( v41 || v39 == 3 )
LABEL_74:
        p_nBlockAlign = (WORD *)&v11[11].nAvgBytesPerSec + 8 * v39 + 1;
      else
        p_nBlockAlign = &v11[18].nBlockAlign;
      v43 = *((_DWORD *)p_nBlockAlign + 2);
      v44 = 0;
      if ( v43 <= 0 )
        goto LABEL_82;
      v45 = *(_QWORD *)p_nBlockAlign;
      while ( *(_QWORD *)(v45 + 16LL * v44) != *(_QWORD *)&v95.Data1
           || *(_QWORD *)(v45 + 16LL * v44 + 8) != *(_QWORD *)v95.Data4 )
      {
        if ( ++v44 >= v43 )
          goto LABEL_82;
      }
      v46 = (GUID *)v122;
      if ( v44 == -1 )
LABEL_82:
        v46 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v23 = *v46;
      v24 = v22;
      v20 = 0LL;
      if ( (*(int (__fastcall **)(CWindowsPolicyManager *, BOOL, _QWORD, void **))(*(_QWORD *)g_PolicyManager + 88LL))(
             g_PolicyManager,
             v104,
             v93,
             &v100) >= 0 )
      {
        v47 = 0;
        v94 = 0;
        if ( *(_DWORD *)v100 )
        {
          while ( 1 )
          {
            v48 = v99;
            v49 = 2LL * v47;
            v95 = *(GUID *)(*((_QWORD *)v100 + 1) + 16LL * v47);
            if ( v99 )
              goto LABEL_92;
            v50 = *(_QWORD *)&v11[3].nChannels;
            v51 = 1;
            if ( !v50 )
              goto LABEL_92;
            v122[0] = 0LL;
            v122[1] = 0LL;
            v123 = 0LL;
            v20 = 0LL;
            if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v50 + 40LL))(
                   v50,
                   &PKEY_AudioEndpoint_Disable_SysFx,
                   v122) >= 0
              && LOWORD(v122[0]) == 19 )
            {
              v51 = LODWORD(v122[1]) == 0;
            }
            PropVariantClear(v122);
            v48 = v99;
            if ( v51 )
LABEL_92:
              v52 = (WORD *)&v11[3].nAvgBytesPerSec + 8 * v48 + 1;
            else
              v52 = &v11[7].nChannels;
            v53 = *((_DWORD *)v52 + 2);
            v54 = 0;
            if ( v53 > 0 )
            {
              v55 = *(_QWORD *)v52;
              while ( *(_QWORD *)(v55 + 16LL * v54) != *(_QWORD *)&v95.Data1
                   || *(_QWORD *)(v55 + 16LL * v54 + 8) != *(_QWORD *)v95.Data4 )
              {
                if ( ++v54 >= v53 )
                  goto LABEL_100;
              }
              if ( v54 != -1 )
                break;
            }
LABEL_100:
            v95 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
            if ( v48 )
              goto LABEL_107;
            v56 = *(_QWORD *)&v11[3].nChannels;
            v57 = 1;
            if ( !v56 )
              goto LABEL_107;
            v119 = 0LL;
            v120 = 0LL;
            v121 = 0LL;
            v20 = 0LL;
            if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v56 + 40LL))(
                   v56,
                   &PKEY_AudioEndpoint_Disable_SysFx,
                   &v119) >= 0
              && (_WORD)v119 == 19 )
            {
              v57 = v120 == 0;
            }
            PropVariantClear(&v119);
            v48 = v99;
            if ( v57 )
LABEL_107:
              v58 = (WORD *)&v11[3].nAvgBytesPerSec + 8 * v48 + 1;
            else
              v58 = &v11[7].nChannels;
            v59 = *((_DWORD *)v58 + 2);
            v60 = 0;
            if ( v59 > 0 )
            {
              v61 = *(_QWORD *)v58;
              while ( *(_QWORD *)(v61 + 16LL * v60) != *(_QWORD *)&v95.Data1
                   || *(_QWORD *)(v61 + 16LL * v60 + 8) != *(_QWORD *)v95.Data4 )
              {
                if ( ++v60 >= v59 )
                  goto LABEL_132;
              }
              if ( v60 != -1 )
              {
                v62 = v48;
                v63 = 1;
                if ( v48 == eOffloadConnector )
                  v62 = eHostProcessConnector;
                v64 = *(GUID *)(*((_QWORD *)v100 + 1) + 8 * v49);
                v65 = *(_QWORD *)&v11[3].nChannels;
                v95 = v64;
                if ( !v65 )
                  goto LABEL_124;
                v116 = 0LL;
                v117 = 0LL;
                v118 = 0LL;
                v20 = 0LL;
                if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v65 + 40LL))(
                       v65,
                       &PKEY_AudioEndpoint_Disable_SysFx,
                       &v116) >= 0
                  && (_WORD)v116 == 19 )
                {
                  v63 = v117 == 0;
                }
                PropVariantClear(&v116);
                if ( v63 || v62 == eKeywordDetectorConnector )
LABEL_124:
                  v66 = (WORD *)&v11[11].nAvgBytesPerSec + 8 * v62 + 1;
                else
                  v66 = &v11[18].nBlockAlign;
                v67 = *((_DWORD *)v66 + 2);
                v68 = 0;
                if ( v67 > 0 )
                {
                  v69 = *(_QWORD *)v66;
                  while ( *(_QWORD *)(v69 + 16LL * v68) != *(_QWORD *)&v95.Data1
                       || *(_QWORD *)(v69 + 16LL * v68 + 8) != *(_QWORD *)v95.Data4 )
                  {
                    if ( ++v68 >= v67 )
                      goto LABEL_132;
                  }
                  if ( v68 != -1 )
                  {
                    v22 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                    v23 = *(GUID *)(*((_QWORD *)v100 + 1) + 16LL * v94);
                    v24 = v23;
                    goto LABEL_138;
                  }
                }
              }
            }
LABEL_132:
            v47 = v94 + 1;
            v94 = v47;
            if ( v47 >= *(_DWORD *)v100 )
              goto LABEL_138;
          }
          v22 = *(GUID *)(*((_QWORD *)v100 + 1) + 16LL * v94);
          v124 = v22;
          v95 = v22;
          v38 = CEndpointCharacteristics::IsAPOModeSupported((CEndpointCharacteristics *)v11, &v95, v48) == 0;
          v70 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
          v24 = v22;
          if ( !v38 )
            v70 = &v124;
          v23 = *v70;
        }
      }
    }
LABEL_138:
    v71 = pv;
    if ( *((_DWORD *)pv + 4) )
    {
      v78 = *((_DWORD *)pv + 1);
      v102 = 0LL;
      v95 = v22;
      *(GUID *)v122 = v23;
      v124 = v24;
      v79 = DeriveConnectorFormatFromStreamFormat(
              (struct CEndpointCharacteristics *)v11,
              v78,
              v101,
              &v124,
              (struct _GUID *)v122,
              &v95,
              1,
              (struct tWAVEFORMATEX **)&v102);
      v76 = v102;
      AcceptableSPDIFTypeForDevice = v79;
LABEL_152:
      CoTaskMemFree(v76);
      goto LABEL_153;
    }
    v72 = *((_DWORD *)pv + 1);
    v73 = g_PolicyConfig;
    if ( &pv )
    {
      v20 = *(struct IMMDevice **)&v11->cbSize;
      pv = 0LL;
      ((void (__fastcall *)(struct IMMDevice *))v20->lpVtbl->AddRef)(v20);
      v95 = v24;
      AcceptableSPDIFTypeForDevice = CPolicyConfig::GetMixFormatInternal(
                                       v73,
                                       v20,
                                       v72,
                                       &v95,
                                       (struct tWAVEFORMATEX **)&pv);
      v74 = (const struct tWAVEFORMATEX *)pv;
      v103 = (const struct tWAVEFORMATEX *)pv;
      if ( AcceptableSPDIFTypeForDevice >= 0 )
      {
LABEL_146:
        if ( v20 )
        {
          ((void (__fastcall *)(struct IMMDevice *))v20->lpVtbl->Release)(v20);
          v74 = v103;
        }
        if ( AcceptableSPDIFTypeForDevice >= 0 )
        {
          v75 = *((_DWORD *)v71 + 1);
          v95 = v23;
          AcceptableSPDIFTypeForDevice = IsStreamFormatSupportedForMixFormat(
                                           (struct CEndpointCharacteristics *)v11,
                                           &v95,
                                           v75,
                                           v74,
                                           v101,
                                           v102);
        }
        if ( !v74 )
          goto LABEL_153;
        v76 = (struct tWAVEFORMATEX **)v74;
        goto LABEL_152;
      }
    }
    else
    {
      v74 = v103;
      AcceptableSPDIFTypeForDevice = -2147467261;
    }
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        32LL,
        &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
        (unsigned int)AcceptableSPDIFTypeForDevice);
    }
    goto LABEL_146;
  }
  AcceptableSPDIFTypeForDevice = -2147024809;
LABEL_187:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v9, &AudioSrv_IsFormatSupported_Task_Stop);
  if ( AcceptableSPDIFTypeForDevice < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      102LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      (unsigned int)AcceptableSPDIFTypeForDevice);
  }
  if ( v97 )
  {
    (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v97 + 16LL))(v97);
    v97 = 0LL;
  }
LABEL_196:
  if ( v11 )
    (*(void (__fastcall **)(struct tWAVEFORMATEX *))(*(_QWORD *)&v11->wFormatTag + 16LL))(v11);
  if ( v106 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v106 + 16LL))(v106);
  if ( v105 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v105 + 16LL))(v105);
  if ( v10 )
    ((void (__fastcall *)(struct IMMDevice *))v10->lpVtbl->Release)(v10);
  return (unsigned int)AcceptableSPDIFTypeForDevice;
}
