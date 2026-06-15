/*
 * XREFs of _CEndpointInstance::CreateStreamEndpointInstance_::_1_::dtor$0 @ 0x14001ABD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointInstance::CreateStreamEndpointInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 112);
}
