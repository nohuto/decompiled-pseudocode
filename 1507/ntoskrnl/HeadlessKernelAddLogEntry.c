/*
 * XREFs of HeadlessKernelAddLogEntry @ 0x1401539BC
 * Callers:
 *     PnpBootDeviceWait @ 0x14015DD04 (PnpBootDeviceWait.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407B7FBC (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x1407B91D4 (IopInitializeBuiltinDriver.c)
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 *     IoInitSystem @ 0x1407D0850 (IoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 HeadlessKernelAddLogEntry()
{
  __int64 result; // rax

  result = HeadlessGlobals;
  if ( HeadlessGlobals )
  {
    if ( *(_QWORD *)(HeadlessGlobals + 8) )
      return HdlspKernelAddLogEntry();
  }
  return result;
}
