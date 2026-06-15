/*
 * XREFs of ?GetStreamPlaybackProtectionApo@CAudioDeviceGraph@@UEAAJ_KPEAPEAUIAudioProcessingObject@@@Z @ 0x14002FC90
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x1400060A4 (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     ?GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x14002E650 (-GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
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
  if ( PlaybackProtectionApo < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x3Eu,
        (__int64)&WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids,
        PlaybackProtectionApo);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::GetStreamPlaybackProtectionApo", 1540, PlaybackProtectionApo);
  }
  return (unsigned int)PlaybackProtectionApo;
}
