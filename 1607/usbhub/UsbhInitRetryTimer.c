/*
 * XREFs of UsbhInitRetryTimer @ 0x1C004BCA0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhQueueWorkItemWithRetry @ 0x1C0023E60 (UsbhQueueWorkItemWithRetry.c)
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitRetryTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  FdoExt(a2, a2, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_f44c71c208e93d614b6f1b21108c6498_Traceguids);
  return UsbhQueueWorkItemWithRetry(a2, 0LL, (__int64)UsbhInitCallbackWorker, 1LL, a4, 0, 0x49577473u);
}
