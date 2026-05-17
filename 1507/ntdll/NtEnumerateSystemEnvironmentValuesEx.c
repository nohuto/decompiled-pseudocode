/*
 * XREFs of NtEnumerateSystemEnvironmentValuesEx @ 0x180094610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtEnumerateSystemEnvironmentValuesEx()
{
  __int64 result; // rax

  result = 209LL;
  __asm { syscall; Low latency system call }
  return result;
}
