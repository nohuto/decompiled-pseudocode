/*
 * XREFs of ZwStartProfile @ 0x1800952C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwStartProfile(HANDLE ProfileHandle)
{
  NTSTATUS result; // eax

  result = 412;
  __asm { syscall; Low latency system call }
  return result;
}
