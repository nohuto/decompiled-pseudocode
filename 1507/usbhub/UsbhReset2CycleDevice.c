/*
 * XREFs of UsbhReset2CycleDevice @ 0x1C00514B0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C000B82C (UsbhReleaseEnumBusLockEx.c)
 *     UsbhCancelResetTimeout @ 0x1C00185C8 (UsbhCancelResetTimeout.c)
 *     UsbhAssertBusLock @ 0x1C0042914 (UsbhAssertBusLock.c)
 */

__int64 __fastcall UsbhReset2CycleDevice(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r9

  UsbhCancelResetTimeout((__int64)a1, a2, 1);
  UsbhAssertBusLock((__int64)a1, v6, v7, v8);
  UsbhReleaseEnumBusLockEx((__int64)a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  return UsbhPortCycle(a1, a2, a3, v9);
}
