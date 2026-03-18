/*
 * XREFs of ZwFlushInstructionCache @ 0x140152160
 * Callers:
 *     DbgkpSendErrorMessage @ 0x1404A403C (DbgkpSendErrorMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x1404AAA54 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendApiMessage @ 0x1405F071C (DbgkpSendApiMessage.c)
 *     VfZwFlushInstructionCache @ 0x1406D243C (VfZwFlushInstructionCache.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwFlushInstructionCache(HANDLE ProcessHandle, PVOID BaseAddress, ULONG NumberOfBytesToFlush)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress, *(_QWORD *)&NumberOfBytesToFlush);
}
