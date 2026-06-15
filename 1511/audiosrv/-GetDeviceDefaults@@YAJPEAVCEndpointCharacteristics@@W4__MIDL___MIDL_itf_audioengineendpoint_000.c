/*
 * XREFs of ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180010630
 * Callers:
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18000E5B0 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180010180 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180080A50 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?GetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180010EC0 (-GetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HHW4__MIDL___MIDL_itf_a.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800110D0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180013340 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_.c)
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001A800 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x18001B0B0 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180069C8C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180083EAC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@AEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008408C (-RefreshDeviceFormat@CPolicyConfig@@AEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GetDeviceDefaults(
        struct CEndpointCharacteristics *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4,
        struct tWAVEFORMATEX **a5,
        __int64 *a6,
        __int64 *a7)
{
  __int64 v7; // r13
  int ProposedConnectorFormatForProcessingMode; // r14d
  int (*v10)(CPolicyConfig *__hidden, const unsigned __int16 *, int, __int64 *, __int64 *); // rdi
  int v11; // eax
  struct _GUID *v12; // r12
  struct _GUID *v13; // rbx
  BOOL v14; // edi
  __int64 v15; // rsi
  char *v16; // rax
  int v17; // ecx
  signed int v18; // edx
  BOOL v19; // edi
  __int64 v20; // rsi
  char *v21; // r14
  int v22; // r13d
  int v23; // eax
  __int64 v24; // r12
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v25; // eax
  BOOL v26; // edi
  __int64 v27; // rsi
  char *v28; // rax
  int v29; // ecx
  __int64 v30; // rdi
  struct _GUID v31; // xmm6
  CPolicyConfig *v32; // r13
  __int64 v33; // rsi
  int v34; // eax
  unsigned int v35; // ecx
  __int64 v36; // r9
  _QWORD *v37; // rax
  BYTE *pData; // rbx
  BYTE *v39; // r14
  __int64 v40; // rbx
  struct tWAVEFORMATEX *v41; // rax
  struct tWAVEFORMATEX *v42; // r15
  struct _GUID *v45; // [rsp+38h] [rbp-C8h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v47; // [rsp+58h] [rbp-A8h] BYREF
  struct tWAVEFORMATEX **v48; // [rsp+60h] [rbp-A0h]
  LPVOID pv; // [rsp+68h] [rbp-98h] BYREF
  struct _GUID *v50; // [rsp+70h] [rbp-90h] BYREF
  GUID v51; // [rsp+80h] [rbp-80h]
  struct _GUID v52; // [rsp+90h] [rbp-70h] BYREF
  struct tWAVEFORMATEX **v53; // [rsp+A0h] [rbp-60h]
  PROPVARIANT v54; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  __int64 v57; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h]
  __int64 v59; // [rsp+D0h] [rbp-30h]
  PROPVARIANT v60[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v61; // [rsp+E8h] [rbp-18h]

  v57 = -2LL;
  v53 = a4;
  v45 = a3;
  v7 = a2;
  v48 = a5;
  v58 = 0LL;
  pv = 0LL;
  v47 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  ProposedConnectorFormatForProcessingMode = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(**((_QWORD **)a1 + 2) + 40LL))(
                                               *((_QWORD *)a1 + 2),
                                               &v47);
  if ( ProposedConnectorFormatForProcessingMode < 0 )
    goto LABEL_113;
  if ( a7 || a6 )
  {
    v10 = *(int (**)(CPolicyConfig *__hidden, const unsigned __int16 *, int, __int64 *, __int64 *))(*(_QWORD *)g_PolicyConfig
                                                                                                  + 56LL);
    v11 = v10 == CPolicyConfig::GetProcessingPeriod
        ? CPolicyConfig::GetProcessingPeriod(g_PolicyConfig, v47, 0, a6, a7)
        : ((__int64 (__fastcall *)(CPolicyConfig *, unsigned __int16 *, _QWORD, __int64 *, __int64 *))v10)(
            g_PolicyConfig,
            v47,
            0LL,
            a6,
            a7);
    ProposedConnectorFormatForProcessingMode = v11;
    if ( v11 < 0 )
      goto LABEL_113;
  }
  v12 = v45;
  if ( v53 )
  {
    v52 = *v45;
    ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                                 a1,
                                                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v7,
                                                 &v52,
                                                 (struct tWAVEFORMATEX **)&pv);
    if ( ProposedConnectorFormatForProcessingMode < 0 )
    {
      v13 = (struct _GUID *)*((_QWORD *)a1 + 2);
      v50 = v13;
      (*(void (__fastcall **)(struct _GUID *))(*(_QWORD *)&v13->Data1 + 8LL))(v13);
      ProposedConnectorFormatForProcessingMode = CPolicyConfig::GetDeviceFormatInternal(
                                                   a1,
                                                   0,
                                                   0,
                                                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v7,
                                                   (struct tWAVEFORMATEX **)&pv);
      if ( v13 )
        (*(void (__fastcall **)(struct _GUID *))(*(_QWORD *)&v13->Data1 + 16LL))(v13);
      if ( ProposedConnectorFormatForProcessingMode < 0 )
      {
LABEL_109:
        if ( pv )
          CoTaskMemFree(pv);
        goto LABEL_113;
      }
    }
  }
  if ( !v48 )
    goto LABEL_111;
  if ( *(_QWORD *)&v45->Data1 != *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
    || *(_QWORD *)v45->Data4 != *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
  {
    goto LABEL_108;
  }
  v51 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( (_DWORD)v7 )
    goto LABEL_27;
  v14 = 1;
  v15 = *((_QWORD *)a1 + 7);
  if ( !v15 )
    goto LABEL_27;
  memset(&pvar, 0, sizeof(pvar));
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, struct tagPROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
         v15,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &pvar) >= 0
    && pvar.vt == 19 )
  {
    v14 = pvar.lVal == 0;
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( v14 )
LABEL_27:
    v16 = (char *)a1 + 16 * v7 + 64;
  else
    v16 = (char *)a1 + 128;
  v17 = 0;
  v18 = *((_DWORD *)v16 + 2);
  if ( v18 <= 0 )
    goto LABEL_108;
  while ( *(_OWORD *)(*(_QWORD *)v16 + 16LL * v17) != *(_OWORD *)&v51 )
  {
    if ( ++v17 >= v18 )
      goto LABEL_108;
  }
  if ( v17 == -1 )
  {
LABEL_108:
    v52 = *v12;
    ProposedConnectorFormatForProcessingMode = CPolicyConfig::GetMixFormatInternal(
                                                 g_PolicyConfig,
                                                 a1,
                                                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v7,
                                                 &v52,
                                                 v48);
    if ( ProposedConnectorFormatForProcessingMode < 0 )
      goto LABEL_109;
    goto LABEL_111;
  }
  v19 = 1;
  v20 = *((_QWORD *)a1 + 7);
  if ( !v20 )
    goto LABEL_40;
  v60[0] = 0LL;
  v60[1] = 0LL;
  v61 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v20 + 40LL))(
         v20,
         &PKEY_AudioEndpoint_Disable_SysFx,
         v60) >= 0
    && LOWORD(v60[0]) == 19 )
  {
    v19 = LODWORD(v60[1]) == 0;
  }
  PropVariantClear(v60);
  if ( v19 || (_DWORD)v7 == 3 )
LABEL_40:
    v21 = (char *)a1 + 16 * v7 + 208;
  else
    v21 = (char *)a1 + 336;
  v22 = 0;
  v23 = *((_DWORD *)v21 + 2);
  if ( v23 <= 0 )
  {
LABEL_107:
    LODWORD(v7) = a2;
    goto LABEL_108;
  }
  v24 = 0LL;
  while ( 1 )
  {
    if ( v24 < 0 || v22 >= v23 )
    {
      ATL::_AtlRaiseException(0xC000008C, v18);
      __debugbreak();
    }
    v51 = *(GUID *)(v24 + *(_QWORD *)v21);
    v25 = a2;
    if ( a2 )
      goto LABEL_53;
    v26 = 1;
    v27 = *((_QWORD *)a1 + 7);
    if ( !v27 )
      goto LABEL_53;
    v54 = 0LL;
    v55 = 0LL;
    v56 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v27 + 40LL))(
           v27,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &v54) >= 0
      && (_WORD)v54 == 19 )
    {
      v26 = v55 == 0;
    }
    PropVariantClear(&v54);
    if ( v26 )
    {
      v25 = eHostProcessConnector;
LABEL_53:
      v28 = (char *)a1 + 16 * v25 + 64;
      goto LABEL_54;
    }
    v28 = (char *)a1 + 128;
LABEL_54:
    v29 = 0;
    v18 = *((_DWORD *)v28 + 2);
    if ( v18 <= 0 )
      break;
    while ( *(_OWORD *)(*(_QWORD *)v28 + 16LL * v29) != *(_OWORD *)&v51 )
    {
      if ( ++v29 >= v18 )
        goto LABEL_61;
    }
    if ( v29 == -1 )
      break;
    ++v22;
    v24 += 16LL;
    v23 = *((_DWORD *)v21 + 2);
    if ( v22 >= v23 )
    {
      v12 = v45;
      goto LABEL_107;
    }
  }
LABEL_61:
  v30 = *((_QWORD *)a1 + 2);
  v59 = v30;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
  v31 = *v45;
  v32 = g_PolicyConfig;
  v45 = 0LL;
  memset(&pvar, 0, sizeof(pvar));
  v33 = *((_QWORD *)a1 + 2);
  *(_QWORD *)&v51.Data1 = v33;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
  *v48 = 0LL;
  v52 = v31;
  v50 = 0LL;
  v34 = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, struct _GUID **))(*(_QWORD *)g_PolicyManager + 80LL))(
          g_PolicyManager,
          &v50);
  v35 = 0;
  if ( v34 < 0 )
  {
LABEL_90:
    ProposedConnectorFormatForProcessingMode = -2147023728;
  }
  else
  {
    v36 = v34;
    while ( 1 )
    {
      if ( v35 >= v50->Data1 )
        goto LABEL_90;
      v37 = (_QWORD *)(*(_QWORD *)v50->Data4 + 16LL * v35);
      if ( *v37 == *(_QWORD *)&v52.Data1 && v37[1] == *(_QWORD *)v52.Data4 )
        break;
      ++v35;
    }
    *(_OWORD *)v60 = PKEY_AudioEngine_SignalProcessingMode_Specific_DevicePipeFormat;
    LODWORD(v61) = v35 + (a2 == eKeywordDetectorConnector ? 602 : 2);
    ProposedConnectorFormatForProcessingMode = (*(__int64 (__fastcall **)(__int64, _QWORD, struct _GUID **, __int64))(*(_QWORD *)v33 + 32LL))(
                                                 v33,
                                                 0LL,
                                                 &v45,
                                                 v36);
    if ( ProposedConnectorFormatForProcessingMode >= 0 )
    {
      ProposedConnectorFormatForProcessingMode = (*(__int64 (__fastcall **)(struct _GUID *, PROPVARIANT *, struct tagPROPVARIANT *))(*(_QWORD *)&v45->Data1 + 40LL))(
                                                   v45,
                                                   v60,
                                                   &pvar);
      if ( ProposedConnectorFormatForProcessingMode >= 0 )
      {
        if ( pvar.vt == 65 && pvar.lVal >= 0x12u )
        {
          pData = pvar.bstrblobVal.pData;
          if ( pvar.ulVal == *((unsigned __int16 *)pvar.bstrblobVal.pData + 8) + 18LL )
            goto LABEL_77;
        }
        PropVariantClear((PROPVARIANT *)&pvar);
        ProposedConnectorFormatForProcessingMode = CPolicyConfig::RefreshDeviceFormat(v32, a1, a2);
        if ( ProposedConnectorFormatForProcessingMode < 0 )
          goto LABEL_91;
        if ( (*(int (__fastcall **)(struct _GUID *, PROPVARIANT *, struct tagPROPVARIANT *))(*(_QWORD *)&v45->Data1
                                                                                           + 40LL))(
               v45,
               v60,
               &pvar) < 0
          || pvar.vt != 65
          || !(unsigned int)IsValidWfxBlob(&pvar) )
        {
          goto LABEL_89;
        }
        pData = pvar.bstrblobVal.pData;
LABEL_77:
        if ( (v39 = pData) == 0LL
          || (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pData) < 0
          || ((*(_WORD *)pData - 1) & 0xFFFD) != 0
          && (*(_WORD *)pData != 0xFFFE
           || (*(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 != *((_QWORD *)pData + 3)
            || *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 != *((_QWORD *)pData + 4))
           && (*(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 != *((_QWORD *)pData + 3)
            || *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 != *((_QWORD *)pData + 4))) )
        {
LABEL_89:
          ProposedConnectorFormatForProcessingMode = -2004287480;
          goto LABEL_91;
        }
        v40 = *((unsigned __int16 *)pData + 8);
        v41 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v40 + 18);
        v42 = v41;
        if ( v41 )
        {
          memcpy_0(v41, v39, v40 + 18);
          ProposedConnectorFormatForProcessingMode = 0;
        }
        else
        {
          ProposedConnectorFormatForProcessingMode = -2147024882;
        }
        *v48 = v42;
      }
    }
  }
LABEL_91:
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( ProposedConnectorFormatForProcessingMode < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      61LL,
      &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      (unsigned int)ProposedConnectorFormatForProcessingMode);
  }
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v45 )
    (*(void (__fastcall **)(struct _GUID *))(*(_QWORD *)&v45->Data1 + 16LL))(v45);
  if ( ProposedConnectorFormatForProcessingMode < 0 )
  {
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    goto LABEL_109;
  }
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
LABEL_111:
  if ( v53 )
    *v53 = (struct tWAVEFORMATEX *)pv;
LABEL_113:
  if ( v47 )
  {
    CoTaskMemFree(v47);
    v47 = 0LL;
  }
  if ( ProposedConnectorFormatForProcessingMode < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      132LL,
      &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      (unsigned int)ProposedConnectorFormatForProcessingMode);
  }
  return (unsigned int)ProposedConnectorFormatForProcessingMode;
}
