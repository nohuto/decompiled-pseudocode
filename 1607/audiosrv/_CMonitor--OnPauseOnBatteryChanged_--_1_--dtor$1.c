/*
 * XREFs of _CMonitor::OnPauseOnBatteryChanged_::_1_::dtor$1 @ 0x180081180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitor::OnPauseOnBatteryChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)(a2 + 56));
}
