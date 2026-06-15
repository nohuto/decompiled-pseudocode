/*
 * XREFs of ?OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18001B540
 * Callers:
 *     ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x1800141D0 (-Invoke@CAudioSessionStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002AF60 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?OnStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002F270 (-OnStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

int __fastcall CWindowsPolicyManager::OnStateChanged(
        CWindowsPolicyManager *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        enum _AudioSessionState a4)
{
  int result; // eax
  __int64 v6; // rcx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(CPlaybackManager *__hidden, struct IAudioSessionInfo *, enum _AudioSessionState, enum _AudioSessionState); // rdi

  result = 0;
  v6 = *((_QWORD *)this + 6);
  if ( !v6 || (result = CDuckingManager::OnStateChanged((CDuckingManager *)(v6 + 16), a2, a3, a4), result >= 0) )
  {
    v10 = *((_QWORD *)this + 3);
    if ( v10 )
    {
      v11 = *(__int64 (__fastcall **)(CPlaybackManager *__hidden, struct IAudioSessionInfo *, enum _AudioSessionState, enum _AudioSessionState))(*(_QWORD *)(v10 + 16) + 56LL);
      if ( v11 == CPlaybackManager::OnStateChanged )
        return CPlaybackManager::OnStateChanged((CPlaybackManager *)(v10 + 16), a2, a3, a4);
      else
        return v11((CPlaybackManager *)(v10 + 16), a2, a3, a4);
    }
  }
  return result;
}
