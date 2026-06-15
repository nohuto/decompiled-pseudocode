/*
 * XREFs of _CPipeInstance::DeactivateAPOsAndRemoveConnections_::_1_::dtor$2 @ 0x14001AEB8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::DeactivateAPOsAndRemoveConnections_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 128);
}
