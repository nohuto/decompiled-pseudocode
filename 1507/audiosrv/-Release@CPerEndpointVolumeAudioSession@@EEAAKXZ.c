/*
 * XREFs of ?Release@CPerEndpointVolumeAudioSession@@EEAAKXZ @ 0x18007B290
 * Callers:
 *     ?Release@CPerEndpointVolumeAudioSession@@G7EAAKXZ @ 0x180044CE0 (-Release@CPerEndpointVolumeAudioSession@@G7EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@GBA@EAAKXZ @ 0x180044CF0 (-Release@CPerEndpointVolumeAudioSession@@GBA@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@GBI@EAAKXZ @ 0x180044D00 (-Release@CPerEndpointVolumeAudioSession@@GBI@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@GCA@EAAKXZ @ 0x180044D10 (-Release@CPerEndpointVolumeAudioSession@@GCA@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@GDBA@EAAKXZ @ 0x180044D20 (-Release@CPerEndpointVolumeAudioSession@@GDBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::Release(CPerEndpointVolumeAudioSession *this)
{
  return CUnknown::Release((CPerEndpointVolumeAudioSession *)((char *)this + 32));
}
