/*
 * XREFs of _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$6 @ 0x14001ABA8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 88);
}
