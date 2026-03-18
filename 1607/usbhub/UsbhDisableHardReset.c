/*
 * XREFs of UsbhDisableHardReset @ 0x1C0046C4C
 * Callers:
 *     UsbhBusPnpStop @ 0x1C0042EA0 (UsbhBusPnpStop.c)
 *     UsbhAsyncStop @ 0x1C004B25C (UsbhAsyncStop.c)
 *     UsbhFdoPnp_QueryStop @ 0x1C004B900 (UsbhFdoPnp_QueryStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C004C2A0 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 */

__int64 __fastcall UsbhDisableHardReset(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // r10
  __int64 v3; // r11

  Log(a1, 8, 1381192749, 0LL, 0LL);
  return UsbhDispatch_HardResetEvent(v3, v2, (unsigned int)(v1 + 2), v1);
}
