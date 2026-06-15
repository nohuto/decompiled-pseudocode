/*
 * XREFs of _CStreamInstance::ConnectToSaDevice_::_1_::dtor$0 @ 0x14001AB2D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamInstance::ConnectToSaDevice_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IMMDeviceEnumerator>::~CComPtr<IMMDeviceEnumerator>(a2 + 96);
}
