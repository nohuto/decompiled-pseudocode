/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x140003214
 * Callers:
 *     PnpBootDeviceWait @ 0x140133EA8 (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407510A0 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x14075210C (IopInitializeBuiltinDriver.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 *     IoInitSystem @ 0x140763E54 (IoInitSystem.c)
 * Callees:
 *     <none>
 */

PKSPIN_LOCK HeadlessKernelAddLogEntry()
{
  PKSPIN_LOCK result; // rax

  result = HeadlessGlobals;
  if ( HeadlessGlobals )
  {
    if ( HeadlessGlobals[1] )
      return (PKSPIN_LOCK)HdlspKernelAddLogEntry();
  }
  return result;
}
