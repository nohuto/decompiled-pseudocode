/*
 * XREFs of _CAudioSession::DisconnectStreamsForResource_::_1_::dtor$2 @ 0x180073129
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSession::DisconnectStreamsForResource_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::~CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>((void **)(a2 + 112));
}
