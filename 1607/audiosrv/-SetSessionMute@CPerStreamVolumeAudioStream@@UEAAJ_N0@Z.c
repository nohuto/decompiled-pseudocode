/*
 * XREFs of ?SetSessionMute@CPerStreamVolumeAudioStream@@UEAAJ_N0@Z @ 0x1800164C0
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x180008CA0 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIPEAM_J@Z @ 0x180013044 (-SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NPEAUSessionPolicyGains@@1MIP.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::SetSessionMute(CPerStreamVolumeAudioStream *this, char a2, char a3)
{
  unsigned int v3; // ebx
  int v5; // eax

  v3 = 0;
  *((_BYTE *)this + 512) = a2;
  if ( a3 )
  {
    v5 = (*(__int64 (__fastcall **)(CPerStreamVolumeAudioStream *))(*(_QWORD *)this + 128LL))(this);
    v3 = v5;
    if ( v5 < 0 )
      AudSrvTraceLoggingErrorHelper("CPerStreamVolumeAudioStream::SetSessionMute", 0x9B1u, v5);
  }
  return v3;
}
