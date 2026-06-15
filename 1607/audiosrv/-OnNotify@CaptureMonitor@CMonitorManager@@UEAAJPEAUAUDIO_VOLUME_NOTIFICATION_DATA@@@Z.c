/*
 * XREFs of ?OnNotify@CaptureMonitor@CMonitorManager@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x18007D8B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_l @ 0x18007EFB4 (WPP_SF_l.c)
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x180080F04 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 */

__int64 __fastcall CMonitorManager::CaptureMonitor::OnNotify(
        CMonitor **this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2,
        __int64 a3)
{
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_l(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, a2->bMuted);
  }
  CMonitor::OnMuteStateChanged(this[8], a2->bMuted);
  return 0LL;
}
