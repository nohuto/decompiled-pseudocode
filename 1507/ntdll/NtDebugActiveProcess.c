/*
 * XREFs of NtDebugActiveProcess @ 0x1800944F0
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1800BC1D0 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDebugActiveProcess(HANDLE ProcessHandle, HANDLE DebugObjectHandle)
{
  NTSTATUS result; // eax

  result = 191;
  __asm { syscall; Low latency system call }
  return result;
}
