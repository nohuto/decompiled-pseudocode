/*
 * XREFs of ZwCreateMailslotFile @ 0x1401804B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateMailslotFile(
        PHANDLE MailSlotFileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG MaxMessageSize,
        PLARGE_INTEGER TimeOut)
{
  _disable();
  __readeflags();
  return KiServiceInternal(MailSlotFileHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
