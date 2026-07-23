/*
 * XREFs of NtEnableLastKnownGood @ 0x1800945E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS NtEnableLastKnownGood(void)
{
  NTSTATUS result; // eax

  result = 206;
  __asm { syscall; Low latency system call }
  return result;
}
