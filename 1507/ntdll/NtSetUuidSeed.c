/*
 * XREFs of NtSetUuidSeed @ 0x180095250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtSetUuidSeed()
{
  __int64 result; // rax

  result = 405LL;
  __asm { syscall; Low latency system call }
  return result;
}
