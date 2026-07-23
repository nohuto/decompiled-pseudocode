/*
 * XREFs of ZwRecoverResourceManager @ 0x140153080
 * Callers:
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverResourceManager(HANDLE ResourceManagerHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
