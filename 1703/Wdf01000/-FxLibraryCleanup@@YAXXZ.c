/*
 * XREFs of ?FxLibraryCleanup@@YAXXZ @ 0x1C0067894
 * Callers:
 *     DriverEntry @ 0x1C0015790 (DriverEntry.c)
 *     DriverUnload @ 0x1C0067A40 (DriverUnload.c)
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
