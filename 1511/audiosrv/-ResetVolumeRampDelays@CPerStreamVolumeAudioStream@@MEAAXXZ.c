/*
 * XREFs of ?ResetVolumeRampDelays@CPerStreamVolumeAudioStream@@MEAAXXZ @ 0x18001CCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPerStreamVolumeAudioStream::ResetVolumeRampDelays(CPerStreamVolumeAudioStream *this)
{
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
}
