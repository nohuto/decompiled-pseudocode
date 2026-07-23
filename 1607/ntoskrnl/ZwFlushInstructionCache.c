/*
 * XREFs of ZwFlushInstructionCache @ 0x14015BD70
 * Callers:
 *     DbgkpSendApiMessage @ 0x14061A3C0 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x14061A4BC (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x14061A5D8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushInstructionCache(HANDLE ProcessHandle, PVOID BaseAddress, ULONG NumberOfBytesToFlush)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
