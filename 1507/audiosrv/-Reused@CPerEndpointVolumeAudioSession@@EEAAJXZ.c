/*
 * XREFs of ?Reused@CPerEndpointVolumeAudioSession@@EEAAJXZ @ 0x18007B590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::Reused(struct IAudioEndpointVolumeCallback *this)
{
  return CPerEndpointVolumeAudioSession::GetVolumeStrip(this, 0LL);
}
