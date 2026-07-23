/*
 * XREFs of NtSetContextThread @ 0x180094FF0
 * Callers:
 *     RtlRemoteCall @ 0x1800E2420 (RtlRemoteCall.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetContextThread(HANDLE ThreadHandle, PCONTEXT ThreadContext)
{
  NTSTATUS result; // eax

  result = 367;
  __asm { syscall; Low latency system call }
  return result;
}
