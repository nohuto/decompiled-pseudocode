/*
 * XREFs of ZwSetIoCompletion @ 0x140182090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetIoCompletion(
        HANDLE IoCompletionPortHandle,
        PVOID CompletionKey,
        PVOID CompletionContext,
        NTSTATUS CompletionStatus,
        ULONG CompletionInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionPortHandle);
}
