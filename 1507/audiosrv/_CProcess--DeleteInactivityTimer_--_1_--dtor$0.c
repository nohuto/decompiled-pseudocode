/*
 * XREFs of _CProcess::DeleteInactivityTimer_::_1_::dtor$0 @ 0x1800A2EAC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::DeleteInactivityTimer_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 56));
}
