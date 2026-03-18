/*
 * XREFs of ZwCreateTransactionManager @ 0x140180710
 * Callers:
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     VfZwCreateTransactionManager @ 0x140755B70 (VfZwCreateTransactionManager.c)
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
