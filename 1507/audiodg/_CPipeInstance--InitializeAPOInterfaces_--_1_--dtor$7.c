/*
 * XREFs of _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$7 @ 0x14001ACC4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::InitializeAPOInterfaces_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 56);
}
