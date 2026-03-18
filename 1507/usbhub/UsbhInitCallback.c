/*
 * XREFs of UsbhInitCallback @ 0x1C0028570
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C00230C0 (UsbhQueueWorkItemWithRetry.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  _DWORD *v6; // rsi

  v4 = *(_QWORD *)(a1 + 8);
  v6 = FdoExt(v4, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_0699480349a52c2338640249ccf2c1c3_Traceguids);
  Log(v4, 2, 1766015537, v4, 0LL);
  return UsbhQueueWorkItemWithRetry(v4, *((_QWORD *)v6 + 347), (__int64)UsbhInitCallbackWorker, 1LL, a1, 0, 0x49577473u);
}
