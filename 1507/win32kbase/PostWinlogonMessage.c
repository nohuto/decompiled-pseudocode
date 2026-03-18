/*
 * XREFs of PostWinlogonMessage @ 0x1C0019A20
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0009738 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     DestroyProcessInfo @ 0x1C0050D24 (DestroyProcessInfo.c)
 *     PowerOffMonitor @ 0x1C006A170 (PowerOffMonitor.c)
 *     xxxDwmControl @ 0x1C00802A0 (xxxDwmControl.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z @ 0x1C00A4B70 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C00A53F4 (VideoPortCalloutThread.c)
 * Callees:
 *     IsSetTimerCoalescingToleranceSupported_0 @ 0x1C0001C30 (IsSetTimerCoalescingToleranceSupported_0.c)
 *     SetTimerCoalescingTolerance_0 @ 0x1C0001C38 (SetTimerCoalescingTolerance_0.c)
 *     WmsgpPostMessage @ 0x1C0125074 (WmsgpPostMessage.c)
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
    qword_1C00FFCF8 = glinp;
    if ( (int)IsSetTimerCoalescingToleranceSupported_0() >= 0 )
      SetTimerCoalescingTolerance_0();
  }
  return (unsigned int)v3;
}
