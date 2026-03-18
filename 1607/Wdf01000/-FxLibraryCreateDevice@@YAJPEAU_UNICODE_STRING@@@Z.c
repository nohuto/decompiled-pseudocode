/*
 * XREFs of ?FxLibraryCreateDevice@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C003685C
 * Callers:
 *     DriverEntry @ 0x1C00364D0 (DriverEntry.c)
 * Callees:
 *     RtlUnicodeStringPrintf @ 0x1C00368DC (RtlUnicodeStringPrintf.c)
 */

NTSTATUS __fastcall FxLibraryCreateDevice(_UNICODE_STRING *DeviceName)
{
  unsigned int v2; // ebx
  NTSTATUS result; // eax

  v2 = 0;
  while ( 1 )
  {
    result = RtlUnicodeStringPrintf(DeviceName, L"%s%d", L"\\Device\\KMDF", v2++);
    if ( result < 0 )
      break;
    result = IoCreateDevice(
               FxLibraryGlobals.DriverObject,
               0,
               DeviceName,
               0x22u,
               0,
               0,
               &FxLibraryGlobals.LibraryDeviceObject);
    if ( result != -1073741771 )
    {
      if ( result >= 0 )
        FxLibraryGlobals.LibraryDeviceObject->Flags &= ~0x80u;
      return result;
    }
  }
  return result;
}
