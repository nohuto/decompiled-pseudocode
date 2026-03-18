/*
 * XREFs of AcpiUnregisterDeviceFirmwareLockHandler @ 0x1C0079A9C
 * Callers:
 *     ACPIIoctlUnregisterDeviceFirmwareLockHandler @ 0x1C003DA60 (ACPIIoctlUnregisterDeviceFirmwareLockHandler.c)
 * Callees:
 *     DereferenceDeviceFirmwareLockHandlerEntry @ 0x1C0037284 (DereferenceDeviceFirmwareLockHandlerEntry.c)
 *     FindDeviceFirmwareLockHandlerEntry @ 0x1C0037478 (FindDeviceFirmwareLockHandlerEntry.c)
 */

__int64 __fastcall AcpiUnregisterDeviceFirmwareLockHandler(int a1, __int64 a2)
{
  __int64 DeviceFirmwareLockHandlerEntry; // rax
  unsigned int v3; // ebx

  DeviceFirmwareLockHandlerEntry = FindDeviceFirmwareLockHandlerEntry(a1, a2, 0LL);
  v3 = 0;
  if ( DeviceFirmwareLockHandlerEntry )
  {
    _InterlockedDecrement((volatile signed __int32 *)(DeviceFirmwareLockHandlerEntry + 64));
    DereferenceDeviceFirmwareLockHandlerEntry((char *)DeviceFirmwareLockHandlerEntry, 1);
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v3;
}
