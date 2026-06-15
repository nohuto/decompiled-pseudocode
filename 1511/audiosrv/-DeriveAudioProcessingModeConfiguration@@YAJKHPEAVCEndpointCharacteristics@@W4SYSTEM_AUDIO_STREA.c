/*
 * XREFs of ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAU_GUID@@444@Z @ 0x1800317E0
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180019680 (AudioServerIsFormatSupported.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180022650 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBU_GUID@@PEBG.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x180030D60 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     AudioServerGetMixFormat @ 0x180031580 (AudioServerGetMixFormat.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180089190 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x180089970 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x180089FA0 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18001127C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180013734 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetModePriorityList@CWindowsPolicyManager@@UEAAJW4SYSTEM_AUDIO_STREAM_TYPE@@KPEAPEBUModeList@@@Z @ 0x18001B8D0 (-GetModePriorityList@CWindowsPolicyManager@@UEAAJW4SYSTEM_AUDIO_STREAM_TYPE@@KPEAPEBUModeList@@@.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003FE88 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800643BC (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180064528 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800645E8 (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 */

__int64 __fastcall DeriveAudioProcessingModeConfiguration(
        unsigned int a1,
        int a2,
        CEndpointCharacteristics *a3,
        unsigned int a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        int a7,
        GUID *a8,
        GUID *a9,
        GUID *a10,
        GUID *a11)
{
  unsigned int v11; // r12d
  GUID *v13; // rsi
  GUID v14; // xmm6
  GUID *v15; // rdi
  GUID v16; // xmm8
  GUID *v17; // rbx
  GUID v18; // xmm7
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v21; // r11d
  __int64 v22; // rsi
  BOOL v23; // edi
  _QWORD *v24; // rax
  int v25; // edx
  int v26; // ecx
  __int64 v27; // r9
  __int64 v28; // rsi
  BOOL v29; // edi
  _QWORD *v30; // rax
  int v31; // edx
  int v32; // ecx
  __int64 v33; // r9
  struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedConnectorModes; // rax
  __int64 v35; // rsi
  BOOL v36; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v37; // eax
  _QWORD *v38; // rax
  int v39; // edx
  int v40; // ecx
  __int64 v41; // r9
  struct _GUID *v42; // rax
  __int64 (__fastcall *v43)(__int64, int, unsigned int, __int64 *); // rdi
  int ModePriorityList; // eax
  unsigned int v45; // ecx
  __int64 v46; // r14
  __int64 v47; // rsi
  BOOL v48; // edi
  _QWORD *v49; // rax
  int v50; // edx
  int v51; // ecx
  __int64 v52; // r9
  __int64 v53; // rsi
  BOOL v54; // edi
  _QWORD *v55; // rax
  int v56; // edx
  int v57; // ecx
  __int64 v58; // r9
  BOOL v59; // edi
  __int64 v60; // rsi
  _QWORD *v61; // rax
  int v62; // edx
  int v63; // ecx
  __int64 v64; // r9
  bool v65; // zf
  GUID *v66; // rax
  __int64 result; // rax
  GUID v68; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v69; // [rsp+48h] [rbp-C0h]
  PROPVARIANT v70; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v71; // [rsp+58h] [rbp-B0h]
  __int64 v72; // [rsp+60h] [rbp-A8h]
  __int64 v73; // [rsp+68h] [rbp-A0h] BYREF
  GUID *v74; // [rsp+70h] [rbp-98h]
  GUID *v75; // [rsp+78h] [rbp-90h]
  GUID *v76; // [rsp+80h] [rbp-88h]
  PROPVARIANT v77; // [rsp+88h] [rbp-80h] BYREF
  __int64 v78; // [rsp+90h] [rbp-78h]
  __int64 v79; // [rsp+98h] [rbp-70h]
  GUID *v80; // [rsp+A0h] [rbp-68h]
  PROPVARIANT pvar[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v82; // [rsp+B8h] [rbp-50h]
  struct _GUID v83; // [rsp+C8h] [rbp-40h] BYREF

  v11 = 0;
  v13 = a9;
  v14 = GUID_00000000_0000_0000_0000_000000000000;
  v15 = a10;
  v16 = GUID_00000000_0000_0000_0000_000000000000;
  v17 = a11;
  v18 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)pvar = GUID_00000000_0000_0000_0000_000000000000;
  v83 = GUID_00000000_0000_0000_0000_000000000000;
  v68 = GUID_00000000_0000_0000_0000_000000000000;
  v80 = a8;
  v75 = a9;
  v74 = a10;
  v76 = a11;
  v73 = 0LL;
  if ( a5 == 1 )
  {
    CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(a3, a6, (struct _GUID *)pvar, &v83, &v68);
    v14 = *(GUID *)pvar;
    v16 = v83;
    v18 = v68;
    goto LABEL_115;
  }
  if ( a4 == 2 )
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      a3,
      eHostProcessConnector,
      (struct _GUID *)pvar,
      &v83,
      &v68);
    v14 = *(GUID *)pvar;
    v16 = v83;
    v18 = v68;
    goto LABEL_115;
  }
  if ( a2 )
  {
    v68 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    if ( CEndpointCharacteristics::IsConnectorModeSupported(a3, a6, &v68) )
    {
      v14 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v16 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v18 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    else
    {
      v11 = -2004287449;
    }
    goto LABEL_115;
  }
  v21 = a6;
  v68 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  if ( a6 )
    goto LABEL_16;
  v22 = *((_QWORD *)a3 + 7);
  v23 = 1;
  if ( !v22 )
    goto LABEL_16;
  pvar[0] = 0LL;
  pvar[1] = 0LL;
  v82 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v22 + 40LL))(
         v22,
         &PKEY_AudioEndpoint_Disable_SysFx,
         pvar) >= 0
    && LOWORD(pvar[0]) == 19 )
  {
    v23 = LODWORD(pvar[1]) == 0;
  }
  PropVariantClear(pvar);
  v21 = eHostProcessConnector;
  if ( v23 )
LABEL_16:
    v24 = (_QWORD *)((char *)a3 + 16 * v21 + 64);
  else
    v24 = (_QWORD *)((char *)a3 + 128);
  v25 = *((_DWORD *)v24 + 2);
  v26 = 0;
  if ( v25 <= 0 )
    goto LABEL_22;
  v27 = *v24;
  while ( *(_QWORD *)(v27 + 16LL * v26) != *(_QWORD *)&v68.Data1
       || *(_QWORD *)(v27 + 16LL * v26 + 8) != *(_QWORD *)v68.Data4 )
  {
    if ( ++v26 >= v25 )
      goto LABEL_22;
  }
  if ( v26 == -1 )
  {
LABEL_22:
    v68 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    if ( v21 )
      goto LABEL_31;
    v28 = *((_QWORD *)a3 + 7);
    v29 = 1;
    if ( !v28 )
      goto LABEL_31;
    v77 = 0LL;
    v78 = 0LL;
    v79 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v28 + 40LL))(
           v28,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &v77) >= 0
      && (_WORD)v77 == 19 )
    {
      v29 = v78 == 0;
    }
    PropVariantClear(&v77);
    v21 = a6;
    if ( v29 )
LABEL_31:
      v30 = (_QWORD *)((char *)a3 + 16 * v21 + 64);
    else
      v30 = (_QWORD *)((char *)a3 + 128);
    v31 = *((_DWORD *)v30 + 2);
    v32 = 0;
    if ( v31 <= 0 )
      goto LABEL_37;
    v33 = *v30;
    while ( *(_QWORD *)(v33 + 16LL * v32) != *(_QWORD *)&v68.Data1
         || *(_QWORD *)(v33 + 16LL * v32 + 8) != *(_QWORD *)v68.Data4 )
    {
      if ( ++v32 >= v31 )
        goto LABEL_37;
    }
    if ( v32 == -1 )
    {
LABEL_37:
      SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(a3, v21);
      v14 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                       (__int64)SupportedConnectorModes,
                       0);
    }
    else
    {
      v14 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
  }
  else
  {
    v14 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  }
  v35 = *((_QWORD *)a3 + 7);
  v36 = 1;
  v83 = v14;
  v68 = v14;
  if ( v35 )
  {
    v70 = 0LL;
    v71 = 0LL;
    v72 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v35 + 40LL))(
           v35,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &v70) >= 0
      && (_WORD)v70 == 19 )
    {
      v36 = v71 == 0;
    }
    PropVariantClear(&v70);
    v37 = a6;
    if ( !v36 && a6 != eKeywordDetectorConnector )
    {
      v38 = (_QWORD *)((char *)a3 + 336);
      goto LABEL_49;
    }
  }
  else
  {
    v37 = a6;
  }
  v38 = (_QWORD *)((char *)a3 + 16 * v37 + 208);
LABEL_49:
  v39 = *((_DWORD *)v38 + 2);
  v40 = 0;
  if ( v39 <= 0 )
    goto LABEL_56;
  v41 = *v38;
  while ( *(_QWORD *)(v41 + 16LL * v40) != *(_QWORD *)&v68.Data1
       || *(_QWORD *)(v41 + 16LL * v40 + 8) != *(_QWORD *)v68.Data4 )
  {
    if ( ++v40 >= v39 )
      goto LABEL_56;
  }
  v42 = &v83;
  if ( v40 == -1 )
LABEL_56:
    v42 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v16 = *v42;
  v18 = v14;
  v43 = *(__int64 (__fastcall **)(__int64, int, unsigned int, __int64 *))(*(_QWORD *)g_PolicyManager + 88LL);
  if ( v43 == CWindowsPolicyManager::GetModePriorityList )
    ModePriorityList = CWindowsPolicyManager::GetModePriorityList((__int64)g_PolicyManager, a4, a1, &v73);
  else
    ModePriorityList = v43((__int64)g_PolicyManager, a4, a1, &v73);
  if ( ModePriorityList >= 0 )
  {
    v45 = 0;
    LODWORD(v69) = 0;
    if ( *(_DWORD *)v73 )
    {
      while ( 1 )
      {
        v46 = 2LL * v45;
        v68 = *(GUID *)(*(_QWORD *)(v73 + 8) + 16LL * v45);
        if ( a6 )
          goto LABEL_69;
        v47 = *((_QWORD *)a3 + 7);
        v48 = 1;
        if ( !v47 )
          goto LABEL_69;
        v70 = 0LL;
        v71 = 0LL;
        v72 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v47 + 40LL))(
               v47,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v70) >= 0
          && (_WORD)v70 == 19 )
        {
          v48 = v71 == 0;
        }
        PropVariantClear(&v70);
        if ( v48 )
LABEL_69:
          v49 = (_QWORD *)((char *)a3 + 16 * a6 + 64);
        else
          v49 = (_QWORD *)((char *)a3 + 128);
        v50 = *((_DWORD *)v49 + 2);
        v51 = 0;
        if ( v50 > 0 )
        {
          v52 = *v49;
          while ( *(_QWORD *)(v52 + 16LL * v51) != *(_QWORD *)&v68.Data1
               || *(_QWORD *)(v52 + 16LL * v51 + 8) != *(_QWORD *)v68.Data4 )
          {
            if ( ++v51 >= v50 )
              goto LABEL_77;
          }
          if ( v51 != -1 )
            break;
        }
LABEL_77:
        v68 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        if ( a6 )
          goto LABEL_84;
        v53 = *((_QWORD *)a3 + 7);
        v54 = 1;
        if ( !v53 )
          goto LABEL_84;
        v70 = 0LL;
        v71 = 0LL;
        v72 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v53 + 40LL))(
               v53,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v70) >= 0
          && (_WORD)v70 == 19 )
        {
          v54 = v71 == 0;
        }
        PropVariantClear(&v70);
        if ( v54 )
LABEL_84:
          v55 = (_QWORD *)((char *)a3 + 16 * a6 + 64);
        else
          v55 = (_QWORD *)((char *)a3 + 128);
        v56 = *((_DWORD *)v55 + 2);
        v57 = 0;
        if ( v56 > 0 )
        {
          v58 = *v55;
          while ( *(_QWORD *)(v58 + 16LL * v57) != *(_QWORD *)&v68.Data1
               || *(_QWORD *)(v58 + 16LL * v57 + 8) != *(_QWORD *)v68.Data4 )
          {
            if ( ++v57 >= v56 )
              goto LABEL_107;
          }
          if ( v57 != -1 )
          {
            v59 = 1;
            v60 = *((_QWORD *)a3 + 7);
            v68 = *(GUID *)(*(_QWORD *)(v73 + 8) + 8 * v46);
            if ( !v60 )
              goto LABEL_99;
            v70 = 0LL;
            v71 = 0LL;
            v72 = 0LL;
            if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v60 + 40LL))(
                   v60,
                   &PKEY_AudioEndpoint_Disable_SysFx,
                   &v70) >= 0
              && (_WORD)v70 == 19 )
            {
              v59 = v71 == 0;
            }
            PropVariantClear(&v70);
            if ( v59 || a6 == eKeywordDetectorConnector )
LABEL_99:
              v61 = (_QWORD *)((char *)a3 + 16 * a6 + 208);
            else
              v61 = (_QWORD *)((char *)a3 + 336);
            v62 = *((_DWORD *)v61 + 2);
            v63 = 0;
            if ( v62 > 0 )
            {
              v64 = *v61;
              while ( *(_QWORD *)(v64 + 16LL * v63) != *(_QWORD *)&v68.Data1
                   || *(_QWORD *)(v64 + 16LL * v63 + 8) != *(_QWORD *)v68.Data4 )
              {
                if ( ++v63 >= v62 )
                  goto LABEL_107;
              }
              if ( v63 != -1 )
              {
                v14 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                v16 = *(GUID *)(*(_QWORD *)(v73 + 8) + 16LL * (unsigned int)v69);
                v18 = v16;
                goto LABEL_114;
              }
            }
          }
        }
LABEL_107:
        v45 = v69 + 1;
        LODWORD(v69) = v45;
        if ( v45 >= *(_DWORD *)v73 )
          goto LABEL_114;
      }
      v14 = *(GUID *)(*(_QWORD *)(v73 + 8) + 16LL * (unsigned int)v69);
      *(GUID *)pvar = v14;
      if ( a7
        || (v68 = v14,
            v65 = CEndpointCharacteristics::IsAPOModeSupported(a3, &v68, a6) == 0,
            v66 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf,
            !v65) )
      {
        v66 = (GUID *)pvar;
      }
      v16 = *v66;
      v18 = v14;
    }
  }
LABEL_114:
  v17 = v76;
  v15 = v74;
  v13 = v75;
LABEL_115:
  if ( v80 )
    *v80 = v14;
  if ( v13 )
    *v13 = v16;
  if ( v15 )
    *v15 = v18;
  result = v11;
  if ( v17 )
    *v17 = v18;
  return result;
}
