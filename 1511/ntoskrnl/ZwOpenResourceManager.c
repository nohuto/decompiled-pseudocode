/*
 * XREFs of ZwOpenResourceManager @ 0x140152920
 * Callers:
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     VerifierZwOpenResourceManager @ 0x1406C0D8C (VerifierZwOpenResourceManager.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenResourceManager(
        PHANDLE ResourceManagerHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE TmHandle,
        LPGUID ResourceManagerGuid,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
