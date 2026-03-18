/*
 * XREFs of NtQueueApcThread @ 0x1404D7CF4
 * Callers:
 *     <none>
 * Callees:
 *     NtQueueApcThreadEx @ 0x1404D7D1C (NtQueueApcThreadEx.c)
 */

NTSTATUS __stdcall NtQueueApcThread(
        HANDLE ThreadHandle,
        PKNORMAL_ROUTINE ApcRoutine,
        PVOID NormalContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  return NtQueueApcThreadEx(ThreadHandle, 0LL, ApcRoutine, NormalContext, SystemArgument1, SystemArgument2);
}
