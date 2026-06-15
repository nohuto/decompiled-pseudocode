/*
 * XREFs of _CMonitorManager::HandleDeviceRemoved_::_1_::dtor$1 @ 0x18007C843
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitorManager::HandleDeviceRemoved_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)(a2 + 40));
}
