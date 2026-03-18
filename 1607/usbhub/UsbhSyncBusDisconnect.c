/*
 * XREFs of UsbhSyncBusDisconnect @ 0x1C003F740
 * Callers:
 *     UsbhFdoD0Worker_Action @ 0x1C0002BA0 (UsbhFdoD0Worker_Action.c)
 *     UsbhHardReset_Action @ 0x1C0046CFC (UsbhHardReset_Action.c)
 *     Usbh_HRS_Queued @ 0x1C004735C (Usbh_HRS_Queued.c)
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x1C000CF00 (UsbhDispatch_BusEvent.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

__int64 __fastcall UsbhSyncBusDisconnect(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r9
  int v7; // eax
  unsigned int v8; // r10d

  FdoExt((__int64)a1, a2, a3, a4);
  Log((__int64)a1, 2048, 1111774014, 0LL, 0LL);
  v7 = UsbhDispatch_BusEvent(a1, a2, (unsigned int)(v6 + 11), v6);
  Log((__int64)a1, 2048, 1111774012, 0LL, v7);
  return v8;
}
