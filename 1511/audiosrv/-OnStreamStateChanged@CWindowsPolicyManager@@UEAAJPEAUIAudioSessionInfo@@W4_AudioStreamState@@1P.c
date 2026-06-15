/*
 * XREFs of ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18001B4A0
 * Callers:
 *     ?Invoke@CAudioStreamStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180018B40 (-Invoke@CAudioStreamStateChanged@@UEAAJV-$CComPtr@UISessionInternalEvents@@@ATL@@@Z.c)
 * Callees:
 *     ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18002B550 (-OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAu.c)
 *     ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18002F2F0 (-OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIA.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnStreamStateChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD, _QWORD, __int64); // rdi

  v6 = *(_QWORD *)(a1 + 48);
  result = 0LL;
  if ( !v6 || (result = CDuckingManager::OnStreamStateChanged(v6 + 16), (int)result >= 0) )
  {
    v11 = *(_QWORD *)(a1 + 24);
    if ( v11 )
    {
      v12 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)(v11 + 16) + 80LL);
      if ( v12 == CPlaybackManager::OnStreamStateChanged )
        return CPlaybackManager::OnStreamStateChanged(v11 + 16, a2, a3, a4, a5);
      else
        return v12(v11 + 16, a2, a3, a4, a5);
    }
  }
  return result;
}
