/*
 * XREFs of ZwOpenResourceManager @ 0x140181290
 * Callers:
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     VerifierZwOpenResourceManager @ 0x1407425CC (VerifierZwOpenResourceManager.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenResourceManager(
        PHANDLE ResourceManagerHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE TmHandle,
        LPGUID ResourceManagerGuid,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle, *(_QWORD *)&DesiredAccess, TmHandle);
}
