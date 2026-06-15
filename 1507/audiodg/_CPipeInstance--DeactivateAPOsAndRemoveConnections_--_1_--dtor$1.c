/*
 * XREFs of _CPipeInstance::DeactivateAPOsAndRemoveConnections_::_1_::dtor$1 @ 0x14001ADAC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::DeactivateAPOsAndRemoveConnections_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 120);
}
