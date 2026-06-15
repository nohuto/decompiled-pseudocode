/*
 * XREFs of _CAudioSessionManagerProvider::RevokeSessions_::_1_::dtor$1 @ 0x180064269
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManagerProvider::RevokeSessions_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)(a2 + 80));
}
