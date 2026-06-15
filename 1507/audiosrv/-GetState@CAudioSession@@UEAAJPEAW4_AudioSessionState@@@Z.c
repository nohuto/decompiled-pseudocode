/*
 * XREFs of ?GetState@CAudioSession@@UEAAJPEAW4_AudioSessionState@@@Z @ 0x18000F330
 * Callers:
 *     ?GetState@CServerAudioSessionControl@@UEAAJPEAW4_AudioSessionState@@@Z @ 0x180018740 (-GetState@CServerAudioSessionControl@@UEAAJPEAW4_AudioSessionState@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::GetState(enum _AudioSessionState *this, enum _AudioSessionState *a2)
{
  *a2 = this[81];
  return 0LL;
}
