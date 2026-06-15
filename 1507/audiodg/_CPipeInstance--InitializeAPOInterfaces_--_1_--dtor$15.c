/*
 * XREFs of _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$15 @ 0x14001AD24
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::InitializeAPOInterfaces_::_1_::dtor_15(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 32);
}
