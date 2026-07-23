/*
 * XREFs of NtDebugContinue @ 0x180094500
 * Callers:
 *     DbgUiContinue @ 0x1800BBEF0 (DbgUiContinue.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDebugContinue(HANDLE DebugObjectHandle, PCLIENT_ID ClientId, NTSTATUS ContinueStatus)
{
  NTSTATUS result; // eax

  result = 192;
  __asm { syscall; Low latency system call }
  return result;
}
