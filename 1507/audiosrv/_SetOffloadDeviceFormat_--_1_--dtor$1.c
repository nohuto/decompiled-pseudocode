/*
 * XREFs of _SetOffloadDeviceFormat_::_1_::dtor$1 @ 0x180048B76
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetOffloadDeviceFormat_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(a2 + 128);
}
