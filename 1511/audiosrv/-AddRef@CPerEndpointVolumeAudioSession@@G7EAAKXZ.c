/*
 * XREFs of ?AddRef@CPerEndpointVolumeAudioSession@@G7EAAKXZ @ 0x180048DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::AddRef(__int64 a1)
{
  return CAudioSession::AddRef((CAudioSession *)(a1 - 8));
}
