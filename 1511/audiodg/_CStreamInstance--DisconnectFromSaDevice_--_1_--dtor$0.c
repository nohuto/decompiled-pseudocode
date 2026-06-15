/*
 * XREFs of _CStreamInstance::DisconnectFromSaDevice_::_1_::dtor$0 @ 0x14001AB1B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamInstance::DisconnectFromSaDevice_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IMMDeviceEnumerator>::~CComPtr<IMMDeviceEnumerator>(a2 + 80);
}
