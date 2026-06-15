/*
 * XREFs of AudioServerGetDevicePeriod @ 0x1800041A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180003988 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HHPEAU_GUID@@444@Z @ 0x180003BB4 (-DeriveAudioProcessingModeConfiguration@@YAJKHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREA.c)
 *     ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x180004388 (-ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180008370 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x18001B5C0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180027514 (-GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerGetDevicePeriod(
        __int64 a1,
        const unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 *a6)
{
  int ConnectorFormatForProcessingMode; // edi
  __int64 (__fastcall *v9)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, struct CEndpointCharacteristics **); // rax
  int v10; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v11; // edx
  int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // r9d
  struct _GUID v15; // xmm6
  int *v16; // rbx
  void *v17; // rcx
  __int64 *v18; // r8
  void (*v19)(void); // rax
  unsigned int v21; // [rsp+40h] [rbp-21h]
  int v22; // [rsp+68h] [rbp+7h] BYREF
  struct CEndpointCharacteristics *v23; // [rsp+70h] [rbp+Fh] BYREF
  LPVOID pv; // [rsp+78h] [rbp+17h] BYREF
  struct _GUID v25; // [rsp+88h] [rbp+27h] BYREF

  v23 = 0LL;
  ConnectorFormatForProcessingMode = ValidateVadServerSettings((struct VadServerSettings *)a3);
  if ( ConnectorFormatForProcessingMode >= 0 )
  {
    v9 = *(__int64 (__fastcall **)(CEndpointCharacteristicsCache *__hidden, const unsigned __int16 *, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL);
    v10 = v9 == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics
        ? CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(g_pEndpointCharacteristicsCache, a2, &v23)
        : v9(g_pEndpointCharacteristicsCache, a2, &v23);
    ConnectorFormatForProcessingMode = v10;
    if ( v10 >= 0 )
    {
      if ( !a5 )
        goto LABEL_10;
      v12 = *(_DWORD *)(a3 + 8);
      v13 = *(_DWORD *)a3;
      v14 = *((_DWORD *)v23 + 93) == 1;
      v21 = *(_DWORD *)(a3 + 24);
      pv = 0LL;
      ConnectorFormatForProcessingMode = DeriveAudioProcessingModeConfiguration(
                                           v13,
                                           v12,
                                           v23,
                                           v14,
                                           0,
                                           eHostProcessConnector,
                                           0,
                                           v21,
                                           &v25,
                                           0LL,
                                           0LL,
                                           0LL);
      if ( ConnectorFormatForProcessingMode < 0 )
      {
        v17 = 0LL;
      }
      else
      {
        v15 = v25;
        ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetConnectorFormatForProcessingMode(
                                             v23,
                                             eHostProcessConnector,
                                             &v25,
                                             (struct tWAVEFORMATEX **)&pv);
        if ( ConnectorFormatForProcessingMode < 0 )
        {
          v17 = pv;
        }
        else
        {
          v16 = (int *)pv;
          v25 = v15;
          ConnectorFormatForProcessingMode = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                               v23,
                                               0LL,
                                               pv,
                                               &v25,
                                               0,
                                               &v22,
                                               0LL,
                                               0LL,
                                               0LL);
          v17 = v16;
          if ( ConnectorFormatForProcessingMode >= 0 )
          {
            *a5 = (unsigned int)(int)((double)v22 * 10000000.0 / (double)v16[1] + 0.5);
            CoTaskMemFree(v16);
LABEL_10:
            v18 = a6;
            if ( a6 )
              ConnectorFormatForProcessingMode = CPolicyConfig::GetMinProcessingPeriodForExclusiveMode(v23, v11, a6);
LABEL_12:
            if ( ConnectorFormatForProcessingMode >= 0 )
              goto LABEL_13;
            goto LABEL_22;
          }
        }
      }
      CoTaskMemFree(v17);
      goto LABEL_12;
    }
  }
LABEL_22:
  AudSrvTraceLoggingErrorHelper("AudioServerGetDevicePeriod", 0xFC5u, ConnectorFormatForProcessingMode);
LABEL_13:
  if ( v23 )
  {
    v19 = *(void (**)(void))(*(_QWORD *)v23 + 16LL);
    if ( (char *)v19 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        v23,
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release,
        v18);
    else
      v19();
  }
  return (unsigned int)ConnectorFormatForProcessingMode;
}
