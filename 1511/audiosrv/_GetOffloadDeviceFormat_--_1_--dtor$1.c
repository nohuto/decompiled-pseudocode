/*
 * XREFs of _GetOffloadDeviceFormat_::_1_::dtor$1 @ 0x180068293
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetOffloadDeviceFormat_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((_QWORD *)(a2 + 128));
}
