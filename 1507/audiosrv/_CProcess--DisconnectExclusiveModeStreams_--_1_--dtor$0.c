/*
 * XREFs of _CProcess::DisconnectExclusiveModeStreams_::_1_::dtor$0 @ 0x1800A2FC7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcess::DisconnectExclusiveModeStreams_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 56));
}
