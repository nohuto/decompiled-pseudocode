/*
 * XREFs of ?SetDuckingPreference@CServerAudioSessionControl@@UEAAJH@Z @ 0x180015B80
 * Callers:
 *     AudioSessionSetDuckingPreference @ 0x18003A550 (AudioSessionSetDuckingPreference.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CServerAudioSessionControl::SetDuckingPreference(CAudioSession **this, int a2)
{
  return CAudioSession::SetDuckingOptOutPreference(this[9], a2 != 0);
}
