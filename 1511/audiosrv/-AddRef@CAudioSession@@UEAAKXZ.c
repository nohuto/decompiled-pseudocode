/*
 * XREFs of ?AddRef@CAudioSession@@UEAAKXZ @ 0x180048DC0
 * Callers:
 *     ?AddRef@CAudioSession@@WBA@EAAKXZ @ 0x180048DB0 (-AddRef@CAudioSession@@WBA@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@G7EAAKXZ @ 0x180048DD0 (-AddRef@CPerEndpointVolumeAudioSession@@G7EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WBI@EAAKXZ @ 0x180048DE0 (-AddRef@CAudioSession@@WBI@EAAKXZ.c)
 *     ?AddRef@CAudioSession@@WCA@EAAKXZ @ 0x180048DF0 (-AddRef@CAudioSession@@WCA@EAAKXZ.c)
 *     ?AddRef@CPerEndpointVolumeAudioSession@@GDKI@EAAKXZ @ 0x180048E00 (-AddRef@CPerEndpointVolumeAudioSession@@GDKI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::AddRef(CAudioSession *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
