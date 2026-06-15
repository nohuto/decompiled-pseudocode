/*
 * XREFs of _CAudioSession::DisconnectStreamsForResource_::_1_::dtor$1 @ 0x18005B825
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSession::DisconnectStreamsForResource_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>((void **)(a2 + 128));
}
