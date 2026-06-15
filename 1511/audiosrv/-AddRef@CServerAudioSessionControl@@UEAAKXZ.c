/*
 * XREFs of ?AddRef@CServerAudioSessionControl@@UEAAKXZ @ 0x180048D40
 * Callers:
 *     ?AddRef@CServerAudioSessionControl@@W7EAAKXZ @ 0x180048F60 (-AddRef@CServerAudioSessionControl@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::AddRef(CServerAudioSessionControl *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
