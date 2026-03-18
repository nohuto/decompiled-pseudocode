/*
 * XREFs of ZwCreateTransactionManager @ 0x14015B400
 * Callers:
 *     CmpInitCmRM @ 0x14049EB58 (CmpInitCmRM.c)
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
