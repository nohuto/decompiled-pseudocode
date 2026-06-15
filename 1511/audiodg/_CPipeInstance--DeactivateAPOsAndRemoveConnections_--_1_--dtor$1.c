/*
 * XREFs of _CPipeInstance::DeactivateAPOsAndRemoveConnections_::_1_::dtor$1 @ 0x14001B84C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::DeactivateAPOsAndRemoveConnections_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IMMDeviceEnumerator>::~CComPtr<IMMDeviceEnumerator>(a2 + 120);
}
