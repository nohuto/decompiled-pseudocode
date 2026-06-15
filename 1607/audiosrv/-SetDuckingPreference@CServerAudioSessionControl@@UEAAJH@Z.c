/*
 * XREFs of ?SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z @ 0x18000EBD0
 * Callers:
 *     AudioSessionSetDuckingPreference @ 0x18002A010 (AudioSessionSetDuckingPreference.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::SetDuckingPreference(CAudioSession **this, int a2)
{
  return CAudioSession::SetDuckingOptOutPreference(this[9], a2 != 0);
}
