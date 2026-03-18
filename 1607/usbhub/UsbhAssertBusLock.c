/*
 * XREFs of UsbhAssertBusLock @ 0x1C0042E68
 * Callers:
 *     UsbhCancelEnumeration @ 0x1C00276A4 (UsbhCancelEnumeration.c)
 *     UsbhDropDevice @ 0x1C005077C (UsbhDropDevice.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0050C10 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1Debounce @ 0x1C00513B0 (UsbhReset1Debounce.c)
 *     UsbhReset1DebounceError @ 0x1C0051510 (UsbhReset1DebounceError.c)
 *     UsbhReset1DropDevice @ 0x1C00515D0 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C00516A0 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1C00517E0 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C00519D0 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2CycleDevice @ 0x1C0051AB0 (UsbhReset2CycleDevice.c)
 *     UsbhReset2DropDevice @ 0x1C0051B10 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C0051BE0 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x1C0051D20 (UsbhReset2Timeout.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C0051EE0 (UsbhReset2TimeoutBadEnable.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

void __fastcall UsbhAssertBusLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v4; // rbx
  KIRQL v5; // al

  v4 = (KSPIN_LOCK *)(FdoExt(a1, a2, a3, a4) + 766);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  KeReleaseSpinLock(v4, v5);
}
