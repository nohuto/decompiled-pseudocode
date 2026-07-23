/*
 * XREFs of ZwRecoverEnlistment @ 0x180094DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  NTSTATUS result; // eax

  result = 335;
  __asm { syscall; Low latency system call }
  return result;
}
