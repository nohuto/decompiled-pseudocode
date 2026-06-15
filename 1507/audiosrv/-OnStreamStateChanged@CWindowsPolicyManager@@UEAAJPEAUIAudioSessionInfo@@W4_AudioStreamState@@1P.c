/*
 * XREFs of ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180021970
 * Callers:
 *     ?Invoke@CAudioStreamStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180018E10 (-Invoke@CAudioStreamStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18000E350 (-OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAu.c)
 *     ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18002BF80 (-OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIA.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnStreamStateChanged(
        __int64 a1,
        CAudioSession *a2,
        __int64 a3,
        unsigned int a4,
        CAudioStream *a5)
{
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned int v9; // ebp
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, CAudioSession *, _QWORD, _QWORD, CAudioStream *); // rdi

  v6 = *(_QWORD *)(a1 + 48);
  result = 0LL;
  v9 = a3;
  if ( !v6 || (result = CDuckingManager::OnStreamStateChanged(v6 + 16, a2, a3, a4, a5), (int)result >= 0) )
  {
    v11 = *(_QWORD *)(a1 + 24);
    if ( v11 )
    {
      v12 = *(__int64 (__fastcall **)(__int64, CAudioSession *, _QWORD, _QWORD, CAudioStream *))(*(_QWORD *)(v11 + 16)
                                                                                               + 80LL);
      if ( (char *)v12 == (char *)CPlaybackManager::OnStreamStateChanged )
        return CPlaybackManager::OnStreamStateChanged(v11 + 16, a2, v9, a4, a5);
      else
        return v12(v11 + 16, a2, v9, a4, a5);
    }
  }
  return result;
}
