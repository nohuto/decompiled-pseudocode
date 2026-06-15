/*
 * XREFs of ?CreateInstance@CStreamStartedWorkItem@@SAJPEAUIAudioStreamInfo@@PEAPEAVIPBMWorkItem@@@Z @ 0x18002F0AC
 * Callers:
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002F1D8 (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002EB94 (-Initialize@CStreamStartedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CStreamStartedWorkItem::CreateInstance(struct IAudioStreamInfo *a1, struct IPBMWorkItem **a2)
{
  HANDLE ProcessHeap; // rax
  CStreamStartedWorkItem *v5; // rax
  CStreamStartedWorkItem *v6; // rdi
  int v7; // esi

  ProcessHeap = GetProcessHeap();
  v5 = (CStreamStartedWorkItem *)HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v6 = v5;
  if ( v5 )
  {
    *((_QWORD *)v5 + 1) = 0LL;
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    *(_QWORD *)v5 = &CStreamStartedWorkItem::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v7 = CStreamStartedWorkItem::Initialize(v6, a1);
    if ( v7 >= 0 )
    {
      *a2 = v6;
      v6 = 0LL;
    }
  }
  else
  {
    v7 = -2147024882;
  }
  if ( v6 )
    (*(void (__fastcall **)(CStreamStartedWorkItem *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1LL);
  if ( v7 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      (unsigned int)v7);
  }
  return (unsigned int)v7;
}
