/*
 * XREFs of _CMonitor::Stop_::_1_::dtor$1 @ 0x1800820C5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitor::Stop_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)(a2 + 40));
}
