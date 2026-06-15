/*
 * XREFs of _CWindowsPolicyManager::UnregisterSession_::_1_::dtor$0 @ 0x180021C4A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowsPolicyManager::UnregisterSession_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 40));
}
