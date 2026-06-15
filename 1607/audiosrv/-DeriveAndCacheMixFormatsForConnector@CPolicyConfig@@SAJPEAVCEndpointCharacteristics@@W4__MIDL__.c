/*
 * XREFs of ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180068DB0
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18006EB18 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 * Callees:
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180003988 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800039E4 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetSupportedMFXAPOModes@CEndpointCharacteristics@@AEAAPEBVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180003A40 (-GetSupportedMFXAPOModes@CEndpointCharacteristics@@AEAAPEBVCAudioSignalProcessingModeArray@1@W4_.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x18001AF20 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18001BD38 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x18001BF30 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18001C9C4 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     ?GetConnectorProcessingMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@I@Z @ 0x18002DF04 (-GetConnectorProcessingMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180067C88 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180069B84 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18006A020 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?SetDevicePipeFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x18006EE30 (-SetDevicePipeFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x18006F434 (-SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800700B8 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ @ 0x180087F5C (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJXZ.c)
 *     ?GetAPOProcessingMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@I@Z @ 0x1800888F8 (-GetAPOProcessingMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audioengineend.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CPolicyConfig::DeriveAndCacheMixFormatsForConnector(struct IMMDevice **this, __int32 a2)
{
  struct CEndpointCharacteristics *v3; // r14
  int ConnectorFormatForProcessingMode; // r12d
  struct IMMDevice *v5; // r15
  unsigned int v6; // eax
  __m128i v7; // xmm6
  struct tWAVEFORMATEX *v8; // rsi
  struct _GUID *v9; // rdx
  struct IAudioMediaType *v10; // rbx
  struct IAudioMediaType *v11; // rdi
  struct IAudioMediaType *v12; // r14
  const struct tWAVEFORMATEX *v13; // rax
  unsigned __int64 v14; // rax
  struct tWAVEFORMATEX *v15; // rax
  struct IAudioMediaTypeVtbl *lpVtbl; // rax
  struct IAudioMediaType *v17; // rcx
  void *v18; // rcx
  unsigned int v19; // esi
  int (*v20)(struct CEndpointCharacteristics *, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001); // r9
  void *v21; // rdi
  struct IAudioMediaTypeVtbl *v22; // rax
  unsigned int v23; // eax
  struct IAudioMediaType *v24; // rbx
  struct _GUID v25; // xmm6
  struct IAudioMediaType *v26; // rsi
  const struct tWAVEFORMATEX *v27; // rax
  struct IAudioMediaTypeVtbl *v28; // rax
  struct IAudioMediaType *v29; // rcx
  LPVOID pv; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v32; // [rsp+40h] [rbp-51h]
  unsigned int v33; // [rsp+44h] [rbp-4Dh]
  struct IAudioMediaType *v34; // [rsp+48h] [rbp-49h] BYREF
  struct IAudioMediaType *v35; // [rsp+50h] [rbp-41h] BYREF
  struct _GUID v36; // [rsp+58h] [rbp-39h] BYREF
  CEndpointCharacteristics *v37; // [rsp+68h] [rbp-29h]
  struct IAudioMediaType *v38; // [rsp+70h] [rbp-21h] BYREF
  struct IMMDevice *v39; // [rsp+78h] [rbp-19h]
  __int64 v40; // [rsp+80h] [rbp-11h]
  struct _GUID v41; // [rsp+88h] [rbp-9h] BYREF

  v40 = -2LL;
  v3 = (struct CEndpointCharacteristics *)this;
  v37 = (CEndpointCharacteristics *)this;
  ConnectorFormatForProcessingMode = 0;
  v39 = 0LL;
  v5 = this[2];
  v39 = v5;
  ((void (__fastcall *)(struct IMMDevice *))v5->lpVtbl->AddRef)(v5);
  v33 = *((_DWORD *)CEndpointCharacteristics::GetSupportedConnectorModes(
                      v3,
                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2)
        + 2);
  v6 = 0;
  v32 = 0;
  if ( v33 )
  {
    while ( 1 )
    {
      pv = 0LL;
      CEndpointCharacteristics::GetConnectorProcessingMode(
        v3,
        &v41,
        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
        v6);
      v38 = 0LL;
      v35 = 0LL;
      v34 = 0LL;
      v7 = (__m128i)v41;
      v36 = v41;
      ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                                           v3,
                                           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                           &v36,
                                           (struct tWAVEFORMATEX **)&pv);
      if ( ConnectorFormatForProcessingMode < 0 )
        goto LABEL_41;
      v8 = (struct tWAVEFORMATEX *)pv;
      ConnectorFormatForProcessingMode = CAudioMediaType::Create(
                                           (const struct tWAVEFORMATEX *)pv,
                                           (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                                           &v38,
                                           0.0);
      if ( ConnectorFormatForProcessingMode < 0 )
        break;
      ConnectorFormatForProcessingMode = ValidateUncompressedWaveFormatEx(v8);
      if ( ConnectorFormatForProcessingMode < 0 )
        break;
      v36 = (struct _GUID)v7;
      ConnectorFormatForProcessingMode = CPolicyConfig::ConfirmDeviceFormat(v3, v8, &v36, a2, 0);
      if ( ConnectorFormatForProcessingMode < 0 )
        break;
      v36 = (struct _GUID)v7;
      v10 = v38;
      ConnectorFormatForProcessingMode = DeriveDevicePipeFormatFromConnectorFormat(
                                           v3,
                                           v9,
                                           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                           v38,
                                           &v35);
      if ( ConnectorFormatForProcessingMode < 0 )
      {
        if ( v35 )
          ((void (__fastcall *)(struct IAudioMediaType *))v35->lpVtbl->Release)(v35);
LABEL_31:
        if ( v10 )
        {
          lpVtbl = v10->lpVtbl;
          v17 = v10;
          goto LABEL_33;
        }
        goto LABEL_34;
      }
      v36 = (struct _GUID)v7;
      v11 = v35;
      ConnectorFormatForProcessingMode = DeriveMixFormatFromDevicePipeFormat(
                                           v3,
                                           &v36,
                                           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                           v35,
                                           &v34);
      if ( ConnectorFormatForProcessingMode < 0 )
      {
        if ( v34 )
          ((void (__fastcall *)(struct IAudioMediaType *))v34->lpVtbl->Release)(v34);
        if ( v11 )
          ((void (__fastcall *)(struct IAudioMediaType *))v11->lpVtbl->Release)(v11);
        goto LABEL_31;
      }
      v36 = (struct _GUID)v7;
      v12 = v34;
      v13 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v34->lpVtbl->GetAudioFormat)(v34);
      ConnectorFormatForProcessingMode = CPolicyConfig::SetMixFormatInternal(
                                           v37,
                                           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                           &v36,
                                           v13);
      if ( ConnectorFormatForProcessingMode < 0 )
        goto LABEL_20;
      v14 = v7.m128i_i64[0] - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( v7.m128i_i64[0] == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
        v14 = _mm_srli_si128(v7, 8).m128i_u64[0] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( !v14 )
      {
        if ( (unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(
                             v37,
                             (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2) )
        {
          v36 = (struct _GUID)v7;
          v15 = (struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v11->lpVtbl->GetAudioFormat)(v11);
          ConnectorFormatForProcessingMode = CPolicyConfig::SetDevicePipeFormatInternal(
                                               v5,
                                               (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                               &v36,
                                               v15);
          if ( ConnectorFormatForProcessingMode < 0 )
          {
LABEL_20:
            if ( v12 )
              ((void (__fastcall *)(struct IAudioMediaType *))v12->lpVtbl->Release)(v12);
            if ( v11 )
              ((void (__fastcall *)(struct IAudioMediaType *))v11->lpVtbl->Release)(v11);
            if ( v10 )
              ((void (__fastcall *)(struct IAudioMediaType *))v10->lpVtbl->Release)(v10);
            CoTaskMemFree(v8);
            v3 = v37;
            goto LABEL_63;
          }
        }
      }
      ((void (__fastcall *)(struct IAudioMediaType *))v12->lpVtbl->Release)(v12);
      if ( v11 )
        ((void (__fastcall *)(struct IAudioMediaType *))v11->lpVtbl->Release)(v11);
      if ( v10 )
        ((void (__fastcall *)(struct IAudioMediaType *))v10->lpVtbl->Release)(v10);
      CoTaskMemFree(v8);
      pv = 0LL;
      v6 = v32 + 1;
      v32 = v6;
      v3 = v37;
      if ( v6 >= v33 )
        goto LABEL_42;
    }
    v17 = v38;
    if ( v38 )
    {
      lpVtbl = v38->lpVtbl;
LABEL_33:
      ((void (__fastcall *)(struct IAudioMediaType *))lpVtbl->Release)(v17);
    }
LABEL_34:
    v18 = v8;
LABEL_35:
    CoTaskMemFree(v18);
    goto LABEL_63;
  }
LABEL_42:
  if ( !(unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(
                        v3,
                        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2) )
    goto LABEL_64;
  v19 = *((_DWORD *)CEndpointCharacteristics::GetSupportedMFXAPOModes(
                      v3,
                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2)
        + 2);
  v33 = v19;
  pv = 0LL;
  v35 = 0LL;
  v36 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetDevicePipeFormat(
                                       v3,
                                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                       &v36,
                                       v20,
                                       (struct tWAVEFORMATEX **)&pv);
  if ( ConnectorFormatForProcessingMode < 0 )
  {
LABEL_41:
    v18 = pv;
    goto LABEL_35;
  }
  v21 = pv;
  ConnectorFormatForProcessingMode = CAudioMediaType::Create(
                                       (const struct tWAVEFORMATEX *)pv,
                                       (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                                       &v35,
                                       0.0);
  if ( ConnectorFormatForProcessingMode < 0 )
  {
    if ( v35 )
    {
      v22 = v35->lpVtbl;
      goto LABEL_61;
    }
    goto LABEL_62;
  }
  v23 = 0;
  v32 = 0;
  v24 = v35;
  if ( !v19 )
    goto LABEL_59;
  while ( 1 )
  {
    CEndpointCharacteristics::GetAPOProcessingMode(
      v3,
      &v36,
      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
      v23);
    v34 = 0LL;
    v25 = v36;
    v41 = v36;
    if ( (unsigned int)CEndpointCharacteristics::IsConnectorModeSupported(
                         v3,
                         (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                         &v41) )
      goto LABEL_52;
    v41 = v25;
    ConnectorFormatForProcessingMode = DeriveMixFormatFromDevicePipeFormat(
                                         v3,
                                         &v41,
                                         (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                         v24,
                                         &v34);
    if ( ConnectorFormatForProcessingMode < 0 )
      break;
    v41 = v25;
    v26 = v34;
    v27 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v34->lpVtbl->GetAudioFormat)(v34);
    ConnectorFormatForProcessingMode = CPolicyConfig::SetMixFormatInternal(
                                         v3,
                                         (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
                                         &v41,
                                         v27);
    if ( ConnectorFormatForProcessingMode < 0 )
    {
      if ( !v26 )
        goto LABEL_59;
      v28 = v26->lpVtbl;
      v29 = v26;
      goto LABEL_58;
    }
    ((void (__fastcall *)(struct IAudioMediaType *))v26->lpVtbl->Release)(v26);
    v19 = v33;
LABEL_52:
    v23 = v32 + 1;
    v32 = v23;
    if ( v23 >= v19 )
      goto LABEL_59;
  }
  v29 = v34;
  if ( !v34 )
    goto LABEL_59;
  v28 = v34->lpVtbl;
LABEL_58:
  ((void (__fastcall *)(struct IAudioMediaType *))v28->Release)(v29);
LABEL_59:
  if ( v24 )
  {
    v22 = v24->lpVtbl;
LABEL_61:
    ((void (*)(void))v22->Release)();
  }
LABEL_62:
  CoTaskMemFree(v21);
LABEL_63:
  pv = 0LL;
LABEL_64:
  if ( ConnectorFormatForProcessingMode < 0 )
  {
    CEndpointCharacteristics::ClearMixFormatCache(v3);
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x13u,
        (__int64)&WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids,
        ConnectorFormatForProcessingMode);
    }
  }
  if ( v5 )
    ((void (__fastcall *)(struct IMMDevice *))v5->lpVtbl->Release)(v5);
  return (unsigned int)ConnectorFormatForProcessingMode;
}
