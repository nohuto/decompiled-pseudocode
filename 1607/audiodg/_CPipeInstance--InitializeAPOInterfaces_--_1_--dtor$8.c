/*
 * XREFs of _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$8 @ 0x14001ADF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::InitializeAPOInterfaces_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>(a2 + 40);
}
