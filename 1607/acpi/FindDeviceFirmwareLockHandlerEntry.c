/*
 * XREFs of FindDeviceFirmwareLockHandlerEntry @ 0x1C0048B28
 * Callers:
 *     AcquireDeviceFirmwareLock @ 0x1C004869C (AcquireDeviceFirmwareLock.c)
 *     AcpiUnregisterDeviceFirmwareLockHandler @ 0x1C009A98C (AcpiUnregisterDeviceFirmwareLockHandler.c)
 * Callees:
 *     FindDeviceFirmwareLockHandlerEntryLocked @ 0x1C002A2C8 (FindDeviceFirmwareLockHandlerEntryLocked.c)
 */

__int64 __fastcall FindDeviceFirmwareLockHandlerEntry(int a1, __int64 a2, __int64 *a3)
{
  __int64 DeviceFirmwareLockHandlerEntryLocked; // rbx
  KIRQL v7; // r10

  KeAcquireSpinLockRaiseToDpc(&AcpiDeviceFirmwareLockGlobalLock);
  DeviceFirmwareLockHandlerEntryLocked = FindDeviceFirmwareLockHandlerEntryLocked(a1, a2, a3);
  KeReleaseSpinLock(&AcpiDeviceFirmwareLockGlobalLock, v7);
  return DeviceFirmwareLockHandlerEntryLocked;
}
