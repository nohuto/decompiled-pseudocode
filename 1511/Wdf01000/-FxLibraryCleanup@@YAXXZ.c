/*
 * XREFs of ?FxLibraryCleanup@@YAXXZ @ 0x1C005755C
 * Callers:
 *     DriverEntry @ 0x1C0030EC0 (DriverEntry.c)
 *     DriverUnload @ 0x1C00576F0 (DriverUnload.c)
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
