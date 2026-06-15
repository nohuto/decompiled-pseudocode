/*
 * XREFs of _CApplicationManager::GetProcessFromSessionInfo_::_1_::dtor$1 @ 0x180046C1C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::GetProcessFromSessionInfo_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(a2 + 80);
}
