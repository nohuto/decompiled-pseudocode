/*
 * XREFs of ?FxLibraryCleanup@@YAXXZ @ 0x1C00644E0
 * Callers:
 *     DriverEntry @ 0x1C00364D0 (DriverEntry.c)
 *     DriverUnload @ 0x1C0064680 (DriverUnload.c)
 * Callees:
 *     <none>
 */

void FxLibraryCleanup(void)
{
  if ( FxLibraryGlobals.LibraryDeviceObject )
  {
    IoDeleteDevice(FxLibraryGlobals.LibraryDeviceObject);
    FxLibraryGlobals.LibraryDeviceObject = 0LL;
  }
}
