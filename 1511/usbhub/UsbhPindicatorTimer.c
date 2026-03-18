/*
 * XREFs of UsbhPindicatorTimer @ 0x1C003DA10
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C0024960 (UsbhQueueWorkItemEx.c)
 */

_BOOL8 __fastcall UsbhPindicatorTimer(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  return (UsbhQueueWorkItemEx(a2, 1LL, (__int64)UsbhPindicatorWorker, a4, a3, 0x646E6950u, 0LL) & 0xC0000000) == -1073741824;
}
