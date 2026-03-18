/*
 * XREFs of UsbhAssertBusLock @ 0x1C0042914
 * Callers:
 *     UsbhCancelEnumeration @ 0x1C0027BB0 (UsbhCancelEnumeration.c)
 *     UsbhDropDevice @ 0x1C0050188 (UsbhDropDevice.c)
 *     UsbhHardErrorReset1BadEnable @ 0x1C0050610 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1Debounce @ 0x1C0050DB0 (UsbhReset1Debounce.c)
 *     UsbhReset1DebounceError @ 0x1C0050F10 (UsbhReset1DebounceError.c)
 *     UsbhReset1DropDevice @ 0x1C0050FD0 (UsbhReset1DropDevice.c)
 *     UsbhReset1DropDeviceTimeout @ 0x1C00510A0 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1C00511E0 (UsbhReset1Timeout.c)
 *     UsbhReset1TimeoutBadEnable @ 0x1C00513D0 (UsbhReset1TimeoutBadEnable.c)
 *     UsbhReset2CycleDevice @ 0x1C00514B0 (UsbhReset2CycleDevice.c)
 *     UsbhReset2DropDevice @ 0x1C0051510 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1C00515E0 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x1C0051720 (UsbhReset2Timeout.c)
 *     UsbhReset2TimeoutBadEnable @ 0x1C00518E0 (UsbhReset2TimeoutBadEnable.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

void __fastcall UsbhAssertBusLock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KSPIN_LOCK *v4; // rbx
  KIRQL v5; // al

  v4 = (KSPIN_LOCK *)(FdoExt(a1, a2, a3, a4) + 766);
  v5 = KeAcquireSpinLockRaiseToDpc(v4);
  KeReleaseSpinLock(v4, v5);
}
