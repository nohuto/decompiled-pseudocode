/*
 * XREFs of ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAU_GUID@@444@Z @ 0x180020690
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAG@Z @ 0x1800153A0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@_J6PEBU_GUID@@KPEBGKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180025240 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHPEAVCEndpo.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x1800768F8 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008C790 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x18008D110 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x18008D670 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18003445C (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180034520 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003480C (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x180037EA0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180038138 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800A8BCC (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 */

__int64 __fastcall DeriveAudioProcessingModeConfiguration(
        int a1,
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
  unsigned int v11; // ebx
  GUID *v12; // r14
  GUID *v13; // rsi
  GUID *v14; // rdi
  GUID v17; // xmm6
  GUID v18; // xmm7
  GUID v19; // xmm8
  __int64 v20; // rdi
  BOOL v21; // esi
  _QWORD *v22; // rax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rdi
  BOOL v28; // esi
  _QWORD *v29; // rax
  int v30; // r8d
  int v31; // edx
  __int64 v32; // r9
  __int64 v33; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v34; // r14d
  __int64 v35; // rdi
  BOOL v36; // esi
  _QWORD *v37; // rax
  int v38; // r8d
  int v39; // edx
  __int64 v40; // r9
  __int64 v41; // rax
  GUID *v42; // rax
  __int64 (__fastcall *v43)(_QWORD, _QWORD, _QWORD, _QWORD); // rbx
  int v44; // edx
  __int64 v45; // rcx
  unsigned int v46; // r12d
  __int64 v47; // rdi
  BOOL v48; // esi
  _QWORD *v49; // rax
  int v50; // r8d
  int v51; // edx
  __int64 v52; // r9
  __int64 v53; // rax
  __int64 v54; // rdi
  BOOL v55; // esi
  _QWORD *v56; // rax
  int v57; // r8d
  int v58; // edx
  __int64 v59; // r9
  __int64 v60; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v61; // r14d
  __int64 v62; // rdi
  BOOL v63; // esi
  _QWORD *v64; // rax
  int v65; // r8d
  int v66; // edx
  __int64 v67; // r9
  __int64 v68; // rax
  __int64 result; // rax
  GUID *v70; // rsi
  struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedConnectorModes; // rax
  GUID v72; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v73; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v74; // [rsp+50h] [rbp-B8h]
  GUID *v75; // [rsp+58h] [rbp-B0h]
  GUID *v76; // [rsp+60h] [rbp-A8h]
  GUID *v77; // [rsp+68h] [rbp-A0h]
  PROPVARIANT v78; // [rsp+70h] [rbp-98h] BYREF
  __int64 v79; // [rsp+78h] [rbp-90h]
  __int64 v80; // [rsp+80h] [rbp-88h]
  PROPVARIANT v81; // [rsp+88h] [rbp-80h] BYREF
  __int64 v82; // [rsp+90h] [rbp-78h]
  __int64 v83; // [rsp+98h] [rbp-70h]
  GUID *v84; // [rsp+A0h] [rbp-68h]
  PROPVARIANT v85[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v86; // [rsp+B8h] [rbp-50h]
  PROPVARIANT pvar[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v88; // [rsp+D8h] [rbp-30h]

  v11 = 0;
  v12 = a11;
  v13 = a9;
  v14 = a10;
  v17 = GUID_00000000_0000_0000_0000_000000000000;
  v18 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)pvar = GUID_00000000_0000_0000_0000_000000000000;
  v19 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)v85 = GUID_00000000_0000_0000_0000_000000000000;
  v72 = GUID_00000000_0000_0000_0000_000000000000;
  LODWORD(v74) = a1;
  v84 = a8;
  v75 = a9;
  v76 = a10;
  v77 = a11;
  v73 = 0LL;
  if ( a5 == 1 )
  {
    CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(
      a3,
      a6,
      (struct _GUID *)pvar,
      (struct _GUID *)v85,
      &v72);
    v17 = *(GUID *)pvar;
    v19 = *(GUID *)v85;
    v18 = v72;
    goto LABEL_95;
  }
  if ( a4 == 2 )
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      a3,
      eHostProcessConnector,
      (struct _GUID *)pvar,
      (struct _GUID *)v85,
      &v72);
    v17 = *(GUID *)pvar;
    v19 = *(GUID *)v85;
    v18 = v72;
    goto LABEL_95;
  }
  if ( a2 )
  {
    v72 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    if ( (unsigned int)CEndpointCharacteristics::IsConnectorModeSupported(a3, a6, &v72) )
    {
      v17 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v19 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v18 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    else
    {
      v11 = -2004287449;
    }
    goto LABEL_95;
  }
  v72 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  if ( a6 )
    goto LABEL_10;
  v20 = *((_QWORD *)a3 + 7);
  v21 = 1;
  if ( !v20 )
    goto LABEL_10;
  pvar[0] = 0LL;
  pvar[1] = 0LL;
  v88 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v20 + 40LL))(
         v20,
         &PKEY_AudioEndpoint_Disable_SysFx,
         pvar) >= 0
    && LOWORD(pvar[0]) == 19 )
  {
    v21 = LODWORD(pvar[1]) == 0;
  }
  PropVariantClear(pvar);
  if ( v21 )
LABEL_10:
    v22 = (_QWORD *)((char *)a3 + 16 * a6 + 64);
  else
    v22 = (_QWORD *)((char *)a3 + 128);
  v23 = *((_DWORD *)v22 + 2);
  v24 = 0;
  if ( v23 <= 0 )
    goto LABEL_17;
  v25 = *v22;
  while ( 1 )
  {
    v26 = *(_QWORD *)(v25 + 16LL * v24) - *(_QWORD *)&v72.Data1;
    if ( !v26 )
      v26 = *(_QWORD *)(v25 + 16LL * v24 + 8) - *(_QWORD *)v72.Data4;
    if ( !v26 )
      break;
    if ( ++v24 >= v23 )
      goto LABEL_17;
  }
  if ( v24 == -1 )
  {
LABEL_17:
    v72 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    if ( a6 )
      goto LABEL_23;
    v27 = *((_QWORD *)a3 + 7);
    v28 = 1;
    if ( !v27 )
      goto LABEL_23;
    v81 = 0LL;
    v82 = 0LL;
    v83 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v27 + 40LL))(
           v27,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &v81) >= 0
      && (_WORD)v81 == 19 )
    {
      v28 = v82 == 0;
    }
    PropVariantClear(&v81);
    if ( v28 )
LABEL_23:
      v29 = (_QWORD *)((char *)a3 + 16 * a6 + 64);
    else
      v29 = (_QWORD *)((char *)a3 + 128);
    v30 = *((_DWORD *)v29 + 2);
    v31 = 0;
    if ( v30 <= 0 )
      goto LABEL_123;
    v32 = *v29;
    while ( 1 )
    {
      v33 = *(_QWORD *)(v32 + 16LL * v31) - *(_QWORD *)&v72.Data1;
      if ( !v33 )
        v33 = *(_QWORD *)(v32 + 16LL * v31 + 8) - *(_QWORD *)v72.Data4;
      if ( !v33 )
        break;
      if ( ++v31 >= v30 )
        goto LABEL_123;
    }
    if ( v31 == -1 )
    {
LABEL_123:
      SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(a3, a6);
      v17 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                       SupportedConnectorModes,
                       0LL);
    }
    else
    {
      v17 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
  }
  else
  {
    v17 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  }
  *(GUID *)v85 = v17;
  v34 = a6;
  v72 = v17;
  if ( a6 == eOffloadConnector )
    v34 = eHostProcessConnector;
  v35 = *((_QWORD *)a3 + 7);
  v36 = 1;
  if ( !v35 )
    goto LABEL_38;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v35 + 40LL))(
         v35,
         &PKEY_AudioEndpoint_Disable_SysFx,
         &v78) >= 0
    && (_WORD)v78 == 19 )
  {
    v36 = v79 == 0;
  }
  PropVariantClear(&v78);
  if ( v36 || v34 == eKeywordDetectorConnector )
LABEL_38:
    v37 = (_QWORD *)((char *)a3 + 16 * v34 + 208);
  else
    v37 = (_QWORD *)((char *)a3 + 336);
  v38 = *((_DWORD *)v37 + 2);
  v39 = 0;
  if ( v38 <= 0 )
    goto LABEL_45;
  v40 = *v37;
  while ( 1 )
  {
    v41 = *(_QWORD *)(v40 + 16LL * v39) - *(_QWORD *)&v72.Data1;
    if ( !v41 )
      v41 = *(_QWORD *)(v40 + 16LL * v39 + 8) - *(_QWORD *)v72.Data4;
    if ( !v41 )
      break;
    if ( ++v39 >= v38 )
      goto LABEL_45;
  }
  v42 = (GUID *)v85;
  if ( v39 == -1 )
LABEL_45:
    v42 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v19 = *v42;
  v18 = v17;
  v43 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_PolicyManager + 88LL);
  if ( (char *)v43 == (char *)&CWindowsPolicyManager::GetModePriorityList )
  {
    v11 = 0;
    v44 = 0;
    if ( a4 )
    {
      if ( a4 == 1 && (unsigned int)v74 < 0x15 )
      {
        v45 = (__int64)*(&off_1800C89F0 + (unsigned int)v74);
        goto LABEL_50;
      }
    }
    else if ( (unsigned int)v74 < 0x15 )
    {
      v45 = (__int64)*(&off_1800BAD00 + (unsigned int)v74);
LABEL_50:
      v73 = v45;
      goto LABEL_51;
    }
    v44 = -2147024809;
  }
  else
  {
    v44 = v43(g_PolicyManager, a4, (unsigned int)v74, &v73);
    v11 = 0;
  }
LABEL_51:
  if ( v44 >= 0 )
  {
    v46 = 0;
    if ( *(_DWORD *)v73 )
    {
      while ( 1 )
      {
        v72 = *(GUID *)(*(_QWORD *)(v73 + 8) + 16LL * v46);
        if ( a6 )
          goto LABEL_59;
        v47 = *((_QWORD *)a3 + 7);
        v48 = 1;
        if ( !v47 )
          goto LABEL_59;
        v78 = 0LL;
        v79 = 0LL;
        v80 = 0LL;
        v11 = 0;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v47 + 40LL))(
               v47,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v78) >= 0
          && (_WORD)v78 == 19 )
        {
          v48 = v79 == 0;
        }
        PropVariantClear(&v78);
        if ( v48 )
LABEL_59:
          v49 = (_QWORD *)((char *)a3 + 16 * a6 + 64);
        else
          v49 = (_QWORD *)((char *)a3 + 128);
        v50 = *((_DWORD *)v49 + 2);
        v51 = 0;
        if ( v50 > 0 )
        {
          v52 = *v49;
          while ( 1 )
          {
            v53 = *(_QWORD *)(v52 + 16LL * v51) - *(_QWORD *)&v72.Data1;
            if ( !v53 )
              v53 = *(_QWORD *)(v52 + 16LL * v51 + 8) - *(_QWORD *)v72.Data4;
            if ( !v53 )
              break;
            if ( ++v51 >= v50 )
              goto LABEL_66;
          }
          if ( v51 != -1 )
            break;
        }
LABEL_66:
        v72 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        if ( a6 )
          goto LABEL_72;
        v54 = *((_QWORD *)a3 + 7);
        v55 = 1;
        if ( !v54 )
          goto LABEL_72;
        v81 = 0LL;
        v82 = 0LL;
        v83 = 0LL;
        v11 = 0;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v54 + 40LL))(
               v54,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v81) >= 0
          && (_WORD)v81 == 19 )
        {
          v55 = v82 == 0;
        }
        PropVariantClear(&v81);
        if ( v55 )
LABEL_72:
          v56 = (_QWORD *)((char *)a3 + 16 * a6 + 64);
        else
          v56 = (_QWORD *)((char *)a3 + 128);
        v57 = *((_DWORD *)v56 + 2);
        v58 = 0;
        if ( v57 > 0 )
        {
          v59 = *v56;
          while ( 1 )
          {
            v60 = *(_QWORD *)(v59 + 16LL * v58) - *(_QWORD *)&v72.Data1;
            if ( !v60 )
              v60 = *(_QWORD *)(v59 + 16LL * v58 + 8) - *(_QWORD *)v72.Data4;
            if ( !v60 )
              break;
            if ( ++v58 >= v57 )
              goto LABEL_105;
          }
          if ( v58 != -1 )
          {
            v61 = a6;
            v72 = *(GUID *)(*(_QWORD *)(v73 + 8) + 16LL * v46);
            if ( a6 == eOffloadConnector )
              v61 = eHostProcessConnector;
            v62 = *((_QWORD *)a3 + 7);
            v63 = 1;
            if ( !v62 )
              goto LABEL_86;
            v85[0] = 0LL;
            v85[1] = 0LL;
            v86 = 0LL;
            v11 = 0;
            if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v62 + 40LL))(
                   v62,
                   &PKEY_AudioEndpoint_Disable_SysFx,
                   v85) >= 0
              && LOWORD(v85[0]) == 19 )
            {
              v63 = LODWORD(v85[1]) == 0;
            }
            PropVariantClear(v85);
            if ( v63 || v61 == eKeywordDetectorConnector )
LABEL_86:
              v64 = (_QWORD *)((char *)a3 + 16 * v61 + 208);
            else
              v64 = (_QWORD *)((char *)a3 + 336);
            v65 = *((_DWORD *)v64 + 2);
            v66 = 0;
            if ( v65 > 0 )
            {
              v67 = *v64;
              while ( 1 )
              {
                v68 = *(_QWORD *)(v67 + 16LL * v66) - *(_QWORD *)&v72.Data1;
                if ( !v68 )
                  v68 = *(_QWORD *)(v67 + 16LL * v66 + 8) - *(_QWORD *)v72.Data4;
                if ( !v68 )
                  break;
                if ( ++v66 >= v65 )
                  goto LABEL_105;
              }
              if ( v66 != -1 )
              {
                v17 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                v19 = *(GUID *)(*(_QWORD *)(v73 + 8) + 16LL * v46);
                v18 = v19;
                goto LABEL_94;
              }
            }
          }
        }
LABEL_105:
        if ( ++v46 >= *(_DWORD *)v73 )
          goto LABEL_94;
      }
      v17 = *(GUID *)(*(_QWORD *)(v73 + 8) + 16LL * v46);
      *(GUID *)pvar = v17;
      if ( a7 || (v72 = v17, CEndpointCharacteristics::IsAPOModeSupported(a3, &v72, a6)) )
        v70 = (GUID *)pvar;
      else
        v70 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v19 = *v70;
      v18 = v17;
    }
  }
LABEL_94:
  v14 = v76;
  v13 = v75;
  v12 = v77;
LABEL_95:
  if ( v84 )
    *v84 = v17;
  if ( v13 )
    *v13 = v19;
  if ( v14 )
    *v14 = v18;
  result = v11;
  if ( v12 )
    *v12 = v18;
  return result;
}
