/*
 * XREFs of ZwMakeTemporaryObject @ 0x14015C250
 * Callers:
 *     IoDeleteSymbolicLink @ 0x140547860 (IoDeleteSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14054A1B4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoCreateDriver @ 0x1405518C4 (IoCreateDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
