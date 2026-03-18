/*
 * XREFs of UsbHubhInitTimeoutTimer @ 0x1C004AAD0
 * Callers:
 *     <none>
 * Callees:
 *     Usbh__TestPoint__Ulong @ 0x1C00058D0 (Usbh__TestPoint__Ulong.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C0022800 (UsbhQueueWorkItemWithRetry.c)
 *     Usbh_HubRootHubInitNotification @ 0x1C00276BC (Usbh_HubRootHubInitNotification.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbHubhInitTimeoutTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  _DWORD *v7; // rsi
  __int64 v8; // r9

  v4 = (unsigned int)a3;
  v7 = FdoExt(a2, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xBu,
      (__int64)&WPP_7ca54aefc42ddeaf2f05adb755207832_Traceguids);
  Log(a2, 2, 1667388495, a4, v4);
  Usbh__TestPoint__Ulong(a2, 9u, 0, v4);
  if ( (unsigned int)Usbh_HubRootHubInitNotification(a2, 0LL, 0LL, v8) == -1073741536 )
    UsbhQueueWorkItemWithRetry(a2, *((_QWORD *)v7 + 347), (__int64)UsbhInitCallbackWorker, 1LL, a4, 0, 0x49577473u);
  return 0LL;
}
