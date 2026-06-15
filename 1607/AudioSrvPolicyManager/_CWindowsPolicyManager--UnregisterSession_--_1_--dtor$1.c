/*
 * XREFs of _CWindowsPolicyManager::UnregisterSession_::_1_::dtor$1 @ 0x180024D96
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CWindowsPolicyManager::UnregisterSession_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 40));
}
