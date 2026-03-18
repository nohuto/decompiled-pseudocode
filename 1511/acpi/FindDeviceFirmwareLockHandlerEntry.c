/*
 * XREFs of FindDeviceFirmwareLockHandlerEntry @ 0x1C0038068
 * Callers:
 *     AcquireDeviceFirmwareLock @ 0x1C0037BDC (AcquireDeviceFirmwareLock.c)
 *     AcpiUnregisterDeviceFirmwareLockHandler @ 0x1C0079BFC (AcpiUnregisterDeviceFirmwareLockHandler.c)
 * Callees:
 *     FindDeviceFirmwareLockHandlerEntryLocked @ 0x1C0023288 (FindDeviceFirmwareLockHandlerEntryLocked.c)
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
