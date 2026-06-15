/*
 * XREFs of ?GetMinProcessingPeriodForExclusiveMode@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180027514
 * Callers:
 *     AudioServerGetDevicePeriod @ 0x1800041A0 (AudioServerGetDevicePeriod.c)
 *     ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z @ 0x180027288 (-GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z.c)
 * Callees:
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001BC0C (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEA_J@Z @ 0x18001BE80 (-GetMinProcessingPeriodForExclusiveMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audio.c)
 *     ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001C550 (-GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18001C830 (-GetDefaultConnectorProcessingMode@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MIDL_itf_a.c)
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18001C9C4 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x18002761C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetMinProcessingPeriodForExclusiveMode(
        struct CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        __int64 *a3)
{
  struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedConnectorModes; // rax
  struct _GUID *DefaultConnectorProcessingMode; // rax
  struct _GUID v7; // xmm6
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v8; // edx
  int ProposedConnectorFormatForProcessingMode; // ebx
  LPVOID pv[2]; // [rsp+30h] [rbp-50h] BYREF
  struct _GUID v12; // [rsp+40h] [rbp-40h] BYREF
  struct _GUID v13; // [rsp+50h] [rbp-30h] BYREF

  pv[1] = (LPVOID)-2LL;
  pv[0] = 0LL;
  v12 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(this, eHostProcessConnector);
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(SupportedConnectorModes, &v12) == -1 )
  {
    DefaultConnectorProcessingMode = CEndpointCharacteristics::GetDefaultConnectorProcessingMode(
                                       this,
                                       &v13,
                                       eHostProcessConnector);
  }
  else
  {
    v12 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    DefaultConnectorProcessingMode = &v12;
  }
  v7 = *DefaultConnectorProcessingMode;
  *a3 = 0LL;
  v12 = v7;
  ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
                                               this,
                                               eHostProcessConnector,
                                               &v12,
                                               (struct tWAVEFORMATEX **)pv);
  if ( ProposedConnectorFormatForProcessingMode < 0 )
    ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetDeviceFormat(
                                                 this,
                                                 0LL,
                                                 0LL,
                                                 eHostProcessConnector,
                                                 (struct tWAVEFORMATEX **)pv);
  if ( ProposedConnectorFormatForProcessingMode >= 0 )
  {
    v12 = v7;
    ProposedConnectorFormatForProcessingMode = CEndpointCharacteristics::GetMinProcessingPeriodForExclusiveMode(
                                                 this,
                                                 v8,
                                                 (struct tWAVEFORMATEX *)pv[0],
                                                 &v12,
                                                 a3);
  }
  CoTaskMemFree(pv[0]);
  return (unsigned int)ProposedConnectorFormatForProcessingMode;
}
