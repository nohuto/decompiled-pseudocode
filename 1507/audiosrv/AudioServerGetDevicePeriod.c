/*
 * XREFs of AudioServerGetDevicePeriod @ 0x18008D110
 * Callers:
 *     <none>
 * Callees:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAU_GUID@@444@Z @ 0x180020690 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180022BB0 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024370 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?GetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002FCC0 (-GetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HHW4__MIDL___MIDL_itf_audioengineendpo.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x1800327BC (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@PEAI333@Z @ 0x180066460 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x1800A8BCC (-GetExclusiveModeProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_.c)
 */

__int64 __fastcall AudioServerGetDevicePeriod(
        __int64 a1,
        const unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  CEndpointCharacteristics *v6; // rbx
  volatile int *v9; // rdx
  CEndpointCharacteristicsCache *v10; // rcx
  int DeviceFormatInternal; // r14d
  int AliasedEndpointCharacteristics; // eax
  int v13; // edx
  int v14; // ecx
  unsigned int v15; // r9d
  CEndpointCharacteristics *v16; // r8
  void *v17; // rcx
  struct _GUID v18; // xmm6
  struct IMMDevice *v19; // rdi
  int *v20; // rdi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v21; // edx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v22; // edx
  struct _GUID v23; // xmm6
  struct IMMDevice *v24; // rdi
  LPVOID v25; // rdi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v26; // edx
  unsigned int (__fastcall *v27)(__int64, volatile int *); // rdi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v29; // [rsp+30h] [rbp-41h]
  unsigned int v30; // [rsp+68h] [rbp-9h] BYREF
  LPVOID pv; // [rsp+70h] [rbp-1h] BYREF
  struct _GUID v32; // [rsp+78h] [rbp+7h] BYREF

  v6 = 0LL;
  pv = 0LL;
  DeviceFormatInternal = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( DeviceFormatInternal >= 0 )
  {
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       v10,
                                       a2,
                                       (struct CEndpointCharacteristics **)&pv);
    v6 = (CEndpointCharacteristics *)pv;
    DeviceFormatInternal = AliasedEndpointCharacteristics;
    if ( AliasedEndpointCharacteristics >= 0 )
    {
      if ( a5 )
      {
        v13 = *(_DWORD *)(a3 + 8);
        v14 = *(_DWORD *)a3;
        v15 = *((_DWORD *)pv + 93) == 1;
        v16 = (CEndpointCharacteristics *)pv;
        v29 = *(_DWORD *)(a3 + 4);
        pv = 0LL;
        DeviceFormatInternal = DeriveAudioProcessingModeConfiguration(
                                 v14,
                                 v13,
                                 v16,
                                 v15,
                                 0,
                                 v29,
                                 0,
                                 &v32,
                                 0LL,
                                 0LL,
                                 0LL);
        if ( DeviceFormatInternal < 0 )
        {
          v17 = 0LL;
LABEL_20:
          CoTaskMemFree(v17);
LABEL_21:
          if ( DeviceFormatInternal >= 0 )
            goto LABEL_26;
          goto LABEL_22;
        }
        v18 = v32;
        if ( (int)CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                    v6,
                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                    &v32,
                    (struct tWAVEFORMATEX **)&pv) < 0 )
        {
          v19 = (struct IMMDevice *)*((_QWORD *)v6 + 2);
          ((void (__fastcall *)(struct IMMDevice *))v19->lpVtbl->AddRef)(v19);
          DeviceFormatInternal = CPolicyConfig::GetDeviceFormatInternal(
                                   v19,
                                   0,
                                   0,
                                   (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                                   (struct tWAVEFORMATEX **)&pv);
          if ( v19 )
            ((void (__fastcall *)(struct IMMDevice *))v19->lpVtbl->Release)(v19);
          if ( DeviceFormatInternal < 0 )
          {
LABEL_10:
            v17 = pv;
            goto LABEL_20;
          }
        }
        v20 = (int *)pv;
        v21 = *(_DWORD *)(a3 + 4);
        v32 = v18;
        DeviceFormatInternal = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                 v6,
                                 v21,
                                 (const struct tWAVEFORMATEX *)pv,
                                 &v32,
                                 &v30,
                                 0LL,
                                 0LL,
                                 0LL);
        v17 = v20;
        if ( DeviceFormatInternal < 0 )
          goto LABEL_20;
        *a5 = (unsigned int)(int)((double)(int)v30 * 10000000.0 / (double)v20[1] + 0.5);
        CoTaskMemFree(v20);
      }
      if ( !a6 )
        goto LABEL_21;
      v22 = *(_DWORD *)(a3 + 4);
      pv = 0LL;
      CEndpointCharacteristics::GetExclusiveModeProcessingModeConfiguration(v6, v22, &v32, 0LL, 0LL);
      v23 = v32;
      if ( (int)CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                  v6,
                  (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                  &v32,
                  (struct tWAVEFORMATEX **)&pv) >= 0 )
        goto LABEL_18;
      v24 = (struct IMMDevice *)*((_QWORD *)v6 + 2);
      ((void (__fastcall *)(struct IMMDevice *))v24->lpVtbl->AddRef)(v24);
      DeviceFormatInternal = CPolicyConfig::GetDeviceFormatInternal(
                               v24,
                               0,
                               0,
                               (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*(_DWORD *)(a3 + 4),
                               (struct tWAVEFORMATEX **)&pv);
      if ( v24 )
        ((void (__fastcall *)(struct IMMDevice *))v24->lpVtbl->Release)(v24);
      if ( DeviceFormatInternal >= 0 )
      {
LABEL_18:
        v25 = pv;
        v26 = *(_DWORD *)(a3 + 4);
        v32 = v23;
        DeviceFormatInternal = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                 v6,
                                 v26,
                                 (const struct tWAVEFORMATEX *)pv,
                                 &v32,
                                 0LL,
                                 0LL,
                                 &v30,
                                 0LL);
        v17 = v25;
        if ( DeviceFormatInternal >= 0 )
          *a6 = (unsigned int)(int)((double)(int)v30 * 10000000.0 / (double)*((int *)v25 + 1) + 0.5);
        goto LABEL_20;
      }
      goto LABEL_10;
    }
  }
LABEL_22:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x67u,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      DeviceFormatInternal);
  }
LABEL_26:
  if ( v6 )
  {
    v27 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v6 + 16LL);
    if ( v27 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        (__int64)v6,
        v9);
    else
      ((void (__fastcall *)(CEndpointCharacteristics *))v27)(v6);
  }
  return (unsigned int)DeviceFormatInternal;
}
