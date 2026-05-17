/*
 * XREFs of NtSecureConnectPort @ 0x180094FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtSecureConnectPort()
{
  __int64 result; // rax

  result = 362LL;
  __asm { syscall; Low latency system call }
  return result;
}
