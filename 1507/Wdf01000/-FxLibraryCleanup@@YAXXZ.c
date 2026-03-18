/*
 * XREFs of ?FxLibraryCleanup@@YAXXZ @ 0x1C005D4A4
 * Callers:
 *     DriverEntry @ 0x1C002BF00 (DriverEntry.c)
 *     DriverUnload @ 0x1C005D640 (DriverUnload.c)
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
