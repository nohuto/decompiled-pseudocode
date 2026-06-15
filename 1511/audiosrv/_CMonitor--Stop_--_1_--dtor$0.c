/*
 * XREFs of _CMonitor::Stop_::_1_::dtor$0 @ 0x180099832
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitor::Stop_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 56));
}
