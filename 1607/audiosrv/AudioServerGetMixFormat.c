/*
 * XREFs of AudioServerGetMixFormat @ 0x180006550
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800038A4 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800039E4 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180003B80 (-IsAPOModeSupported@CEndpointCharacteristics@@QEAAHU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     TemplateEventDescriptor @ 0x180008958 (TemplateEventDescriptor.c)
 *     Template_zqttq @ 0x180008980 (Template_zqttq.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001B720 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18001C9C4 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18002765C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180071DFC (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 */

__int64 __fastcall AudioServerGetMixFormat(int a1, __int64 a2, unsigned int *a3, struct IAudioPolicyManager *a4)
{
  unsigned int v7; // r15d
  struct tWAVEFORMATEX *v8; // rsi
  __int64 v9; // rbx
  struct IAudioPolicyManager *v10; // rcx
  int v11; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v12; // eax
  CEndpointCharacteristics *v13; // r14
  unsigned int v14; // r12d
  unsigned int v15; // r13d
  bool v16; // zf
  int (*v17)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  GUID v18; // xmm6
  int MixFormat; // eax
  SIZE_T v20; // r14
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v21; // esi
  __int64 v22; // rcx
  BOOL v23; // edi
  char *v24; // rax
  int v25; // edx
  int v26; // ecx
  __int64 v27; // r9
  __int64 v28; // rcx
  BOOL v29; // edi
  char *v30; // rax
  int v31; // edx
  int v32; // ecx
  __int64 v33; // r9
  struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedConnectorModes; // rax
  __int64 v35; // rcx
  BOOL v36; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v37; // eax
  char *v38; // rax
  int v39; // edx
  int v40; // ecx
  __int64 v41; // r11
  unsigned int v42; // r12d
  __int64 v43; // rcx
  BOOL v44; // edi
  char *v45; // rax
  int v46; // edx
  int v47; // ecx
  __int64 v48; // rcx
  BOOL v49; // edi
  char *v50; // rax
  int v51; // edx
  int v52; // ecx
  BOOL v53; // edi
  __int64 v54; // rcx
  char *v55; // rax
  int v56; // edx
  int v57; // ecx
  HANDLE ProcessHeap; // rax
  void *v59; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v61; // [rsp+48h] [rbp-C0h]
  __int64 v62; // [rsp+50h] [rbp-B8h] BYREF
  CEndpointCharacteristics *v63; // [rsp+58h] [rbp-B0h] BYREF
  struct tWAVEFORMATEX *Src; // [rsp+60h] [rbp-A8h] BYREF
  GUID Src_8; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v66; // [rsp+78h] [rbp-90h]
  PROPVARIANT pvar[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v68; // [rsp+98h] [rbp-70h]
  unsigned int *v69; // [rsp+A0h] [rbp-68h]
  struct IAudioPolicyManager *v70; // [rsp+A8h] [rbp-60h]
  PROPVARIANT v71; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v72; // [rsp+B8h] [rbp-50h]
  __int64 v73; // [rsp+C0h] [rbp-48h]
  PROPVARIANT v74; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v75; // [rsp+D0h] [rbp-38h]
  __int64 v76; // [rsp+D8h] [rbp-30h]
  PROPVARIANT v77; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v78; // [rsp+E8h] [rbp-20h]
  __int64 v79; // [rsp+F0h] [rbp-18h]
  PROPVARIANT v80; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v81; // [rsp+100h] [rbp-8h]
  __int64 v82; // [rsp+108h] [rbp+0h]
  struct _GUID v83; // [rsp+118h] [rbp+10h] BYREF

  v7 = 0;
  v8 = 0LL;
  v70 = a4;
  v9 = 0LL;
  v69 = a3;
  Src = 0LL;
  v63 = 0LL;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    Template_zqttq(a1, (unsigned int)&AudioSrv_GetMixFormat_Task_Start, a2, *a3, a3[2], a3[5], a3[1]);
  v10 = g_PolicyManager;
  *(_QWORD *)a4 = 0LL;
  v11 = 0;
  if ( !v10 )
  {
    v11 = -2147418113;
    goto LABEL_120;
  }
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, *a3)
    || !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3[1]) )
  {
    v11 = -2147024809;
  }
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
            g_pEndpointCharacteristicsCache,
            a2,
            &v63);
    if ( v11 >= 0 )
    {
      v9 = *((_QWORD *)v63 + 2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v12 = a3[1];
      v13 = v63;
      v14 = a3[6];
      v15 = *a3;
      v61 = v12;
      v16 = *((_DWORD *)v63 + 93) == 1;
      v83 = GUID_00000000_0000_0000_0000_000000000000;
      LOBYTE(v7) = v16;
      v62 = 0LL;
      *(GUID *)pvar = GUID_00000000_0000_0000_0000_000000000000;
      Src_8 = GUID_00000000_0000_0000_0000_000000000000;
      if ( v7 == 2 )
      {
        CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
          v63,
          eHostProcessConnector,
          &v83,
          (struct _GUID *)pvar,
          &Src_8);
        v18 = Src_8;
LABEL_12:
        v83 = v18;
        MixFormat = CEndpointCharacteristics::GetMixFormat(
                      v63,
                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v69[1],
                      &v83,
                      v17,
                      &Src);
        v8 = Src;
        v11 = MixFormat;
        if ( MixFormat >= 0 )
        {
          v20 = Src->cbSize + 18LL;
          if ( v20 <= 0x40000 )
          {
            ProcessHeap = GetProcessHeap();
            v59 = HeapAlloc(ProcessHeap, 0, v20);
            v10 = v70;
            *(_QWORD *)v70 = v59;
            if ( v59 )
              memcpy_0(v59, v8, v8->cbSize + 18LL);
            else
              v11 = -2147024882;
          }
          else
          {
            v10 = v70;
            v11 = -2147024882;
            *(_QWORD *)v70 = 0LL;
          }
        }
        goto LABEL_120;
      }
      if ( v69[2] )
      {
        v83 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        if ( !(unsigned int)CEndpointCharacteristics::IsConnectorModeSupported(v63, v12, &v83) )
        {
          v11 = -2004287449;
          goto LABEL_120;
        }
        v18 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        goto LABEL_12;
      }
      v21 = v12;
      v83 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      if ( v12 == eLoopbackConnector )
        v21 = eHostProcessConnector;
      if ( v21 )
        goto LABEL_28;
      v22 = *((_QWORD *)v63 + 7);
      v23 = 1;
      if ( !v22 )
        goto LABEL_28;
      pvar[0] = 0LL;
      pvar[1] = 0LL;
      v68 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v22 + 40LL))(
             v22,
             &PKEY_AudioEndpoint_Disable_SysFx,
             pvar) >= 0
        && LOWORD(pvar[0]) == 19 )
      {
        v23 = LODWORD(pvar[1]) == 0;
      }
      PropVariantClear(pvar);
      if ( v23 )
LABEL_28:
        v24 = (char *)v13 + 16 * v21 + 64;
      else
        v24 = (char *)v13 + 128;
      v25 = *((_DWORD *)v24 + 2);
      v26 = 0;
      if ( v25 <= 0 )
        goto LABEL_34;
      v27 = *(_QWORD *)v24;
      while ( *(_QWORD *)(v27 + 16LL * v26) != *(_QWORD *)&v83.Data1
           || *(_QWORD *)(v27 + 16LL * v26 + 8) != *(_QWORD *)v83.Data4 )
      {
        if ( ++v26 >= v25 )
          goto LABEL_34;
      }
      if ( v26 == -1 )
      {
LABEL_34:
        v83 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        if ( v21 )
          goto LABEL_43;
        v28 = *((_QWORD *)v13 + 7);
        v29 = 1;
        if ( !v28 )
          goto LABEL_43;
        *(_QWORD *)&Src_8.Data1 = 0LL;
        *(_QWORD *)Src_8.Data4 = 0LL;
        v66 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, GUID *))(*(_QWORD *)v28 + 40LL))(
               v28,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &Src_8) >= 0
          && LOWORD(Src_8.Data1) == 19 )
        {
          v29 = *(_DWORD *)Src_8.Data4 == 0;
        }
        PropVariantClear((PROPVARIANT *)&Src_8);
        if ( v29 )
LABEL_43:
          v30 = (char *)v13 + 16 * v21 + 64;
        else
          v30 = (char *)v13 + 128;
        v31 = *((_DWORD *)v30 + 2);
        v32 = 0;
        if ( v31 <= 0 )
          goto LABEL_49;
        v33 = *(_QWORD *)v30;
        while ( *(_QWORD *)(v33 + 16LL * v32) != *(_QWORD *)&v83.Data1
             || *(_QWORD *)(v33 + 16LL * v32 + 8) != *(_QWORD *)v83.Data4 )
        {
          if ( ++v32 >= v31 )
            goto LABEL_49;
        }
        if ( v32 == -1 )
        {
LABEL_49:
          SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(v13, v21);
          v18 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                           SupportedConnectorModes,
                           0LL);
        }
        else
        {
          v18 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        }
      }
      else
      {
        v18 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
      v35 = *((_QWORD *)v13 + 7);
      v36 = 1;
      v83 = v18;
      if ( v35 )
      {
        v71 = 0LL;
        v72 = 0LL;
        v73 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v35 + 40LL))(
               v35,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v71) >= 0
          && (_WORD)v71 == 19 )
        {
          v36 = v72 == 0;
        }
        PropVariantClear(&v71);
        v37 = v61;
        if ( !v36 && v61 != eKeywordDetectorConnector )
        {
          v38 = (char *)v13 + 336;
          goto LABEL_61;
        }
      }
      else
      {
        v37 = v61;
      }
      v38 = (char *)v13 + 16 * v37 + 208;
LABEL_61:
      v39 = *((_DWORD *)v38 + 2);
      v40 = 0;
      if ( v39 > 0 )
      {
        v41 = *(_QWORD *)v38;
        do
        {
          if ( *(_QWORD *)(v41 + 16LL * v40) == *(_QWORD *)&v83.Data1
            && *(_QWORD *)(v41 + 16LL * v40 + 8) == *(_QWORD *)v83.Data4 )
          {
            break;
          }
          ++v40;
        }
        while ( v40 < v39 );
      }
      if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager
                                                                                                  + 80LL))(
             g_PolicyManager,
             v7,
             v15,
             v14,
             &v62) >= 0 )
      {
        v42 = 0;
        if ( *(_DWORD *)v62 )
        {
          while ( 1 )
          {
            v83 = *(struct _GUID *)(*(_QWORD *)(v62 + 8) + 16LL * v42);
            if ( v61 )
              goto LABEL_75;
            v43 = *((_QWORD *)v13 + 7);
            v44 = 1;
            if ( !v43 )
              goto LABEL_75;
            v74 = 0LL;
            v75 = 0LL;
            v76 = 0LL;
            if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v43 + 40LL))(
                   v43,
                   &PKEY_AudioEndpoint_Disable_SysFx,
                   &v74) >= 0
              && (_WORD)v74 == 19 )
            {
              v44 = v75 == 0;
            }
            PropVariantClear(&v74);
            if ( v44 )
LABEL_75:
              v45 = (char *)v13 + 16 * v61 + 64;
            else
              v45 = (char *)v13 + 128;
            v46 = *((_DWORD *)v45 + 2);
            v47 = 0;
            if ( v46 > 0 )
            {
              v17 = *(int (**)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001))v45;
              while ( *((_QWORD *)v17 + 2 * v47) != *(_QWORD *)&v83.Data1
                   || *((_QWORD *)v17 + 2 * v47 + 1) != *(_QWORD *)v83.Data4 )
              {
                if ( ++v47 >= v46 )
                  goto LABEL_83;
              }
              if ( v47 != -1 )
              {
                v18 = *(GUID *)(*(_QWORD *)(v62 + 8) + 16LL * v42);
                v83 = v18;
                CEndpointCharacteristics::IsAPOModeSupported(v13, &v83, v61);
                goto LABEL_12;
              }
            }
LABEL_83:
            v83 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
            if ( v61 )
              goto LABEL_90;
            v48 = *((_QWORD *)v13 + 7);
            v49 = 1;
            if ( !v48 )
              goto LABEL_90;
            v77 = 0LL;
            v78 = 0LL;
            v79 = 0LL;
            if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v48 + 40LL))(
                   v48,
                   &PKEY_AudioEndpoint_Disable_SysFx,
                   &v77) >= 0
              && (_WORD)v77 == 19 )
            {
              v49 = v78 == 0;
            }
            PropVariantClear(&v77);
            if ( v49 )
LABEL_90:
              v50 = (char *)v13 + 16 * v61 + 64;
            else
              v50 = (char *)v13 + 128;
            v51 = *((_DWORD *)v50 + 2);
            v52 = 0;
            if ( v51 > 0 )
            {
              v17 = *(int (**)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001))v50;
              while ( *((_QWORD *)v17 + 2 * v52) != *(_QWORD *)&v83.Data1
                   || *((_QWORD *)v17 + 2 * v52 + 1) != *(_QWORD *)v83.Data4 )
              {
                if ( ++v52 >= v51 )
                  goto LABEL_113;
              }
              if ( v52 != -1 )
              {
                v53 = 1;
                v54 = *((_QWORD *)v13 + 7);
                v83 = *(struct _GUID *)(*(_QWORD *)(v62 + 8) + 16LL * v42);
                if ( !v54 )
                  goto LABEL_105;
                v80 = 0LL;
                v81 = 0LL;
                v82 = 0LL;
                if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v54 + 40LL))(
                       v54,
                       &PKEY_AudioEndpoint_Disable_SysFx,
                       &v80) >= 0
                  && (_WORD)v80 == 19 )
                {
                  v53 = v81 == 0;
                }
                PropVariantClear(&v80);
                if ( v53 || v61 == eKeywordDetectorConnector )
LABEL_105:
                  v55 = (char *)v13 + 16 * v61 + 208;
                else
                  v55 = (char *)v13 + 336;
                v56 = *((_DWORD *)v55 + 2);
                v57 = 0;
                if ( v56 > 0 )
                {
                  v17 = *(int (**)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001))v55;
                  while ( *((_QWORD *)v17 + 2 * v57) != *(_QWORD *)&v83.Data1
                       || *((_QWORD *)v17 + 2 * v57 + 1) != *(_QWORD *)v83.Data4 )
                  {
                    if ( ++v57 >= v56 )
                      goto LABEL_113;
                  }
                  if ( v57 != -1 )
                    break;
                }
              }
            }
LABEL_113:
            if ( ++v42 >= *(_DWORD *)v62 )
              goto LABEL_12;
          }
          v18 = *(GUID *)(*(_QWORD *)(v62 + 8) + 16LL * v42);
        }
      }
      goto LABEL_12;
    }
  }
LABEL_120:
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    TemplateEventDescriptor(v10, &AudioSrv_GetMixFormat_Task_Stop);
  if ( v8 )
    CoTaskMemFree(v8);
  if ( v11 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetMixFormat", 0xE83u, v11);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v63 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v63 + 16LL))(v63);
  return (unsigned int)v11;
}
