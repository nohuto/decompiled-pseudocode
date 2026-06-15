/*
 * XREFs of ?OnStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180021A10
 * Callers:
 *     ?Invoke@CAudioSessionStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180018CB0 (-Invoke@CAudioSessionStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000DD60 (-OnStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?OnStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002BF00 (-OnStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnStateChanged(
        CWindowsPolicyManager *this,
        struct IAudioSessionInfo *a2,
        __int64 a3,
        enum _AudioSessionState a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  enum _AudioSessionState v8; // ebp
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(CPlaybackManager *__hidden, struct IAudioSessionInfo *, enum _AudioSessionState, enum _AudioSessionState); // rdi

  result = 0LL;
  v6 = *((_QWORD *)this + 6);
  v8 = (int)a3;
  if ( !v6 || (result = CDuckingManager::OnStateChanged((CDuckingManager *)(v6 + 16), a2, a3, a4), (int)result >= 0) )
  {
    v10 = *((_QWORD *)this + 3);
    if ( v10 )
    {
      v11 = *(__int64 (__fastcall **)(CPlaybackManager *__hidden, struct IAudioSessionInfo *, enum _AudioSessionState, enum _AudioSessionState))(*(_QWORD *)(v10 + 16) + 56LL);
      if ( v11 == CPlaybackManager::OnStateChanged )
        return CPlaybackManager::OnStateChanged((CPlaybackManager *)(v10 + 16), a2, v8, a4);
      else
        return v11((CPlaybackManager *)(v10 + 16), a2, v8, a4);
    }
  }
  return result;
}
