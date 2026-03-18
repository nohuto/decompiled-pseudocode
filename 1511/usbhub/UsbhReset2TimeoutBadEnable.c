/*
 * XREFs of UsbhReset2TimeoutBadEnable @ 0x1C0051840
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhAssertBusLock @ 0x1C0042B30 (UsbhAssertBusLock.c)
 *     UsbhDisablePort @ 0x1C004332C (UsbhDisablePort.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

__int64 __fastcall UsbhReset2TimeoutBadEnable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+28h] [rbp-30h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v10 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x19u,
      (__int64)&WPP_cc37896b0a9d7b8193ac5507915e85d0_Traceguids,
      v10);
  }
  Log(a1, 1024, 1884447333, a2, 0LL);
  UsbhAssertBusLock(a1, v6, v7, v8);
  UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 80LL, 0LL, 0, -1, -1, usbfile_busfunc_c, 1230, 0);
  UsbhDisablePort(a1, a2);
  return UsbhReset2Timeout(a1, a2, a3);
}
