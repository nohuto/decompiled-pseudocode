/*
 * XREFs of _CPolicyConfig::SetDeviceFormatInternal_::_1_::dtor$1 @ 0x18006EB05
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPolicyConfig::SetDeviceFormatInternal_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<CEndpointCharacteristics>::~CComPtr<CEndpointCharacteristics>((__int64 *)(a2 + 64));
}
