/*
 * XREFs of _CAudioStream::_CAudioStream_::_1_::dtor$8 @ 0x18004B1CF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::_CAudioStream_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::~CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>(*(_QWORD *)(a2 + 112) + 232LL);
}
