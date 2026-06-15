/*
 * XREFs of _SetOffloadDeviceFormat_::_1_::dtor$2 @ 0x180048B82
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetOffloadDeviceFormat_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(a2 + 112);
}
