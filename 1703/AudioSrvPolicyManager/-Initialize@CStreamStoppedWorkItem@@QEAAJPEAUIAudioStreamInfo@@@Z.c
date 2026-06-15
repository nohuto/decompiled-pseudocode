/*
 * XREFs of ?Initialize@CStreamStoppedWorkItem@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001D7EC
 * Callers:
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18001612C (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?GetProcessFromSessionInfo@CApplicationManager@@QEAAJPEAUIAudioSessionInfo@@PEAPEAVCProcess@@@Z @ 0x180011700 (-GetProcessFromSessionInfo@CApplicationManager@@QEAAJPEAUIAudioSessionInfo@@PEAPEAVCProcess@@@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStreamStoppedWorkItem::Initialize(CStreamStoppedWorkItem *this, struct IAudioStreamInfo *a2)
{
  CApplicationManager *v3; // rcx
  int ProcessFromSessionInfo; // ebx

  *((_QWORD *)this + 1) = a2;
  (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 8LL))(a2);
  ProcessFromSessionInfo = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 1) + 24LL))(
                             *((_QWORD *)this + 1),
                             (char *)this + 16);
  if ( ProcessFromSessionInfo < 0
    || (ProcessFromSessionInfo = CApplicationManager::GetProcessFromSessionInfo(
                                   v3,
                                   *((struct IAudioSessionInfo **)this + 2),
                                   (struct CProcess **)this + 3),
        ProcessFromSessionInfo < 0) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xFu,
        &WPP_ad7b8a207b4c33c21ba4cfb512d2eba6_Traceguids,
        ProcessFromSessionInfo);
    }
    AudPolicyLogError("CStreamStoppedWorkItem::Initialize", 336, ProcessFromSessionInfo);
  }
  return (unsigned int)ProcessFromSessionInfo;
}
