/*
 * XREFs of ZwSetIoCompletionEx @ 0x14015D3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetIoCompletionEx(
        HANDLE IoCompletionHandle,
        HANDLE IoCompletionPacketHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionHandle);
}
