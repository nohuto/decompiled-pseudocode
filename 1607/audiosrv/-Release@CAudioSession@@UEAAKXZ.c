/*
 * XREFs of ?Release@CAudioSession@@UEAAKXZ @ 0x180012D70
 * Callers:
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x18000EFD0 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x18000F460 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18000FD20 (-OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z.c)
 *     ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180013280 (-RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z.c)
 *     ?DeleteInactiveTimer@CAudioSession@@AEAAJXZ @ 0x180013660 (-DeleteInactiveTimer@CAudioSession@@AEAAJXZ.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180013A60 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z @ 0x180013D40 (-RemoveStream@CAudioSession@@UEAAJPEAVCAudioStream@@_N1@Z.c)
 *     ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014130 (-StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014330 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180014540 (-AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z @ 0x180015D80 (-SetGroupingParam@CAudioSession@@UEAAJPEBU_GUID@@0@Z.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z @ 0x18001E9D0 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUIStreamGroupProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?OnInactiveTimerElapsed@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180029520 (-OnInactiveTimerElapsed@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?Release@CAudioSession@@W7EAAKXZ @ 0x180039170 (-Release@CAudioSession@@W7EAAKXZ.c)
 *     ?Release@CAudioSession@@WBA@EAAKXZ @ 0x180039180 (-Release@CAudioSession@@WBA@EAAKXZ.c)
 *     ?Release@CAudioSession@@WBI@EAAKXZ @ 0x180039190 (-Release@CAudioSession@@WBI@EAAKXZ.c)
 *     ?Release@CAudioSession@@WCA@EAAKXZ @ 0x1800391A0 (-Release@CAudioSession@@WCA@EAAKXZ.c)
 * Callees:
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x180014D10 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioSession::Release(CAudioSession *this)
{
  char *v1; // rdi
  unsigned __int32 v2; // ebx
  void (__fastcall *v4)(CAudioSession *__hidden); // rax
  CAudioSession *v5; // rcx

  v1 = (char *)this + 32;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v2 )
  {
    v4 = *(void (__fastcall **)(CAudioSession *__hidden))(*(_QWORD *)v1 + 32LL);
    v5 = (CAudioSession *)((char *)this + 32);
    if ( v4 == CAudioSession::FinalRelease )
      CAudioSession::FinalRelease(v5);
    else
      v4(v5);
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
