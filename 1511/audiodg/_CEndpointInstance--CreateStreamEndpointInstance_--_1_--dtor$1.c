/*
 * XREFs of _CEndpointInstance::CreateStreamEndpointInstance_::_1_::dtor$1 @ 0x14001B43C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointInstance::CreateStreamEndpointInstance_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IMMDeviceEnumerator>::~CComPtr<IMMDeviceEnumerator>(a2 + 128);
}
