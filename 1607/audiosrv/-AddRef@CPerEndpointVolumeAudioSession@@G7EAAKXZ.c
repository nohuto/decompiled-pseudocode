/*
 * XREFs of ?AddRef@CPerEndpointVolumeAudioSession@@G7EAAKXZ @ 0x180039060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CPerEndpointVolumeAudioSession::AddRef(__int64 a1)
{
  return CAudioSession::AddRef((CAudioSession *)(a1 - 8));
}
