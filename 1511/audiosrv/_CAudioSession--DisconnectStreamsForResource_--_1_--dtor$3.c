/*
 * XREFs of _CAudioSession::DisconnectStreamsForResource_::_1_::dtor$3 @ 0x180073135
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSession::DisconnectStreamsForResource_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 64));
}
