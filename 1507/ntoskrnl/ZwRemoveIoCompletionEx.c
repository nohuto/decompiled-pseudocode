/*
 * XREFs of ZwRemoveIoCompletionEx @ 0x140181AB0
 * Callers:
 *     VfZwRemoveIoCompletionEx @ 0x140757B9C (VfZwRemoveIoCompletionEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRemoveIoCompletionEx(
        HANDLE IoCompletionHandle,
        PFILE_IO_COMPLETION_INFORMATION IoCompletionInformation,
        ULONG Count,
        PULONG NumEntriesRemoved,
        PLARGE_INTEGER Timeout,
        BOOLEAN Alertable)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionHandle);
}
