/*
 * XREFs of NtDebugActiveProcess @ 0x1800944F0
 * Callers:
 *     DbgUiDebugActiveProcess @ 0x1800BC1D0 (DbgUiDebugActiveProcess.c)
 * Callees:
 *     <none>
 */

__int64 NtDebugActiveProcess()
{
  __int64 result; // rax

  result = 191LL;
  __asm { syscall; Low latency system call }
  return result;
}
