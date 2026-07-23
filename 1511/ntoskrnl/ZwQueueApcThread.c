/*
 * XREFs of ZwQueueApcThread @ 0x140150EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueueApcThread(
        HANDLE ThreadHandle,
        PKNORMAL_ROUTINE ApcRoutine,
        PVOID NormalContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
