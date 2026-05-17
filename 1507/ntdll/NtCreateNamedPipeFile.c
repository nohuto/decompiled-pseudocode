/*
 * XREFs of NtCreateNamedPipeFile @ 0x180094380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCreateNamedPipeFile()
{
  __int64 result; // rax

  result = 168LL;
  __asm { syscall; Low latency system call }
  return result;
}
