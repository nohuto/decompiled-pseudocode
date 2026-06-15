/*
 * XREFs of ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800336B0
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180033B28 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x18001EA40 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?GetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F6A0 (-GetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioenginee.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x180021730 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180021740 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180022BB0 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_.c)
 *     ?GetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002FCC0 (-GetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HHW4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180030474 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180032F04 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800330E8 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180033FFC (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?GetSupportedMFXAPOModes@CEndpointCharacteristics@@AEAAPEBVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003433C (-GetSupportedMFXAPOModes@CEndpointCharacteristics@@AEAAPEBVCAudioSignalProcessingModeArray@1@W4_.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180034520 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180034550 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180034840 (-SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180038138 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     ?GetConnectorProcessingMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@I@Z @ 0x18003817C (-GetConnectorProcessingMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z @ 0x180084BB8 (-ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z.c)
 *     ?SetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x180088710 (-SetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioenginee.c)
 *     ?GetAPOProcessingMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@I@Z @ 0x1800A838C (-GetAPOProcessingMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audioengineend.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CPolicyConfig::DeriveAndCacheMixFormatsForConnector(
        CPolicyConfig *this,
        struct IMMDevice **a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3)
{
  __int64 v3; // r13
  CEndpointCharacteristics *v4; // rdi
  CPolicyConfig *v5; // rsi
  int DeviceFormatInternal; // r12d
  struct IMMDevice *v7; // r15
  unsigned int v8; // eax
  __m128i v9; // xmm6
  struct tWAVEFORMATEX *v10; // r14
  __int64 v11; // rax
  GUID *v12; // rax
  struct _GUID *v13; // rdx
  CAudioMediaType *v14; // rbx
  CAudioMediaType *v15; // rdi
  CAudioMediaType *v16; // rsi
  const WAVEFORMATEX *(__stdcall *GetAudioFormat)(IAudioMediaType *); // r12
  const struct tWAVEFORMATEX *AudioFormat; // rax
  unsigned __int64 v19; // rax
  __int64 (__fastcall *v20)(CAudioMediaType *); // rsi
  __int64 (__fastcall *v21)(CAudioMediaType *); // rdi
  struct tWAVEFORMATEX *v23; // rax
  CPolicyConfig *v24; // rcx
  void *v25; // rcx
  __int64 (__fastcall *v26)(CAudioMediaType *); // r13
  __int64 (__fastcall *v27)(CAudioMediaType *); // rsi
  ULONG (__stdcall *Release)(IAudioMediaType *); // rdi
  bool v29; // zf
  LPVOID v30; // rsi
  struct IUnknown *v31; // rbx
  unsigned int v32; // eax
  struct _GUID v33; // xmm6
  CAudioMediaType *v34; // rdi
  const struct tWAVEFORMATEX *v35; // rax
  __int64 (__fastcall *v36)(CAudioMediaType *); // r14
  __int64 (__fastcall *v37)(CAudioMediaType *); // r14
  __int64 (__fastcall *v38)(CAudioMediaType *); // rdi
  bool v39; // zf
  LPVOID pv; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v41; // [rsp+40h] [rbp-71h]
  unsigned int v42; // [rsp+44h] [rbp-6Dh]
  CEndpointCharacteristics *v43; // [rsp+48h] [rbp-69h]
  struct IAudioMediaType *v44; // [rsp+50h] [rbp-61h] BYREF
  struct IAudioMediaType *v45[2]; // [rsp+58h] [rbp-59h] BYREF
  struct _GUID v46; // [rsp+68h] [rbp-49h] BYREF
  struct IAudioMediaType *v47; // [rsp+78h] [rbp-39h] BYREF
  struct _GUID v48; // [rsp+88h] [rbp-29h] BYREF
  struct IMMDevice *v49; // [rsp+98h] [rbp-19h]
  __int64 v50; // [rsp+A0h] [rbp-11h]
  struct _GUID v51; // [rsp+A8h] [rbp-9h] BYREF

  v50 = -2LL;
  v3 = a3;
  v4 = (CEndpointCharacteristics *)a2;
  v43 = (CEndpointCharacteristics *)a2;
  v5 = this;
  *(_QWORD *)&v48.Data1 = this;
  DeviceFormatInternal = 0;
  v49 = 0LL;
  v7 = a2[2];
  v49 = v7;
  ((void (__fastcall *)(struct IMMDevice *))v7->lpVtbl->AddRef)(v7);
  v42 = *((_DWORD *)CEndpointCharacteristics::GetSupportedConnectorModes(
                      v4,
                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v3)
        + 2);
  v8 = 0;
  v41 = 0;
  if ( v42 )
  {
    while ( 1 )
    {
      pv = 0LL;
      CEndpointCharacteristics::GetConnectorProcessingMode(
        v4,
        &v51,
        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v3,
        v8);
      v47 = 0LL;
      v45[0] = 0LL;
      v44 = 0LL;
      v9 = (__m128i)v51;
      v46 = v51;
      if ( (int)CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                  v4,
                  (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v3,
                  &v46,
                  (struct tWAVEFORMATEX **)&pv) < 0 )
      {
        DeviceFormatInternal = CPolicyConfig::GetDeviceFormatInternal(
                                 v7,
                                 0,
                                 0,
                                 (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v3,
                                 (struct tWAVEFORMATEX **)&pv);
        if ( DeviceFormatInternal < 0 )
          goto LABEL_44;
      }
      v10 = (struct tWAVEFORMATEX *)pv;
      DeviceFormatInternal = CAudioMediaType::Create(
                               (const struct tWAVEFORMATEX *)pv,
                               (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                               &v47,
                               0.0);
      if ( DeviceFormatInternal < 0 )
        break;
      DeviceFormatInternal = ValidateUncompressedWaveFormatEx(v10);
      if ( DeviceFormatInternal < 0 )
        break;
      v11 = v3;
      if ( v3 == 1 )
        v11 = 0LL;
      if ( !*((_DWORD *)v4 + v11 + 10) || (v12 = &v51, *((_DWORD *)v4 + 100)) )
        v12 = &GUID_00000000_0000_0000_0000_000000000000;
      v46 = *v12;
      DeviceFormatInternal = CPolicyConfig::ConfirmDeviceFormat(
                               (struct IUnknown *)v7,
                               v10,
                               &v46,
                               (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v3,
                               0);
      if ( DeviceFormatInternal < 0 )
        break;
      v46 = (struct _GUID)v9;
      v14 = (CAudioMediaType *)v47;
      DeviceFormatInternal = DeriveDevicePipeFormatFromConnectorFormat(
                               v4,
                               v13,
                               (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v3,
                               v47,
                               v45);
      if ( DeviceFormatInternal < 0 )
      {
        v15 = (CAudioMediaType *)v45[0];
        goto LABEL_52;
      }
      v46 = (struct _GUID)v9;
      v15 = (CAudioMediaType *)v45[0];
      DeviceFormatInternal = DeriveMixFormatFromDevicePipeFormat(
                               v43,
                               &v46,
                               (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v3,
                               (struct IUnknown *)v45[0],
                               &v44);
      if ( DeviceFormatInternal < 0 )
      {
        v16 = (CAudioMediaType *)v44;
LABEL_46:
        if ( v16 )
        {
          v26 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v16 + 16LL);
          if ( v26 == CAudioMediaType::Release )
            CAudioMediaType::Release(v16);
          else
            v26(v16);
        }
LABEL_52:
        if ( v15 )
        {
          v27 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v15 + 16LL);
          if ( v27 == CAudioMediaType::Release )
            CAudioMediaType::Release(v15);
          else
            v27(v15);
        }
        if ( v14 )
        {
          Release = *(ULONG (__stdcall **)(IAudioMediaType *))(*(_QWORD *)v14 + 16LL);
          v29 = (char *)Release == (char *)CAudioMediaType::Release;
LABEL_58:
          if ( v29 )
            CAudioMediaType::Release(v14);
          else
            ((void (__fastcall *)(CAudioMediaType *))Release)(v14);
        }
        goto LABEL_61;
      }
      v46 = (struct _GUID)v9;
      v16 = (CAudioMediaType *)v44;
      GetAudioFormat = v44->lpVtbl->GetAudioFormat;
      if ( (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat )
        AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v44);
      else
        AudioFormat = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))GetAudioFormat)(v44);
      DeviceFormatInternal = CPolicyConfig::SetMixFormatInternal(
                               v43,
                               (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v3,
                               &v46,
                               AudioFormat);
      if ( DeviceFormatInternal < 0 )
        goto LABEL_46;
      v19 = v9.m128i_i64[0] - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
      if ( v9.m128i_i64[0] == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
        v19 = _mm_srli_si128(v9, 8).m128i_u64[0] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
      if ( !v19 )
      {
        if ( (unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(
                             v43,
                             (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v3) )
        {
          v46 = (struct _GUID)v9;
          v23 = (struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v15 + 40LL))(v15);
          DeviceFormatInternal = CPolicyConfig::SetDevicePipeFormatInternal(
                                   v24,
                                   v7,
                                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v3,
                                   &v46,
                                   v23);
          if ( DeviceFormatInternal < 0 )
            goto LABEL_46;
        }
      }
      *(_QWORD *)&v46.Data1 = *(_QWORD *)(*(_QWORD *)v16 + 16LL);
      if ( *(__int64 (__fastcall **)(CAudioMediaType *))&v46.Data1 == CAudioMediaType::Release )
        CAudioMediaType::Release(v16);
      else
        (*(void (__fastcall **)(CAudioMediaType *))&v46.Data1)(v16);
      if ( v15 )
      {
        v20 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v15 + 16LL);
        if ( v20 == CAudioMediaType::Release )
          CAudioMediaType::Release(v15);
        else
          v20(v15);
      }
      if ( v14 )
      {
        v21 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v14 + 16LL);
        if ( v21 == CAudioMediaType::Release )
          CAudioMediaType::Release(v14);
        else
          v21(v14);
      }
      CoTaskMemFree(v10);
      pv = 0LL;
      v8 = v41 + 1;
      v41 = v8;
      v4 = v43;
      if ( v8 >= v42 )
      {
        v5 = *(CPolicyConfig **)&v48.Data1;
        goto LABEL_30;
      }
    }
    v14 = (CAudioMediaType *)v47;
    if ( v47 )
    {
      Release = v47->lpVtbl->Release;
      v29 = (char *)Release == (char *)CAudioMediaType::Release;
      goto LABEL_58;
    }
LABEL_61:
    CoTaskMemFree(v10);
    goto LABEL_91;
  }
LABEL_30:
  if ( !(unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(
                        v4,
                        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v3) )
    goto LABEL_31;
  v42 = *((_DWORD *)CEndpointCharacteristics::GetSupportedMFXAPOModes(
                      v4,
                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v3)
        + 2);
  pv = 0LL;
  v45[0] = 0LL;
  v51 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  DeviceFormatInternal = CPolicyConfig::GetDevicePipeFormatInternal(
                           v5,
                           v7,
                           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v3,
                           &v51,
                           (struct tWAVEFORMATEX **)&pv);
  if ( DeviceFormatInternal < 0 )
  {
LABEL_44:
    v25 = pv;
    goto LABEL_90;
  }
  v30 = pv;
  DeviceFormatInternal = CAudioMediaType::Create(
                           (const struct tWAVEFORMATEX *)pv,
                           (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                           v45,
                           0.0);
  if ( DeviceFormatInternal < 0 )
  {
    v31 = (struct IUnknown *)v45[0];
    goto LABEL_84;
  }
  v32 = 0;
  v41 = 0;
  v31 = (struct IUnknown *)v45[0];
  if ( !v42 )
  {
LABEL_84:
    if ( v31 )
    {
      v38 = (__int64 (__fastcall *)(CAudioMediaType *))v31->lpVtbl->Release;
      v39 = v38 == CAudioMediaType::Release;
      goto LABEL_86;
    }
    goto LABEL_89;
  }
  while ( 1 )
  {
    CEndpointCharacteristics::GetAPOProcessingMode(
      v4,
      &v51,
      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v3,
      v32);
    v44 = 0LL;
    v33 = v51;
    v48 = v51;
    if ( (unsigned int)CEndpointCharacteristics::IsConnectorModeSupported(
                         v4,
                         (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v3,
                         &v48) )
      goto LABEL_75;
    v48 = v33;
    DeviceFormatInternal = DeriveMixFormatFromDevicePipeFormat(
                             v4,
                             &v48,
                             (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v3,
                             v31,
                             &v44);
    if ( DeviceFormatInternal < 0 )
      break;
    v48 = v33;
    v34 = (CAudioMediaType *)v44;
    v35 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->GetAudioFormat)(v44);
    DeviceFormatInternal = CPolicyConfig::SetMixFormatInternal(
                             v43,
                             (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v3,
                             &v48,
                             v35);
    if ( DeviceFormatInternal < 0 )
      goto LABEL_78;
    v36 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v34 + 16LL);
    if ( v36 == CAudioMediaType::Release )
      CAudioMediaType::Release(v34);
    else
      v36(v34);
    v4 = v43;
LABEL_75:
    v32 = v41 + 1;
    v41 = v32;
    if ( v32 >= v42 )
      goto LABEL_84;
  }
  v34 = (CAudioMediaType *)v44;
LABEL_78:
  if ( v34 )
  {
    v37 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v34 + 16LL);
    if ( v37 == CAudioMediaType::Release )
      CAudioMediaType::Release(v34);
    else
      v37(v34);
  }
  if ( v31 )
  {
    v38 = (__int64 (__fastcall *)(CAudioMediaType *))v31->lpVtbl->Release;
    v39 = v38 == CAudioMediaType::Release;
LABEL_86:
    if ( v39 )
      CAudioMediaType::Release((CAudioMediaType *)v31);
    else
      v38((CAudioMediaType *)v31);
  }
LABEL_89:
  v25 = v30;
LABEL_90:
  CoTaskMemFree(v25);
LABEL_91:
  pv = 0LL;
LABEL_31:
  if ( DeviceFormatInternal < 0 )
  {
    CPolicyConfig::ClearMixFormats(v7);
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 8) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x2Eu,
        (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
        DeviceFormatInternal);
    }
  }
  if ( v7 )
    ((void (__fastcall *)(struct IMMDevice *))v7->lpVtbl->Release)(v7);
  return (unsigned int)DeviceFormatInternal;
}
