/*
 * XREFs of ?DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ @ 0x1800720E4
 * Callers:
 *     ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180072480 (-Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800753A0 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?DeleteVolumeInternalNotification@CVolumeStrip@@QEAAJPEAUIAudioEndpointVolumeCallback@@@Z @ 0x180070334 (-DeleteVolumeInternalNotification@CVolumeStrip@@QEAAJPEAUIAudioEndpointVolumeCallback@@@Z.c)
 *     WPP_SF_qq @ 0x180077B24 (WPP_SF_qq.c)
 */

void __fastcall CPerEndpointVolumeAudioSession::DestroyVolumeStrip(CPerEndpointVolumeAudioSession *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  CVolumeStrip *v3; // rcx
  __int64 v4; // rsi

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 944);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 944));
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      76LL,
      &WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      this,
      *((_QWORD *)this + 123));
  }
  v3 = (CVolumeStrip *)*((_QWORD *)this + 123);
  if ( v3 )
  {
    CVolumeStrip::DeleteVolumeInternalNotification(v3, (struct IAudioEndpointVolumeCallback *)this + 117);
    v4 = *((_QWORD *)this + 123);
    if ( v4 )
    {
      *((_QWORD *)this + 123) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  LeaveCriticalSection(v1);
}
