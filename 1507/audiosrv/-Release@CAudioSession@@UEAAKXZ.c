/*
 * XREFs of ?Release@CAudioSession@@UEAAKXZ @ 0x18000E6A0
 * Callers:
 *     ?GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAEA_J@Z @ 0x18000D4F0 (-GetPolicyVolumeForStreamClass@CStreamClassPolicyManager@@UEAAJPEAUIAudioStreamInfo@@AEA_NAEAMAE.c)
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x18000EA40 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?DeleteInactiveTimer@CAudioSession@@AEAAJXZ @ 0x18000EDE0 (-DeleteInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z @ 0x18000F350 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000F570 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000F760 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000F940 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x1800109E0 (-SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z.c)
 *     ?NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180013890 (-NewState@CPerStreamVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180016B88 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180018A00 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800190D0 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800196B0 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ??_GCStreamStartedWorkItem@@MEAAPEAXI@Z @ 0x18001B0B0 (--_GCStreamStartedWorkItem@@MEAAPEAXI@Z.c)
 *     ??_ECStreamStoppedWorkItem@@MEAAPEAXI@Z @ 0x18002C530 (--_ECStreamStoppedWorkItem@@MEAAPEAXI@Z.c)
 *     ?OnInactiveTimerElapsed@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800320C0 (-OnInactiveTimerElapsed@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?Release@CAudioSession@@W7EAAKXZ @ 0x180044CA0 (-Release@CAudioSession@@W7EAAKXZ.c)
 *     ?Release@CAudioSession@@WBA@EAAKXZ @ 0x180044CB0 (-Release@CAudioSession@@WBA@EAAKXZ.c)
 *     ?Release@CAudioSession@@WBI@EAAKXZ @ 0x180044CC0 (-Release@CAudioSession@@WBI@EAAKXZ.c)
 *     ?Release@CAudioSession@@WCA@EAAKXZ @ 0x180044CD0 (-Release@CAudioSession@@WCA@EAAKXZ.c)
 * Callees:
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x18000FDB0 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioSession::Release(CAudioSession *this)
{
  char *v1; // rsi
  unsigned __int32 v2; // ebx
  void (__fastcall *v4)(CAudioSession *__hidden); // rdi

  v1 = (char *)this + 32;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v2 )
  {
    v4 = *(void (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v1 + 32LL);
    if ( v4 == CAudioSession::FinalRelease )
      CAudioSession::FinalRelease((CAudioSession *)((char *)this + 32));
    else
      v4((CAudioSession *)((char *)this + 32));
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
