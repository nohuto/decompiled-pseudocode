/*
 * XREFs of _CMonitor::Terminate_::_1_::dtor$0 @ 0x18009CD2F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitor::Terminate_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 40));
}
