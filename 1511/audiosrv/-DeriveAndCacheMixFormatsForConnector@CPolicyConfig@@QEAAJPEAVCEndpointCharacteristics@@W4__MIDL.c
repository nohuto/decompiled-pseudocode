/*
 * XREFs of ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180080460
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180084E18 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ?GetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180010EC0 (-GetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HHW4__MIDL___MIDL_itf_a.c)
 *     ?GetSupportedMFXAPOModes@CEndpointCharacteristics@@AEAAPEBVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180012A54 (-GetSupportedMFXAPOModes@CEndpointCharacteristics@@AEAAPEBVCAudioSignalProcessingModeArray@1@W4_.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180013340 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180013690 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180013734 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x180020DE0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003FE88 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     ?GetConnectorProcessingMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@I@Z @ 0x180040DFC (-GetConnectorProcessingMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180065164 (-GetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_i.c)
 *     ?ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z @ 0x18007F618 (-ClearMixFormats@CPolicyConfig@@SAJPEAUIMMDevice@@@Z.c)
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x18007FA60 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180081298 (-DeriveDevicePipeFormatFromConnectorFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x1800817E0 (-DeriveMixFormatFromDevicePipeFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?SetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUtWAVEFORMATEX@@@Z @ 0x1800851CC (-SetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioenginee.c)
 *     ?SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x180085888 (-SetMixFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioe.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180086890 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetAPOProcessingMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@I@Z @ 0x1800A5DA4 (-GetAPOProcessingMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audioengineend.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CPolicyConfig::DeriveAndCacheMixFormatsForConnector(
        CPolicyConfig *this,
        struct IMMDevice **a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v3; // r12d
  struct CEndpointCharacteristics *v4; // r14
  CPolicyConfig *v5; // rdi
  int DeviceFormatInternal; // r13d
  struct IMMDevice *v7; // r15
  unsigned int v8; // eax
  __m128i v9; // xmm6
  struct tWAVEFORMATEX *v10; // rsi
  struct _GUID *v11; // rdx
  struct IAudioMediaType *v12; // rbx
  struct IAudioMediaType *v13; // rdi
  struct IAudioMediaType *v14; // r14
  const struct tWAVEFORMATEX *v15; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v16; // r12d
  struct tWAVEFORMATEX *v17; // rax
  CPolicyConfig *v18; // rcx
  void *v19; // rcx
  unsigned int v20; // esi
  LPVOID v21; // rdi
  struct IAudioMediaType *v22; // rbx
  unsigned int v23; // eax
  struct _GUID v24; // xmm6
  struct IAudioMediaType *v25; // rsi
  const struct tWAVEFORMATEX *v26; // rax
  LPVOID pv; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v29; // [rsp+40h] [rbp-71h]
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v30; // [rsp+44h] [rbp-6Dh]
  struct IAudioMediaType *v31; // [rsp+48h] [rbp-69h] BYREF
  unsigned int v32; // [rsp+50h] [rbp-61h]
  struct IAudioMediaType *v33[2]; // [rsp+58h] [rbp-59h] BYREF
  struct _GUID v34; // [rsp+68h] [rbp-49h] BYREF
  struct CEndpointCharacteristics *v35; // [rsp+78h] [rbp-39h]
  struct IAudioMediaType *v36; // [rsp+80h] [rbp-31h] BYREF
  struct IMMDevice *v37; // [rsp+88h] [rbp-29h]
  CPolicyConfig *v38; // [rsp+90h] [rbp-21h]
  __int64 v39; // [rsp+98h] [rbp-19h]
  struct _GUID v40; // [rsp+A8h] [rbp-9h] BYREF

  v39 = -2LL;
  v3 = a3;
  v30 = a3;
  v4 = (struct CEndpointCharacteristics *)a2;
  v35 = (struct CEndpointCharacteristics *)a2;
  v5 = this;
  v38 = this;
  DeviceFormatInternal = 0;
  v37 = 0LL;
  v7 = a2[2];
  v37 = v7;
  ((void (__fastcall *)(struct IMMDevice *))v7->lpVtbl->AddRef)(v7);
  v32 = *((_DWORD *)CEndpointCharacteristics::GetSupportedConnectorModes(v4, v3) + 2);
  v8 = 0;
  v29 = 0;
  if ( v32 )
  {
    while ( 1 )
    {
      pv = 0LL;
      CEndpointCharacteristics::GetConnectorProcessingMode(v4, &v40, v3, v8);
      v36 = 0LL;
      v33[0] = 0LL;
      v31 = 0LL;
      v9 = (__m128i)v40;
      v34 = v40;
      if ( (int)CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                  v4,
                  v3,
                  &v34,
                  (struct tWAVEFORMATEX **)&pv) < 0 )
      {
        DeviceFormatInternal = CPolicyConfig::GetDeviceFormatInternal(
                                 (struct IMMDevice **)v4,
                                 0,
                                 0,
                                 v3,
                                 (struct tWAVEFORMATEX **)&pv);
        if ( DeviceFormatInternal < 0 )
          goto LABEL_20;
      }
      v10 = (struct tWAVEFORMATEX *)pv;
      DeviceFormatInternal = CAudioMediaType::Create(
                               (const struct tWAVEFORMATEX *)pv,
                               (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                               &v36,
                               0.0);
      if ( DeviceFormatInternal < 0 )
        break;
      DeviceFormatInternal = ValidateUncompressedWaveFormatEx(v10);
      if ( DeviceFormatInternal < 0 )
        break;
      v34 = (struct _GUID)v9;
      DeviceFormatInternal = CPolicyConfig::ConfirmDeviceFormat(v4, v10, &v34, v3, 0);
      if ( DeviceFormatInternal < 0 )
        break;
      v34 = (struct _GUID)v9;
      v12 = v36;
      DeviceFormatInternal = DeriveDevicePipeFormatFromConnectorFormat(v4, v11, v3, v36, v33);
      if ( DeviceFormatInternal < 0 )
      {
        v13 = v33[0];
        goto LABEL_23;
      }
      v34 = (struct _GUID)v9;
      v13 = v33[0];
      DeviceFormatInternal = DeriveMixFormatFromDevicePipeFormat(v4, &v34, v3, v33[0], &v31);
      if ( DeviceFormatInternal < 0 )
      {
        v14 = v31;
LABEL_21:
        if ( v14 )
          ((void (__fastcall *)(struct IAudioMediaType *))v14->lpVtbl->Release)(v14);
LABEL_23:
        if ( v13 )
          ((void (__fastcall *)(struct IAudioMediaType *))v13->lpVtbl->Release)(v13);
LABEL_25:
        if ( v12 )
          ((void (__fastcall *)(struct IAudioMediaType *))v12->lpVtbl->Release)(v12);
        v19 = v10;
        goto LABEL_49;
      }
      v34 = (struct _GUID)v9;
      v14 = v31;
      v15 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v31->lpVtbl->GetAudioFormat)(v31);
      v16 = v30;
      DeviceFormatInternal = CPolicyConfig::SetMixFormatInternal(v35, v30, &v34, v15);
      if ( DeviceFormatInternal < 0 )
        goto LABEL_21;
      if ( v9.m128i_i64[0] == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
        && _mm_srli_si128(v9, 8).m128i_u64[0] == *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4 )
      {
        if ( (unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(v35, v16) )
        {
          v34 = (struct _GUID)v9;
          v17 = (struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v13->lpVtbl->GetAudioFormat)(v13);
          DeviceFormatInternal = CPolicyConfig::SetDevicePipeFormatInternal(v18, v7, v30, &v34, v17);
          if ( DeviceFormatInternal < 0 )
            goto LABEL_21;
        }
      }
      ((void (__fastcall *)(struct IAudioMediaType *))v14->lpVtbl->Release)(v14);
      if ( v13 )
        ((void (__fastcall *)(struct IAudioMediaType *))v13->lpVtbl->Release)(v13);
      if ( v12 )
        ((void (__fastcall *)(struct IAudioMediaType *))v12->lpVtbl->Release)(v12);
      CoTaskMemFree(v10);
      pv = 0LL;
      v8 = v29 + 1;
      v29 = v8;
      v3 = v30;
      v4 = v35;
      if ( v8 >= v32 )
      {
        v5 = v38;
        goto LABEL_32;
      }
    }
    v12 = v36;
    goto LABEL_25;
  }
LABEL_32:
  if ( (unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(v4, v3) )
  {
    v20 = *((_DWORD *)CEndpointCharacteristics::GetSupportedMFXAPOModes(v4, v3) + 2);
    v32 = v20;
    pv = 0LL;
    v33[0] = 0LL;
    v34 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    DeviceFormatInternal = CPolicyConfig::GetDevicePipeFormatInternal(v5, v4, v3, &v34, (struct tWAVEFORMATEX **)&pv);
    if ( DeviceFormatInternal < 0 )
    {
LABEL_20:
      v19 = pv;
    }
    else
    {
      v21 = pv;
      DeviceFormatInternal = CAudioMediaType::Create(
                               (const struct tWAVEFORMATEX *)pv,
                               (unsigned int)*((unsigned __int16 *)pv + 8) + 18,
                               v33,
                               0.0);
      if ( DeviceFormatInternal < 0 )
      {
        v22 = v33[0];
        goto LABEL_46;
      }
      v23 = 0;
      v29 = 0;
      v22 = v33[0];
      while ( v23 < v20 )
      {
        CEndpointCharacteristics::GetAPOProcessingMode(v4, &v34, v3, v23);
        v31 = 0LL;
        v24 = v34;
        v40 = v34;
        if ( !CEndpointCharacteristics::IsConnectorModeSupported(v4, v3, &v40) )
        {
          v40 = v24;
          DeviceFormatInternal = DeriveMixFormatFromDevicePipeFormat(v4, &v40, v3, v22, &v31);
          if ( DeviceFormatInternal < 0 )
          {
            v25 = v31;
LABEL_44:
            if ( v25 )
              ((void (__fastcall *)(struct IAudioMediaType *))v25->lpVtbl->Release)(v25);
            break;
          }
          v40 = v24;
          v25 = v31;
          v26 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v31->lpVtbl->GetAudioFormat)(v31);
          DeviceFormatInternal = CPolicyConfig::SetMixFormatInternal(v35, v3, &v40, v26);
          if ( DeviceFormatInternal < 0 )
            goto LABEL_44;
          ((void (__fastcall *)(struct IAudioMediaType *))v25->lpVtbl->Release)(v25);
          v4 = v35;
          v20 = v32;
        }
        v23 = v29 + 1;
        v29 = v23;
      }
LABEL_46:
      if ( v22 )
        ((void (__fastcall *)(struct IAudioMediaType *))v22->lpVtbl->Release)(v22);
      v19 = v21;
    }
LABEL_49:
    CoTaskMemFree(v19);
    pv = 0LL;
  }
  if ( DeviceFormatInternal < 0 )
  {
    CPolicyConfig::ClearMixFormats(v7);
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Du,
        (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
        DeviceFormatInternal);
    }
  }
  if ( v7 )
    ((void (__fastcall *)(struct IMMDevice *))v7->lpVtbl->Release)(v7);
  return (unsigned int)DeviceFormatInternal;
}
