/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x14010B72C
 * Callers:
 *     PnpBootDeviceWait @ 0x14013C3F0 (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     IoInitSystem @ 0x1407936BC (IoInitSystem.c)
 *     PipInitializeCoreDriversByGroup @ 0x14079AB28 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x14079BB9C (IopInitializeBuiltinDriver.c)
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
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
