/*
 * XREFs of _CAudioSession::DisconnectStreams_::_1_::dtor$0 @ 0x180072A5F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSession::DisconnectStreams_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>((void **)(a2 + 88));
}
