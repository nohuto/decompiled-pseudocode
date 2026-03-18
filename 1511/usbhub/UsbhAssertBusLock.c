/*
 * XREFs of UsbhAssertBusLock @ 0x1C0042B30
 * Callers:
 *     UsbhCancelEnumeration @ 0x1C0026DB0 (UsbhCancelEnumeration.c)
 *     UsbhDropDevice @ 0x1C00500E8 (UsbhDropDevice.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0050570 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1Debounce @ 0x1C0050D10 (UsbhReset1Debounce.c)
 *     UsbhReset1DebounceError @ 0x1C0050E70 (UsbhReset1DebounceError.c)
 *     UsbhReset1DropDevice @ 0x1C0050F30 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C0051000 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1C0051140 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C0051330 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2CycleDevice @ 0x1C0051410 (UsbhReset2CycleDevice.c)
 *     UsbhReset2DropDevice @ 0x1C0051470 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C0051540 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x1C0051680 (UsbhReset2Timeout.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C0051840 (UsbhReset2TimeoutBadEnable.c)
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 */

void __fastcall UsbhAssertBusLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v4; // rbx
  KIRQL v5; // al

  v4 = (KSPIN_LOCK *)(FdoExt(a1, a2, a3, a4) + 766);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  KeReleaseSpinLock(v4, v5);
}
