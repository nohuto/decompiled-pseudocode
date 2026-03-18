/*
 * XREFs of PostWinlogonMessage @ 0x1C0080870
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C000B3FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     DestroyProcessInfo @ 0x1C00448B4 (DestroyProcessInfo.c)
 *     xxxDwmControl @ 0x1C0080800 (xxxDwmControl.c)
 *     PowerOffMonitor @ 0x1C0084F80 (PowerOffMonitor.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A9568 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C00A9D78 (VideoPortCalloutThread.c)
 * Callees:
 *     IsSetTimerCoalescingToleranceSupported_0 @ 0x1C0001C50 (IsSetTimerCoalescingToleranceSupported_0.c)
 *     SetTimerCoalescingTolerance_0 @ 0x1C0001C58 (SetTimerCoalescingTolerance_0.c)
 *     WmsgpPostMessage @ 0x1C0128404 (WmsgpPostMessage.c)
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
    dword_1C01030D4 = glinp;
    if ( (int)IsSetTimerCoalescingToleranceSupported_0() >= 0 )
      SetTimerCoalescingTolerance_0();
  }
  return (unsigned int)v3;
}
