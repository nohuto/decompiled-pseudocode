/*
 * XREFs of ZwLockRegistryKey @ 0x1800948B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockRegistryKey(HANDLE KeyHandle)
{
  NTSTATUS result; // eax

  result = 251;
  __asm { syscall; Low latency system call }
  return result;
}
