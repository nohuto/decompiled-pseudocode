/*
 * XREFs of _CPolicyConfig::RefreshDeviceFormat_::_1_::dtor$1 @ 0x180084208
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPolicyConfig::RefreshDeviceFormat_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((_QWORD *)(a2 + 64));
}
