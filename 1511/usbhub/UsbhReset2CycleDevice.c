/*
 * XREFs of UsbhReset2CycleDevice @ 0x1C0051410
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C000A8B0 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhCancelResetTimeout @ 0x1C000FBE4 (UsbhCancelResetTimeout.c)
 *     UsbhAssertBusLock @ 0x1C0042B30 (UsbhAssertBusLock.c)
 */

__int64 __fastcall UsbhReset2CycleDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r9

  UsbhCancelResetTimeout(a1, a2, 1);
  UsbhAssertBusLock(a1, v6, v7, v8);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  return UsbhPortCycle(a1, a2, a3, v9);
}
