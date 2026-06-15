/*
 * XREFs of _CMonitor::StopIfRunning_::_1_::dtor$0 @ 0x18007ED4F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitor::StopIfRunning_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)(a2 + 40));
}
