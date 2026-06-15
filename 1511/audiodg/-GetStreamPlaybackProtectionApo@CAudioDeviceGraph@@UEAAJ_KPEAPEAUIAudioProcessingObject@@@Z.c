/*
 * XREFs of ?GetStreamPlaybackProtectionApo@CAudioDeviceGraph@@UEAAJ_KPEAPEAUIAudioProcessingObject@@@Z @ 0x140032AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x1400067AC (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     ?GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x14000C550 (-GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetStreamPlaybackProtectionApo(
        CAudioDeviceGraph *this,
        __int64 a2,
        struct IAudioProcessingObject **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int PlaybackProtectionApo; // ebx
  CPipeInstance *PipeInstance; // rax

  *a3 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_DWORD *)this + 56) )
  {
    PipeInstance = CAudioDeviceGraph::FindPipeInstance(this, a2);
    if ( PipeInstance )
      PlaybackProtectionApo = CPipeInstance::GetPlaybackProtectionApo(PipeInstance, a3);
    else
      PlaybackProtectionApo = -2005139430;
  }
  else
  {
    PlaybackProtectionApo = -2005139437;
  }
  LeaveCriticalSection(v3);
  if ( PlaybackProtectionApo < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x51u,
      (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids,
      PlaybackProtectionApo);
  }
  return (unsigned int)PlaybackProtectionApo;
}
