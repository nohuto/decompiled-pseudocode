/*
 * XREFs of ZwQueryIoCompletion @ 0x14015C9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryIoCompletion(
        HANDLE IoCompletionHandle,
        IO_COMPLETION_INFORMATION_CLASS IoCompletionInformationClass,
        PVOID IoCompletionInformation,
        ULONG IoCompletionInformationLength,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionHandle);
}
