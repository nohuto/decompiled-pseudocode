/*
 * XREFs of ?AddRef@CPerEndpointVolumeAudioSession@@GDKI@EAAKXZ @ 0x180048E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::AddRef(__int64 a1)
{
  return CAudioSession::AddRef((CAudioSession *)(a1 - 936));
}
