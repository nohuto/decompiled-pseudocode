/*
 * XREFs of ZwRecoverResourceManager @ 0x14015CCD0
 * Callers:
 *     CmpInitCmRM @ 0x140516F64 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverResourceManager(HANDLE ResourceManagerHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
