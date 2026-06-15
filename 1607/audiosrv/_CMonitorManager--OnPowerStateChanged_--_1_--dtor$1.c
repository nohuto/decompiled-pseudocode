/*
 * XREFs of _CMonitorManager::OnPowerStateChanged_::_1_::dtor$1 @ 0x18007DBA8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::OnPowerStateChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 112));
}
