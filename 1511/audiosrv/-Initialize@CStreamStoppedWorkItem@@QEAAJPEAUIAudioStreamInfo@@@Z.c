/*
 * XREFs of ?Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002F824
 * Callers:
 *     ?CreateInstance@CStreamStoppedWorkItem@@SAJPEAUIAudioStreamInfo@@PEAPEAVIPBMWorkItem@@@Z @ 0x18002F97C (-CreateInstance@CStreamStoppedWorkItem@@SAJPEAUIAudioStreamInfo@@PEAPEAVIPBMWorkItem@@@Z.c)
 * Callees:
 *     ?GetProcessFromSessionInfo@CApplicationManager@@QEAAJPEAUIAudioSessionInfo@@PEAPEAVCProcess@@@Z @ 0x18001D5A0 (-GetProcessFromSessionInfo@CApplicationManager@@QEAAJPEAUIAudioSessionInfo@@PEAPEAVCProcess@@@Z.c)
 *     ?GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z @ 0x1800206B0 (-GetSessionInfo@CAudioStream@@UEAAJPEAPEAUIAudioSessionInfo@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CStreamStoppedWorkItem::Initialize(CStreamStoppedWorkItem *this, struct IAudioStreamInfo *a2)
{
  __int64 (__fastcall *v3)(CAudioStream *, struct IAudioSessionInfo **); // rbp
  int SessionInfo; // eax
  CApplicationManager *v5; // rcx
  int ProcessFromSessionInfo; // ebx

  *((_QWORD *)this + 1) = a2;
  (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 8LL))(a2);
  v3 = *(__int64 (__fastcall **)(CAudioStream *, struct IAudioSessionInfo **))(**((_QWORD **)this + 1) + 24LL);
  if ( v3 == CAudioStream::GetSessionInfo )
    SessionInfo = CAudioStream::GetSessionInfo(*((CAudioStream **)this + 1), (struct IAudioSessionInfo **)this + 2);
  else
    SessionInfo = v3(*((CAudioStream **)this + 1), (struct IAudioSessionInfo **)this + 2);
  ProcessFromSessionInfo = SessionInfo;
  if ( SessionInfo < 0
    || (ProcessFromSessionInfo = CApplicationManager::GetProcessFromSessionInfo(
                                   v5,
                                   *((struct IAudioSessionInfo **)this + 2),
                                   (struct CProcess **)this + 3),
        ProcessFromSessionInfo < 0) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        15LL,
        &WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
        (unsigned int)ProcessFromSessionInfo);
    }
  }
  return (unsigned int)ProcessFromSessionInfo;
}
