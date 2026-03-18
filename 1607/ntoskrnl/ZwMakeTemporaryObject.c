/*
 * XREFs of ZwMakeTemporaryObject @ 0x14015BCE0
 * Callers:
 *     IoDeleteSymbolicLink @ 0x140547320 (IoDeleteSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140549C74 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoCreateDriver @ 0x140551384 (IoCreateDriver.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Handle, v1, v2);
}
