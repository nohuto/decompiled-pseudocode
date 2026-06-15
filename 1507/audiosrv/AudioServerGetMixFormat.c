/*
 * XREFs of AudioServerGetMixFormat @ 0x18002E5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F1A0 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180022A10 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18003445C (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180034520 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x180037EA0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180038138 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008BC58 (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     TemplateEventDescriptor @ 0x18008DB28 (TemplateEventDescriptor.c)
 *     Template_zqttq @ 0x18008DB44 (Template_zqttq.c)
 */

__int64 __fastcall AudioServerGetMixFormat(
        CEndpointCharacteristicsCache *a1,
        const unsigned __int16 *a2,
        unsigned int *a3,
        CEndpointCharacteristicsCache *a4)
{
  CEndpointCharacteristics *v7; // rdi
  __int64 v8; // rsi
  int MixFormatInternal; // r15d
  unsigned __int16 *v10; // r12
  int AliasedEndpointCharacteristics; // eax
  struct IMMDevice *v12; // rbx
  bool v13; // zf
  BOOL v14; // r13d
  __int64 v15; // r12
  unsigned int v16; // eax
  GUID v17; // xmm6
  __int64 v19; // r15
  BOOL v20; // r14d
  char *v21; // rax
  int v22; // edx
  int v23; // ecx
  __int64 v24; // r9
  char *v25; // rax
  int v26; // edx
  int v27; // ecx
  __int64 v28; // r9
  struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedConnectorModes; // rax
  int v30; // r14d
  BOOL v31; // r15d
  __int64 v32; // r12
  char *v33; // rax
  int v34; // edx
  int v35; // ecx
  __int64 v36; // r10
  unsigned int v37; // ecx
  __int64 v38; // r13
  __int64 v39; // r12
  __int64 v40; // r15
  BOOL v41; // r14d
  char *v42; // rax
  int v43; // edx
  int v44; // ecx
  __int64 v45; // r9
  __int64 v46; // r15
  BOOL v47; // r14d
  char *v48; // rax
  int v49; // edx
  int v50; // ecx
  __int64 v51; // r9
  int v52; // r15d
  BOOL v53; // r14d
  struct _GUID v54; // xmm0
  __int64 v55; // r12
  char *v56; // rax
  int v57; // edx
  int v58; // ecx
  __int64 v59; // r9
  char *v60; // rax
  int v61; // edx
  int v62; // ecx
  __int64 v63; // r9
  CPolicyConfig *v64; // r12
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v65; // r15d
  SIZE_T v66; // rbx
  HANDLE ProcessHeap; // rax
  void *v68; // rax
  unsigned int v69; // [rsp+48h] [rbp-C0h]
  unsigned int v70; // [rsp+48h] [rbp-C0h]
  CEndpointCharacteristics *v71; // [rsp+50h] [rbp-B8h] BYREF
  void *Src; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 *pv; // [rsp+60h] [rbp-A8h]
  GUID pv_8; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v75; // [rsp+78h] [rbp-90h]
  PROPVARIANT pvar[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v77; // [rsp+98h] [rbp-70h]
  CEndpointCharacteristicsCache *v78; // [rsp+A0h] [rbp-68h]
  unsigned int *v79; // [rsp+A8h] [rbp-60h]
  PROPVARIANT v80; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v81; // [rsp+B8h] [rbp-50h]
  __int64 v82; // [rsp+C0h] [rbp-48h]
  PROPVARIANT v83; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v84; // [rsp+D0h] [rbp-38h]
  __int64 v85; // [rsp+D8h] [rbp-30h]
  PROPVARIANT v86; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v87; // [rsp+E8h] [rbp-20h]
  __int64 v88; // [rsp+F0h] [rbp-18h]
  struct _GUID v89; // [rsp+F8h] [rbp-10h] BYREF

  v7 = 0LL;
  v78 = a4;
  v8 = 0LL;
  v79 = a3;
  pv = 0LL;
  v71 = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    Template_zqttq((_DWORD)a1, (unsigned int)&AudioSrv_GetMixFormat_Task_Start, (_DWORD)a2, *a3, a3[2], a3[4], a3[1]);
  *(_QWORD *)a4 = 0LL;
  MixFormatInternal = 0;
  if ( !g_PolicyManager )
  {
    v10 = pv;
    MixFormatInternal = -2147418113;
    goto LABEL_15;
  }
  if ( !(*(unsigned int (__fastcall **)(CWindowsPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 64LL))(
          g_PolicyManager,
          *a3)
    || !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3[1]) )
  {
    MixFormatInternal = -2147024809;
  }
  if ( MixFormatInternal < 0
    || (AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(a1, a2, &v71),
        v7 = v71,
        MixFormatInternal = AliasedEndpointCharacteristics,
        AliasedEndpointCharacteristics < 0) )
  {
    v10 = pv;
    goto LABEL_15;
  }
  v8 = *((_QWORD *)v71 + 2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v12 = 0LL;
  v13 = *((_DWORD *)v7 + 93) == 1;
  v71 = 0LL;
  v14 = v13;
  v89 = GUID_00000000_0000_0000_0000_000000000000;
  v15 = (int)v79[1];
  v16 = *v79;
  LODWORD(Src) = v79[1];
  v69 = v16;
  pv_8 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)pvar = GUID_00000000_0000_0000_0000_000000000000;
  if ( v13 == 2 )
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      v7,
      eHostProcessConnector,
      &v89,
      (struct _GUID *)pvar,
      &pv_8);
    v17 = pv_8;
  }
  else if ( v79[2] )
  {
    v89 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    if ( !(unsigned int)CEndpointCharacteristics::IsConnectorModeSupported(
                          v7,
                          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v15,
                          &v89) )
    {
      v10 = pv;
      MixFormatInternal = -2004287449;
      goto LABEL_15;
    }
    v17 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  else
  {
    v89 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    if ( (_DWORD)v15 )
      goto LABEL_37;
    v19 = *((_QWORD *)v7 + 7);
    v20 = 1;
    if ( !v19 )
      goto LABEL_37;
    pvar[0] = 0LL;
    pvar[1] = 0LL;
    v77 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v19 + 40LL))(
           v19,
           &PKEY_AudioEndpoint_Disable_SysFx,
           pvar) >= 0
      && LOWORD(pvar[0]) == 19 )
    {
      v20 = LODWORD(pvar[1]) == 0;
    }
    PropVariantClear(pvar);
    if ( v20 )
LABEL_37:
      v21 = (char *)v7 + 16 * v15 + 64;
    else
      v21 = (char *)v7 + 128;
    v22 = *((_DWORD *)v21 + 2);
    v23 = 0;
    if ( v22 <= 0 )
      goto LABEL_43;
    v24 = *(_QWORD *)v21;
    while ( *(_QWORD *)(v24 + 16LL * v23) != *(_QWORD *)&v89.Data1
         || *(_QWORD *)(v24 + 16LL * v23 + 8) != *(_QWORD *)v89.Data4 )
    {
      if ( ++v23 >= v22 )
        goto LABEL_43;
    }
    if ( v23 == -1 )
    {
LABEL_43:
      v89 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      if ( (_DWORD)v15 || CEndpointCharacteristics::AreEnhancementsEnabled(v7) )
        v25 = (char *)v7 + 16 * v15 + 64;
      else
        v25 = (char *)v7 + 128;
      v26 = *((_DWORD *)v25 + 2);
      v27 = 0;
      if ( v26 <= 0 )
        goto LABEL_54;
      v28 = *(_QWORD *)v25;
      while ( *(_QWORD *)(v28 + 16LL * v27) != *(_QWORD *)&v89.Data1
           || *(_QWORD *)(v28 + 16LL * v27 + 8) != *(_QWORD *)v89.Data4 )
      {
        if ( ++v27 >= v26 )
          goto LABEL_54;
      }
      if ( v27 == -1 )
      {
LABEL_54:
        SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(
                                    v7,
                                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v15);
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
    v13 = (_DWORD)v15 == 1;
    v89 = v17;
    v30 = v15;
    v31 = 1;
    v32 = *((_QWORD *)v7 + 7);
    if ( v13 )
      v30 = 0;
    if ( !v32 )
      goto LABEL_66;
    *(_QWORD *)&pv_8.Data1 = 0LL;
    *(_QWORD *)pv_8.Data4 = 0LL;
    v75 = 0LL;
    if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, GUID *))(*(_QWORD *)v32 + 40LL))(
           v32,
           &PKEY_AudioEndpoint_Disable_SysFx,
           &pv_8) >= 0
      && LOWORD(pv_8.Data1) == 19 )
    {
      v31 = *(_DWORD *)pv_8.Data4 == 0;
    }
    PropVariantClear((PROPVARIANT *)&pv_8);
    if ( v31 || v30 == 3 )
LABEL_66:
      v33 = (char *)v7 + 16 * v30 + 208;
    else
      v33 = (char *)v7 + 336;
    v34 = *((_DWORD *)v33 + 2);
    v35 = 0;
    if ( v34 > 0 )
    {
      v36 = *(_QWORD *)v33;
      do
      {
        if ( *(_QWORD *)(v36 + 16LL * v35) == *(_QWORD *)&v89.Data1
          && *(_QWORD *)(v36 + 16LL * v35 + 8) == *(_QWORD *)v89.Data4 )
        {
          break;
        }
        ++v35;
      }
      while ( v35 < v34 );
    }
    v12 = 0LL;
    if ( (*(int (__fastcall **)(CWindowsPolicyManager *, BOOL, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_PolicyManager + 88LL))(
           g_PolicyManager,
           v14,
           v69,
           &v71) >= 0 )
    {
      v37 = 0;
      v70 = 0;
      if ( *(_DWORD *)v71 )
      {
        v38 = (int)Src;
        while ( 1 )
        {
          v39 = 2LL * v37;
          v89 = *(struct _GUID *)(*((_QWORD *)v71 + 1) + 16LL * v37);
          if ( (_DWORD)v38 )
            goto LABEL_82;
          v40 = *((_QWORD *)v7 + 7);
          v41 = 1;
          if ( !v40 )
            goto LABEL_82;
          v80 = 0LL;
          v81 = 0LL;
          v82 = 0LL;
          v12 = 0LL;
          if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v40 + 40LL))(
                 v40,
                 &PKEY_AudioEndpoint_Disable_SysFx,
                 &v80) >= 0
            && (_WORD)v80 == 19 )
          {
            v41 = v81 == 0;
          }
          PropVariantClear(&v80);
          if ( v41 )
LABEL_82:
            v42 = (char *)v7 + 16 * v38 + 64;
          else
            v42 = (char *)v7 + 128;
          v43 = *((_DWORD *)v42 + 2);
          v44 = 0;
          if ( v43 > 0 )
          {
            v45 = *(_QWORD *)v42;
            while ( *(_QWORD *)(v45 + 16LL * v44) != *(_QWORD *)&v89.Data1
                 || *(_QWORD *)(v45 + 16LL * v44 + 8) != *(_QWORD *)v89.Data4 )
            {
              if ( ++v44 >= v43 )
                goto LABEL_90;
            }
            if ( v44 != -1 )
              break;
          }
LABEL_90:
          v89 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
          if ( (_DWORD)v38 )
            goto LABEL_97;
          v46 = *((_QWORD *)v7 + 7);
          v47 = 1;
          if ( !v46 )
            goto LABEL_97;
          v83 = 0LL;
          v84 = 0LL;
          v85 = 0LL;
          v12 = 0LL;
          if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v46 + 40LL))(
                 v46,
                 &PKEY_AudioEndpoint_Disable_SysFx,
                 &v83) >= 0
            && (_WORD)v83 == 19 )
          {
            v47 = v84 == 0;
          }
          PropVariantClear(&v83);
          if ( v47 )
LABEL_97:
            v48 = (char *)v7 + 16 * v38 + 64;
          else
            v48 = (char *)v7 + 128;
          v49 = *((_DWORD *)v48 + 2);
          v50 = 0;
          if ( v49 > 0 )
          {
            v51 = *(_QWORD *)v48;
            while ( *(_QWORD *)(v51 + 16LL * v50) != *(_QWORD *)&v89.Data1
                 || *(_QWORD *)(v51 + 16LL * v50 + 8) != *(_QWORD *)v89.Data4 )
            {
              if ( ++v50 >= v49 )
                goto LABEL_122;
            }
            if ( v50 != -1 )
            {
              v52 = v38;
              v53 = 1;
              if ( (_DWORD)v38 == 1 )
                v52 = 0;
              v54 = *(struct _GUID *)(*((_QWORD *)v71 + 1) + 8 * v39);
              v55 = *((_QWORD *)v7 + 7);
              v89 = v54;
              if ( !v55 )
                goto LABEL_114;
              v86 = 0LL;
              v87 = 0LL;
              v88 = 0LL;
              v12 = 0LL;
              if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v55 + 40LL))(
                     v55,
                     &PKEY_AudioEndpoint_Disable_SysFx,
                     &v86) >= 0
                && (_WORD)v86 == 19 )
              {
                v53 = v87 == 0;
              }
              PropVariantClear(&v86);
              if ( v53 || v52 == 3 )
LABEL_114:
                v56 = (char *)v7 + 16 * v52 + 208;
              else
                v56 = (char *)v7 + 336;
              v57 = *((_DWORD *)v56 + 2);
              v58 = 0;
              if ( v57 > 0 )
              {
                v59 = *(_QWORD *)v56;
                while ( *(_QWORD *)(v59 + 16LL * v58) != *(_QWORD *)&v89.Data1
                     || *(_QWORD *)(v59 + 16LL * v58 + 8) != *(_QWORD *)v89.Data4 )
                {
                  if ( ++v58 >= v57 )
                    goto LABEL_122;
                }
                if ( v58 != -1 )
                {
                  v17 = *(GUID *)(*((_QWORD *)v71 + 1) + 16LL * v70);
                  goto LABEL_137;
                }
              }
            }
          }
LABEL_122:
          v37 = v70 + 1;
          v70 = v37;
          if ( v37 >= *(_DWORD *)v71 )
            goto LABEL_137;
        }
        if ( (_DWORD)v38 == 1 )
          LODWORD(v38) = 0;
        v17 = *(GUID *)(*((_QWORD *)v71 + 1) + 16LL * v70);
        v89 = v17;
        if ( CEndpointCharacteristics::AreEnhancementsEnabled(v7) || (_DWORD)v38 == 3 )
          v60 = (char *)v7 + 16 * (int)v38 + 208;
        else
          v60 = (char *)v7 + 336;
        v61 = *((_DWORD *)v60 + 2);
        v62 = 0;
        if ( v61 > 0 )
        {
          v63 = *(_QWORD *)v60;
          do
          {
            if ( *(_QWORD *)(v63 + 16LL * v62) == *(_QWORD *)&v89.Data1
              && *(_QWORD *)(v63 + 16LL * v62 + 8) == *(_QWORD *)v89.Data4 )
            {
              break;
            }
            ++v62;
          }
          while ( v62 < v61 );
        }
      }
    }
  }
LABEL_137:
  v64 = g_PolicyConfig;
  v65 = v79[1];
  if ( !&Src )
  {
    v10 = pv;
    MixFormatInternal = -2147467261;
LABEL_140:
    a1 = *(CEndpointCharacteristicsCache **)&WPP_GLOBAL_Control.Data1;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        32LL,
        &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
        (unsigned int)MixFormatInternal);
    }
    goto LABEL_144;
  }
  v12 = (struct IMMDevice *)*((_QWORD *)v7 + 2);
  Src = 0LL;
  ((void (__fastcall *)(struct IMMDevice *))v12->lpVtbl->AddRef)(v12);
  v89 = v17;
  MixFormatInternal = CPolicyConfig::GetMixFormatInternal(v64, v12, v65, &v89, (struct tWAVEFORMATEX **)&Src);
  v10 = (unsigned __int16 *)Src;
  if ( MixFormatInternal < 0 )
    goto LABEL_140;
LABEL_144:
  if ( v12 )
    ((void (__fastcall *)(struct IMMDevice *))v12->lpVtbl->Release)(v12);
  if ( MixFormatInternal >= 0 )
  {
    v66 = v10[8] + 18LL;
    if ( v66 <= 0x40000 )
    {
      ProcessHeap = GetProcessHeap();
      v68 = HeapAlloc(ProcessHeap, 0, v66);
      a1 = v78;
      *(_QWORD *)v78 = v68;
      if ( v68 )
        memcpy_0(v68, v10, v10[8] + 18LL);
      else
        MixFormatInternal = -2147024882;
    }
    else
    {
      a1 = v78;
      MixFormatInternal = -2147024882;
      *(_QWORD *)v78 = 0LL;
    }
  }
LABEL_15:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(a1, &AudioSrv_GetMixFormat_Task_Stop);
  if ( v10 )
    CoTaskMemFree(v10);
  if ( MixFormatInternal < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      101LL,
      &WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      (unsigned int)MixFormatInternal);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v7 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)MixFormatInternal;
}
