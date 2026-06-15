/*
 * XREFs of ?AddRef@CAudioSession@@UEAAKXZ @ 0x180044B90
 * Callers:
 *     ?AddRef@CPerEndpointVolumeAudioSession@@G7EAAKXZ @ 0x180044BA0 (-AddRef@CPerEndpointVolumeAudioSession@@G7EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WBA@EAAKXZ @ 0x180044BB0 (-AddRef@CAudioSession@@WBA@EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WCA@EAAKXZ @ 0x180044BC0 (-AddRef@CAudioSession@@WCA@EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WBI@EAAKXZ @ 0x180044BD0 (-AddRef@CAudioSession@@WBI@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@GDBA@EAAKXZ @ 0x180044BE0 (-AddRef@CPerEndpointVolumeAudioSession@@GDBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::AddRef(CAudioSession *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
