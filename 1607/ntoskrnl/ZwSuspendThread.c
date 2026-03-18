/*
 * XREFs of ZwSuspendThread @ 0x14015D1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSuspendThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, PreviousSuspendCount, v2);
}
