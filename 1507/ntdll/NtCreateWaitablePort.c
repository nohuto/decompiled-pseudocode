/*
 * XREFs of NtCreateWaitablePort @ 0x1800944C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCreateWaitablePort()
{
  __int64 result; // rax

  result = 188LL;
  __asm { syscall; Low latency system call }
  return result;
}
