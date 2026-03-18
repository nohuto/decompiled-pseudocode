/*
 * XREFs of ZwMakeTemporaryObject @ 0x140180FB0
 * Callers:
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14052E744 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoDeleteSymbolicLink @ 0x14055CE0C (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x1405900A4 (IoCreateDriver.c)
 *     VerifierZwMakeTemporaryObject @ 0x1407425AC (VerifierZwMakeTemporaryObject.c)
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
