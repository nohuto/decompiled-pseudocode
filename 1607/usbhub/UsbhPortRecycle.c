/*
 * XREFs of UsbhPortRecycle @ 0x1C0051080
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C000C21C (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     UsbhSignalResumeEvent @ 0x1C00256AC (UsbhSignalResumeEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041A50 (UsbhQueueSoftConnectChange.c)
 */

__int64 __fastcall UsbhPortRecycle(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  int v7; // [rsp+28h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x24u,
      (__int64)&WPP_d88ed72d10863ed7c1a47d127bebfa74_Traceguids,
      v7);
  }
  Log((__int64)a1, 1024, 1884444995, a2, a3);
  UsbhSignalResumeEvent((__int64)a1, a2);
  UsbhQueueSoftConnectChange(a1, *(_WORD *)(a2 + 4), *(_QWORD *)(a2 + 376), 1);
  UsbhReleaseEnumBusLockEx((__int64)a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  return 0LL;
}
