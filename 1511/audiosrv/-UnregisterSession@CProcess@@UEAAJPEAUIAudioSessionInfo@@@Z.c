/*
 * XREFs of ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x1800299A0
 * Callers:
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180027990 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::UnregisterSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  if ( a2 )
    return CApplicationManager::UnregisterSession(this, (CProcess *)((char *)this - 16), a2);
  else
    return 2147942487LL;
}
