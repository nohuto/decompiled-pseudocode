/*
 * XREFs of _KsNotifications_ServiceStart_::_1_::dtor$1 @ 0x180047BF6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KsNotifications_ServiceStart_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(a2 + 128);
}
