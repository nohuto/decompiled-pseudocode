/*
 * XREFs of _CAudioStream::_CAudioStream_::_1_::dtor$8 @ 0x180046E7F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::_CAudioStream_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  ATL::CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>::~CAtlList<IAudioStreamVolumeCallback *,ATL::CElementTraits<IAudioStreamVolumeCallback *>>((void *)(*(_QWORD *)(a2 + 112) + 240LL));
}
