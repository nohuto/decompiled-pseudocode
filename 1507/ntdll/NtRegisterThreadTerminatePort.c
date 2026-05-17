/*
 * XREFs of NtRegisterThreadTerminatePort @ 0x180094E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtRegisterThreadTerminatePort()
{
  __int64 result; // rax

  result = 339LL;
  __asm { syscall; Low latency system call }
  return result;
}
