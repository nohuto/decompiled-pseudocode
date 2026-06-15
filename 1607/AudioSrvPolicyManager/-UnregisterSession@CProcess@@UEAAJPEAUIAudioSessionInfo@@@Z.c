/*
 * XREFs of ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x18000E5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::UnregisterSession(CProcess *this, struct IAudioSessionInfo *a2)
{
  if ( a2 )
    return CWindowsPolicyManager::UnregisterSession(this, (CProcess *)((char *)this - 16), a2);
  else
    return 2147942487LL;
}
