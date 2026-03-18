/*
 * XREFs of ZwCreateTransactionManager @ 0x140151D60
 * Callers:
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     VfZwCreateTransactionManager @ 0x1406D1FA8 (VfZwCreateTransactionManager.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateTransactionManager(
        PHANDLE TmHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LogFileName,
        ULONG CreateOptions,
        ULONG CommitStrength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TmHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
