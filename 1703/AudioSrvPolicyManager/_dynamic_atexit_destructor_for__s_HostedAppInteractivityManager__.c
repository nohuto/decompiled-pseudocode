/*
 * XREFs of _dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__ @ 0x180022E90
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x180009B5C (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 */

void dynamic_atexit_destructor_for__s_HostedAppInteractivityManager__()
{
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll((__int64)&qword_180031D38);
  DeleteCriticalSection(&stru_180031D10);
}
