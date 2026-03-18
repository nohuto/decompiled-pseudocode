/*
 * XREFs of UsbhPortRecycle @ 0x1C00509E0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A8B0 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhSignalResumeEvent @ 0x1C001F7BC (UsbhSignalResumeEvent.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0041718 (UsbhQueueSoftConnectChange.c)
 */

__int64 __fastcall UsbhPortRecycle(__int64 a1, __int64 a2, __int64 a3)
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
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      v7);
  }
  Log(a1, 1024, 1884444995, a2, a3);
  UsbhSignalResumeEvent(a1, a2);
  UsbhQueueSoftConnectChange(a1, *(_WORD *)(a2 + 4), *(_QWORD *)(a2 + 376), 1);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  return 0LL;
}
