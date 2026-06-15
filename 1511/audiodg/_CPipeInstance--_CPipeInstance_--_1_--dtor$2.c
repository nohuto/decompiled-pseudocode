/*
 * XREFs of _CPipeInstance::_CPipeInstance_::_1_::dtor$2 @ 0x14001B660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::_CPipeInstance_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IMMDeviceEnumerator>::~CComPtr<IMMDeviceEnumerator>(*(_QWORD *)(a2 + 64) + 144LL);
}
