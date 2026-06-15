/*
 * XREFs of ?GetStreamPlaybackProtectionApo@CAudioDeviceGraph@@UEAAJ_KPEAPEAUIAudioProcessingObject@@@Z @ 0x1400329B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z @ 0x14000ED7C (-FindPipeInstance@CAudioDeviceGraph@@AEAAPEAVCPipeInstance@@_K@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ?GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x1400308F0 (-GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
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
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x41u,
      (__int64)&WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids,
      PlaybackProtectionApo);
  }
  return (unsigned int)PlaybackProtectionApo;
}
