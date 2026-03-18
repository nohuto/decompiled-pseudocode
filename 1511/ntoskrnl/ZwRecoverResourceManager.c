/*
 * XREFs of ZwRecoverResourceManager @ 0x140153080
 * Callers:
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverResourceManager(HANDLE ResourceManagerHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle, v1, v2);
}
