/*
 * XREFs of ZwLockRegistryKey @ 0x1800948B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwLockRegistryKey()
{
  __int64 result; // rax

  result = 251LL;
  __asm { syscall; Low latency system call }
  return result;
}
