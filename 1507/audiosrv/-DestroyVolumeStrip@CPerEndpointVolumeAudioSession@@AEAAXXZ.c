/*
 * XREFs of ?DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ @ 0x180077480
 * Callers:
 *     ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180077800 (-Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x180079F60 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?DeleteVolumeInternalNotification@CVolumeStrip@@QEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x180071C44 (-DeleteVolumeInternalNotification@CVolumeStrip@@QEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 *     WPP_SF_qq @ 0x18007C834 (WPP_SF_qq.c)
 */

void __fastcall CPerEndpointVolumeAudioSession::DestroyVolumeStrip(CPerEndpointVolumeAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  CVolumeStrip *v3; // rcx
  __int64 v4; // rsi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 792);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 792));
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_qq(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      76LL,
      &WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      this,
      *((_QWORD *)this + 104));
  }
  v3 = (CVolumeStrip *)*((_QWORD *)this + 104);
  if ( v3 )
  {
    CVolumeStrip::DeleteVolumeInternalNotification(v3, (struct IAudioEndpointVolumeCallback *)this + 98);
    v4 = *((_QWORD *)this + 104);
    if ( v4 )
    {
      *((_QWORD *)this + 104) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  LeaveCriticalSection(v1);
}
