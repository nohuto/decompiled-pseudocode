/*
 * XREFs of AudioServerGetDevicePeriod @ 0x180089970
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x18000EBE0 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?GetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180010EC0 (-GetDeviceFormatInternal@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@HHW4__MIDL___MIDL_itf_a.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@PEAI333@Z @ 0x180012E10 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180013340 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BEC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAU_GUID@@444@Z @ 0x1800317E0 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180088E80 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 */

__int64 __fastcall AudioServerGetDevicePeriod(
        __int64 a1,
        const unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 *a6)
{
  CEndpointCharacteristics *v6; // rbx
  int DeviceFormatInternal; // r14d
  int AliasedEndpointCharacteristics; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v11; // edx
  void *v12; // rcx
  struct _GUID v13; // xmm6
  __int64 v14; // rdi
  int *v15; // rdi
  __int64 (__fastcall *v16)(volatile signed __int32 *); // rdi
  unsigned int v18; // [rsp+68h] [rbp+7h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+Fh] BYREF
  struct _GUID v20; // [rsp+78h] [rbp+17h] BYREF

  v6 = 0LL;
  pv = 0LL;
  DeviceFormatInternal = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( DeviceFormatInternal >= 0 )
  {
    AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                       (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                       a2,
                                       (struct CEndpointCharacteristics **)&pv);
    v6 = (CEndpointCharacteristics *)pv;
    DeviceFormatInternal = AliasedEndpointCharacteristics;
    if ( AliasedEndpointCharacteristics >= 0 )
    {
      if ( a5 )
      {
        pv = 0LL;
        DeviceFormatInternal = DeriveAudioProcessingModeConfiguration(
                                 *(_DWORD *)a3,
                                 *(_DWORD *)(a3 + 8),
                                 v6,
                                 *((_DWORD *)v6 + 93) == 1,
                                 0,
                                 eHostProcessConnector,
                                 0,
                                 &v20,
                                 0LL,
                                 0LL,
                                 0LL);
        if ( DeviceFormatInternal < 0 )
        {
          v12 = 0LL;
LABEL_6:
          CoTaskMemFree(v12);
          goto LABEL_16;
        }
        v13 = v20;
        if ( (int)CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                    v6,
                    eHostProcessConnector,
                    &v20,
                    (struct tWAVEFORMATEX **)&pv) < 0 )
        {
          v14 = *((_QWORD *)v6 + 2);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          DeviceFormatInternal = CPolicyConfig::GetDeviceFormatInternal(
                                   (struct IMMDevice **)v6,
                                   0,
                                   0,
                                   eHostProcessConnector,
                                   (struct tWAVEFORMATEX **)&pv);
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          if ( DeviceFormatInternal < 0 )
          {
            v12 = pv;
            goto LABEL_6;
          }
        }
        v15 = (int *)pv;
        v20 = v13;
        DeviceFormatInternal = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                 v6,
                                 0,
                                 (const struct tWAVEFORMATEX *)pv,
                                 &v20,
                                 &v18,
                                 0LL,
                                 0LL,
                                 0LL);
        v12 = v15;
        if ( DeviceFormatInternal < 0 )
          goto LABEL_6;
        *a5 = (unsigned int)(int)((double)(int)v18 * 10000000.0 / (double)v15[1] + 0.5);
        CoTaskMemFree(v15);
      }
      if ( a6 )
        DeviceFormatInternal = CPolicyConfig::GetMinProcessingPeriodForExclusiveMode(v6, v11, a6);
LABEL_16:
      if ( DeviceFormatInternal >= 0 )
        goto LABEL_21;
    }
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x65u,
      (__int64)&WPP_8fcf0ce21d4e3a3e0240111d41fb5ad7_Traceguids,
      DeviceFormatInternal);
  }
LABEL_21:
  if ( v6 )
  {
    v16 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL);
    if ( v16 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v6);
    else
      v16((volatile signed __int32 *)v6);
  }
  return (unsigned int)DeviceFormatInternal;
}
