/*
 * XREFs of _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$5 @ 0x14001AB9C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 96);
}
