/*
 * XREFs of _CAudioSession::DisconnectStreams_::_1_::dtor$1 @ 0x18005B25C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSession::DisconnectStreams_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)(a2 + 64));
}
