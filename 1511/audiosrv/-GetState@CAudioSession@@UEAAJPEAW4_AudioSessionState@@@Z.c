/*
 * XREFs of ?GetState@CAudioSession@@UEAAJPEAW4_AudioSessionState@@@Z @ 0x180026580
 * Callers:
 *     ?GetState@CServerAudioSessionControl@@UEAAJPEAW4_AudioSessionState@@@Z @ 0x180015D40 (-GetState@CServerAudioSessionControl@@UEAAJPEAW4_AudioSessionState@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::GetState(enum _AudioSessionState *this, enum _AudioSessionState *a2)
{
  *a2 = this[118];
  return 0LL;
}
