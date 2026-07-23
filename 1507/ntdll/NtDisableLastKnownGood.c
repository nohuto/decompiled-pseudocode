/*
 * XREFs of NtDisableLastKnownGood @ 0x1800945B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS NtDisableLastKnownGood(void)
{
  NTSTATUS result; // eax

  result = 203;
  __asm { syscall; Low latency system call }
  return result;
}
