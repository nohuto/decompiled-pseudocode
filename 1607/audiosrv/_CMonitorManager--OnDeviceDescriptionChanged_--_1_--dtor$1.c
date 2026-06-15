/*
 * XREFs of _CMonitorManager::OnDeviceDescriptionChanged_::_1_::dtor$1 @ 0x18007D2F4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::OnDeviceDescriptionChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 32));
}
