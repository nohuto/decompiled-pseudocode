/*
 * XREFs of ZwRecoverResourceManager @ 0x180094E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRecoverResourceManager(HANDLE ResourceManagerHandle)
{
  NTSTATUS result; // eax

  result = 336;
  __asm { syscall; Low latency system call }
  return result;
}
