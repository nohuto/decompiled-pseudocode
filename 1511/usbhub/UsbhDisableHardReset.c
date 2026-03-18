/*
 * XREFs of UsbhDisableHardReset @ 0x1C004685C
 * Callers:
 *     UsbhBusPnpStop @ 0x1C0042B60 (UsbhBusPnpStop.c)
 *     UsbhAsyncStop @ 0x1C004ABBC (UsbhAsyncStop.c)
 *     UsbhFdoPnp_QueryStop @ 0x1C004B260 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004BC00 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 */

__int64 __fastcall UsbhDisableHardReset(__int64 a1)
{
  int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // r11

  Log(a1, 8, 1381192749, 0LL, 0LL);
  return UsbhDispatch_HardResetEvent(v3, v2, v1 + 2);
}
