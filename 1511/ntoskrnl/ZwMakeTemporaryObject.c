/*
 * XREFs of ZwMakeTemporaryObject @ 0x140152640
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14049B9C8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x1404C6394 (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x140523034 (IoCreateDriver.c)
 *     VerifierZwMakeTemporaryObject @ 0x1406C0D6C (VerifierZwMakeTemporaryObject.c)
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
