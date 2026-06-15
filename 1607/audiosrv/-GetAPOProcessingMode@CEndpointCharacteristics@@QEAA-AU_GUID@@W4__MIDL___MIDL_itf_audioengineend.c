/*
 * XREFs of ?GetAPOProcessingMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@I@Z @ 0x1800888F8
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180068DB0 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 * Callees:
 *     ?GetSupportedMFXAPOModes@CEndpointCharacteristics@@AEAAPEBVCAudioSignalProcessingModeArray@1@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180003A40 (-GetSupportedMFXAPOModes@CEndpointCharacteristics@@AEAAPEBVCAudioSignalProcessingModeArray@1@W4_.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z @ 0x18002765C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAAEBU_GUID@@H@Z.c)
 */

struct _GUID *__fastcall CEndpointCharacteristics::GetAPOProcessingMode(
        CEndpointCharacteristics *this,
        struct _GUID *__return_ptr retstr,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        unsigned int a4)
{
  const struct CEndpointCharacteristics::CAudioSignalProcessingModeArray *SupportedMFXAPOModes; // rax
  struct _GUID *v7; // rax
  struct _GUID v8; // xmm0
  struct _GUID *result; // rax

  SupportedMFXAPOModes = CEndpointCharacteristics::GetSupportedMFXAPOModes(this, a3);
  if ( a4 >= *((_DWORD *)SupportedMFXAPOModes + 2) )
    v7 = &GUID_00000000_0000_0000_0000_000000000000;
  else
    v7 = (struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                           (__int64)SupportedMFXAPOModes,
                           a4);
  v8 = *v7;
  result = retstr;
  *retstr = v8;
  return result;
}
