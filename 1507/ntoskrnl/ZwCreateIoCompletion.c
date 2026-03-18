/*
 * XREFs of ZwCreateIoCompletion @ 0x1401803F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG NumberOfConcurrentThreads)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionHandle, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
