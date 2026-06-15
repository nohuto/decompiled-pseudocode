/*
 * XREFs of _CAudioStream::_CAudioStream_::_1_::dtor$11 @ 0x18003AB95
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::_CAudioStream_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  return ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::~CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>(*(_QWORD *)(a2 + 96) + 392LL);
}
