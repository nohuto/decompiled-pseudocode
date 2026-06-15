/*
 * XREFs of ?AddRef@CAudioSession@@UEAAKXZ @ 0x180039830
 * Callers:
 *     ?AddRef@CPerEndpointVolumeAudioSession@@G7EAAKXZ @ 0x180039060 (-AddRef@CPerEndpointVolumeAudioSession@@G7EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WBA@EAAKXZ @ 0x180039070 (-AddRef@CAudioSession@@WBA@EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WBI@EAAKXZ @ 0x180039080 (-AddRef@CAudioSession@@WBI@EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WCA@EAAKXZ @ 0x180039090 (-AddRef@CAudioSession@@WCA@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@GDPA@EAAKXZ @ 0x1800390A0 (-AddRef@CPerEndpointVolumeAudioSession@@GDPA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::AddRef(CAudioSession *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
