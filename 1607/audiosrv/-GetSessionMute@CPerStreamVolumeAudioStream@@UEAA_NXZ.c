/*
 * XREFs of ?GetSessionMute@CPerStreamVolumeAudioStream@@UEAA_NXZ @ 0x180039300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CPerStreamVolumeAudioStream::GetSessionMute(CPerStreamVolumeAudioStream *this)
{
  return *((_BYTE *)this + 512);
}
