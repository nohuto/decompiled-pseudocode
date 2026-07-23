/*
 * XREFs of ZwFlushInstructionCache @ 0x140180B10
 * Callers:
 *     DbgkpSendErrorMessage @ 0x140408B68 (DbgkpSendErrorMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140409B74 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendApiMessage @ 0x140669324 (DbgkpSendApiMessage.c)
 *     VfZwFlushInstructionCache @ 0x140756004 (VfZwFlushInstructionCache.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushInstructionCache(HANDLE ProcessHandle, PVOID BaseAddress, ULONG NumberOfBytesToFlush)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
