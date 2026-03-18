/*
 * XREFs of UsbhBusAdd @ 0x1C001CEB0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x1C0019640 (UsbhDispatch_BusEvent.c)
 */

__int64 __fastcall UsbhBusAdd(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  UsbhDispatch_BusEvent(a1, a2, 1LL, a4);
  return 0LL;
}
