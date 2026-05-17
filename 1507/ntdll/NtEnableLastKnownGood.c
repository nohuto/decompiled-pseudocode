/*
 * XREFs of NtEnableLastKnownGood @ 0x1800945E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtEnableLastKnownGood()
{
  __int64 result; // rax

  result = 206LL;
  __asm { syscall; Low latency system call }
  return result;
}
