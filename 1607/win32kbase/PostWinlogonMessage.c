/*
 * XREFs of PostWinlogonMessage @ 0x1C0071B40
 * Callers:
 *     DestroyProcessInfo @ 0x1C0012B48 (DestroyProcessInfo.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006FAAC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     xxxDwmControl @ 0x1C0071AE0 (xxxDwmControl.c)
 *     PowerOffMonitor @ 0x1C0086340 (PowerOffMonitor.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B290C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C00B30B4 (VideoPortCalloutThread.c)
 * Callees:
 *     IsSetTimerCoalescingToleranceSupported_0 @ 0x1C0001C20 (IsSetTimerCoalescingToleranceSupported_0.c)
 *     SetTimerCoalescingTolerance_0 @ 0x1C0001C28 (SetTimerCoalescingTolerance_0.c)
 *     WmsgpPostMessage @ 0x1C0142404 (WmsgpPostMessage.c)
 */

__int64 __fastcall PostWinlogonMessage(__int64 a1, unsigned int a2)
{
  int v2; // ebx
  int v3; // edi

  v2 = a1;
  if ( !gWinLogonRpcHandle )
    return 0LL;
  v3 = WmsgpPostMessage(a1, (unsigned int)a1, a2);
  if ( v3 >= 0 && v2 == 1027 )
  {
    qword_1C011A4C8 = glinp;
    if ( (int)IsSetTimerCoalescingToleranceSupported_0() >= 0 )
      SetTimerCoalescingTolerance_0();
  }
  return (unsigned int)v3;
}
