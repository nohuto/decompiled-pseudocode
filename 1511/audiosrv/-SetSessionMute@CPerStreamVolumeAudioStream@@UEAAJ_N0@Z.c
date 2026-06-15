/*
 * XREFs of ?SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z @ 0x18001CCC0
 * Callers:
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x180025AA8 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180035A40 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::SetSessionMute(CPerStreamVolumeAudioStream *this, char a2, char a3)
{
  int v3; // ebx

  v3 = 0;
  *((_BYTE *)this + 336) = a2;
  if ( a3 )
  {
    v3 = (*(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *))(*(_QWORD *)this + 128LL))(this);
    if ( v3 < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        84LL,
        &WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
        (unsigned int)v3);
    }
  }
  return (unsigned int)v3;
}
