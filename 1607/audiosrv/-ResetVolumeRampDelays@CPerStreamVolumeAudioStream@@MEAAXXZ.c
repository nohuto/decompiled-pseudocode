/*
 * XREFs of ?ResetVolumeRampDelays@CPerStreamVolumeAudioStream@@MEAAXXZ @ 0x1800164A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPerStreamVolumeAudioStream::ResetVolumeRampDelays(CPerStreamVolumeAudioStream *this)
{
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
}
