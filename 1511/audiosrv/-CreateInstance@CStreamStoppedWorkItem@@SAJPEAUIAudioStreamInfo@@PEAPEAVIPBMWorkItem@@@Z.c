/*
 * XREFs of ?CreateInstance@CStreamStoppedWorkItem@@SAJPEAUIAudioStreamInfo@@PEAPEAVIPBMWorkItem@@@Z @ 0x18002F97C
 * Callers:
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002F14C (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002F824 (-Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CStreamStoppedWorkItem::CreateInstance(struct IAudioStreamInfo *a1, struct IPBMWorkItem **a2)
{
  HANDLE ProcessHeap; // rax
  CStreamStoppedWorkItem *v5; // rax
  CStreamStoppedWorkItem *v6; // rdi
  int v7; // esi

  ProcessHeap = GetProcessHeap();
  v5 = (CStreamStoppedWorkItem *)HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v6 = v5;
  if ( v5 )
  {
    *((_QWORD *)v5 + 1) = 0LL;
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    *(_QWORD *)v5 = &CStreamStoppedWorkItem::`vftable';
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v7 = CStreamStoppedWorkItem::Initialize(v6, a1);
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
    (*(void (__fastcall **)(CStreamStoppedWorkItem *, __int64))(*(_QWORD *)v6 + 8LL))(v6, 1LL);
  if ( v7 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      (unsigned int)v7);
  }
  return (unsigned int)v7;
}
