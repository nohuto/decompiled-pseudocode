/*
 * XREFs of ?GetIdentifier@CAudioSession@@UEAAPEBGXZ @ 0x180010D10
 * Callers:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000DD60 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall CAudioSession::GetIdentifier(CAudioSession *this)
{
  return (const unsigned __int16 *)*((_QWORD *)this + 88);
}
