/*
 * XREFs of _CAudioSessionManager::FinalRelease_::_1_::dtor$0 @ 0x180061F3D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManager::FinalRelease_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)(a2 + 40));
}
