/*
 * XREFs of UsbhReset1DebounceError @ 0x1C0050F10
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0042914 (UsbhAssertBusLock.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhReset1DebounceError(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v8; // [rsp+28h] [rbp-30h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x11u,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      v8);
  }
  Log(a1, 1024, 1883393637, a2, 0LL);
  UsbhAssertBusLock(a1, v4, v5, v6);
  UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 55LL, 0LL, 0, -1, -1, usbfile_busfunc_c, 795, 0);
  return 1LL;
}
