/*
 * XREFs of ZwWriteRequestData @ 0x14015ACD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWriteRequestData(
        HANDLE PortHandle,
        PPORT_MESSAGE Message,
        ULONG Index,
        PVOID Buffer,
        ULONG BufferLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
