/*
 * XREFs of _CPipeInstance::_CPipeInstance_::_1_::dtor$9 @ 0x14001B232
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::_CPipeInstance_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IMMDeviceEnumerator>::~CComPtr<IMMDeviceEnumerator>((__int64 *)(*(_QWORD *)(a2 + 128) + 24LL));
}
