/*
 * XREFs of ?AddRef@CPerEndpointVolumeAudioSession@@GDPA@EAAKXZ @ 0x1800390A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CPerEndpointVolumeAudioSession::AddRef(__int64 a1)
{
  return CAudioSession::AddRef((CAudioSession *)(a1 - 1008));
}
