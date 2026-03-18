/*
 * XREFs of UsbhBusAdd @ 0x1C00216F0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x1C0021780 (UsbhDispatch_BusEvent.c)
 */

__int64 __fastcall UsbhBusAdd(__int64 a1, __int64 a2)
{
  UsbhDispatch_BusEvent(a1, a2, 1LL);
  return 0LL;
}
