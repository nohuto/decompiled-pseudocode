/*
 * XREFs of _CPolicyConfig::ConfirmDeviceFormat_::_1_::dtor$0 @ 0x180047F6E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPolicyConfig::ConfirmDeviceFormat_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(a2 + 128);
}
