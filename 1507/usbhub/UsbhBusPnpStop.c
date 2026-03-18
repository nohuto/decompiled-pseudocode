/*
 * XREFs of UsbhBusPnpStop @ 0x1C0042940
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDisableHardReset @ 0x1C00467DC (UsbhDisableHardReset.c)
 */

__int64 __fastcall UsbhBusPnpStop(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v4; // r9

  UsbhDisableHardReset();
  return UsbhDispatch_BusEvent(a1, a2, 3LL, v4);
}
