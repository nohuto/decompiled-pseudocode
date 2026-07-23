/*
 * XREFs of NtAlertThread @ 0x180093FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAlertThread(HANDLE ThreadHandle)
{
  NTSTATUS result; // eax

  result = 109;
  __asm { syscall; Low latency system call }
  return result;
}
