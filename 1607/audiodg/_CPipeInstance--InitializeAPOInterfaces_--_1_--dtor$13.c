/*
 * XREFs of _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$13 @ 0x14001AE2C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::InitializeAPOInterfaces_::_1_::dtor_13(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IMMDeviceEnumerator>::~CComPtr<IMMDeviceEnumerator>((__int64 *)(a2 + 32));
}
