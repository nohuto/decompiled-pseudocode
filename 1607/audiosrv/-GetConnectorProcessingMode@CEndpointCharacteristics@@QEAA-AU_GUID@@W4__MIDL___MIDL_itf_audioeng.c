/*
 * XREFs of ?GetConnectorProcessingMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@I@Z @ 0x18002DF04
 * Callers:
 *     ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x18002DFF4 (-GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180068DB0 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 * Callees:
 *     ?GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18001C9C4 (-GetSupportedConnectorModes@CEndpointCharacteristics@@AEAAPEAVCAudioSignalProcessingModeArray@1@.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18002765C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 */

struct _GUID *__fastcall CEndpointCharacteristics::GetConnectorProcessingMode(
        CEndpointCharacteristics *this,
        struct _GUID *__return_ptr retstr,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        unsigned int a4)
{
  struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedConnectorModes; // rax
  GUID v7; // xmm0
  struct _GUID *result; // rax

  SupportedConnectorModes = CEndpointCharacteristics::GetSupportedConnectorModes(this, a3);
  if ( a4 >= *((_DWORD *)SupportedConnectorModes + 2) )
    v7 = GUID_00000000_0000_0000_0000_000000000000;
  else
    v7 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                    (__int64)SupportedConnectorModes,
                    a4);
  result = retstr;
  *retstr = v7;
  return result;
}
