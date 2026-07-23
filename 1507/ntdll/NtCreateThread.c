/*
 * XREFs of NtCreateThread @ 0x180093DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateThread(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PCONTEXT ThreadContext,
        PINITIAL_TEB InitialTeb,
        BOOLEAN CreateSuspended)
{
  NTSTATUS result; // eax

  result = 78;
  __asm { syscall; Low latency system call }
  return result;
}
