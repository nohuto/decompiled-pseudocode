/*
 * XREFs of ?GetDeviceDefaults@CSaProvider@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180024AB0
 * Callers:
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18002AF40 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180030080 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?GetSaDevice@CSaProvider@@UEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEAPEAUIAudioDeviceGraph@@@Z @ 0x1800745D0 (-GetSaDevice@CSaProvider@@UEAAJPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@W4__MIDL___MIDL_itf.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18008553C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 * Callees:
 *     ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x18001EF00 (-GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z.c)
 *     ?GetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F6A0 (-GetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioenginee.c)
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F934 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180022BB0 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_.c)
 *     ?GetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002FCC0 (-GetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HHW4__MIDL___MIDL_itf_audioengineendpo.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSaProvider::GetDeviceDefaults(
        struct CEndpointCharacteristics *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4,
        struct tWAVEFORMATEX **a5,
        __int64 *a6,
        __int64 *a7)
{
  __int64 v8; // r12
  int ProposedConnectorFormatForProcessingMode; // edi
  struct IMMDevice *v11; // rbx
  __int64 v12; // rax
  BOOL v13; // esi
  __int64 v14; // rdi
  char *v15; // rax
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // r9
  __int64 v19; // rax
  BOOL v20; // esi
  __int64 v21; // rdi
  int v22; // eax
  char *v23; // rdi
  int v24; // r11d
  int v25; // eax
  __int64 v26; // r9
  __int64 v27; // rsi
  BOOL v28; // ebx
  char *v29; // rax
  int v30; // ecx
  __int64 v31; // r8
  __int64 v32; // r10
  __int64 v33; // rax
  struct IMMDevice *v34; // rbx
  int ProcessingPeriod; // eax
  int v37; // [rsp+30h] [rbp-B1h]
  int v38; // [rsp+30h] [rbp-B1h]
  __int64 v39; // [rsp+40h] [rbp-A1h]
  __int64 (__fastcall *v40)(CPolicyConfig *, const unsigned __int16 *, int, __int64 *, __int64 *); // [rsp+40h] [rbp-A1h]
  LPVOID pv; // [rsp+58h] [rbp-89h] BYREF
  struct _GUID *v42; // [rsp+60h] [rbp-81h]
  struct tWAVEFORMATEX *v43; // [rsp+68h] [rbp-79h] BYREF
  struct _GUID v44; // [rsp+70h] [rbp-71h] BYREF
  PROPVARIANT pvar; // [rsp+80h] [rbp-61h] BYREF
  __int64 v46; // [rsp+88h] [rbp-59h]
  __int64 v47; // [rsp+90h] [rbp-51h]
  PROPVARIANT v48; // [rsp+98h] [rbp-49h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-41h]
  __int64 v50; // [rsp+A8h] [rbp-39h]
  PROPVARIANT v51; // [rsp+B0h] [rbp-31h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-29h]
  __int64 v53; // [rsp+C0h] [rbp-21h]
  __int64 v54; // [rsp+C8h] [rbp-19h]
  __int64 v55; // [rsp+D0h] [rbp-11h]

  v54 = -2LL;
  v42 = a3;
  v8 = a2;
  v55 = 0LL;
  v43 = 0LL;
  pv = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  ProposedConnectorFormatForProcessingMode = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)a1 + 2) + 40LL))(
                                               *((_QWORD *)a1 + 2),
                                               &pv);
  if ( ProposedConnectorFormatForProcessingMode >= 0 )
  {
    if ( !a7 && !a6
      || ((v40 = *(__int64 (__fastcall **)(CPolicyConfig *, const unsigned __int16 *, int, __int64 *, __int64 *))(*(_QWORD *)g_PolicyConfig + 56LL),
           v40 != CPolicyConfig::GetProcessingPeriod)
        ? (ProcessingPeriod = v40(g_PolicyConfig, (const unsigned __int16 *)pv, 0, a6, a7))
        : (ProcessingPeriod = CPolicyConfig::GetProcessingPeriod(
                                g_PolicyConfig,
                                (const unsigned __int16 *)pv,
                                0,
                                a6,
                                a7)),
          ProposedConnectorFormatForProcessingMode = ProcessingPeriod,
          ProcessingPeriod >= 0) )
    {
      if ( a4 )
      {
        v44 = *v42;
        ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                                     a1,
                                                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8,
                                                     &v44,
                                                     &v43);
        if ( ProposedConnectorFormatForProcessingMode < 0 )
        {
          v11 = (struct IMMDevice *)*((_QWORD *)a1 + 2);
          ((void (__fastcall *)(struct IMMDevice *))v11->lpVtbl->AddRef)(v11);
          ProposedConnectorFormatForProcessingMode = CPolicyConfig::GetDeviceFormatInternal(
                                                       v11,
                                                       0,
                                                       0,
                                                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8,
                                                       &v43);
          if ( v11 )
            ((void (__fastcall *)(struct IMMDevice *))v11->lpVtbl->Release)(v11);
          if ( ProposedConnectorFormatForProcessingMode < 0 )
            goto LABEL_85;
        }
      }
      if ( !a5 )
        goto LABEL_58;
      v12 = *(_QWORD *)&v42->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( *(_QWORD *)&v42->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
        v12 = *(_QWORD *)v42->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( v12 )
        goto LABEL_68;
      if ( (_DWORD)v8 )
        goto LABEL_23;
      v13 = 1;
      v14 = *((_QWORD *)a1 + 7);
      if ( !v14 )
        goto LABEL_23;
      pvar = 0LL;
      v46 = 0LL;
      v47 = 0LL;
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v14 + 40LL))(
             v14,
             &PKEY_AudioEndpoint_Disable_SysFx,
             &pvar) >= 0
        && (_WORD)pvar == 19 )
      {
        v13 = v46 == 0;
      }
      PropVariantClear(&pvar);
      if ( v13 )
LABEL_23:
        v15 = (char *)a1 + 16 * v8 + 64;
      else
        v15 = (char *)a1 + 128;
      v16 = 0LL;
      v17 = *((_DWORD *)v15 + 2);
      if ( v17 <= 0 )
        goto LABEL_68;
      v18 = *(_QWORD *)v15;
      while ( 1 )
      {
        v19 = *(_QWORD *)(v18 + 16LL * (int)v16) - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
        if ( !v19 )
          v19 = *(_QWORD *)(v18 + 16LL * (int)v16 + 8) - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
        if ( !v19 )
          break;
        v16 = (unsigned int)(v16 + 1);
        if ( (int)v16 >= v17 )
          goto LABEL_68;
      }
      if ( (_DWORD)v16 == -1 )
      {
LABEL_68:
        v44 = *v42;
        ProposedConnectorFormatForProcessingMode = CPolicyConfig::GetMixFormatInternal(
                                                     g_PolicyConfig,
                                                     a1,
                                                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8,
                                                     &v44,
                                                     a5);
        if ( ProposedConnectorFormatForProcessingMode < 0 )
          goto LABEL_85;
LABEL_58:
        if ( a4 )
          *a4 = v43;
        goto LABEL_60;
      }
      v37 = v8;
      if ( (_DWORD)v8 == 1 )
        v37 = 0;
      v20 = 1;
      v21 = *((_QWORD *)a1 + 7);
      if ( v21 )
      {
        v51 = 0LL;
        v52 = 0LL;
        v53 = 0LL;
        if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v21 + 40LL))(
               v21,
               &PKEY_AudioEndpoint_Disable_SysFx,
               &v51) >= 0
          && (_WORD)v51 == 19 )
        {
          v20 = v52 == 0;
        }
        PropVariantClear(&v51);
        v22 = v37;
        if ( !v20 && v37 != 3 )
        {
          v23 = (char *)a1 + 336;
LABEL_38:
          v24 = 0;
          v38 = 0;
          v25 = *((_DWORD *)v23 + 2);
          if ( v25 > 0 )
          {
            v26 = 0LL;
            v39 = 0LL;
            while ( 1 )
            {
              if ( v26 < 0 || v24 >= v25 )
              {
                RaiseException(0xC000008C, 1u, 0, 0LL);
                JUMPOUT(0x180057CBELL);
              }
              v44 = *(struct _GUID *)(v26 + *(_QWORD *)v23);
              if ( (_DWORD)v8 )
                goto LABEL_48;
              v27 = *((_QWORD *)a1 + 7);
              if ( !v27 )
                goto LABEL_48;
              v48 = 0LL;
              v49 = 0LL;
              v50 = 0LL;
              v28 = (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v27 + 40LL))(
                      v27,
                      &PKEY_AudioEndpoint_Disable_SysFx,
                      &v48) < 0
                 || (_WORD)v48 != 19
                 || v49 == 0;
              PropVariantClear(&v48);
              v26 = v39;
              v24 = v38;
              if ( v28 )
LABEL_48:
                v29 = (char *)a1 + 16 * v8 + 64;
              else
                v29 = (char *)a1 + 128;
              v30 = 0;
              v31 = *((unsigned int *)v29 + 2);
              if ( (int)v31 <= 0 )
                break;
              v32 = *(_QWORD *)v29;
              while ( 1 )
              {
                v16 = 2LL * v30;
                v33 = *(_QWORD *)(v32 + 16LL * v30) - *(_QWORD *)&v44.Data1;
                if ( !v33 )
                  v33 = *(_QWORD *)(v32 + 16LL * v30 + 8) - *(_QWORD *)v44.Data4;
                if ( !v33 )
                  break;
                if ( ++v30 >= (int)v31 )
                  goto LABEL_55;
              }
              if ( v30 == -1 )
                break;
              v38 = ++v24;
              v26 += 16LL;
              v39 = v26;
              v25 = *((_DWORD *)v23 + 2);
              if ( v24 >= v25 )
                goto LABEL_68;
            }
LABEL_55:
            v34 = (struct IMMDevice *)*((_QWORD *)a1 + 2);
            ((void (__fastcall *)(struct IMMDevice *, __int64, __int64, __int64))v34->lpVtbl->AddRef)(
              v34,
              v16,
              v31,
              v26);
            v44 = *v42;
            ProposedConnectorFormatForProcessingMode = CPolicyConfig::GetDevicePipeFormatInternal(
                                                         g_PolicyConfig,
                                                         v34,
                                                         (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8,
                                                         &v44,
                                                         a5);
            if ( ProposedConnectorFormatForProcessingMode >= 0 )
            {
              if ( v34 )
                ((void (__fastcall *)(struct IMMDevice *))v34->lpVtbl->Release)(v34);
              goto LABEL_58;
            }
            if ( v34 )
              ((void (__fastcall *)(struct IMMDevice *))v34->lpVtbl->Release)(v34);
LABEL_85:
            if ( v43 )
              CoTaskMemFree(v43);
            goto LABEL_60;
          }
          goto LABEL_68;
        }
      }
      else
      {
        v22 = v37;
      }
      v23 = (char *)a1 + 16 * v22 + 208;
      goto LABEL_38;
    }
  }
LABEL_60:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( ProposedConnectorFormatForProcessingMode < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      37LL,
      &WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids,
      (unsigned int)ProposedConnectorFormatForProcessingMode);
  }
  return (unsigned int)ProposedConnectorFormatForProcessingMode;
}
