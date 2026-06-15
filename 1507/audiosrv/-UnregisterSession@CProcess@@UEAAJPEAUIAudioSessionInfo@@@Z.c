/*
 * XREFs of ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180011BD0
 * Callers:
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x18000FDB0 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall CProcess::UnregisterSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  if ( a2 )
    return CApplicationManager::UnregisterSession(this, (CProcess *)((char *)this - 16), a2);
  else
    return -2147024809;
}
