/*
 * XREFs of ZwOpenTransactionManager @ 0x140181370
 * Callers:
 *     VfZwOpenTransactionManager @ 0x140756B68 (VfZwOpenTransactionManager.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenTransactionManager(
        PHANDLE TmHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LogFileName,
        LPGUID TmIdentity,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TmHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
