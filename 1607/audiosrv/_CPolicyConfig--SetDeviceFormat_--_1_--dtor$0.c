/*
 * XREFs of _CPolicyConfig::SetDeviceFormat_::_1_::dtor$0 @ 0x18006E776
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPolicyConfig::SetDeviceFormat_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 64));
}
