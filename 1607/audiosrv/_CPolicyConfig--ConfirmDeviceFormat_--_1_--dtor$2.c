/*
 * XREFs of _CPolicyConfig::ConfirmDeviceFormat_::_1_::dtor$2 @ 0x180067EAC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPolicyConfig::ConfirmDeviceFormat_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 64));
}
