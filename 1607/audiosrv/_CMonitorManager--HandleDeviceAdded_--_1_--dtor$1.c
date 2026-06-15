/*
 * XREFs of _CMonitorManager::HandleDeviceAdded_::_1_::dtor$1 @ 0x18007C6DD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::HandleDeviceAdded_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 64));
}
