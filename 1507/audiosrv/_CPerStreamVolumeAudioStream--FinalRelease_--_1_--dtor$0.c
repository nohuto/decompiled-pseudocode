/*
 * XREFs of _CPerStreamVolumeAudioStream::FinalRelease_::_1_::dtor$0 @ 0x1800486DF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPerStreamVolumeAudioStream::FinalRelease_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<ISaProvider>::~CComPtr<ISaProvider>(a2 + 96);
}
