/*
 * XREFs of _CPipeInstance::InitializeRateConverterInterface_::_1_::dtor$1 @ 0x14001AD4C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::InitializeRateConverterInterface_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>(a2 + 32);
}
