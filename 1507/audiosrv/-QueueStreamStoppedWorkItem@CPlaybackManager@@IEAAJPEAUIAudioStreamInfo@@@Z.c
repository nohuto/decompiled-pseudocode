/*
 * XREFs of ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002BDE8
 * Callers:
 *     ?OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18002BF80 (-OnStreamStateChanged@CPlaybackManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIA.c)
 * Callees:
 *     ?QueueWorkItem@CSyncWorkItem@@UEAAJXZ @ 0x18002BFC0 (-QueueWorkItem@CSyncWorkItem@@UEAAJXZ.c)
 *     ?CreateInstance@CStreamStoppedWorkItem@@SAJPEAUIAudioStreamInfo@@PEAPEAVIPBMWorkItem@@@Z @ 0x18002C090 (-CreateInstance@CStreamStoppedWorkItem@@SAJPEAUIAudioStreamInfo@@PEAPEAVIPBMWorkItem@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CPlaybackManager::QueueStreamStoppedWorkItem(CPlaybackManager *this, struct IAudioStreamInfo *a2)
{
  int Instance; // eax
  ULONG_PTR v3; // rdi
  int v4; // esi
  __int64 (__fastcall *v5)(ULONG_PTR); // rbx
  int v6; // eax
  ULONG_PTR dwCompletionKey; // [rsp+30h] [rbp+8h] BYREF

  dwCompletionKey = 0LL;
  Instance = CStreamStoppedWorkItem::CreateInstance(a2, (struct IPBMWorkItem **)&dwCompletionKey);
  v3 = dwCompletionKey;
  v4 = Instance;
  if ( Instance >= 0 )
  {
    v5 = *(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)dwCompletionKey + 16LL);
    v6 = v5 == CSyncWorkItem::QueueWorkItem ? CSyncWorkItem::QueueWorkItem(dwCompletionKey) : v5(dwCompletionKey);
    v4 = v6;
    if ( v6 >= 0 )
      v3 = 0LL;
  }
  if ( v3 )
    (*(void (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)v3 + 8LL))(v3, 1LL);
  if ( v4 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      13LL,
      &WPP_6fe1b6e008144161c17a6b56291d1e1c_Traceguids,
      (unsigned int)v4);
  }
  return (unsigned int)v4;
}
