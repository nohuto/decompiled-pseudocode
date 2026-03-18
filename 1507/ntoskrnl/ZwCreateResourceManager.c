/*
 * XREFs of ZwCreateResourceManager @ 0x1401805F0
 * Callers:
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     VerifierZwCreateResourceManager @ 0x14074257C (VerifierZwCreateResourceManager.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateResourceManager(
        PHANDLE ResourceManagerHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE TmHandle,
        LPGUID ResourceManagerGuid,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG CreateOptions,
        PUNICODE_STRING Description)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle, *(_QWORD *)&DesiredAccess, TmHandle);
}
